// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ArgList {
    float x;
    float y;
    float z;
};

struct RefCounted;

struct RefCountedVtbl {
    void (__stdcall *dtor)(RefCounted*);
    void (__stdcall *release)(RefCounted*);
};

struct RefCounted {
    RefCountedVtbl* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct VHumanoid {
    char pad[0x138];
    int field138;
    RefCounted* field13c;
    float field140;
    float field144;
    float field148;

    void sub_5a8120(void* p);
    void sub_5a8090(ArgList* p);
};

extern float g_5a8c0bdc;
extern float g_5a8c0be0;
extern float g_5a8c0be4;
extern char g_5a8c0be8;

extern "C" void __stdcall sub_573f80(void* out, void* in);
extern "C" void __stdcall sub_4f7500(void* p);

void VHumanoid::sub_5a8120(void* p) {}
void VHumanoid::sub_5a8090(ArgList* p) {}

void VHumanoid_5a82f0(VHumanoid* self, void* a, void* b)
{
    if (a == 0)
        return;

    ArgList args;
    sub_573f80(&args, b);
    sub_4f7500(&args);

    if ((g_5a8c0be8 & 1) == 0) {
        g_5a8c0bdc = 1.0f;
        g_5a8c0be8 |= 1;
        g_5a8c0be0 = 0.0f;
        g_5a8c0be4 = 0.0f;
    }

    float fx = g_5a8c0bdc + args.x;
    float fy = g_5a8c0be0 + args.y;
    float fz = g_5a8c0be4 + args.z;

    self->field138 = 0;
    RefCounted* old = self->field13c;
    self->field13c = 0;
    self->field140 = fx;
    self->field144 = fy;
    self->field148 = fz;

    if (old != 0) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            old->vptr->dtor(old);
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                old->vptr->release(old);
            }
        }
    }

    self->sub_5a8120(a);
    self->sub_5a8090(&args);
}
