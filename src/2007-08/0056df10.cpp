// from server: 49% by colin
// roc 2007-08 0056df10  unit: RBX::VContentId::?$holder  size: 272 bytes

extern "C" {
    int __stdcall sub_4116F0(void*);
    void* __stdcall sub_411770(void*);
    void* __stdcall sub_412DC0(void*, void*);
    void* __stdcall sub_49A1F0(void*, void*);
    void* __stdcall sub_5017C0(void*, void*, void*, void*);
    void* __stdcall sub_56D7D0(void);
    int __stdcall sub_580B80(void*, void*);
    void* __stdcall sub_630B9E(void*, void*);
}

struct S {
    void* field0;
    void* field4;
    void f();
};

void S::f()
{
    void* ebx = *(void**)0x77e708;
    void* esi = (char*)this + 4;
    void* eax;
    if (esi != 0) {
        void* ecx = *(void**)esi;
        if (ecx != 0) {
            void* v = *(void**)ecx;
            eax = ((void* (__thiscall*)(void*))*(void**)((char*)v + 4))(ecx);
        } else {
            eax = (void*)0x8827c8;
        }
        if (((bool (__thiscall*)(void*, void*))ebx)(eax, (void*)0x8827d4)) {
            eax = *(void**)esi;
            eax = (char*)eax + 4;
            if (eax != 0) {
                return;
            }
        }
    }
    eax = *(void**)this;
    eax = *(void**)((char*)eax + 8);
    if (((bool (__thiscall*)(void*, void*))ebx)((void*)0x8827f8, eax)) {
        char buf[12];
        void* p = sub_411770(buf);
        if (sub_580B80(p, esi)) {
            sub_49A1F0(esi, buf);
            void* r = sub_56D7D0();
            *(void**)this = r;
            sub_4116F0(esi);
        }
        return;
    }
    void* r = sub_56D7D0();
    void* v1 = *(void**)((char*)r + 0xc);
    void* ecx;
    if (*(unsigned*)((char*)v1 + 0x1c) < 0x10) {
        ecx = (char*)v1 + 8;
    } else {
        ecx = *(void**)((char*)v1 + 8);
    }
    eax = *(void**)this;
    eax = *(void**)((char*)eax + 0xc);
    eax = (char*)eax + 4;
    void* edx;
    if (*(unsigned*)((char*)eax + 0x18) < 0x10) {
        edx = (char*)eax + 4;
    } else {
        edx = *(void**)((char*)eax + 4);
    }
    char buf2[12];
    void* p = sub_5017C0(buf2, (void*)0x7aa03c, edx, ecx);
    char buf3[24];
    sub_412DC0(buf3, p);
    sub_630B9E((void*)0x8410c0, buf3);
}
