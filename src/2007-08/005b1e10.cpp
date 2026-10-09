// from server: 100% by colin
// roc 2007-08 005b1e10  unit: RBX::VRotate::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1e10
//
// 005b1e10  8b442404             mov eax, dword ptr [esp + 4]
// 005b1e14  56                   push esi
// 005b1e15  50                   push eax
// 005b1e16  8bf1                 mov esi, ecx
// 005b1e18  e833fbffff           call 0x5b1950
// 005b1e1d  c70624767b00         mov dword ptr [esi], 0x7b7624
// 005b1e23  c746041c767b00       mov dword ptr [esi + 4], 0x7b761c
// 005b1e2a  c7461014767b00       mov dword ptr [esi + 0x10], 0x7b7614
// 005b1e31  c7461404767b00       mov dword ptr [esi + 0x14], 0x7b7604
// 005b1e38  c7462cf4757b00       mov dword ptr [esi + 0x2c], 0x7b75f4
// 005b1e3f  c74644e4757b00       mov dword ptr [esi + 0x44], 0x7b75e4
// 005b1e46  c7465cd4757b00       mov dword ptr [esi + 0x5c], 0x7b75d4
// 005b1e4d  c74674c4757b00       mov dword ptr [esi + 0x74], 0x7b75c4
// 005b1e54  c7868c000000b4757b00 mov dword ptr [esi + 0x8c], 0x7b75b4
// 005b1e5e  c786e80000009c757b00 mov dword ptr [esi + 0xe8], 0x7b759c
// 005b1e68  8bc6                 mov eax, esi
// 005b1e6a  5e                   pop esi
// 005b1e6b  c20400               ret 4

struct S_005b1e10
{
    char pad[0xec];
    S_005b1e10* ctor(int);
};

extern void __stdcall G1_func_005b1950(int);

S_005b1e10* S_005b1e10::ctor(int arg)
{
    G1_func_005b1950(arg);
    *(int*)((char*)this + 0x00) = 0x7b7624;
    *(int*)((char*)this + 0x04) = 0x7b761c;
    *(int*)((char*)this + 0x10) = 0x7b7614;
    *(int*)((char*)this + 0x14) = 0x7b7604;
    *(int*)((char*)this + 0x2c) = 0x7b75f4;
    *(int*)((char*)this + 0x44) = 0x7b75e4;
    *(int*)((char*)this + 0x5c) = 0x7b75d4;
    *(int*)((char*)this + 0x74) = 0x7b75c4;
    *(int*)((char*)this + 0x8c) = 0x7b75b4;
    *(int*)((char*)this + 0xe8) = 0x7b759c;
    return this;
}
