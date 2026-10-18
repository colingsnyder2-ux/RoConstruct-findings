// from server: 45% by colin
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* __stdcall InterlockedCompareExchangePtr(void* volatile*, void*, void*);

struct RefCounted {
    void* pad0;
    void* pad4;
    void* ptr8;
    void* release();
};

struct ViewG3D {
    char pad0[0x14];
    void* field14;
    char pad18[0x2c];
    char field44;
    char pad45[3];
    void* field48;
    void update();
};

struct Other {
    char pad0[0x240];
    char flag240;
    char pad241[0x93];
    void* field2d4;
};

struct Holder {
    void* p;
    ~Holder();
};

extern "C" void* __cdecl func5ebbb0(void* out, void* arg);
extern "C" void __cdecl func502a70(void* p);
extern "C" void __cdecl func598fa0(void* self, void* val);
extern "C" void __cdecl func45ad90(void* p);

void ViewG3D::update() {
    if (field44 != 0)
        return;

    Other* o;
    if (field14 != 0) {
        o = (Other*)((RefCounted*)field14)->release();
    } else {
        o = 0;
    }

    if (o->flag240 == 0) {
        if (field48 != 0) {
            if (InterlockedCompareExchangePtr((void* volatile*)((char*)field48 + 4), 0, 0) == 0) {
                func45ad90(field48);
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

    Holder h;
    h.p = 0;
    func5ebbb0(&h, o->field2d4);
    void* val = *(void**)h.p;
    func598fa0(&field48, val);
    h.~Holder();
}
