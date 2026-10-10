// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct BackpackItem {
    char pad0[0x120];
    void* findChildByType(const char* typeName);
    void setItem(void* item);
    void removeItem(void* item);
    void addItem(void* item);
};

struct LocalBackpack {
    char pad0[0x120];
    void* findChildByType(const char* typeName);
    void setItem(void* item);
    void removeItem(void* item);
    void addItem(void* item);
    void method_5d18c0(void* a, void* b, void* c);
};

extern "C" void* __cdecl sub_630d36(void* a, void* b, void* c, void* d, void* e);
extern "C" void* __cdecl sub_495820(void* a);

void LocalBackpack::method_5d18c0(void* a, void* b, void* c)
{
    void* result = sub_630d36(a, (void*)0x881f4c, (void*)0x88e1c8, 0, b);
    if (result != 0) {
        void* found = sub_495820((char*)this - 0x120);
        if (result == found) {
            ((BackpackItem*)((char*)this - 0x120))->setItem(result);
        }
    } else {
        result = sub_630d36(a, (void*)0x881f4c, (void*)0x88c91c, 0, b);
        if (result != 0) {
            ((BackpackItem*)((char*)this - 0x120))->removeItem(result);
        } else {
            result = sub_630d36(a, (void*)0x881f4c, (void*)0x8a65c4, 0, b);
            if (result != 0) {
                ((BackpackItem*)((char*)this - 0x120))->addItem(result);
            }
        }
    }

    RefCounted* rc = (RefCounted*)c;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))rc->vptr[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))rc->vptr[2])(rc);
            }
        }
    }
}
