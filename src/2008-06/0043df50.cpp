// from server: 47% by colin
struct String {
    const char* c_str() const;
};

struct Descriptor {
    Descriptor(const char* name, int attributes);
};

struct Base {
    void construct(const String& name, int attributes);
    int getFlags();
    void setFlags(int flags);
    void setName(const String& name);
};

struct RefItem : Base {
    RefItem(const String& name, int attributes);
    int field_0x20;
    int field_0x10c;
};

extern "C" void* __stdcall sub_803f10(void*, const char*);

RefItem::RefItem(const String& name, int attributes) {
    construct(name, attributes);
    *(void**)this = (void*)0x814dbc;
    *(void**)((char*)this + 0x20) = (void*)0x814d5c;
    *(void**)((char*)this + 0x10c) = (void*)0x814d54;
    int f = getFlags();
    setFlags(f | 2);
    int f2 = getFlags();
    setFlags(f2 & ~1);
    String s;
    sub_803f10(&s, "(Script)");
    setName(s);
}
