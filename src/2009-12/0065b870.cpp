// from server: 93% by atomic.potato
struct S
{
    void f();
    int a;
    int b;
    int c;
    int d;
    int e;
    int g;
    int h;
};

void __cdecl Target();

void S::f()
{
    a = 0x9cda94;
    b = 0x9cda8c;
    g = 0x9cda80;
    h = 0x9cda78;
    Target();
}
