// from server: 64% by atomic.potato
struct S {
    int pad;
    void f();
};

extern "C" void g();

void S::f()
{
    pad = 0xA1E9E8;
    g();
}
