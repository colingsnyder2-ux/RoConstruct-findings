// from server: 35% by atomic.potato
struct PartChunk {
    int f(int, int, int, int, int, int, int);
};

extern "C" void* __cdecl sub_54D8A0(unsigned int, unsigned int);
extern "C" void __cdecl sub_54E5A0(void*, int, unsigned int);
extern "C" void __fastcall sub_5301C0(void*);
extern "C" void __fastcall sub_52E9D0(void*, void*);

int PartChunk::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char* self = (char*)this;
    *(int*)(self + 4) = 0;
    *(int*)(self + 8) = 0xa1ea00;
    *(int*)(self + 0x14) = 10;
    *(int*)(self + 0xc) = 0;
    void* p = sub_54D8A0(0x28, 0x10);
    *(void**)(self + 0x10) = p;
    unsigned int n = *(unsigned int*)(self + 0x14);
    sub_54E5A0(p, 0, n * 4);
    *(int*)(self + 4) = a1;
    char* edi = self + 8;
    char tmp[8];
    *(int*)tmp = 0xa1ea00;
    if (edi != tmp) {
        sub_5301C0(edi);
        sub_52E9D0(edi, tmp);
    }
    *(int*)(self) = a2;
    *(int*)(self + 0x18) = a3;
    *(int*)tmp = 0xa1ea00;
    sub_5301C0(tmp);
    return (int)self;
}
