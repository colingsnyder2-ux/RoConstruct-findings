// from server: 44% by colin
struct Chunk {
    char pad[0xc];
    void destroy();
};

extern "C" void __stdcall sub_6a158c(int, int);
extern "C" void sub_54426a();

struct VChunk {
    void __cdecl func(int a, int b);
};

void VChunk::func(int a, int b)
{
    Chunk* c = (Chunk*)((char*)this + 0xc);
    c->destroy();
    sub_6a158c(0, 0);
    sub_54426a();
}
