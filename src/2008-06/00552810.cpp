// from server: 40% by atomic.potato
extern "C" void __stdcall CNameItem_resize(void *, int);

struct S
{
    void f();
};

void S::f()
{
    CNameItem_resize(this, 0);
}
