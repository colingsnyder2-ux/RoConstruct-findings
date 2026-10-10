// from server: 83% by atomic.potato
extern "C" void Function6E0550(void *);
extern "C" void __cdecl Function80A058(void *);

struct S
{
    void f(void *value);
};

void S::f(void *value)
{
    void *old = *(void **)this;
    *(void **)this = value;
    if (old)
    {
        Function6E0550(old);
        Function80A058(old);
    }
}
