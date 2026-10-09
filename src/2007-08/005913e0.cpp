// from server: 100% by colin
// roc 2007-08 005913e0  unit: RBX::VObjectValue::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005913e0
//
// 005913e0  56                   push esi
// 005913e1  8bf1                 mov esi, ecx
// 005913e3  e898faffff           call 0x590e80
// 005913e8  c70634fe7a00         mov dword ptr [esi], 0x7afe34
// 005913ee  c746042cfe7a00       mov dword ptr [esi + 4], 0x7afe2c
// 005913f5  c7461024fe7a00       mov dword ptr [esi + 0x10], 0x7afe24
// 005913fc  c7461414fe7a00       mov dword ptr [esi + 0x14], 0x7afe14
// 00591403  c7462c04fe7a00       mov dword ptr [esi + 0x2c], 0x7afe04
// 0059140a  c74644f4fd7a00       mov dword ptr [esi + 0x44], 0x7afdf4
// 00591411  c7465ce4fd7a00       mov dword ptr [esi + 0x5c], 0x7afde4
// 00591418  c74674d4fd7a00       mov dword ptr [esi + 0x74], 0x7afdd4
// 0059141f  c7868c000000c4fd7a00 mov dword ptr [esi + 0x8c], 0x7afdc4
// 00591429  c786e8000000acfd7a00 mov dword ptr [esi + 0xe8], 0x7afdac
// 00591433  8bc6                 mov eax, esi
// 00591435  5e                   pop esi
// 00591436  c3                   ret 

struct RBX_BaseClass {
    void construct();
};

struct RBX_VObjectValue : RBX_BaseClass {
    RBX_VObjectValue* construct();
};

RBX_VObjectValue* RBX_VObjectValue::construct()
{
    RBX_BaseClass::construct();
    *(int*)((char*)this + 0x00) = 0x7afe34;
    *(int*)((char*)this + 0x04) = 0x7afe2c;
    *(int*)((char*)this + 0x10) = 0x7afe24;
    *(int*)((char*)this + 0x14) = 0x7afe14;
    *(int*)((char*)this + 0x2c) = 0x7afe04;
    *(int*)((char*)this + 0x44) = 0x7afdf4;
    *(int*)((char*)this + 0x5c) = 0x7afde4;
    *(int*)((char*)this + 0x74) = 0x7afdd4;
    *(int*)((char*)this + 0x8c) = 0x7afdc4;
    *(int*)((char*)this + 0xe8) = 0x7afdac;
    return this;
}
