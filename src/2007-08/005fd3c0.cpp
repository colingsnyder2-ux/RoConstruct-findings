// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct Obj {
    void* vptr;
};

struct Inner {
    char pad[0x64];
};

struct Inner2 {
    char pad[0x1d8];
};

struct Holder {
    char pad[0x18];
    Obj* field18;
    char pad2[4];
    Inner2* field20;
};

extern Obj* g_8c6f88;
extern Obj* g_8c6fa4;

void __cdecl sub_58e8c0(void* out);
void __cdecl sub_530100(void* p);
void __cdecl sub_541630(void* p, void* arg);
void* __cdecl sub_561b10(int a, void* b);
void __cdecl sub_58c810(void* p);

struct HammerTool {
    char pad[0x18];
    Obj* field18;
    Inner2* field20;
    void method(int arg);
};

void HammerTool::method(int arg)
{
    if (this->field20 == 0)
        return;

    void* local = 0;
    sub_58e8c0(&local);

    RefCounted* rc = 0;
    if (local != 0)
        rc = (RefCounted*)((char*)local + 4);

    Inner2* p20 = this->field20;
    Inner* inner = *(Inner**)((char*)p20 + 0x1d8);
    void* edi = *(void**)((char*)inner + 0x64);

    sub_530100(edi);

    Obj* g1 = g_8c6f88;
    void** vt1 = *(void***)g1;
    void (*fn1)(void*, void*) = (void (*)(void*, void*))vt1[2];
    fn1((char*)edi + 0xa8, rc);

    float f = 0.0f;

    void* eax2 = 0;
    if (local != 0)
        eax2 = (char*)local + 4;

    Obj* g2 = g_8c6fa4;
    void** vt2 = *(void***)g2;
    void (*fn2)(void*, void*) = (void (*)(void*, void*))vt2[2];
    fn2(eax2, &f);

    sub_541630((void*)this->field18, (void*)arg);
    sub_541630((void*)this->field20, 0);

    void* r = sub_561b10(2, this->field18);
    sub_58c810(r);

    if (local != 0) {
        RefCounted* r2 = (RefCounted*)((char*)local + 4);
        if (_InterlockedExchangeAdd(&r2->refCount, -1) == 1) {
            void** vt = *(void***)r2;
            void (*d)(void*) = (void (*)(void*))vt[1];
            d(r2);
            if (_InterlockedExchangeAdd(&r2->weakCount, -1) == 1) {
                void** vt2b = *(void***)r2;
                void (*d2)(void*) = (void (*)(void*))vt2b[2];
                d2(r2);
            }
        }
    }
}
