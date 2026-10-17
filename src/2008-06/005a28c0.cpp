// from server: 69% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void destroy();
    virtual void unknown2();
    volatile long ref1;
    volatile long ref2;
};

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
};

extern "C" void __cdecl freeMem(void*);
extern "C" void __cdecl sub_64b230(void*);
extern "C" void __cdecl sub_614db0(void*);
extern "C" void __cdecl sub_5dd2c0(void*);
extern "C" void __cdecl sub_5832e0(void*);
extern "C" void __cdecl sub_590630(void*);

struct Workspace {
    void destroy();
};

void Workspace::destroy()
{
    char* base = (char*)this;
    *(void**)(base + 0x00) = (void*)0x833a54;
    *(void**)(base + 0x10) = (void*)0x833a44;
    *(void**)(base + 0x14) = (void*)0x833a3c;
    *(void**)(base + 0x20) = (void*)0x833a34;
    *(void**)(base + 0x24) = (void*)0x833a24;
    *(void**)(base + 0x44) = (void*)0x833a14;
    *(void**)(base + 0x64) = (void*)0x833a04;
    *(void**)(base + 0x84) = (void*)0x8339f4;
    *(void**)(base + 0xa4) = (void*)0x8339e4;
    *(void**)(base + 0xc4) = (void*)0x8339d4;
    *(void**)(base + 0x130) = (void*)0x8339c8;
    *(void**)(base + 0x1a0) = (void*)0x8339b0;
    *(void**)(base + 0x288) = (void*)0x833998;
    *(void**)(base + 0x2e8) = (void*)0x833990;
    *(void**)(base + 0x2ec) = (void*)0x833988;
    *(void**)(base + 0x314) = (void*)0x833980;
    *(void**)(base + 0x340) = (void*)0x833970;
    *(void**)(base + 0x344) = (void*)0x833960;
    *(void**)(base + 0x364) = (void*)0x833950;
    *(void**)(base + 0x384) = (void*)0x833944;

    void* p134 = *(void**)(base + 0x134);
    void* p4 = *(void**)((char*)p134 + 4);
    *(void**)((char*)p4 + (int)base + 0x134) = (void*)0x833938;
    void* p134b = *(void**)(base + 0x134);
    void* p8 = *(void**)((char*)p134b + 8);
    *(void**)((char*)p8 + (int)base + 0x134) = (void*)0x833930;
    void* p134c = *(void**)(base + 0x134);
    void* pc = *(void**)((char*)p134c + 0xc);
    *(void**)((char*)pc + (int)base + 0x134) = (void*)0x833914;

    void* q134 = *(void**)(base + 0x134);
    void* q4 = *(void**)((char*)q134 + 4);
    *(void**)((char*)q4 + (int)base + 0x130) = (char*)q4 - 0x310;
    void* q134b = *(void**)(base + 0x134);
    void* q8 = *(void**)((char*)q134b + 8);
    *(void**)((char*)q8 + (int)base + 0x130) = (char*)q8 - 0x318;
    void* q134c = *(void**)(base + 0x134);
    void* qc = *(void**)((char*)q134c + 0xc);
    *(void**)((char*)qc + (int)base + 0x130) = (char*)qc - 0x320;

    Obj* o438 = *(Obj**)(base + 0x438);
    if (o438) {
        void** vt = *(void***)o438;
        ((void(__thiscall*)(Obj*, int))vt[0])(o438, 1);
    }
    Obj* o434 = *(Obj**)(base + 0x434);
    if (o434) {
        void** vt = *(void***)o434;
        ((void(__thiscall*)(Obj*, int))vt[0])(o434, 1);
    }
    Obj* o430 = *(Obj**)(base + 0x430);
    if (o430) {
        void** vt = *(void***)o430;
        ((void(__thiscall*)(Obj*, int))vt[0])(o430, 1);
    }
    Obj* o42c = *(Obj**)(base + 0x42c);
    if (o42c) {
        void** vt = *(void***)o42c;
        ((void(__thiscall*)(Obj*, int))vt[0])(o42c, 1);
    }
    Obj* o428 = *(Obj**)(base + 0x428);
    if (o428) {
        void** vt = *(void***)o428;
        ((void(__thiscall*)(Obj*, int))vt[0])(o428, 1);
    }

    RefCounted* r408 = *(RefCounted**)(base + 0x408);
    if (r408) {
        if (_InterlockedExchangeAdd(&r408->ref1, -1) == 1) {
            void** vt = *(void***)r408;
            ((void(__thiscall*)(RefCounted*))vt[1])(r408);
            if (_InterlockedExchangeAdd(&r408->ref2, -1) == 1) {
                void** vt2 = *(void***)r408;
                ((void(__thiscall*)(RefCounted*))vt2[2])(r408);
            }
        }
    }
    RefCounted* r400 = *(RefCounted**)(base + 0x400);
    if (r400) {
        if (_InterlockedExchangeAdd(&r400->ref1, -1) == 1) {
            void** vt = *(void***)r400;
            ((void(__thiscall*)(RefCounted*))vt[1])(r400);
            if (_InterlockedExchangeAdd(&r400->ref2, -1) == 1) {
                void** vt2 = *(void***)r400;
                ((void(__thiscall*)(RefCounted*))vt2[2])(r400);
            }
        }
    }

    sub_64b230((char*)base + 0x3d4);

    Obj* o3b4 = *(Obj**)(base + 0x3b4);
    if (o3b4) {
        void** vt = *(void***)o3b4;
        ((void(__thiscall*)(Obj*, int))vt[12])(o3b4, 1);
    }
    Obj* o3b0 = *(Obj**)(base + 0x3b0);
    if (o3b0) {
        void** vt = *(void***)o3b0;
        ((void(__thiscall*)(Obj*, int))vt[12])(o3b0, 1);
    }

    RefCounted* r3a4 = *(RefCounted**)(base + 0x3a4);
    if (r3a4) {
        if (_InterlockedExchangeAdd(&r3a4->ref1, -1) == 1) {
            void** vt = *(void***)r3a4;
            ((void(__thiscall*)(RefCounted*))vt[1])(r3a4);
            if (_InterlockedExchangeAdd(&r3a4->ref2, -1) == 1) {
                void** vt2 = *(void***)r3a4;
                ((void(__thiscall*)(RefCounted*))vt2[2])(r3a4);
            }
        }
    }

    void* p374 = *(void**)(base + 0x374);
    if (p374) {
        freeMem(p374);
    }
    void* p368 = *(void**)(base + 0x368);
    *(void**)(base + 0x374) = 0;
    *(void**)(base + 0x378) = 0;
    *(void**)(base + 0x37c) = 0;
    freeMem(p368);

    void* p354 = *(void**)(base + 0x354);
    if (p354) {
        freeMem(p354);
    }
    void* p348 = *(void**)(base + 0x348);
    *(void**)(base + 0x354) = 0;
    *(void**)(base + 0x358) = 0;
    *(void**)(base + 0x35c) = 0;
    freeMem(p348);

    sub_614db0((char*)base + 0x314);
    sub_5dd2c0((char*)base + 0x388);
    sub_5832e0((char*)base + 0x2ec);
    sub_590630(base);
}
