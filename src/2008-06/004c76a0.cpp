// from server: 39% by atomic.potato
struct CNameItem {
    void Init();
};

struct Assoc {
    char pad0[4];
    CNameItem name;
    char pad1[0x2c];
    void* field34;
    char pad2[8];
    int f0c;
    int f10;
    int f14;
    Assoc* Init();
};

extern "C" void* __stdcall sub_6a0920(int);

Assoc* Assoc::Init()
{
    name.Init();
    void* p = sub_6a0920(4);
    if (p != 0)
        *(void**)p = &field34;
    else
        p = 0;
    field34 = p;
    f0c = 0;
    f10 = 0;
    f14 = 0;
    return this;
}
