// from server: 51% by colin
struct std_string {
    void* pad[4];
    std_string(const std_string&);
    ~std_string();
};

struct Hopper {
    char pad[0x14c];
};

struct Backpack {
    void* vtable;
    char pad0[8];
    Hopper* hopper0c;
    Hopper* hopper10;
    int field14;
    int field18;
    std_string name;
    Backpack(Hopper* h, const std_string& s);
};

extern "C" void __stdcall sub_77e69c(void*, const std_string*);
extern "C" void __stdcall sub_77e6ac(void*);
extern "C" void __stdcall sub_564c50(Backpack*, Hopper*);

Backpack::Backpack(Hopper* h, const std_string& s)
    : name(s)
{
    Hopper* b = h ? (Hopper*)((char*)h + 0x14c) : 0;
    sub_564c50(this, b);
    vtable = (void*)0x7a91cc;
    hopper0c = h;
    hopper10 = h;
    field14 = 0;
    field18 = 0;
    sub_77e6ac(&name);
}
