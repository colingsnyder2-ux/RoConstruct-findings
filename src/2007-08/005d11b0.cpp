// from server: 100% by colin
// roc 2007-08 005d11b0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d11b0
//
// 005d11b0  56                   push esi
// 005d11b1  8bf1                 mov esi, ecx
// 005d11b3  e888feffff           call 0x5d1040
// 005d11b8  c706ecab7b00         mov dword ptr [esi], 0x7babec
// 005d11be  c74604e0ab7b00       mov dword ptr [esi + 4], 0x7babe0
// 005d11c5  c74610d8ab7b00       mov dword ptr [esi + 0x10], 0x7babd8
// 005d11cc  c74614c8ab7b00       mov dword ptr [esi + 0x14], 0x7babc8
// 005d11d3  c7462cb8ab7b00       mov dword ptr [esi + 0x2c], 0x7babb8
// 005d11da  c74644a8ab7b00       mov dword ptr [esi + 0x44], 0x7baba8
// 005d11e1  c7465c98ab7b00       mov dword ptr [esi + 0x5c], 0x7bab98
// 005d11e8  c7467488ab7b00       mov dword ptr [esi + 0x74], 0x7bab88
// 005d11ef  c7868c00000078ab7b00 mov dword ptr [esi + 0x8c], 0x7bab78
// 005d11f9  c786e800000070ab7b00 mov dword ptr [esi + 0xe8], 0x7bab70
// 005d1203  8bc6                 mov eax, esi
// 005d1205  5e                   pop esi
// 005d1206  c3                   ret 

struct FactoryProduct {
    char pad[0x100];
    FactoryProduct* init();
};

extern "C" void __fastcall sub_5d1040(void*);

FactoryProduct* FactoryProduct::init() {
    sub_5d1040(this);
    char* p = (char*)this;
    *(int*)(p + 0x00) = 0x7babec;
    *(int*)(p + 0x04) = 0x7babe0;
    *(int*)(p + 0x10) = 0x7babd8;
    *(int*)(p + 0x14) = 0x7babc8;
    *(int*)(p + 0x2c) = 0x7babb8;
    *(int*)(p + 0x44) = 0x7baba8;
    *(int*)(p + 0x5c) = 0x7bab98;
    *(int*)(p + 0x74) = 0x7bab88;
    *(int*)(p + 0x8c) = 0x7bab78;
    *(int*)(p + 0xe8) = 0x7bab70;
    return this;
}
