// from server: 65% by tester
struct VDecalFactoryProduct {
    char pad[0xec];
    int field_ec;
    char pad2[0x1c];
    float field_10c;
    float field_110;
    VDecalFactoryProduct* ctor();
};

struct String {
    void* data[4];
    String();
    String(const char*);
    ~String();
};

extern "C" {
    void* __stdcall sub_77e6a4();
    void __stdcall sub_77e698(void*);
    void __stdcall sub_77e6ac(void*);
}

void __stdcall sub_5732f0();
void __stdcall sub_541bf0();
void* __stdcall sub_52cb30();

extern float dword_79b500;

VDecalFactoryProduct* VDecalFactoryProduct::ctor()
{
    sub_5732f0();
    this->field_ec = 0;
    *(int*)((char*)this + 0x00) = 0x7aa5d4;
    *(int*)((char*)this + 0x04) = 0x7aa5cc;
    *(int*)((char*)this + 0x10) = 0x7aa5c4;
    *(int*)((char*)this + 0x14) = 0x7aa5b4;
    *(int*)((char*)this + 0x2c) = 0x7aa5a4;
    *(int*)((char*)this + 0x44) = 0x7aa594;
    *(int*)((char*)this + 0x5c) = 0x7aa584;
    *(int*)((char*)this + 0x74) = 0x7aa574;
    *(int*)((char*)this + 0x8c) = 0x7aa564;
    sub_77e6a4();
    *(int*)((char*)this + 0xec + 0x1c) = (int)sub_52cb30();
    this->field_10c = 0.0f;
    this->field_110 = dword_79b500;
    String s("Afonts\\humanoidAnimate.rbxm");
    sub_541bf0();
    s.~String();
    return this;
}
