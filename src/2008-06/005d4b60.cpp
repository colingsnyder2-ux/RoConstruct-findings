// from server: 58% by colin
struct RBX_BodyColors {
    char pad0[0x104];
    void* field_104;
    char pad1[0x134 - 0x108];
    int field_134;
    int field_138;
    int field_13c;
    int field_140;
    int field_144;
    int field_148;
    void apply(void*);
};

extern "C" void* __stdcall sub_6A17C6(void*, int, void*, void*, int);
extern "C" void* __fastcall sub_5D4460(void*);
extern "C" void* __fastcall sub_5D8A10(void*);
extern "C" void* __fastcall sub_5D8B10(void*);
extern "C" void* __fastcall sub_5D8C10(void*);
extern "C" void* __fastcall sub_5D8D10(void*);
extern "C" void* __fastcall sub_5D8E10(void*);
extern "C" void* __fastcall sub_5D8F10(void*);
extern "C" void __fastcall sub_59DF40(void*, int, int);

void RBX_BodyColors::apply(void* a) {
    if (field_104 != 0) {
        void* r = sub_6A17C6(field_104, 0, (void*)0x92907c, (void*)0x932a40, 0);
        if (r != 0) {
            void* r2 = sub_5D4460(r);
            if (r2 != 0) {
                return;
            }
        }
    }

    void* v;

    v = sub_5D8A10(a);
    if (v != 0) {
        sub_59DF40(v, field_134, 0);
    }

    v = sub_5D8C10(a);
    if (v != 0) {
        sub_59DF40(v, field_144, 0);
    }

    v = sub_5D8D10(a);
    if (v != 0) {
        sub_59DF40(v, field_148, 0);
    }

    v = sub_5D8B10(a);
    if (v != 0) {
        sub_59DF40(v, field_140, 0);
    }

    v = sub_5D8E10(a);
    if (v != 0) {
        sub_59DF40(v, field_138, 0);
    }

    v = sub_5D8F10(a);
    if (v != 0) {
        sub_59DF40(v, field_13c, 0);
    }
}
