// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long refcount2;
};

struct SmartPtr {
    void* ptr;
};

struct ChangePropertyItem {
    void* vptr;
    void* field4;
};

struct List {
    void* field0;
    void* field4;
};

struct Replicator {
    char pad0[0x2c74];
    List list;
    char pad1[0x2cd4 - 0x2c74 - 8];
    void* field2cd4;
    void* field2cd8;
    char pad2[0x2d1c - 0x2cd8 - 4];
    void* field2d1c;
    void* field2d20;

    void NewInstanceItem(void* a, void* b, void* c);
    bool check_fn(void* p);
    void call_4b01e0(SmartPtr* sp, void* arg);
    void* get_something();
    void ctor_cpi(ChangePropertyItem* self, SmartPtr* sp, void* arg);
    void ctor_cpi2(ChangePropertyItem* self, SmartPtr* sp, void* arg);
    void add_item(ChangePropertyItem* item);
    void add_item2(ChangePropertyItem* item);
};

void __stdcall ctor_smartptr(SmartPtr* self, void* p, int zero);
void __stdcall ctor_smartptr2(SmartPtr* self, void* p, int zero);
void __stdcall dtor_smartptr(SmartPtr* self);
void __stdcall dtor_smartptr2(SmartPtr* self);
bool __cdecl check_422ae0(void* a, void* b);
void* __cdecl operator_new(unsigned int);
void* __cdecl operator_new2(unsigned int);

void Replicator::NewInstanceItem(void* a, void* b, void* c)
{
    SmartPtr sp1;
    SmartPtr sp2;
    SmartPtr sp3;
    SmartPtr sp4;
    SmartPtr sp5;
    SmartPtr sp6;

    ctor_smartptr(&sp1, field2d1c, 0);
    ctor_smartptr2(&sp2, field2d20, 0);

    if (sp1.ptr == field2cd8) {
        dtor_smartptr(&sp3);
        dtor_smartptr(&sp4);
        if (sp1.ptr) {
            RefCounted* r = (RefCounted*)sp1.ptr;
            if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                void** vt = (void**)r->vptr;
                ((void(__thiscall*)(void*))vt[1])(r);
            }
            if (_InterlockedExchangeAdd(&r->refcount2, -1) == 1) {
                void** vt = (void**)r->vptr;
                ((void(__thiscall*)(void*))vt[2])(r);
            }
        }
        return;
    }

    void* p2cd4 = field2cd4;
    void* arg = c;
    if (p2cd4 != 0) {
        void* edx = 0;
        if (sp1.ptr != 0) {
            edx = (char*)sp1.ptr + 0x14;
        }
        if (arg == *(void**)p2cd4 && edx == *(void**)((char*)p2cd4 + 4)) {
            goto cleanup;
        }
    }

    if (check_fn(sp1.ptr)) {
        goto cleanup;
    }

    if (arg == (void*)0x973d34) {
        SmartPtr tmp;
        tmp.ptr = sp1.ptr;
        if (sp1.ptr) {
            _InterlockedExchangeAdd((volatile long*)((char*)sp1.ptr + 4), 1);
        }
        call_4b01e0(&tmp, arg);
        goto cleanup;
    }

    {
        unsigned int flags = *(unsigned int*)((char*)arg + 0x10);
        flags >>= 1;
        if (!(flags & 1)) {
            goto cleanup;
        }
    }

    {
        void* r = get_something();
        if (r != 0) {
            void* p170 = *(void**)((char*)r + 0x170);
            if (p170 != 0) {
                if (check_422ae0(sp1.ptr, p170)) {
                    ChangePropertyItem* item = (ChangePropertyItem*)operator_new(0x14);
                    if (item != 0) {
                        ctor_cpi(item, &sp1, arg);
                    }
                    add_item(item);
                    goto cleanup;
                }
            }
        }
        ChangePropertyItem* item = (ChangePropertyItem*)operator_new2(0x14);
        if (item != 0) {
            ctor_cpi2(item, &sp1, arg);
        }
        add_item2(item);
    }

cleanup:
    dtor_smartptr2(&sp3);
    dtor_smartptr2(&sp4);
    dtor_smartptr2(&sp1);
}
