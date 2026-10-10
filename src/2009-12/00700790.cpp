// from server: 93% by atomic.potato
extern "C" void __declspec(noreturn) __cdecl Finalize();

struct S
{
    int a;
    int b;
    int c;
    int d;

    void f();
};

void S::f()
{
    a = 0x9ddd64;
    b = 0x9ddd58;
    c = 0x9ddd4c;
    d = 0x9ddd44;
    Finalize();
}
