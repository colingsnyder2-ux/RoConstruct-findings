// from server: 83% by atomic.potato
extern "C" void sub_830cd0(void *);
extern "C" void __cdecl sub_982114(void *);

struct S {
    void *value;
    void f(void *);
};

void S::f(void *v)
{
    void *old = value;
    value = v;
    if (old) {
        sub_830cd0(old);
        sub_982114(old);
    }
}
