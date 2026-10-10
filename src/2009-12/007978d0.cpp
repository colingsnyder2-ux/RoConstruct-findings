// from server: 95% by atomic.potato
extern "C" void __stdcall std_exception_ctor(void *);

struct S
{
    int *vtable;
    int unknown04;
    int unknown08;
    int value0c;
    int value10;
    unsigned char value14;

    S(int *);
};

S::S(int *source)
{
    std_exception_ctor(this);
    vtable = (int *)0x9ea990;
    value0c = source[3];
    value10 = source[4];
    value14 = ((unsigned char *)source)[20];
    ((unsigned char *)source)[20] = 1;
}
