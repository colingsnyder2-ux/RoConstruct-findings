// from server: 51% by colin
struct RenderScene {
    void dtor();
};

extern "C" void __cdecl alignedFree(void*);
extern "C" void __cdecl sub_45AD90(void*);
extern "C" void __cdecl sub_475F20(void*);
extern "C" void __cdecl sub_7AA980(void*);
extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __cdecl sub_804CA4(void*);
extern "C" void __cdecl sub_804E70(void*);
extern "C" void* __stdcall sub_8021AC(void*);
extern "C" void __cdecl sub_804484(void);

void RenderScene::dtor()
{
    *(int*)this = 0x8749dc;
    int* p = *(int**)((char*)this + 0x268);
    if (p != 0) {
        int* q = *(int**)((char*)p + 0x1d4);
        int* r = *(int**)q;
        void* (__thiscall *fn)(void*) = (void* (__thiscall *)(void*))*(int*)((char*)r + 0xb4);
        int* ret = (int*)fn(q);
        int* s = *(int**)((char*)this + 0x268);
        int* t = *(int**)ret;
        sub_804484();
        void (__thiscall *fn2)(void*, void*) = (void (__thiscall *)(void*, void*))*(int*)((char*)t + 0xe0);
        fn2(ret, 0);
        int* u = *(int**)((char*)this + 0x268);
        if (u != 0) {
            int* v = *(int**)u;
            void (__thiscall *fn3)(void*, int) = (void (__thiscall *)(void*, int))*(int*)v;
            fn3(u, 1);
        }
    }
    int* w = *(int**)((char*)this + 0x26c);
    if (w != 0) {
        int* x = *(int**)w;
        void (__thiscall *fn4)(void*, int) = (void (__thiscall *)(void*, int))*(int*)x;
        fn4(w, 1);
    }
    void* y = *(void**)((char*)this + 0x318);
    alignedFree(y);
    *(int*)((char*)this + 0x318) = 0;
    *(int*)((char*)this + 0x31c) = 0;
    *(int*)((char*)this + 0x320) = 0;
    int* z = *(int**)((char*)this + 0x30c);
    if (z != 0) {
        int* aa = (int*)((char*)z + 4);
        if (InterlockedDecrement(aa) == 0) {
            sub_45AD90(z);
            int* ab = *(int**)((char*)this + 0x30c);
            if (ab != 0) {
                int* ac = *(int**)ab;
                void (__thiscall *fn5)(void*, int) = (void (__thiscall *)(void*, int))*(int*)ac;
                fn5(ab, 1);
            }
        }
        *(int*)((char*)this + 0x30c) = 0;
    }
    int* ad = *(int**)((char*)this + 0x308);
    if (ad != 0) {
        int* ae = (int*)((char*)ad + 4);
        if (InterlockedDecrement(ae) == 0) {
            sub_45AD90(ad);
            int* af = *(int**)((char*)this + 0x308);
            if (af != 0) {
                int* ag = *(int**)af;
                void (__thiscall *fn6)(void*, int) = (void (__thiscall *)(void*, int))*(int*)ag;
                fn6(af, 1);
            }
        }
        *(int*)((char*)this + 0x308) = 0;
    }
    int* ah = *(int**)((char*)this + 0x2f0);
    if (ah != 0) {
        int* ai = (int*)((char*)ah + 4);
        if (InterlockedDecrement(ai) == 0) {
            sub_45AD90(ah);
            int* aj = *(int**)((char*)this + 0x2f0);
            if (aj != 0) {
                int* ak = *(int**)aj;
                void (__thiscall *fn7)(void*, int) = (void (__thiscall *)(void*, int))*(int*)ak;
                fn7(aj, 1);
            }
        }
        *(int*)((char*)this + 0x2f0) = 0;
    }
    int* al = *(int**)((char*)this + 0x2d0);
    if (al != 0) {
        int* am = (int*)((char*)al + 4);
        if (InterlockedDecrement(am) == 0) {
            sub_45AD90(al);
            int* an = *(int**)((char*)this + 0x2d0);
            if (an != 0) {
                int* ao = *(int**)an;
                void (__thiscall *fn8)(void*, int) = (void (__thiscall *)(void*, int))*(int*)ao;
                fn8(an, 1);
            }
        }
        *(int*)((char*)this + 0x2d0) = 0;
    }
    sub_475F20((char*)this + 0x2c4);
    sub_7AA980((char*)this + 0x2b8);
    void* ap = *(void**)((char*)this + 0x2ac);
    alignedFree(ap);
    *(int*)((char*)this + 0x2ac) = 0;
    *(int*)((char*)this + 0x2b0) = 0;
    *(int*)((char*)this + 0x2b4) = 0;
    void* aq = *(void**)((char*)this + 0x2a0);
    alignedFree(aq);
    *(int*)((char*)this + 0x2a0) = 0;
    *(int*)((char*)this + 0x2a4) = 0;
    *(int*)((char*)this + 0x2a8) = 0;
    void* ar = *(void**)((char*)this + 0x294);
    alignedFree(ar);
    *(int*)((char*)this + 0x294) = 0;
    *(int*)((char*)this + 0x298) = 0;
    *(int*)((char*)this + 0x29c) = 0;
    sub_7AA980((char*)this + 0x288);
    sub_804CA4((char*)this + 0x27c);
    sub_804E70((char*)this + 0x270);
    *(int*)this = 0x827424;
    sub_475F20((char*)this + 8);
}
