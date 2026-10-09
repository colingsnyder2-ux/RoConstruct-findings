// from server: 100% by colin
// roc 2007-08 005ec7a0  unit: RBX::VBodyThrust::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec7a0
//
// 005ec7a0  c70104ea7b00         mov dword ptr [ecx], 0x7bea04
// 005ec7a6  c74104fce97b00       mov dword ptr [ecx + 4], 0x7be9fc
// 005ec7ad  c74110f4e97b00       mov dword ptr [ecx + 0x10], 0x7be9f4
// 005ec7b4  c74114e4e97b00       mov dword ptr [ecx + 0x14], 0x7be9e4
// 005ec7bb  c7412cd4e97b00       mov dword ptr [ecx + 0x2c], 0x7be9d4
// 005ec7c2  c74144c4e97b00       mov dword ptr [ecx + 0x44], 0x7be9c4
// 005ec7c9  c7415cb4e97b00       mov dword ptr [ecx + 0x5c], 0x7be9b4
// 005ec7d0  c74174a4e97b00       mov dword ptr [ecx + 0x74], 0x7be9a4
// 005ec7d7  c7818c00000094e97b00 mov dword ptr [ecx + 0x8c], 0x7be994
// 005ec7e1  c781e80000007ce97b00 mov dword ptr [ecx + 0xe8], 0x7be97c
// 005ec7eb  c781f000000070e97b00 mov dword ptr [ecx + 0xf0], 0x7be970
// 005ec7f5  e956eeffff           jmp 0x5eb650

struct RBX_VBodyThrust_FactoryProduct {
    void construct();
};

extern "C" void __cdecl sub_5eb650();

void RBX_VBodyThrust_FactoryProduct::construct()
{
    *(int *)((char *)this + 0x00) = 0x7bea04;
    *(int *)((char *)this + 0x04) = 0x7be9fc;
    *(int *)((char *)this + 0x10) = 0x7be9f4;
    *(int *)((char *)this + 0x14) = 0x7be9e4;
    *(int *)((char *)this + 0x2c) = 0x7be9d4;
    *(int *)((char *)this + 0x44) = 0x7be9c4;
    *(int *)((char *)this + 0x5c) = 0x7be9b4;
    *(int *)((char *)this + 0x74) = 0x7be9a4;
    *(int *)((char *)this + 0x8c) = 0x7be994;
    *(int *)((char *)this + 0xe8) = 0x7be97c;
    *(int *)((char *)this + 0xf0) = 0x7be970;
    sub_5eb650();
}
