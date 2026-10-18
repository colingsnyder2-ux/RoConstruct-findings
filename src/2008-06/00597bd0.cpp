// from server: 75% by colin
struct String {
    unsigned char data[28];
    String();
    ~String();
};

struct Name {
    String s;
};

struct Descriptor {
    char pad[0x18];
    void* field18;
    bool setValue(const Name& name, const String& value);
};

extern "C" void* __cdecl getLocalScope();
extern bool __cdecl compareName(const Name& a, const Name& b);

bool Descriptor::setValue(const Name& name, const String& value)
{
    String local;
    const Name& scope = *(const Name*)getLocalScope();
    if (compareName(scope, name)) {
        void* obj = field18;
        void** vtbl = *(void***)obj;
        typedef void (__thiscall *Fn)(void*, const Name&, const String&);
        Fn fn = (Fn)vtbl[3];
        fn(obj, name, value);
        return true;
    }
    return false;
}
