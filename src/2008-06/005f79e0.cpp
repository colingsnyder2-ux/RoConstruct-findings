// from server: 34% by atomic.potato
struct S {
    char pad0[0x14];
    void* field_0x14;
    char pad1[0x14];
    unsigned int field_0x2c;
    void f();
};

extern "C" void __stdcall sub_802548(void*);
extern "C" void __stdcall sub_802370(void*);
extern "C" void* __stdcall sub_802890();
extern "C" void __cdecl sub_5f2f60(void*, int, int, void*);
extern "C" void __cdecl sub_5f3ac0(void*);
extern "C" void __cdecl sub_5f7230(void*, void*, void*, void*, int, int, int);
extern "C" void* __fastcall sub_55ddd0(void*);

void S::f() {
    if ((field_0x2c & 2) == 0) return;
    char buf[0x60];
    sub_802548(buf);
    *(unsigned char*)(buf + 0x3c) = 0;
    *(unsigned char*)(buf + 0x41) = 0;
    *(unsigned int*)(buf + 0x44) = 0;
    *(unsigned int*)(buf + 0x48) = 0;
    *(unsigned int*)(buf + 0x4c) = 0;
    *(unsigned int*)(buf + 0x50) = 0;
    *(unsigned int*)(buf + 0x54) = 0x10;
    *(unsigned int*)buf = 0x8409b4;
    *(unsigned int*)(buf + 0x60) = 0;
    if ((field_0x2c & 1) == 0) {
        sub_5f2f60(buf, -1, -1, buf + 3);
        void* p = sub_55ddd0(this);
        void* v = *(void**)p;
        void* fn = *(void**)((char*)v + 0x38);
        ((void (__stdcall*)(void*))fn)(buf);
    }
    void* eax = field_0x14;
    void* edi = *(void**)eax;
    void* ecx = *(void**)this;
    void* ebp = sub_802890;
    if (ecx != 0) {
        ecx = *(void**)ecx;
    }
    if (edi != *(void**)((char*)0 + 0x14)) {
        sub_802370(*(void**)((char*)edi + 8));
    }
    eax = field_0x14;
    edi = *(void**)eax;
    ecx = *(void**)this;
    sub_5f7230(buf, ecx, eax, edi, 1, 0, 0);
    field_0x2c &= 0xfffffffd;
    sub_5f3ac0(buf);
}
