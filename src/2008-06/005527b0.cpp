// from server: 40% by atomic.potato
struct S
{
    void f();
};

extern "C" void __stdcall RenderScene(S*, int);

void S::f()
{
    RenderScene(this, 0);
}
