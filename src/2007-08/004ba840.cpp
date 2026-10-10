// from server: 83% by tester
struct RakPeer;

struct RakPeer {
    char pad[0x6e8];
    void* field_6e8;
    void* field_6ec;
    void* field_6f0;
    unsigned int field_6f4;
    unsigned int field_6f8;
    void method(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void* __cdecl sub_630d4c(void* dst, const void* src, unsigned int size);

void RakPeer::method(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    void* p = field_6e8;
    void* q = *(void**)((char*)p + 0x3c);
    if (q != field_6ec && *(char*)((char*)q + 0x38) != 1)
    {
        void* r = field_6e8;
        void* s = *(void**)((char*)r + 0x3c);
        void* t = sub_62fef6(0x40);
        void* u = field_6e8;
        *(void**)((char*)u + 0x3c) = t;
        void* v = field_6e8;
        void* w = *(void**)((char*)v + 0x3c);
        *(void**)((char*)w + 0x3c) = s;
    }

    int ebx = a;
    void* esi = field_6e8;
    void* ecx = *(void**)((char*)esi + 0x3c);
    int ebp = (ebx + 7) >> 3;
    field_6e8 = ecx;
    void* eax = sub_62fef6(ebp);
    *(void**)((char*)esi + 0x30) = eax;
    sub_630d4c(eax, (void*)b, ebp);

    *(int*)((char*)esi + 4) = c;
    *(int*)((char*)esi + 0) = ebx;
    *(int*)((char*)esi + 8) = d;
    *(char*)((char*)esi + 0xc) = (char)e;
    *(int*)((char*)esi + 0x10) = f;
    *(short*)((char*)esi + 0x14) = (short)g;
    *(char*)((char*)esi + 0x18) = (char)h;
    *(int*)((char*)esi + 0x1c) = i;
    *(int*)((char*)esi + 0x34) = 0;

    void* ecx2 = field_6f0;
    field_6f8 += 1;
    *(char*)((char*)ecx2 + 0x38) = 1;
    void* edx2 = field_6f0;
    void* eax2 = *(void**)((char*)edx2 + 0x3c);
    field_6f0 = eax2;
}
