// from server: 65% by atomic.potato
struct MeshPtr {
    void* p;
    ~MeshPtr();
};

struct String {
    char pad[0x1c];
    ~String();
};

struct MeshGen {
    char pad0[4];
    String s4;
    char pad1[0x18];
    MeshPtr mp20;
    ~MeshGen();
};

MeshGen::~MeshGen()
{
    mp20.~MeshPtr();
    s4.~String();
}
