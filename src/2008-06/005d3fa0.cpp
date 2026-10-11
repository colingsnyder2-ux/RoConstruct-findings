// from server: 47% by colin
struct PropDesc {
    char pad0[8];
    int offset;
};

struct GetSet {
    char pad0[8];
    int offset;
};

struct BoundPropGetSet {
    char pad0[8];
    int offset;
    void assign(const GetSet* other);
};

extern "C" void __stdcall string_copy_ctor(void* dest, const void* src);

void BoundPropGetSet::assign(const GetSet* other)
{
    char buf[4];
    *(int*)buf = 0;
    const char* src = (const char*)other;
    if (src != 0)
        src -= 0x14;
    else
        src = 0;
    int base = this->offset;
    char* dst = (char*)this + base;
    string_copy_ctor(dst, src);
    *(int*)(dst + 0x1c) = *(int*)(src + 0x1c);
}
