// from server: 31% by colin
struct PropertyDescriptor {
    void* m_value;
    void* m_getter;
    void* m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    void* getset;
    void* field18;
    bool init(void* classDescriptor, void* type, const char* name, const char* category, void* getsetArg, unsigned flags, unsigned security);
};

extern "C" {
    bool __stdcall sub_55D8A0();
    bool __stdcall sub_55D4D0();
    void __stdcall sub_52CB30();
    void __stdcall sub_77E6A4();
    void __stdcall sub_77E69C();
    void __stdcall sub_77E6AC();
}

bool TypedPropertyDescriptor::init(void* classDescriptor, void* type, const char* name, const char* category, void* getsetArg, unsigned flags, unsigned security)
{
    if (sub_55D8A0())
        return true;

    char buf[8];
    sub_77E6A4();
    int state = 0;
    sub_52CB30();
    int val = 0;
    sub_55D4D0();
    if (sub_55D4D0()) {
        sub_77E69C();
        void* p = field18;
        void* vt = *(void**)p;
        void* fn = *(void**)((char*)vt + 8);
        ((void (__stdcall*)(void*, void*))fn)(p, &val);
        sub_77E6AC();
    }
    sub_77E6AC();
    return true;
}
