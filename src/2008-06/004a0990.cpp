// from server: 46% by colin
// roc 2008-06 004a0990 unit: RBX::Network::VClient::?$BoundFuncDesc size: 217 bytes

extern "C" {
    typedef unsigned int DWORD;
    typedef void* HDC;

    // MSVCP90 basic_string<char> ctor/dtor
    void __stdcall basic_string_ctor(void* self, const char* s);
    void __stdcall basic_string_dtor(void* self);

    // GDI object creation/deletion
    HDC __stdcall CreateCompatibleDC(HDC hdc);
    int __stdcall DeleteDC(HDC hdc);
}

// Forward declarations of internal functions
void __fastcall sub_49ff10(void* self);
void __fastcall sub_55af90(void* self, void* arg);

struct BoundFuncDesc {
    void* vtable_0;          // +0x00
    char pad_04[0x0c];       // +0x04
    void* vtable_10;         // +0x10
    void* vtable_14;         // +0x14
    char pad_18[0x08];       // +0x18
    void* vtable_20;         // +0x20
    void* vtable_24;         // +0x24
    char pad_28[0x1c];       // +0x28
    void* vtable_44;         // +0x44
    char pad_48[0x1c];       // +0x48
    void* vtable_64;         // +0x64
    char pad_68[0x1c];       // +0x68
    void* vtable_84;         // +0x84
    char pad_88[0x1c];       // +0x88
    void* vtable_a4;         // +0xa4
    char pad_a8[0x1c];       // +0xa8
    void* vtable_c4;         // +0xc4
    char pad_c8[0x68];       // +0xc8
    void* vtable_130;        // +0x130
    void* vtable_134;        // +0x134
    char pad_138[0x0c];      // +0x138
    void* vtable_144;        // +0x144

    BoundFuncDesc();
};

BoundFuncDesc::BoundFuncDesc()
{
    sub_49ff10(this);

    // Construct a temporary std::string from "NetworkClient"
    char str_buf[0x1c];
    basic_string_ctor(str_buf, "NetworkClient");

    this->vtable_0   = (void*)0x822f4c;
    this->vtable_10  = (void*)0x822f40;
    this->vtable_14  = (void*)0x822f38;
    this->vtable_20  = (void*)0x822f30;
    this->vtable_24  = (void*)0x822f20;
    this->vtable_44  = (void*)0x822f10;
    this->vtable_64  = (void*)0x822f00;
    this->vtable_84  = (void*)0x822ef0;
    this->vtable_a4  = (void*)0x822ee0;
    this->vtable_c4  = (void*)0x822ed0;
    this->vtable_130 = (void*)0x822ea0;
    this->vtable_134 = (void*)0x822e94;
    this->vtable_144 = (void*)0x822e88;

    HDC hdc = CreateCompatibleDC(0);
    sub_55af90(this, &hdc);
    DeleteDC(hdc);
}
