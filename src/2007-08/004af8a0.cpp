// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct Creator {
    void* vfptr;
    void* field4;
    void* field8;
};

struct CreatorsMap {
    void* head;
    void* field4;
};

struct FactoryProduct {
    static CreatorsMap* getCreators();
    static const Name& getClassNameUnconstructed();
    static int isConstructed;
    static int isConstructedTrue();

    void* construct();
};

void* __stdcall sub_4af810(void* out);

void* FactoryProduct::construct()
{
    void* result;
    sub_4af810(&result);
    return result;
}

void* __stdcall sub_4af810(void* out)
{
    return out;
}

void* __fastcall FactoryProduct_ctor(void* self, void* edx, void* arg)
{
    void* tmp = 0;
    sub_4af810(&tmp);

    void** out = (void**)arg;
    out[0] = *(void**)tmp;
    void* ref = *(void**)((char*)tmp + 4);
    out[1] = ref;
    if (ref) {
        _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
    }

    void* old = *(void**)((char*)self + 0x14);
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(void*))vt[1])(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(void*))vt2[2])(old);
            }
        }
    }

    return out;
}
