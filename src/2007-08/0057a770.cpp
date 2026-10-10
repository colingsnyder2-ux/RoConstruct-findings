// from server: 50% by colin
struct RBX_Name {
    void* data[8];
};

struct RBX_String {
    void* data[8];
};

struct RBX_Base {
    void* vtable;
};

struct RBX_VSpecialShape {
    void* vtable;
    char pad[0xE4];
    int field_e8;
    float field_ec;
    float field_f0;
    float field_f4;
    RBX_String str_f8;
    RBX_String str_118;
    float field_138;
    float field_13c;
    float field_140;
};

extern "C" {
    void __stdcall sub_52cb30();
    void __stdcall sub_541bf0(RBX_VSpecialShape* self, RBX_String* str);
    void __stdcall sub_57a710(RBX_VSpecialShape* self);
    void __stdcall sub_77e6a4(RBX_String* str);
    void __stdcall sub_77e698(RBX_String* str, const char* s);
    void __stdcall sub_77e6ac(RBX_String* str);
}

void RBX_VSpecialShape_ctor(RBX_VSpecialShape* self) {
    sub_57a710(self);
    self->vtable = (void*)0x7ab4e4;
    *(void**)((char*)self + 4) = (void*)0x7ab4dc;
    *(void**)((char*)self + 0x10) = (void*)0x7ab4d4;
    *(void**)((char*)self + 0x14) = (void*)0x7ab4c4;
    *(void**)((char*)self + 0x2c) = (void*)0x7ab4b4;
    *(void**)((char*)self + 0x44) = (void*)0x7ab4a4;
    *(void**)((char*)self + 0x5c) = (void*)0x7ab494;
    *(void**)((char*)self + 0x74) = (void*)0x7ab484;
    *(void**)((char*)self + 0x8c) = (void*)0x7ab474;
    self->field_e8 = 0;
    self->field_ec = 1.0f;
    self->field_f0 = 1.0f;
    self->field_f4 = 1.0f;
    sub_77e6a4(&self->str_f8);
    *(int*)((char*)&self->str_f8 + 0x1c) = (int)sub_52cb30;
    sub_77e6a4(&self->str_118);
    *(int*)((char*)&self->str_118 + 0x1c) = (int)sub_52cb30;
    self->field_138 = 1.0f;
    self->field_13c = 1.0f;
    self->field_140 = 1.0f;
    RBX_String tmp;
    sub_77e698(&tmp, "Mesh");
    sub_541bf0(self, &tmp);
    sub_77e6ac(&tmp);
}
