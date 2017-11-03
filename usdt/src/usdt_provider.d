typedef struct { int dummy; } clockinfo_t;

provider usdt {
        probe clock__tick(clockinfo_t *p) : (clockinfo_t *p);
};
