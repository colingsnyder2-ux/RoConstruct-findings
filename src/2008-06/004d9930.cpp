// from server: 100% by king_originala
// roc 2008-06 004d9930  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9930
//
// 004d9930  6aff                 push -1
// 004d9932  683bf47b00           push 0x7bf43b
// 004d9937  64a100000000         mov eax, dword ptr fs:[0]
// 004d993d  50                   push eax
// 004d993e  64892500000000       mov dword ptr fs:[0], esp
// 004d9945  51                   push ecx
// 004d9946  6a60                 push 0x60
// 004d9948  e8d36f1c00           call 0x6a0920
// 004d994d  83c404               add esp, 4
// 004d9950  890424               mov dword ptr [esp], eax
// 004d9953  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d995b  85c0                 test eax, eax
// 004d995d  741b                 je 0x4d997a
// 004d995f  8bc8                 mov ecx, eax
// 004d9961  e8fafbffff           call 0x4d9560
// 004d9966  a338279700           mov dword ptr [0x972738], eax
// 004d996b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d996f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9976  83c410               add esp, 0x10
// 004d9979  c3                   ret 
// 004d997a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d997e  33c0                 xor eax, eax
// 004d9980  a338279700           mov dword ptr [0x972738], eax
// 004d9985  64890d00000000       mov dword ptr fs:[0], ecx
// 004d998c  83c410               add esp, 0x10
// 004d998f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Table
{
    unsigned char storage[0x60];
    Table();
};

extern Table* table;

void initializeTable()
{
    table = new Table;
}
