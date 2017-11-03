struct Dummy {
	int int_val;
	double double_val;
};

sdt:::dt-probe
{
	this->ptr = (struct Dummy*)copyin(arg5, sizeof(struct Dummy));
	
	printf("Int is %d \n", (int)arg2);
	printf("Double is %f \n", (double)arg3);
	printf("Float is %f \n", (float)arg4);
	printf("The ptr values are: %d, %f \n", this->ptr->int_val, this->ptr->double_val);

}
