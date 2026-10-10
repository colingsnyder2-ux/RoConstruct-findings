// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Sub1 {
    void dtor();
};

struct Sub2 {
    void dtor();
};

struct Sub3 {
    void dtor();
};

struct Sub4 {
    void dtor();
};

struct VSelection {
    char pad0[0x54];
    void* vptr54;
    char pad58[0x190 - 0x58];
    Sub1 sub1;
    Sub2 sub2;
    char pad198[0x1b0 - 0x198];
    RefCounted* ptr1b0;
    RefCounted* ptr1b4;
    void* ptr1b8;
    RefCounted* ptr1bc;

    void dtor();
};

void VSelection::dtor()
{
    this->vptr54 = (void*)0x795374;
    *(void**)((char*)this + 0x54) = (void*)0x795360;
    *(void**)((char*)this + 0x190) = (void*)0x795358;
    *(void**)((char*)this + 0x194) = (void*)0x795340;

    RefCounted* p1b0 = this->ptr1b0;
    RefCounted* p1b4 = this->ptr1b4;
    if (p1b4) {
        _InterlockedExchangeAdd((volatile long*)((char*)p1b4 + 4), 1);
    }

    // call 0x40d550 with ecx = &local
    // (some cleanup helper)

    if (this->ptr1b8) {
        // call 0x432530 with ecx = ptr1b8 + 0xe8
    }

    // call 0x5595a0

    RefCounted* p1bc = this->ptr1bc;
    if (p1bc) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p1bc + 4), -1) == 1) {
            void** vt = *(void***)p1bc;
            ((void(__thiscall*)(RefCounted*))vt[1])(p1bc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p1bc + 8), -1) == 1) {
                void** vt2 = *(void***)p1bc;
                ((void(__thiscall*)(RefCounted*))vt2[2])(p1bc);
            }
        }
    }

    RefCounted* p1b4b = this->ptr1b4;
    if (p1b4b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p1b4b + 4), -1) == 1) {
            void** vt = *(void***)p1b4b;
            ((void(__thiscall*)(RefCounted*))vt[1])(p1b4b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p1b4b + 8), -1) == 1) {
                void** vt2 = *(void***)p1b4b;
                ((void(__thiscall*)(RefCounted*))vt2[2])(p1b4b);
            }
        }
    }

    // call 0x462510 with ecx = &this->sub2
    // call 0x4073f0 with ecx = &this->sub1
    // call 0x69f1f0 with ecx = this
}
