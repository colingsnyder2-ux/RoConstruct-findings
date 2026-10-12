// from server: 60% by colin
struct S {
    char pad0[8];
    void* field8;
    char padC[4];
    void* field10;
    void f();
};

extern "C" void* __stdcall sub_80258c(void*, void*);
extern "C" void* __stdcall sub_802890();

void S::f()
{
    void* p = field10;
    if (*(void**)((char*)p + 0x18) == 0) {
        void* q = field8;
        void* r = *(void**)((char*)q + 4);
        sub_80258c((char*)this + 8 + (int)r, 0);
        return;
    }
    void* ecx_val = *(void**)((char*)p + 0x14);
    void* eax_val = *(void**)p;
    void* esi_val = *(void**)ecx_val;
    while (eax_val != 0) {
        eax_val = *(void**)eax_val;
        if (esi_val == *(void**)((char*)eax_val + 0x14))
            sub_802890();
    }
    sub_802890();
    void* r = *(void**)((char*)esi_val + 8);
    void* q = field8;
    void* r2 = *(void**)((char*)q + 4);
    sub_80258c((char*)this + 8 + (int)r2, r);
}
