// from server: 51% by atomic.potato
struct S {
    char pad0[8];
    void* field8;
    void* fieldC;
    void f();
};

extern "C" void* __stdcall sub_80258C(void*, void*);
extern "C" void* __stdcall sub_802890();

void S::f() {
    void* eax = fieldC;
    if (*(int*)((char*)eax + 0x18) == 0) {
        void* edx = field8;
        void* p = *(void**)((char*)edx + 4);
        sub_80258C((char*)p + (int)this + 8, 0);
        return;
    }
    void* ecx = *(void**)((char*)eax + 0x14);
    void* eax2 = *(void**)eax;
    void* esi = *(void**)ecx;
    if (eax2 != 0) {
        do {
            eax2 = *(void**)eax2;
        } while (eax2 != 0);
    }
    sub_802890();
    if (esi == *(void**)((char*)0 + 0x14)) {
        sub_802890();
    }
    void* eax3 = *(void**)((char*)esi + 8);
    void* edx2 = field8;
    void* p2 = *(void**)((char*)edx2 + 4);
    sub_80258C((char*)p2 + (int)this + 8, eax3);
}
