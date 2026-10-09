// from server: 100% by colin
// roc 2007-08 005b1db0  unit: RBX::VRotate::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1db0
//
// 005b1db0  8b442404             mov eax, dword ptr [esp + 4]
// 005b1db4  56                   push esi
// 005b1db5  50                   push eax
// 005b1db6  8bf1                 mov esi, ecx
// 005b1db8  e8f3faffff           call 0x5b18b0
// 005b1dbd  c70654757b00         mov dword ptr [esi], 0x7b7554
// 005b1dc3  c746044c757b00       mov dword ptr [esi + 4], 0x7b754c
// 005b1dca  c7461044757b00       mov dword ptr [esi + 0x10], 0x7b7544
// 005b1dd1  c7461434757b00       mov dword ptr [esi + 0x14], 0x7b7534
// 005b1dd8  c7462c24757b00       mov dword ptr [esi + 0x2c], 0x7b7524
// 005b1ddf  c7464414757b00       mov dword ptr [esi + 0x44], 0x7b7514
// 005b1de6  c7465c04757b00       mov dword ptr [esi + 0x5c], 0x7b7504
// 005b1ded  c74674f4747b00       mov dword ptr [esi + 0x74], 0x7b74f4
// 005b1df4  c7868c000000e4747b00 mov dword ptr [esi + 0x8c], 0x7b74e4
// 005b1dfe  c786e8000000cc747b00 mov dword ptr [esi + 0xe8], 0x7b74cc
// 005b1e08  8bc6                 mov eax, esi
// 005b1e0a  5e                   pop esi
// 005b1e0b  c20400               ret 4

struct S_func_005b1db0
{
    char pad[0x100];
    S_func_005b1db0* ctor(int);
};

extern void __stdcall G1_func_005b18b0(int);

S_func_005b1db0* S_func_005b1db0::ctor(int a)
{
    G1_func_005b18b0(a);
    *(int*)((char*)this + 0x00) = 0x7b7554;
    *(int*)((char*)this + 0x04) = 0x7b754c;
    *(int*)((char*)this + 0x10) = 0x7b7544;
    *(int*)((char*)this + 0x14) = 0x7b7534;
    *(int*)((char*)this + 0x2c) = 0x7b7524;
    *(int*)((char*)this + 0x44) = 0x7b7514;
    *(int*)((char*)this + 0x5c) = 0x7b7504;
    *(int*)((char*)this + 0x74) = 0x7b74f4;
    *(int*)((char*)this + 0x8c) = 0x7b74e4;
    *(int*)((char*)this + 0xe8) = 0x7b74cc;
    return this;
}
