// from server: 79% by atomic.potato
struct EnumDesc
{
    void f(void *);
};

extern "C" void *sub_4672d0(void *);
extern "C" void sub_76a190(void *, void *);

void EnumDesc::f(void *arg)
{
    void *p;
    int value;

    p = sub_4672d0((char *)arg + 4);
    value = *(int *)p;
    sub_76a190(this, &value);
}
