// from server: 93% by atomic.potato
extern "C" const void *vtable_0;
extern "C" const void *vtable_4;
extern "C" const void *vtable_10;
extern "C" const void *vtable_14;
extern "C" void __cdecl Next();

struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int value_f;
    int g;

    void f();
};

void S::f()
{
    a = (int)vtable_0;
    b = (int)vtable_4;
    e = (int)vtable_10;
    value_f = (int)vtable_14;
    Next();
}