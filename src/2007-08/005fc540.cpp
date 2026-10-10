// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* ref;
};

struct Instance;

struct Tool {
    void* vptr;
    int field_04[5];
    Instance* field_18;
    int field_1c;
    void* field_20;
    SharedPtr field_24;
    int field_2c;
    int field_30;
    int field_34[0x1d8/4 - 0x34/4];
    void* field_1d8;
    void activate(int);
};

extern "C" void __cdecl sub_5a4aa0(int);
extern "C" void __cdecl sub_402a60(void*, void*);
extern "C" void* __cdecl sub_5405e0(void*);
extern "C" void __cdecl sub_492940(void*, void*);
extern "C" void __cdecl sub_541630(void*, int);
extern "C" void* __cdecl sub_573f80(void*);
extern "C" void __cdecl sub_5b5720(void*, void*);
extern "C" void* __cdecl sub_561b10(int, void*);
extern "C" void __cdecl sub_58c810(void*);

void Tool::activate(int param)
{
    int local_10;
    SharedPtr local_14;
    SharedPtr local_1c;
    int local_20;

    int result = 0;
    sub_5a4aa0(*(int*)((char*)this + 0x18));
    result = *(int*)((char*)this + 0x2c);
    *(int*)((char*)this + 0x30) = result;

    if (result == 0)
        return;

    if (*(int*)((char*)this + 0x20) == 0) {
        void* vptr = *(void**)this;
        void* fn = *(void**)((char*)vptr + 0x3c);
        void* r = ((void* (__thiscall*)(void*, void*))fn)(this, &local_10);
        *(int*)((char*)this + 0x20) = *(int*)r;
        r = (char*)r + 4;
        local_14.ptr = 0;
        sub_402a60((char*)this + 0x24, r);
        if (local_14.ptr) {
            RefCounted* rc = local_14.ref;
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void* v = *(void**)rc;
                ((void (__thiscall*)(void*))*(void**)((char*)v + 4))(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    void* v2 = *(void**)rc;
                    ((void (__thiscall*)(void*))*(void**)((char*)v2 + 8))(rc);
                }
            }
        }
    }

    void* p20 = *(void**)((char*)this + 0x20);
    void* r1 = sub_5405e0(p20);
    sub_492940(&local_1c, r1);

    if (local_1c.ptr) {
        RefCounted* rc = local_1c.ref;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void* v = *(void**)rc;
            ((void (__thiscall*)(void*))*(void**)((char*)v + 4))(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void* v2 = *(void**)rc;
                ((void (__thiscall*)(void*))*(void**)((char*)v2 + 8))(rc);
            }
        }
    }

    int e18 = *(int*)((char*)this + 0x18);
    void* edi = local_1c.ptr;
    sub_541630(edi, e18);

    void* ebx = *(void**)((char*)edi + 0x1d8);
    void* vptr = *(void**)this;
    void* fn2 = (char*)vptr + 0x40;
    void* r2 = sub_573f80((void*)local_20);
    void* fn3 = *(void**)fn2;
    void* r3 = ((void* (__thiscall*)(void*, void*, void*, void*))fn3)(this, &local_20, (void*)param, r2);
    sub_5b5720(ebx, r3);

    void* vptr2 = *(void**)this;
    void* fn4 = *(void**)((char*)vptr2 + 0x44);
    void* r4 = ((void* (__thiscall*)(void*))fn4)(this);
    void* r5 = sub_561b10(*(int*)((char*)this + 0x18), r4);
    sub_58c810(r5);

    if (local_1c.ptr) {
        RefCounted* rc = local_1c.ref;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void* v = *(void**)rc;
            ((void (__thiscall*)(void*))*(void**)((char*)v + 4))(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void* v2 = *(void**)rc;
                ((void (__thiscall*)(void*))*(void**)((char*)v2 + 8))(rc);
            }
        }
    }
}
