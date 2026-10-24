// from server: 96% by atomic.potato
extern "C" void sub_409420(void *);
extern "C" void *__vt__S;  // VTable symbol

struct S
{
    void *vtable;
    char padding[36];
    unsigned int value28;
    unsigned int value2c;
    S(void *);
};

S::S(void *source)
{
    sub_409420(source);
    vtable = __vt__S;
    value28 = ((S *)source)->value28;
    value2c = ((S *)source)->value2c;
}