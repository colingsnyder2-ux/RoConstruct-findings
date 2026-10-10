// from server: 37% by atomic.potato
struct Mesh
{
    Mesh* f();
};

extern "C" void __stdcall sub_0054d390(Mesh*, int, int);

Mesh* Mesh::f()
{
    sub_0054d390(this, 0, 0);
    return this;
}
