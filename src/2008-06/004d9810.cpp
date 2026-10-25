// from server: 100% by king_originala
// roc 2008-06 004d9810  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9810
//
// 004d9810  6aff                 push -1
// 004d9812  683bf47b00           push 0x7bf43b
// 004d9817  64a100000000         mov eax, dword ptr fs:[0]
// 004d981d  50                   push eax
// 004d981e  64892500000000       mov dword ptr fs:[0], esp
// 004d9825  51                   push ecx
// 004d9826  6a60                 push 0x60
// 004d9828  e8f3701c00           call 0x6a0920
// 004d982d  83c404               add esp, 4
// 004d9830  890424               mov dword ptr [esp], eax
// 004d9833  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d983b  85c0                 test eax, eax
// 004d983d  741b                 je 0x4d985a
// 004d983f  8bc8                 mov ecx, eax
// 004d9841  e80afbffff           call 0x4d9350
// 004d9846  a32c279700           mov dword ptr [0x97272c], eax
// 004d984b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d984f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9856  83c410               add esp, 0x10
// 004d9859  c3                   ret 
// 004d985a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d985e  33c0                 xor eax, eax
// 004d9860  a32c279700           mov dword ptr [0x97272c], eax
// 004d9865  64890d00000000       mov dword ptr fs:[0], ecx
// 004d986c  83c410               add esp, 0x10
// 004d986f  c3                   ret 

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
