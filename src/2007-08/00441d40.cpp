// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct ContentId {
    void* ptr;
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

struct EnumDescriptor;

struct Descriptor {
    void* vptr;
    void* name;
};

struct EnumItem : Descriptor {
    const EnumDescriptor* owner;
    int value;
    unsigned int index;
};

struct EnumDescriptor {
    void convertToValue(unsigned int index, void* variant) const;
};

struct Variant {
    void* data;
};

struct SoundIdImpl {
    void* vptr;
    void* refcount;
};

extern "C" void* __cdecl sub_49D670(void* a, void* b);
extern "C" void __cdecl sub_441AA0();
extern "C" void __cdecl sub_424410();

SoundId::SoundId(const ContentId& id)
{
    void* local;
    void* tmp;
    void* result;
    void* obj;

    local = 0;
    sub_49D670((void*)&id, (void*)&local);
    sub_441AA0();
    sub_424410();

    obj = local;
    if (obj != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 4), -1) == 1) {
            void** vt = *(void***)obj;
            ((void (__thiscall*)(void*))vt[1])(obj);
            if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 8), -1) == 1) {
                void** vt2 = *(void***)obj;
                ((void (__thiscall*)(void*))vt2[2])(obj);
            }
        }
    }
}
