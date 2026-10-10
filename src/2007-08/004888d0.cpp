// from server: 55% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void AddRef();
    void Release();
};

struct Entry {
    void* ptr;
    RefCounted* ref;
};

struct CRenderSettings {
    char pad0[8];
    Entry* begin;
    Entry* end;
    char pad1[4];
    Entry* stackTop;
    void addEntry(Entry* e, int idx);
    void func(void* a, int b, RefCounted* c);
};

void CRenderSettings::func(void* a, int b, RefCounted* c)
{
    Entry local;
    local.ptr = 0;
    local.ref = 0;

    int count = 0;
    if (begin != 0)
        count = (int)((char*)end - (char*)begin) / 4;

    Entry* saved = stackTop;
    stackTop = &local;

    if (count > 0) {
        for (int i = 0; i < count; ++i) {
            if (begin == 0 || i >= (int)((char*)end - (char*)begin) / 4)
                _invalid_parameter_noinfo();

            Entry* e = &begin[i];
            Entry tmp;
            tmp.ptr = a;
            tmp.ref = c;
            if (c != 0)
                _InterlockedExchangeAdd((volatile long*)((char*)c + 4), 1);

            addEntry(&tmp, b);
        }
    }

    stackTop = saved;

    if (c != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)c + 4), -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)*(void**)c)[1])(c);
            if (_InterlockedExchangeAdd((volatile long*)((char*)c + 8), -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)*(void**)c)[2])(c);
            }
        }
    }
}
