// from server: 100% by king_originala
// roc 2008-06 004d97b0  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d97b0
//
// 004d97b0  6aff                 push -1
// 004d97b2  683bf47b00           push 0x7bf43b
// 004d97b7  64a100000000         mov eax, dword ptr fs:[0]
// 004d97bd  50                   push eax
// 004d97be  64892500000000       mov dword ptr fs:[0], esp
// 004d97c5  51                   push ecx
// 004d97c6  6a60                 push 0x60
// 004d97c8  e853711c00           call 0x6a0920
// 004d97cd  83c404               add esp, 4
// 004d97d0  890424               mov dword ptr [esp], eax
// 004d97d3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d97db  85c0                 test eax, eax
// 004d97dd  741b                 je 0x4d97fa
// 004d97df  8bc8                 mov ecx, eax
// 004d97e1  e8bafaffff           call 0x4d92a0
// 004d97e6  a328279700           mov dword ptr [0x972728], eax
// 004d97eb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d97ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004d97f6  83c410               add esp, 0x10
// 004d97f9  c3                   ret 
// 004d97fa  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d97fe  33c0                 xor eax, eax
// 004d9800  a328279700           mov dword ptr [0x972728], eax
// 004d9805  64890d00000000       mov dword ptr fs:[0], ecx
// 004d980c  83c410               add esp, 0x10
// 004d980f  c3                   ret 

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
