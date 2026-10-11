// from server: 50% by atomic.potato
extern "C" void DestroyIndexData(void *);
extern "C" void ReleaseMesh(void *);

struct Mesh
{
    Mesh *f(unsigned int);
};

Mesh *Mesh::f(unsigned int flags)
{
    DestroyIndexData(this);
    if (flags & 1)
        ReleaseMesh(this);
    return this;
}
