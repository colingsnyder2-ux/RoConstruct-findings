// from server: 72% by colin
struct String {
    unsigned char data[28];
    String();
    ~String();
};

struct Name {
    String s;
};

struct TypedPropertyDescriptor {
    char pad[0x18];
    void* field18;
    bool setValue(const Name& name, const String& value);
};

extern "C" void __stdcall String_ctor(String*);
extern "C" void __stdcall String_dtor(String*);
extern const Name& __cdecl getLocalScope();
extern bool __cdecl compareName(const Name&, const Name&);

bool TypedPropertyDescriptor::setValue(const Name& name, const String& value) {
    String local;
    String_ctor(&local);
    const Name& scope = getLocalScope();
    bool result = compareName(scope, name);
    if (result) {
        void* obj = field18;
        void** vtable = *(void***)obj;
        typedef void (__thiscall *SetFn)(void*, const String&);
        SetFn fn = (SetFn)vtable[3];
        fn(obj, value);
        String_dtor(&local);
        return true;
    }
    String_dtor(&local);
    return false;
}
