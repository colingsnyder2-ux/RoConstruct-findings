// from server: 35% by colin
// roc 2008-06 005baeb0  unit: RBX::Soundscape::W4ReverbType::?$EnumDesc  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005baeb0

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void __cdecl sub_6A067A(void* p);
extern "C" void __cdecl sub_4077D0(void* p);
extern "C" void __cdecl sub_553D80(void* p);
extern "C" void __cdecl sub_56C080(void* p);

struct S {
    void dtor();
};

void S::dtor() {
    *(int*)this = 0x837a40;
    int* ebp = *(int**)((char*)this + 0x20);
    void (__cdecl *ebx)() = *(void (__cdecl**)())0x802890;
    int local = 7;
    if (*(unsigned*)((char*)this + 0x1c) > (unsigned)ebp)
        ebx();
    int* edi = *(int**)((char*)this + 0x1c);
    if ((unsigned)edi > *(unsigned*)((char*)this + 0x20))
        ebx();
    int zero = 0;
    if (edi != ebp) {
        do {
            int* ecx = *(int**)edi;
            if (ecx != 0) {
                int* eax = *(int**)ecx;
                void (__thiscall *edx)(int*, int) = *(void (__thiscall**)(int*, int))eax;
                edx(ecx, 1);
            }
            edi = (int*)((char*)edi + 4);
        } while (edi != ebp);
    }
    void* p1 = *(void**)((char*)this + 0xdc);
    if (p1 != 0) {
        sub_6A067A(p1);
    }
    void* p2 = *(void**)((char*)this + 0xd0);
    sub_6A067A(p2);
    *(int*)((char*)this + 0xdc) = zero;
    *(int*)((char*)this + 0xe0) = zero;
    *(int*)((char*)this + 0xe4) = zero;
    void* p3 = *(void**)((char*)this + 0xc4);
    if (p3 != 0) {
        sub_6A067A(p3);
    }
    void* p4 = *(void**)((char*)this + 0xb8);
    sub_6A067A(p4);
    *(int*)((char*)this + 0xc4) = zero;
    *(int*)((char*)this + 0xc8) = zero;
    *(int*)((char*)this + 0xcc) = zero;
    void* p5 = *(void**)((char*)this + 0xac);
    if (p5 != 0) {
        sub_6A067A(p5);
    }
    void* p6 = *(void**)((char*)this + 0xa0);
    sub_6A067A(p6);
    *(int*)((char*)this + 0xac) = zero;
    *(int*)((char*)this + 0xb0) = zero;
    *(int*)((char*)this + 0xb4) = zero;
    char* edi2 = (char*)this + 0x88;
    sub_4077D0(edi2);
    void* p7 = *(void**)edi2;
    sub_6A067A(p7);
    void* p8 = *(void**)((char*)this + 0x7c);
    if (p8 != 0) {
        sub_6A067A(p8);
    }
    void* p9 = *(void**)((char*)this + 0x70);
    sub_6A067A(p9);
    *(int*)((char*)this + 0x7c) = zero;
    *(int*)((char*)this + 0x80) = zero;
    *(int*)((char*)this + 0x84) = zero;
    sub_553D80((char*)this + 0x50);
    sub_553D80((char*)this + 0x30);
    sub_56C080(this);
}
