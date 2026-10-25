// from server: 100% by colin
// roc 2008-06 0040a6c0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a6c0
//
// 0040a6c0  c70114bb8000         mov dword ptr [ecx], 0x80bb14
// 0040a6c6  c7411004bb8000       mov dword ptr [ecx + 0x10], 0x80bb04
// 0040a6cd  c74114fcba8000       mov dword ptr [ecx + 0x14], 0x80bafc
// 0040a6d4  c74120f4ba8000       mov dword ptr [ecx + 0x20], 0x80baf4
// 0040a6db  c74124e4ba8000       mov dword ptr [ecx + 0x24], 0x80bae4
// 0040a6e2  c74144d4ba8000       mov dword ptr [ecx + 0x44], 0x80bad4
// 0040a6e9  c74164c4ba8000       mov dword ptr [ecx + 0x64], 0x80bac4
// 0040a6f0  c78184000000b4ba8000 mov dword ptr [ecx + 0x84], 0x80bab4
// 0040a6fa  c781a4000000a4ba8000 mov dword ptr [ecx + 0xa4], 0x80baa4
// 0040a704  c781c400000094ba8000 mov dword ptr [ecx + 0xc4], 0x80ba94
// 0040a70e  c7059cc3960000000000 mov dword ptr [0x96c39c], 0
// 0040a718  e9c3f9ffff           jmp 0x40a0e0

struct TypedPropertyDescriptor {
    char pad0[0x10];
    void* p10;
    void* p14;
    char pad18[0x8];
    void* p20;
    void* p24;
    char pad28[0x1c];
    void* p44;
    char pad48[0x1c];
    void* p64;
    char pad68[0x1c];
    void* p84;
    char pad88[0x1c];
    void* pa4;
    char pada8[0x1c];
    void* pc4;
    void init();
};

extern int g_96c39c;

void sub_40a0e0();

void TypedPropertyDescriptor::init()
{
    *(void**)this = (void*)0x80bb14;
    p10 = (void*)0x80bb04;
    p14 = (void*)0x80bafc;
    p20 = (void*)0x80baf4;
    p24 = (void*)0x80bae4;
    p44 = (void*)0x80bad4;
    p64 = (void*)0x80bac4;
    p84 = (void*)0x80bab4;
    pa4 = (void*)0x80baa4;
    pc4 = (void*)0x80ba94;
    g_96c39c = 0;
    sub_40a0e0();
}
