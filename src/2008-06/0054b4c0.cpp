// from server: 74% by king_originala
#pragma optimize("", off)

struct WeakReferenceCountedPointer {
    ~WeakReferenceCountedPointer();
};

struct Mesh : WeakReferenceCountedPointer {
    void release();
    ~Mesh();
};

Mesh::~Mesh()
{
    release();
}
