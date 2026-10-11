// from server: 44% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void Release();
    int refCount;
};

struct RefPropDescriptor {
    char pad[0x19c];
    void* begin;
    void* end;
    int checkFlags();
};

int __stdcall sub_005da370();
void __stdcall sub_005d9280(void**);
void __stdcall sub_00557330();
void __stdcall sub_0055a8f0();
void __stdcall sub_004025b0(void*, void*);
void* __stdcall func_005d78f0();

int RefPropDescriptor::checkFlags()
{
    int result = sub_005da370();
    if (result != 0)
        return result;

    void* local = 0;
    sub_005d9280(&local);

    int value = (int)func_005d78f0();

    int count = (int)((char*)end - (char*)begin) >> 3;
    if (value >= count)
        _invalid_parameter_noinfo();

    char* slot = (char*)begin + value * 8;
    *(void**)slot = local;
    sub_004025b0(slot + 4, &local);

    sub_0055a8f0();

    if (local) {
        RefCounted* rc = (RefCounted*)local;
        if (_InterlockedExchangeAdd((volatile long*)&rc->refCount, -1) == 1) {
            rc->Release();
        }
    }

    return value;
}
