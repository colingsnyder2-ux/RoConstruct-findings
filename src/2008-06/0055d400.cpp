// from server: 89% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MD5HasherImpl {
    char pad0[0x1c];
    int field1c;
    int field20;
    int* field24;
    int field28;
    int* field2c;
    MD5HasherImpl(const MD5HasherImpl& other);
};

MD5HasherImpl::MD5HasherImpl(const MD5HasherImpl& other)
{
    char* self = (char*)this;
    char* src = (char*)&other;

    // call basic_string copy ctor on this (offset 0)
    extern void __stdcall string_copy_ctor(void*, const void*);
    string_copy_ctor(self, src);

    field1c = other.field1c;
    field20 = other.field20;
    field24 = other.field24;
    if (field24 != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)field24 + 4), 1);
    }
    field28 = other.field28;
    field2c = other.field2c;
    if (field2c != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)field2c + 4), 1);
    }
}
