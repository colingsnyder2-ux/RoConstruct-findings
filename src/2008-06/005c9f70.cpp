// from server: 100% by king_originala
// roc 2008-06 005c9f70  unit: RBX::Stats::TypedMemItem  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9f70
//
// 005c9f70  56                   push esi
// 005c9f71  8bf1                 mov esi, ecx
// 005c9f73  e858ffffff           call 0x5c9ed0
// 005c9f78  8b442408             mov eax, dword ptr [esp + 8]
// 005c9f7c  898658010000         mov dword ptr [esi + 0x158], eax
// 005c9f82  c7060c9f8300         mov dword ptr [esi], 0x839f0c
// 005c9f88  c74610fc9e8300       mov dword ptr [esi + 0x10], 0x839efc
// 005c9f8f  c74614f49e8300       mov dword ptr [esi + 0x14], 0x839ef4
// 005c9f96  c74620ec9e8300       mov dword ptr [esi + 0x20], 0x839eec
// 005c9f9d  c74624dc9e8300       mov dword ptr [esi + 0x24], 0x839edc
// 005c9fa4  c74644cc9e8300       mov dword ptr [esi + 0x44], 0x839ecc
// 005c9fab  c74664bc9e8300       mov dword ptr [esi + 0x64], 0x839ebc
// 005c9fb2  c78684000000ac9e8300 mov dword ptr [esi + 0x84], 0x839eac
// 005c9fbc  c786a40000009c9e8300 mov dword ptr [esi + 0xa4], 0x839e9c
// 005c9fc6  c786c40000008c9e8300 mov dword ptr [esi + 0xc4], 0x839e8c
// 005c9fd0  8bc6                 mov eax, esi
// 005c9fd2  5e                   pop esi
// 005c9fd3  c20400               ret 4

struct TypedMemItem {
    void initializeBase();
    TypedMemItem* initialize(int value);
};

TypedMemItem* TypedMemItem::initialize(int value)
{
    initializeBase();
    *(int*)((char*)this + 0x158) = value;
    *(unsigned long*)((char*)this + 0x00) = 0x839f0c;
    *(unsigned long*)((char*)this + 0x10) = 0x839efc;
    *(unsigned long*)((char*)this + 0x14) = 0x839ef4;
    *(unsigned long*)((char*)this + 0x20) = 0x839eec;
    *(unsigned long*)((char*)this + 0x24) = 0x839edc;
    *(unsigned long*)((char*)this + 0x44) = 0x839ecc;
    *(unsigned long*)((char*)this + 0x64) = 0x839ebc;
    *(unsigned long*)((char*)this + 0x84) = 0x839eac;
    *(unsigned long*)((char*)this + 0xa4) = 0x839e9c;
    *(unsigned long*)((char*)this + 0xc4) = 0x839e8c;
    return this;
}
