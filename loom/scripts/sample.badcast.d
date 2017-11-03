struct Dummy {
	int int_val;
	double double_val;
};

sdt:::dt-probe
{
	this->ptr = (struct Dummy*)copyin(arg5, sizeof(struct Dummy));
	this->badptr = (struct Dummy*)copyin(arg2, sizeof(struct Dummy));

	
	printf("Int is %d \n", (int)arg2);
	printf("Double is %f \n", (double)arg3);
	printf("Float is %f \n", (float)arg4);
	printf("The ptr values are: %d, %f \n", this->ptr->int_val, this->ptr->double_val);
	
	printf("Struct field 1 without struct cast: %d\n", (int)arg5);
	printf("Struct field 1 as a float: %f\n", (float)arg5);
	printf("The float as an int: %d\n", (int)arg4);

	printf("The badptr values are: %d, %f \n", this->badptr->int_val, this->badptr->double_val);
}
