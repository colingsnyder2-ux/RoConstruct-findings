// from server: 57% by colin
struct SoundChannel {
    char pad[0x134];
    void* field_134;
    char pad2[0x4];
    char field_13c[0x20];
    char field_15c[0x24];
    char field_180[0x20];
    char field_1a0[0x18];
    void* field_1b8;
    char pad3[0x4];
    void* field_198;
    void* field_154;
    void cleanup();
    void sub_55afd0();
};

extern "C" void __stdcall sub_4b0d80(void*);

extern "C" void __stdcall sub_5b7940(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_5b87a0(void*);
extern "C" void __stdcall sub_5b9e00(void*, void*);
extern "C" void* __stdcall sub_69fc18(void*);

void SoundChannel::cleanup()
{
    char* ebx = (char*)this;
    void* p = *(void**)(ebx + 0x154);
    void* q = *(void**)((char*)p + 4);
    char* esi = ebx + 0x13c;
    sub_4b0d80(q);
    void* r = *(void**)(esi + 0x18);
    *(void**)((char*)r + 4) = r;
    void* s = *(void**)(esi + 0x18);
    *(void**)(esi + 0x1c) = 0;
    *(void**)s = s;
    void* t = *(void**)(esi + 0x18);
    *(void**)((char*)t + 8) = t;
    sub_55afd0();

    void* u = *(void**)(ebx + 0x198);
    void* v = *(void**)(ebx + 0x180);
    char* edi = ebx + 0x180;
    sub_5b7940(v, *(void**)u, v, u, (void*)0x5ba2b0);

    void* w = *(void**)(ebx + 0x1b8);
    void* x = *(void**)(ebx + 0x1a0);
    char* ebp = ebx + 0x1a0;
    sub_5b7940(x, *(void**)w, x, w, (void*)0x5ba2b0);

    void* y = *(void**)(esi + 0x18);
    void* z = *(void**)((char*)y + 4);
    sub_5b9e00(esi, z);
    void* aa = *(void**)(esi + 0x18);
    *(void**)((char*)aa + 4) = aa;
    void* ab = *(void**)(esi + 0x18);
    *(void**)(esi + 0x1c) = 0;
    *(void**)ab = ab;
    void* ac = *(void**)(esi + 0x18);
    *(void**)((char*)ac + 8) = ac;

    void* ad = *(void**)(edi + 0x18);
    void* ae = *(void**)((char*)ad + 4);
    sub_5b9e00(edi, ae);
    void* af = *(void**)(edi + 0x18);
    *(void**)((char*)af + 4) = af;
    void* ag = *(void**)(edi + 0x18);
    *(void**)(edi + 0x1c) = 0;
    *(void**)ag = ag;
    void* ah = *(void**)(edi + 0x18);
    *(void**)((char*)ah + 8) = ah;

    void* ai = *(void**)(ebx + 0x134);
    if (ai != 0) {
        void* aj = sub_69fc18(ai);
        sub_5b87a0(aj);
        *(void**)(ebx + 0x134) = 0;
    }
}
