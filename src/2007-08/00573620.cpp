// from server: 58% by colin
// roc 2007-08 00573620  unit: RBX::VTexture::?$FactoryProduct  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573620

extern "C" {
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6AC(void*);
}

struct RBX_String {
    void* data[8];
};

struct RBX_Base {
    void* vtable;
};

struct RBX_VTexture_FactoryProduct : RBX_Base {
    char pad[0x114 - 4];
    float field_114;
    float field_118;

    RBX_VTexture_FactoryProduct();
};

extern float g_797988;
extern char g_79F820;

void __stdcall sub_5735B0(RBX_VTexture_FactoryProduct* self);
void __stdcall sub_541BF0(RBX_VTexture_FactoryProduct* self, RBX_String* str);

RBX_VTexture_FactoryProduct::RBX_VTexture_FactoryProduct()
{
    sub_5735B0(this);
    float v = g_797988;
    this->vtable = (void*)0x7AA7FC;
    *(void**)((char*)this + 4) = (void*)0x7AA7F4;
    *(void**)((char*)this + 0x10) = (void*)0x7AA7EC;
    *(void**)((char*)this + 0x14) = (void*)0x7AA7DC;
    *(void**)((char*)this + 0x2C) = (void*)0x7AA7CC;
    *(void**)((char*)this + 0x44) = (void*)0x7AA7BC;
    *(void**)((char*)this + 0x5C) = (void*)0x7AA7AC;
    *(void**)((char*)this + 0x74) = (void*)0x7AA79C;
    *(void**)((char*)this + 0x8C) = (void*)0x7AA78C;
    this->field_114 = v;
    this->field_118 = v;

    RBX_String str;
    sub_77E698(&str);
    sub_541BF0(this, &str);
    sub_77E6AC(&str);
}
