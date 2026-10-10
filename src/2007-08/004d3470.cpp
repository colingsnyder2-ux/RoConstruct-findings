// from server: 37% by colin
struct Chunk {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    Chunk(int a, int b, int c, int d, int e, int f, int g);
};

extern "C" void* __cdecl sub_500060(int, int);
extern "C" void __cdecl sub_500580(void*, int, int);
extern "C" void __cdecl sub_4D20E0(void*);
extern "C" void __cdecl sub_4D21C0(void*, void*);

Chunk::Chunk(int a, int b, int c, int d, int e, int f, int g)
{
    field4 = 0;
    field8 = 0x79f060;
    field14 = 0xa;
    fieldC = 0;
    void* p = sub_500060(0x28, 0x10);
    field10 = (int)p;
    sub_500580(p, 0, field14 * 4);
    field4 = a;
    if (&field8 != (int*)&a) {
        sub_4D20E0(&field8);
        sub_4D21C0(&field8, &a);
    }
    field0 = b;
    field18 = c;
    sub_4D20E0(&a);
}
