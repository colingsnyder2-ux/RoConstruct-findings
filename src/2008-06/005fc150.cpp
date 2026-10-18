// from server: 63% by colin
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Object;

struct Base {
    void f();
};

struct S : Base {
    char pad[0x168];
    int field168;
    int field16c;
    char pad2[0x178 - 0x16c - 4];
    int field178;
    int field17c;
    char pad3[0x188 - 0x17c - 4];
    Object* field188;

    void g();
};

void S::g()
{
    Base::f();
    if (field188 != 0) {
        Object* o = field188;
        if (o != 0) {
            void* p = (char*)o + 0x24;
            void* q = &field168;
            ((void (__thiscall*)(void*, void*))0x5e5a80)(p, q);
        }
        o = field188;
        if (o != 0) {
            void* p = (char*)o + 0x44;
            void* q = &field16c;
            ((void (__thiscall*)(void*, void*))0x5e5a80)(p, q);
        }
        o = field188;
        if (o != 0) {
            void* p = (char*)o + 0x130;
            void* q = &field178;
            ((void (__thiscall*)(void*, void*))0x5e5a80)(p, q);
        }
        o = field188;
        if (o != 0) {
            void* p = (char*)o + 0x150;
            void* q = &field17c;
            ((void (__thiscall*)(void*, void*))0x5e5a80)(p, q);
        }
        ((void (__thiscall*)(void*))0x456e80)(&field188);
    }
}
