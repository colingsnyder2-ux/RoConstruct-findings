// from server: 100% by colin
// roc 2007-08 005b2520  unit: RBX::VRotate::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2520
//
// 005b2520  8b442404             mov eax, dword ptr [esp + 4]
// 005b2524  56                   push esi
// 005b2525  50                   push eax
// 005b2526  8bf1                 mov esi, ecx
// 005b2528  e8e3f8ffff           call 0x5b1e10
// 005b252d  c706dc7b7b00         mov dword ptr [esi], 0x7b7bdc
// 005b2533  c74604d47b7b00       mov dword ptr [esi + 4], 0x7b7bd4
// 005b253a  c74610cc7b7b00       mov dword ptr [esi + 0x10], 0x7b7bcc
// 005b2541  c74614bc7b7b00       mov dword ptr [esi + 0x14], 0x7b7bbc
// 005b2548  c7462cac7b7b00       mov dword ptr [esi + 0x2c], 0x7b7bac
// 005b254f  c746449c7b7b00       mov dword ptr [esi + 0x44], 0x7b7b9c
// 005b2556  c7465c8c7b7b00       mov dword ptr [esi + 0x5c], 0x7b7b8c
// 005b255d  c746747c7b7b00       mov dword ptr [esi + 0x74], 0x7b7b7c
// 005b2564  c7868c0000006c7b7b00 mov dword ptr [esi + 0x8c], 0x7b7b6c
// 005b256e  c786e8000000547b7b00 mov dword ptr [esi + 0xe8], 0x7b7b54
// 005b2578  8bc6                 mov eax, esi
// 005b257a  5e                   pop esi
// 005b257b  c20400               ret 4

struct S_005b2520
{
    char pad[0xec];
    S_005b2520* ctor(int);
};

extern void __stdcall G1_func_005b1e10(int);

S_005b2520* S_005b2520::ctor(int arg)
{
    G1_func_005b1e10(arg);
    *(int*)((char*)this + 0x00) = 0x7b7bdc;
    *(int*)((char*)this + 0x04) = 0x7b7bd4;
    *(int*)((char*)this + 0x10) = 0x7b7bcc;
    *(int*)((char*)this + 0x14) = 0x7b7bbc;
    *(int*)((char*)this + 0x2c) = 0x7b7bac;
    *(int*)((char*)this + 0x44) = 0x7b7b9c;
    *(int*)((char*)this + 0x5c) = 0x7b7b8c;
    *(int*)((char*)this + 0x74) = 0x7b7b7c;
    *(int*)((char*)this + 0x8c) = 0x7b7b6c;
    *(int*)((char*)this + 0xe8) = 0x7b7b54;
    return this;
}
