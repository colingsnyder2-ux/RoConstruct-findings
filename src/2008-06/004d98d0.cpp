// from server: 100% by king_originala
// roc 2008-06 004d98d0  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d98d0
//
// 004d98d0  6aff                 push -1
// 004d98d2  683bf47b00           push 0x7bf43b
// 004d98d7  64a100000000         mov eax, dword ptr fs:[0]
// 004d98dd  50                   push eax
// 004d98de  64892500000000       mov dword ptr fs:[0], esp
// 004d98e5  51                   push ecx
// 004d98e6  6a60                 push 0x60
// 004d98e8  e833701c00           call 0x6a0920
// 004d98ed  83c404               add esp, 4
// 004d98f0  890424               mov dword ptr [esp], eax
// 004d98f3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d98fb  85c0                 test eax, eax
// 004d98fd  741b                 je 0x4d991a
// 004d98ff  8bc8                 mov ecx, eax
// 004d9901  e8aafbffff           call 0x4d94b0
// 004d9906  a334279700           mov dword ptr [0x972734], eax
// 004d990b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d990f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9916  83c410               add esp, 0x10
// 004d9919  c3                   ret 
// 004d991a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d991e  33c0                 xor eax, eax
// 004d9920  a334279700           mov dword ptr [0x972734], eax
// 004d9925  64890d00000000       mov dword ptr fs:[0], ecx
// 004d992c  83c410               add esp, 0x10
// 004d992f  c3                   ret 

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
