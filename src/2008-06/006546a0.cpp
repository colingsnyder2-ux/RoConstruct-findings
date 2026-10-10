// from server: 51% by atomic.potato
extern "C" void basic_string_ctor(void *);
extern "C" void TypedPropertyDescriptor(void *, void *);

struct S
{
    int f(void *, void *);
};

int S::f(void *a, void *b)
{
    basic_string_ctor((char *)((char *)this + 0x34));
    TypedPropertyDescriptor((char *)this + 0x18, b);
    return 0;
}
