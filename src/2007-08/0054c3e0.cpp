// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct UString_sink_stream_buffer
{
    void* vptr;
    long* refcount;
    char pad[0x18];
    void* str1;
    char pad2[0x18];
    void* str2;
    char pad3[0x14];
    int field40;
    int field44;
    int field48;
    int field4c;
    int field50;

    UString_sink_stream_buffer* ctor(const UString_sink_stream_buffer* other);
};

extern "C" void __stdcall string_copy_ctor(void*, const void*);

UString_sink_stream_buffer* UString_sink_stream_buffer::ctor(const UString_sink_stream_buffer* other)
{
    this->vptr = other->vptr;
    this->refcount = other->refcount;
    if (this->refcount)
    {
        _InterlockedExchangeAdd(this->refcount + 1, 1);
    }
    string_copy_ctor(&this->str1, &other->str1);
    string_copy_ctor(&this->str2, &other->str2);
    this->field40 = other->field40;
    this->field48 = other->field48;
    this->field4c = other->field4c;
    this->field50 = other->field50;
    return this;
}
