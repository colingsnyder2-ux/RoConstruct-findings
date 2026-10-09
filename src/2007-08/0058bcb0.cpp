// from server: 100% by colin
// roc 2007-08 0058bcb0  unit: RBX::Stats::I::?$TypedStatsItem  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058bcb0
//
// 0058bcb0  56                   push esi
// 0058bcb1  8bf1                 mov esi, ecx
// 0058bcb3  e8f8f9ffff           call 0x58b6b0
// 0058bcb8  c706cceb7a00         mov dword ptr [esi], 0x7aebcc
// 0058bcbe  c74604c0eb7a00       mov dword ptr [esi + 4], 0x7aebc0
// 0058bcc5  c74610b8eb7a00       mov dword ptr [esi + 0x10], 0x7aebb8
// 0058bccc  c74614a8eb7a00       mov dword ptr [esi + 0x14], 0x7aeba8
// 0058bcd3  c7462c98eb7a00       mov dword ptr [esi + 0x2c], 0x7aeb98
// 0058bcda  c7464488eb7a00       mov dword ptr [esi + 0x44], 0x7aeb88
// 0058bce1  c7465c78eb7a00       mov dword ptr [esi + 0x5c], 0x7aeb78
// 0058bce8  c7467468eb7a00       mov dword ptr [esi + 0x74], 0x7aeb68
// 0058bcef  c7868c00000058eb7a00 mov dword ptr [esi + 0x8c], 0x7aeb58
// 0058bcf9  c786e80000004ceb7a00 mov dword ptr [esi + 0xe8], 0x7aeb4c
// 0058bd03  8bc6                 mov eax, esi
// 0058bd05  5e                   pop esi
// 0058bd06  c3                   ret 

struct TypedStatsItem {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;
    void* field2C;
    void* field30;
    void* field34;
    void* field38;
    void* field3C;
    void* field40;
    void* field44;
    void* field48;
    void* field4C;
    void* field50;
    void* field54;
    void* field58;
    void* field5C;
    void* field60;
    void* field64;
    void* field68;
    void* field6C;
    void* field70;
    void* field74;
    void* field78;
    void* field7C;
    void* field80;
    void* field84;
    void* field88;
    void* field8C;
    void* field90;
    void* field94;
    void* field98;
    void* field9C;
    void* fieldA0;
    void* fieldA4;
    void* fieldA8;
    void* fieldAC;
    void* fieldB0;
    void* fieldB4;
    void* fieldB8;
    void* fieldBC;
    void* fieldC0;
    void* fieldC4;
    void* fieldC8;
    void* fieldCC;
    void* fieldD0;
    void* fieldD4;
    void* fieldD8;
    void* fieldDC;
    void* fieldE0;
    void* fieldE4;
    void* fieldE8;
    TypedStatsItem* construct();
};

void __stdcall sub_0058b6b0();

TypedStatsItem* TypedStatsItem::construct()
{
    sub_0058b6b0();
    *(int*)this = 0x7aebcc;
    *(int*)((char*)this + 4) = 0x7aebc0;
    *(int*)((char*)this + 0x10) = 0x7aebb8;
    *(int*)((char*)this + 0x14) = 0x7aeba8;
    *(int*)((char*)this + 0x2c) = 0x7aeb98;
    *(int*)((char*)this + 0x44) = 0x7aeb88;
    *(int*)((char*)this + 0x5c) = 0x7aeb78;
    *(int*)((char*)this + 0x74) = 0x7aeb68;
    *(int*)((char*)this + 0x8c) = 0x7aeb58;
    *(int*)((char*)this + 0xe8) = 0x7aeb4c;
    return this;
}
