// from server: 93% by atomic.potato
extern "C" void __cdecl Function007A7C46(int);

struct S {
    int value;
    int unused1;
    int unused2;
    int count;
    void f();
};

void S::f()
{
    if (count > 0)
        Function007A7C46(value);
}
