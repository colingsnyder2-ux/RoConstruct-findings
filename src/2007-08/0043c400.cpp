// from server: 72% by colin
struct Descriptor {
    void* vtable;
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
};

struct EnumDescriptor {
    char pad[0x120];
    void* field120;
    void* field124;
    bool convertToValue(unsigned int index, void* variant) const;
};

struct Variant {
    void* data;
    Variant();
    ~Variant();
};

struct Name {
    char pad[4];
};

struct EnumConverter {
    char pad[0x120];
    void* field120;
    void* field124;
    bool convertToValue(const Name* name, Variant& variant) const;
};

bool EnumConverter::convertToValue(const Name* name, Variant& variant) const
{
    void* p = *(void**)((char*)field120 + 0x188);
    Variant local;
    void* q = 0;
    if (name != 0)
        q = (char*)name + 4;
    void* r = *(void**)((char*)field124 + 0x18);
    void* s = *(void**)r;
    void* fn = *(void**)((char*)s + 4);
    bool result = ((bool (__thiscall*)(void*, void*, void*))fn)(r, q, &local);
    return result;
}
