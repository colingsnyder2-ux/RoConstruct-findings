// from server: 33% by atomic.potato
struct Mesh
{
    void Reset(int, int);
    Mesh* f();
};

Mesh* Mesh::f()
{
    Reset(0, 0);
    return this;
}
