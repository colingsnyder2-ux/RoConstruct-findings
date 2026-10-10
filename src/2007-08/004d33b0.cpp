// from server: 46% by colin
struct Chunk {
    int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" void* __cdecl sub_500060(int, int);
extern "C" void __cdecl sub_500580(void*, int, int);
extern "C" void __cdecl sub_4d20e0(void*);
extern "C" void __cdecl sub_4d21c0(void*, void*);

int Chunk::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int* self = (int*)this;
    self[1] = 0;
    self[2] = 0x79f058;
    self[5] = 10;
    self[3] = 0;
    void* p = sub_500060(0x28, 0x10);
    self[4] = (int)p;
    sub_500580(p, 0, self[5] * 4);
    self[1] = a1;
    sub_4d20e0((void*)((char*)this + 8));
    sub_4d21c0((void*)((char*)this + 8), &a2);
    self[0] = a6;
    self[6] = a7;
    sub_4d20e0(&a2);
    return (int)this;
}
