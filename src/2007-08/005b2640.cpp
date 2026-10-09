// from server: 100% by colin
// roc 2007-08 005b2640  unit: RBX::VRotate::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2640
//
// 005b2640  8b442404             mov eax, dword ptr [esp + 4]
// 005b2644  56                   push esi
// 005b2645  50                   push eax
// 005b2646  8bf1                 mov esi, ecx
// 005b2648  e843f8ffff           call 0x5b1e90
// 005b264d  c706ac7c7b00         mov dword ptr [esi], 0x7b7cac
// 005b2653  c74604a47c7b00       mov dword ptr [esi + 4], 0x7b7ca4
// 005b265a  c746109c7c7b00       mov dword ptr [esi + 0x10], 0x7b7c9c
// 005b2661  c746148c7c7b00       mov dword ptr [esi + 0x14], 0x7b7c8c
// 005b2668  c7462c7c7c7b00       mov dword ptr [esi + 0x2c], 0x7b7c7c
// 005b266f  c746446c7c7b00       mov dword ptr [esi + 0x44], 0x7b7c6c
// 005b2676  c7465c5c7c7b00       mov dword ptr [esi + 0x5c], 0x7b7c5c
// 005b267d  c746744c7c7b00       mov dword ptr [esi + 0x74], 0x7b7c4c
// 005b2684  c7868c0000003c7c7b00 mov dword ptr [esi + 0x8c], 0x7b7c3c
// 005b268e  c786e8000000247c7b00 mov dword ptr [esi + 0xe8], 0x7b7c24
// 005b2698  8bc6                 mov eax, esi
// 005b269a  5e                   pop esi
// 005b269b  c20400               ret 4

struct S_005b2640
{
    char pad[0xec];
    S_005b2640* ctor(int);
};

extern void __stdcall G1_func_005b1e90(int);

S_005b2640* S_005b2640::ctor(int arg)
{
    G1_func_005b1e90(arg);
    *(int*)((char*)this + 0x00) = 0x7b7cac;
    *(int*)((char*)this + 0x04) = 0x7b7ca4;
    *(int*)((char*)this + 0x10) = 0x7b7c9c;
    *(int*)((char*)this + 0x14) = 0x7b7c8c;
    *(int*)((char*)this + 0x2c) = 0x7b7c7c;
    *(int*)((char*)this + 0x44) = 0x7b7c6c;
    *(int*)((char*)this + 0x5c) = 0x7b7c5c;
    *(int*)((char*)this + 0x74) = 0x7b7c4c;
    *(int*)((char*)this + 0x8c) = 0x7b7c3c;
    *(int*)((char*)this + 0xe8) = 0x7b7c24;
    return this;
}
