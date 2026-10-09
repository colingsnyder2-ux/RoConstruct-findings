// from server: 100% by colin
// roc 2007-08 00427290  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00427290
//
// 00427290  56                   push esi
// 00427291  8bf1                 mov esi, ecx
// 00427293  e8b8feffff           call 0x427150
// 00427298  c7069c9e7800         mov dword ptr [esi], 0x789e9c
// 0042729e  c74604949e7800       mov dword ptr [esi + 4], 0x789e94
// 004272a5  c746108c9e7800       mov dword ptr [esi + 0x10], 0x789e8c
// 004272ac  c746147c9e7800       mov dword ptr [esi + 0x14], 0x789e7c
// 004272b3  c7462c6c9e7800       mov dword ptr [esi + 0x2c], 0x789e6c
// 004272ba  c746445c9e7800       mov dword ptr [esi + 0x44], 0x789e5c
// 004272c1  c7465c4c9e7800       mov dword ptr [esi + 0x5c], 0x789e4c
// 004272c8  c746743c9e7800       mov dword ptr [esi + 0x74], 0x789e3c
// 004272cf  c7868c0000002c9e7800 mov dword ptr [esi + 0x8c], 0x789e2c
// 004272d9  c78608010000ffffffff mov dword ptr [esi + 0x108], 0xffffffff
// 004272e3  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 004272ed  8bc6                 mov eax, esi
// 004272ef  5e                   pop esi
// 004272f0  c3                   ret 

struct VMember
{
    void base_init();
    int f();
};

int VMember::f()
{
    base_init();
    *(int*)((char*)this + 0x00) = 0x789e9c;
    *(int*)((char*)this + 0x04) = 0x789e94;
    *(int*)((char*)this + 0x10) = 0x789e8c;
    *(int*)((char*)this + 0x14) = 0x789e7c;
    *(int*)((char*)this + 0x2c) = 0x789e6c;
    *(int*)((char*)this + 0x44) = 0x789e5c;
    *(int*)((char*)this + 0x5c) = 0x789e4c;
    *(int*)((char*)this + 0x74) = 0x789e3c;
    *(int*)((char*)this + 0x8c) = 0x789e2c;
    *(int*)((char*)this + 0x108) = -1;
    *(int*)((char*)this + 0x10c) = 0;
    return (int)this;
}
