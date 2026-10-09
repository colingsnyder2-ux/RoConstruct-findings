// from server: 100% by colin
// roc 2007-08 005ec880  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ec880
//
// 005ec880  c701c4eb7b00         mov dword ptr [ecx], 0x7bebc4
// 005ec886  c74104bceb7b00       mov dword ptr [ecx + 4], 0x7bebbc
// 005ec88d  c74110b4eb7b00       mov dword ptr [ecx + 0x10], 0x7bebb4
// 005ec894  c74114a4eb7b00       mov dword ptr [ecx + 0x14], 0x7beba4
// 005ec89b  c7412c94eb7b00       mov dword ptr [ecx + 0x2c], 0x7beb94
// 005ec8a2  c7414484eb7b00       mov dword ptr [ecx + 0x44], 0x7beb84
// 005ec8a9  c7415c74eb7b00       mov dword ptr [ecx + 0x5c], 0x7beb74
// 005ec8b0  c7417464eb7b00       mov dword ptr [ecx + 0x74], 0x7beb64
// 005ec8b7  c7818c00000054eb7b00 mov dword ptr [ecx + 0x8c], 0x7beb54
// 005ec8c1  c781e80000003ceb7b00 mov dword ptr [ecx + 0xe8], 0x7beb3c
// 005ec8cb  c781f000000030eb7b00 mov dword ptr [ecx + 0xf0], 0x7beb30
// 005ec8d5  e976edffff           jmp 0x5eb650

struct S_func_005ec880 {
    char pad[0x100];
    void construct();
};

void S_func_005ec880::construct()
{
    *(int*)((char*)this + 0x00) = 0x7bebc4;
    *(int*)((char*)this + 0x04) = 0x7bebbc;
    *(int*)((char*)this + 0x10) = 0x7bebb4;
    *(int*)((char*)this + 0x14) = 0x7beba4;
    *(int*)((char*)this + 0x2c) = 0x7beb94;
    *(int*)((char*)this + 0x44) = 0x7beb84;
    *(int*)((char*)this + 0x5c) = 0x7beb74;
    *(int*)((char*)this + 0x74) = 0x7beb64;
    *(int*)((char*)this + 0x8c) = 0x7beb54;
    *(int*)((char*)this + 0xe8) = 0x7beb3c;
    *(int*)((char*)this + 0xf0) = 0x7beb30;
    extern void __fastcall sub_005eb650(void*);
    sub_005eb650(this);
}
