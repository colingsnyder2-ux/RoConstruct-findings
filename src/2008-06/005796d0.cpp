// from server: 58% by colin
struct TypeInfo {};

struct HolderTable {
    void* (__thiscall *destroy)(void*, unsigned int);
};

struct Holder {
    const HolderTable* table;
};

struct String {
    unsigned int data[8];
    String();
    String(const String&);
    ~String();
};

extern const TypeInfo int_type;
extern const TypeInfo float_type;
extern const TypeInfo double_type;
extern const double double_zero;

extern const TypeInfo* get_type(const TypeInfo*);
extern const TypeInfo* get_type2(const TypeInfo*);
extern Holder* make_holder();
extern void* map_find(void*, const void*);

extern "C" void* __stdcall string_ctor(void*, const void*);
extern "C" void __stdcall string_dtor(void*);

struct S {
    unsigned char pad[0x38];
    void* func;
    unsigned int offset;

    void method(int, int, int, int, int);
};

void S::method(int a1, int a2, int a3, int a4, int a5)
{
    const TypeInfo* t1 = get_type(&int_type);
    unsigned char b = *(const unsigned char*)t1;
    const TypeInfo* t2 = get_type2(&int_type);
    (void)b;
    (void)t2;

    String s1;
    string_ctor(&s1, t2);

    String s2;
    string_ctor(&s2, t2);

    void* result = ((void* (__thiscall*)(void*, void*))func)((char*)this + offset, &s2);

    Holder* h = make_holder();
    *(void**)h = result;
    void** slot = (void**)((char*)h + 4);

    void* found = map_find(&s1, slot);
    if (found != slot) {
        void* tmp = *slot;
        *(void**)found = tmp;
        *slot = *(void**)found;
    }

    if (s1.data[0] != 0) {
        void* p = (void*)s1.data[0];
        void** vt = *(void***)p;
        ((void (__thiscall*)(void*, int))vt[0])(p, 1);
    }

    string_dtor(&s1);
}
