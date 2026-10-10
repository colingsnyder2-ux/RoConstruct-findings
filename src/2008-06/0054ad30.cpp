// from server: 40% by atomic.potato
extern "C" void __stdcall Resize(void*, int);

struct Mesh
{
    void f();
};

void Mesh::f()
{
    Resize(this, 0);
}
