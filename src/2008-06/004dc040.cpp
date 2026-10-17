// from server: 36% by colin
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
extern "C" void* __stdcall InterlockedDecrement(void*);

struct GImage {
    void release();
};

struct Obj {
    char pad0[0x14];
    void* field14;
    char pad18[0x30];
    void* field48;
    char pad4c[0x44];
    unsigned char field44;
};

struct ViewG3D {
    char pad0[0x14];
    void* field14;
    char pad18[0x30];
    void* field48;
    char pad4c[0x44];
    unsigned char field44;
    void update();
};

void ViewG3D::update() {
    if (field44 != 0)
        return;
    void* p = field14;
    void* esi;
    if (p != 0) {
        esi = ((void* (__thiscall*)(void*))0x4b3870)(p);
    } else {
        esi = 0;
    }
    if (*(unsigned char*)((char*)esi + 0x240) == 0) {
        if (field48 != 0) {
            if (InterlockedDecrement((char*)field48 + 4) == 0) {
                ((void (__thiscall*)(void*))0x45ad90)(field48);
                if (field48 != 0) {
                    void** vt = *(void***)field48;
                    ((void (__thiscall*)(void*, int))vt[0])(field48, 1);
                }
            }
            field48 = 0;
        }
        return;
    }
    if (field48 != 0)
        return;
    void* tmp = 0;
    void* r = ((void* (__cdecl*)(void*, void*))0x5ebbb0)(&tmp, *(void**)((char*)esi + 0x2d4));
    void* val = *(void**)r;
    ((void (__thiscall*)(void**, void*))0x598fa0)(&field48, val);
    ((void (__thiscall*)(void*))0x502a70)(&tmp);
}
