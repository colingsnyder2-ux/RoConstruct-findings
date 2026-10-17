// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" double __cdecl func_00455d70();
extern "C" void __cdecl func_00411b40();
extern "C" void* __cdecl func_0044f220(void*, const char*, void*);
extern "C" void* __cdecl func_0040e160(void*, void*, const char*);
extern "C" void* __cdecl func_00456120(void*, int);
extern "C" void __cdecl func_00456820(void*, void*);
extern "C" void __cdecl func_005773c0(void*);
extern "C" void __cdecl func_006a158c(void*, void*);
extern "C" void __cdecl func_006cbf30(void*);

extern "C" void* __stdcall mfc_802814(void*, const char*);
extern "C" int __stdcall mfc_802818(void*);
extern "C" int __stdcall mfc_80281c(void*, const char*, const char*);
extern "C" void* __stdcall mfc_8028a4(void*, void*);
extern "C" void* __stdcall mfc_803ee0(void*, const char*);
extern "C" void* __stdcall mfc_803f10(void*, const char*);
extern "C" void __stdcall mfc_803f14(void*);

struct RefCounted {
    void* vptr;
    volatile long strong;
    volatile long weak;
};

struct CValueItem {
    char pad[0x3c4];
    RefCounted* ptr3c4;
    RefCounted* ptr3c8;

    void method();
};

void CValueItem::method()
{
    RefCounted* p = ptr3c8;
    if (p) {
        _InterlockedExchangeAdd(&p->strong, 1);
    }

    func_00411b40();

    void* vb = (void*)this;
    void* r = ((void* (__thiscall*)(void*))((void**)*(void**)vb)[0x194/4])(vb);
    void* r2 = ((void* (__thiscall*)(void*))((void**)*(void**)r)[0x160/4])(r);

    vb = (void*)this;
    void* r3 = ((void* (__thiscall*)(void*))((void**)*(void**)vb)[0x194/4])(vb);
    func_006cbf30(r3);

    if (*(unsigned char*)0x96dbb1 != 0) {
        double now = func_00455d70();
        if (now > *(double*)0x932028) {
            *(double*)0x932028 = now;
        } else {
            double diff = now - *(double*)0x932028;
            double limit = (double)(*(float*)0x931800) * *(double*)0x8187a0;
            if (diff > limit) {
                if (*(void**)0x96dd84 == 0) {
                    char buf1[16];
                    func_00456120(buf1, 0);
                    char buf2[16];
                    func_0044f220(buf2, (const char*)0x818788, buf1);
                    char buf3[16];
                    func_0040e160(buf3, buf2, (const char*)0x8103c8);
                    mfc_803f14(buf3);
                    mfc_803f14(buf2);
                    void* s = mfc_803ee0(buf1, (const char*)0x818784);
                    void* f = mfc_802814(s, "c:\\roblox_bench_");
                    *(void**)0x96dd84 = f;
                    if (f == 0) {
                        char ebuf[16];
                        func_0044f220(ebuf, (const char*)0x818768, buf1);
                        void* e = mfc_803ee0(ebuf, (const char*)0);
                        void* ep = mfc_8028a4(ebuf, &e);
                        func_006a158c(ep, (void*)0x8d997c);
                    }
                    mfc_803f14(buf1);
                }
                vb = (void*)this;
                void* r4 = ((void* (__thiscall*)(void*))((void**)*(void**)vb)[0x194/4])(vb);
                void* edi = *(void**)((char*)r4 + 0xe8);
                char nbuf[16];
                func_00456120(nbuf, 0);
                void* f = *(void**)0x96dd84;
                mfc_80281c(f, "WallTime = %s\n", *(const char**)nbuf);
                mfc_803f14(nbuf);
                char tbuf[16];
                mfc_803f10(tbuf, (const char*)0x80b716);
                func_00456820(this, edi);
                mfc_802818(*(void**)0x96dd84);
            }
        }
    }

    func_005773c0(this);
}
