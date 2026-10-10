// from server: 38% by colin
struct Box {
    int a;
    int b;
    int c;
    int d;
};

struct Chunk {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    Chunk(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" void* __cdecl sub_500060(int, int);
extern "C" void __cdecl sub_500580(void*, int, int);
extern "C" void __fastcall sub_4d20e0(void*);
extern "C" void __fastcall sub_4d21c0(void*, void*);

Chunk::Chunk(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    field4 = 0;
    field8 = 0x79f11c;
    field14 = 0xa;
    fieldC = 0;
    field10 = (int)sub_500060(0x28, 0x10);
    sub_500580((void*)field10, 0, field14 * 4);
    field4 = a1;
    sub_4d20e0((void*)((char*)this + 8));
    sub_4d21c0((void*)((char*)this + 8), &a2);
    field0 = a3;
    field18 = a4;
    sub_4d20e0((void*)((char*)this + 8));
}
