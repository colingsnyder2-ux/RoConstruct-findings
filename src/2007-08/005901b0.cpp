// from server: 100% by colin
// roc 2007-08 005901b0  unit: RBX::VMessage::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005901b0
//
// 005901b0  56                   push esi
// 005901b1  8bf1                 mov esi, ecx
// 005901b3  e8c8fe0500           call 0x5f0080
// 005901b8  c70644f97a00         mov dword ptr [esi], 0x7af944
// 005901be  c7460438f97a00       mov dword ptr [esi + 4], 0x7af938
// 005901c5  c7461030f97a00       mov dword ptr [esi + 0x10], 0x7af930
// 005901cc  c7461420f97a00       mov dword ptr [esi + 0x14], 0x7af920
// 005901d3  c7462c10f97a00       mov dword ptr [esi + 0x2c], 0x7af910
// 005901da  c7464400f97a00       mov dword ptr [esi + 0x44], 0x7af900
// 005901e1  c7465cf0f87a00       mov dword ptr [esi + 0x5c], 0x7af8f0
// 005901e8  c74674e0f87a00       mov dword ptr [esi + 0x74], 0x7af8e0
// 005901ef  c7868c000000d0f87a00 mov dword ptr [esi + 0x8c], 0x7af8d0
// 005901f9  c786e8000000b8f87a00 mov dword ptr [esi + 0xe8], 0x7af8b8
// 00590203  8bc6                 mov eax, esi
// 00590205  5e                   pop esi
// 00590206  c3                   ret 

struct BaseClass {
    void construct();
};

struct FactoryProduct : BaseClass {
    FactoryProduct();
};

FactoryProduct::FactoryProduct()
{
    construct();
    *(int*)((char*)this + 0x00) = 0x7af944;
    *(int*)((char*)this + 0x04) = 0x7af938;
    *(int*)((char*)this + 0x10) = 0x7af930;
    *(int*)((char*)this + 0x14) = 0x7af920;
    *(int*)((char*)this + 0x2c) = 0x7af910;
    *(int*)((char*)this + 0x44) = 0x7af900;
    *(int*)((char*)this + 0x5c) = 0x7af8f0;
    *(int*)((char*)this + 0x74) = 0x7af8e0;
    *(int*)((char*)this + 0x8c) = 0x7af8d0;
    *(int*)((char*)this + 0xe8) = 0x7af8b8;
}
