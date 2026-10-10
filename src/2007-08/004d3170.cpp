// from server: 46% by colin
struct S_func_004d3170 {
    int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" void* __cdecl sub_00500060(int, int);
extern "C" void __cdecl sub_00500580(void*, int, int);
extern "C" void __fastcall sub_004cdf20(void*);
extern "C" void __fastcall sub_004d2150(void*, void*);

int S_func_004d3170::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int* self = (int*)this;
    self[1] = 0;
    self[2] = 0x79f050;
    self[5] = 10;
    self[3] = 0;
    void* p = sub_00500060(0x28, 0x10);
    self[4] = (int)p;
    sub_00500580(p, 0, self[5] * 4);
    self[1] = a1;
    if ((char*)self + 8 != (char*)&a2) {
        sub_004cdf20((char*)self + 8);
        sub_004d2150((char*)self + 8, &a2);
    }
    self[0] = a3;
    self[6] = a4;
    sub_004cdf20(&a2);
    return (int)self;
}
