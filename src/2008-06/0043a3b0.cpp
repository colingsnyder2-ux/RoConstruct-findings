// from server: 14% by colin
struct Buffer
{
    void *first;
    void *last;
    void *limit;
    Buffer();
    ~Buffer();
    void initialize(int);
};

struct Temporary
{
    Buffer buffer;
    Temporary(int);
};

struct Item
{
    char pad0[0x10];
    unsigned int field10;
    unsigned int field14;
    char pad18[0x108];
    void setHidden(int);
    bool convertToValue(void *value) const;
    bool convertToString(void *value) const;
};

struct EnumDescriptor
{
    char pad0[0x120];
    void setHidden(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Outer
{
    char pad0[0x120];
    void method(void *arg);
};

void Outer::method(void *arg)
{
    unsigned int *p = (unsigned int *)arg;
    unsigned int v0 = p[0];
    unsigned int v1 = p[6];

    unsigned int *self = (unsigned int *)this;
    unsigned int a = self[4];
    unsigned int b = self[5];
    unsigned int c = self[1];

    unsigned char flag = 0;

    if (a > b)
        _invalid_parameter_noinfo();

    unsigned int d = self[4];
    unsigned int e = self[5];
    unsigned int f = self[1];

    if (d > e)
        _invalid_parameter_noinfo();

    unsigned int g = self[1];

    if (c != 0 && c != g)
        _invalid_parameter_noinfo();

    if (a == e)
    {
        bool r = (flag == 0);
        ((EnumDescriptor *)((char *)this - 0x120))->setHidden(r ? 1 : 0);
        return;
    }

    if (c == 0)
    {
        _invalid_parameter_noinfo();
        unsigned int *q = 0;
        if (a < q[4])
            _invalid_parameter_noinfo();

        unsigned int h = *(unsigned int *)a;
        Temporary tmp(0);
        (void)tmp;
        (void)h;
        (void)v0;
        (void)v1;
    }
}
