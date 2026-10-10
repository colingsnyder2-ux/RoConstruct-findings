// from server: 41% by colin
extern "C" void* __cdecl sub_500060(unsigned int, unsigned int);
extern "C" void __cdecl sub_500580(void*, int, unsigned int);
extern "C" void __cdecl sub_4d20e0(void*);
extern "C" void __cdecl sub_4d21c0(void*, void*);

struct Chunk {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    void ctor(int, int, int, int, int, int, int);
};

void Chunk::ctor(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    f4 = 0;
    f8 = 0x79f114;
    f14 = 0xa;
    fC = 0;
    f10 = (int)sub_500060(0x28, 0x10);
    sub_500580((void*)f10, 0, (unsigned int)(f14 * 4));
    f4 = 0;
    sub_4d20e0((void*)((char*)this + 8));
    sub_4d21c0((void*)((char*)this + 8), (void*)((char*)this + 0x20));
    f0 = a6;
    f18 = a7;
    sub_4d20e0((void*)((char*)this + 0x20));
}
