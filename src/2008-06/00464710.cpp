// from server: 65% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CScriptDoc
{
    char padding[0x25c];
    int field_25c;
    void* field_260;
    void f(void*);
};

void CScriptDoc::f(void* out)
{
    *(int*)out = field_25c;
    *(void**)((char*)out + 4) = field_260;
    if (field_260 != 0)
        _InterlockedExchangeAdd((volatile long*)((char*)field_260 + 4), 1);
}
