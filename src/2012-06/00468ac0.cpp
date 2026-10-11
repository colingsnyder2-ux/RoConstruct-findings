// from server: 79% by atomic.potato
struct EnumDesc
{
    void *value;
};

struct S
{
    void f(void *);
};

extern "C" void *sub_4671b0(void *);
extern "C" void sub_76a190(S *, void *);

void S::f(void *arg)
{
    void *value;
    EnumDesc *p;

    p = (EnumDesc *)sub_4671b0((char *)arg + 4);
    value = p->value;
    sub_76a190(this, &value);
}
