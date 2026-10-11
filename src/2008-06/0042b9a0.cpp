// from server: 36% by colin
struct S {
    void* field0;
    void* field4;
    char field8[0x20];
    void construct(void*);
};

extern "C" void __stdcall sub_42B800(void*, int, int, int);
extern "C" void* __cdecl sub_6A0920(unsigned int);
extern "C" void __fastcall sub_41AD40(void*);
extern "C" void __fastcall sub_41B0F0(void*, void*);
extern "C" void __fastcall sub_595840(void*);

void S::construct(void* arg)
{
    field0 = 0;
    field4 = 0;
    int* p = (int*)arg;
    int a = p[0];
    int b = p[1];
    int c = p[2];
    sub_42B800(field8, a, b, c);
    void* mem = sub_6A0920(0x28);
    if (mem != 0) {
        sub_41AD40(mem);
    } else {
        mem = 0;
    }
    sub_41B0F0(this, mem);
    sub_595840(this);
}
