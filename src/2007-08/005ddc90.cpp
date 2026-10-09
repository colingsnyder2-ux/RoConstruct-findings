// from server: 100% by colin
// roc 2007-08 005ddc90  unit: RBX::VMotorFeature::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ddc90
//
// 005ddc90  56                   push esi
// 005ddc91  8bf1                 mov esi, ecx
// 005ddc93  e8d8feffff           call 0x5ddb70
// 005ddc98  c70664cc7b00         mov dword ptr [esi], 0x7bcc64
// 005ddc9e  c7460458cc7b00       mov dword ptr [esi + 4], 0x7bcc58
// 005ddca5  c7461050cc7b00       mov dword ptr [esi + 0x10], 0x7bcc50
// 005ddcac  c7461440cc7b00       mov dword ptr [esi + 0x14], 0x7bcc40
// 005ddcb3  c7462c30cc7b00       mov dword ptr [esi + 0x2c], 0x7bcc30
// 005ddcba  c7464420cc7b00       mov dword ptr [esi + 0x44], 0x7bcc20
// 005ddcc1  c7465c10cc7b00       mov dword ptr [esi + 0x5c], 0x7bcc10
// 005ddcc8  c7467400cc7b00       mov dword ptr [esi + 0x74], 0x7bcc00
// 005ddccf  c7868c000000f0cb7b00 mov dword ptr [esi + 0x8c], 0x7bcbf0
// 005ddcd9  c786e8000000d8cb7b00 mov dword ptr [esi + 0xe8], 0x7bcbd8
// 005ddce3  8bc6                 mov eax, esi
// 005ddce5  5e                   pop esi
// 005ddce6  c3                   ret 

struct FactoryProduct {
    void construct();
    FactoryProduct();
};

extern void sub_005ddb70();

FactoryProduct::FactoryProduct()
{
    sub_005ddb70();
    *(int*)((char*)this + 0x00) = 0x7bcc64;
    *(int*)((char*)this + 0x04) = 0x7bcc58;
    *(int*)((char*)this + 0x10) = 0x7bcc50;
    *(int*)((char*)this + 0x14) = 0x7bcc40;
    *(int*)((char*)this + 0x2c) = 0x7bcc30;
    *(int*)((char*)this + 0x44) = 0x7bcc20;
    *(int*)((char*)this + 0x5c) = 0x7bcc10;
    *(int*)((char*)this + 0x74) = 0x7bcc00;
    *(int*)((char*)this + 0x8c) = 0x7bcbf0;
    *(int*)((char*)this + 0xe8) = 0x7bcbd8;
}
