// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct VPartInstance {
    char pad[0x104];
    int field104;
    char pad2[0xF4];
    int field1FC;
    int field200;
    int field204;
    void FilteredSelection();
};

extern "C" void __stdcall sub_802458(void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void* __cdecl sub_557950(int);
extern "C" void* __cdecl sub_5D42F0(void*, void*);
extern "C" void __cdecl sub_4025B0(void*, void*);

void VPartInstance::FilteredSelection()
{
    if (field1FC != 0)
        return;
    if (field104 == 0)
        return;

    void* str;
    sub_802458(&str);

    void* local;
    local = 0;

    void* p = sub_557950(field104);
    void* arg;
    if (p != 0)
        arg = (char*)p + 0xE4;
    else
        arg = 0;

    void* result = sub_5D42F0(&local, arg);
    int val = *(int*)result;
    result = (char*)result + 4;
    field1FC = val;
    sub_4025B0(&field200, result);

    if (local != 0) {
        RefCounted* rc = (RefCounted*)local;
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
            rc->Release();
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
            rc->Release();
        }
    }

    sub_802468(&str);
}
