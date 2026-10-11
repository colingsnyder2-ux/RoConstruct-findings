// from server: 43% by atomic.potato
struct MeshAdapter {
    int pad0;
    char pad1[4];
    void* field8;
    MeshAdapter* init(void*, void*, void*, void*, void*, void*, void*, void*);
    ~MeshAdapter();
};

extern "C" void __stdcall sub_004c68a0(void*, void*, void*);
extern "C" void __stdcall sub_00a404d0(void*);

MeshAdapter* MeshAdapter::init(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h)
{
    void* local;
    field8 = 0;
    pad0 = 0;
    sub_004c68a0(&field8, a, &local);
    sub_00a404d0(&local);
    return this;
}
