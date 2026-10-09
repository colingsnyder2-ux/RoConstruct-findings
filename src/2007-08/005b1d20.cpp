// from server: 100% by colin
// roc 2007-08 005b1d20  unit: RBX::VGlue::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1d20
//
// 005b1d20  8b442404             mov eax, dword ptr [esp + 4]
// 005b1d24  56                   push esi
// 005b1d25  50                   push eax
// 005b1d26  8bf1                 mov esi, ecx
// 005b1d28  e8d3faffff           call 0x5b1800
// 005b1d2d  c70684747b00         mov dword ptr [esi], 0x7b7484
// 005b1d33  c746047c747b00       mov dword ptr [esi + 4], 0x7b747c
// 005b1d3a  c7461074747b00       mov dword ptr [esi + 0x10], 0x7b7474
// 005b1d41  c7461464747b00       mov dword ptr [esi + 0x14], 0x7b7464
// 005b1d48  c7462c54747b00       mov dword ptr [esi + 0x2c], 0x7b7454
// 005b1d4f  c7464444747b00       mov dword ptr [esi + 0x44], 0x7b7444
// 005b1d56  c7465c34747b00       mov dword ptr [esi + 0x5c], 0x7b7434
// 005b1d5d  c7467424747b00       mov dword ptr [esi + 0x74], 0x7b7424
// 005b1d64  c7868c00000014747b00 mov dword ptr [esi + 0x8c], 0x7b7414
// 005b1d6e  c786e8000000fc737b00 mov dword ptr [esi + 0xe8], 0x7b73fc
// 005b1d78  8bc6                 mov eax, esi
// 005b1d7a  5e                   pop esi
// 005b1d7b  c20400               ret 4

struct BaseClass {
    BaseClass(int);
};

struct FactoryProduct : BaseClass {
    FactoryProduct(int);
};

FactoryProduct::FactoryProduct(int arg) : BaseClass(arg)
{
    *(int*)((char*)this + 0x00) = 0x7b7484;
    *(int*)((char*)this + 0x04) = 0x7b747c;
    *(int*)((char*)this + 0x10) = 0x7b7474;
    *(int*)((char*)this + 0x14) = 0x7b7464;
    *(int*)((char*)this + 0x2c) = 0x7b7454;
    *(int*)((char*)this + 0x44) = 0x7b7444;
    *(int*)((char*)this + 0x5c) = 0x7b7434;
    *(int*)((char*)this + 0x74) = 0x7b7424;
    *(int*)((char*)this + 0x8c) = 0x7b7414;
    *(int*)((char*)this + 0xe8) = 0x7b73fc;
}
