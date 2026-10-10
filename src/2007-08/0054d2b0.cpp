// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String_sink {
    void* vptr;
    void* refcount;
    char buf1[0x1c];
    char buf2[0x1c];
    int field40;
    int field44;
    String_sink(const String_sink& other);
};

String_sink::String_sink(const String_sink& other)
{
    this->vptr = other.vptr;
    this->refcount = other.refcount;
    if (this->refcount) {
        _InterlockedExchangeAdd((volatile long*)((char*)this->refcount + 4), 1);
    }
    void* src1 = (char*)&other + 8;
    void* dst1 = (char*)this + 8;
    void* src2 = (char*)&other + 0x24;
    void* dst2 = (char*)this + 0x24;
    // call basic_string copy ctor at 0x77e69c
    extern void __stdcall string_copy_ctor(void*, void*);
    string_copy_ctor(dst1, src1);
    string_copy_ctor(dst2, src2);
    this->field40 = other.field40;
    this->field44 = other.field44;
}
