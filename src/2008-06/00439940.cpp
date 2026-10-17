// from server: 32% by colin
struct Str_00437ea0 { int words[8]; };
extern void (__thiscall* str_ctor_00437ea0)(Str_00437ea0*, Str_00437ea0*);

struct X_00437ea0 {
    char pad[0xac];
    Str_00437ea0 value;
    Str_00437ea0* copy(Str_00437ea0* out);
};

struct String;
extern const char* (__thiscall *string_c_str)(const String*);

struct Key {
    char padding[4];
    String* unused;
};

struct Item {
    void initialize();
};

struct Collection {
    Item* find(const char*);
};

struct TypedPropertyDescriptor {
    void set(void*);
};

struct MarshaledListener {
    void set(void*);
};

struct CSelectionPropGrid {
    char pad0[0x138];
    void* field138;
    char pad1[0x19c - 0x13c];
    MarshaledListener listener19c;
    char pad2[0x1b4 - 0x1a0];
    TypedPropertyDescriptor prop1b4;

    void set(void* value);
};

extern "C" int __stdcall mfc_1603(void*);
extern "C" int __stdcall mfc_601(void*, void*);
extern "C" void __stdcall mfc_910(void*);

void CSelectionPropGrid::set(void* value)
{
    void* obj = *(void**)((char*)field138 + 8);
    X_00437ea0* x = ((X_00437ea0* (__thiscall*)(CSelectionPropGrid*, void*))0x438630)(this, obj);
    Collection* coll = *(Collection**)((char*)x + 0xc0);
    int count = *(int*)((char*)coll + 0x28);
    int i = 0;
    if (count > 0)
    {
        do
        {
            Item* item = ((Item* (__thiscall*)(Collection*, int))0x712420)(coll, i);
            Str_00437ea0 a;
            Str_00437ea0 b;
            ((Str_00437ea0* (__thiscall*)(Item*, Str_00437ea0*))0x437ea0)(item, &a);
            ((Str_00437ea0* (__thiscall*)(CSelectionPropGrid*, Str_00437ea0*))0x437ea0)(this, &b);
            int r = mfc_601(&b, &a);
            mfc_910(&b);
            mfc_910(&a);
            if (r < 0)
                break;
            coll = *(Collection**)((char*)x + 0xc0);
            i++;
        } while (i < *(int*)((char*)coll + 0x28));
    }
    ((void (__thiscall*)(X_00437ea0*, void*, int))0x712790)(x, value, i);
    void* v = *(void**)((char*)value + 0x138);
    void* p = &v;
    ((void (__thiscall*)(TypedPropertyDescriptor*, void**))0x5644a0)(&prop1b4, &p);
    *(void**)p = (char*)value + 0x118;
    void* q = (char*)value + 0x118;
    ((void (__thiscall*)(MarshaledListener*, void**))0x4213a0)(&listener19c, &q);
}
