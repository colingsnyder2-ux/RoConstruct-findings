// from server: 37% by atomic.potato
struct CXTPCustomizeSheet_CCustomizeEdit {
    void ctor(int, int);
};

extern "C" void __stdcall sub_98de74();
extern "C" void __stdcall sub_98de80();
extern "C" void __stdcall sub_98dec0();
extern "C" int __stdcall GetObjectA(int, int, void*);

void* __cdecl sub_7f3860(unsigned int);
void* __cdecl sub_7f3b42(unsigned int);
void __cdecl sub_7f3b06(void*);
void __cdecl sub_40f230();
void __cdecl sub_80c820();
void __cdecl sub_80f6a0();
void __cdecl sub_83d9c0();
void __cdecl sub_83e2c0();
void __cdecl sub_840ce0();
void __cdecl sub_8c4ef0();
void __cdecl sub_926832();
void __cdecl sub_926838();
void* __cdecl sub_86e8a0();

void CXTPCustomizeSheet_CCustomizeEdit::ctor(int a, int b)
{
    char pad[0x40];
    sub_926838();
    *(int*)((char*)this + 0) = 0x9f8aac;
    sub_98de74();
    void* v = sub_86e8a0();
    (*(void(__thiscall**)(void*, int, void*))(*(int*)v + 8))(v, 0x23c9, pad + 0x14);
    int edi = *(int*)(pad + 0x4c);
    int eax = *(int*)(edi + 0xa0);
    sub_98de80();
    sub_926832();
    void* m1 = sub_7f3860(0x24c);
    if (m1) {
        sub_8c4ef0();
    } else {
        m1 = 0;
    }
    *(void**)((char*)this + 0xac) = m1;
    sub_83d9c0();
    void* m2 = sub_7f3860(0x150);
    if (m2) {
        sub_840ce0();
    } else {
        m2 = 0;
    }
    *(void**)((char*)this + 0xb0) = m2;
    sub_83d9c0();
    *(int*)((char*)this + 0xb4) = *(int*)(edi + 0xa0);
    *(int*)((char*)this + 0xb8) = edi;
    *(int*)(pad + 0x20) = 0;
    *(int*)(pad + 0x1c) = 0x9a2218;
    void* v2 = sub_86e8a0();
    (*(void(__thiscall**)(void*, int, void*))(*(int*)v2 + 0x14))(v2, 0x238f, pad + 0x20);
    int ecx = *(int*)(pad + 0x20);
    GetObjectA(ecx, 0x18, pad + 0x24);
    int eax2 = *(int*)(pad + 0x28);
    int edx2 = eax2 >> 31;
    edx2 &= 0xf;
    eax2 += edx2;
    int edi2 = eax2 >> 4;
    void* m3 = sub_7f3860(0x7c);
    if (m3) {
        sub_80c820();
    } else {
        m3 = 0;
    }
    *(void**)((char*)this + 0xc0) = m3;
    int ecx2 = 0;
    unsigned int prod = (unsigned int)edi2 * 4;
    if (prod > 0xffffffffU) ecx2 = 1;
    ecx2 = -ecx2;
    ecx2 |= (int)prod;
    int* arr = (int*)sub_7f3b42(ecx2);
    int i = 0;
    if (edi2 > 0) {
        do {
            int n = i + 1;
            arr[i] = n;
            i = n;
        } while (i < edi2);
    }
    sub_80f6a0();
    sub_7f3b06(arr);
    *(int*)((char*)this + 0x58) |= 0x80;
    *(int*)((char*)this + 0xbc) = 0;
    sub_83e2c0();
    *(int*)(pad + 0x1c) = 0x9a2218;
    sub_40f230();
    sub_98dec0();
}
