// from server: 100% by king_originala
// roc 2008-06 004d9870  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9870
//
// 004d9870  6aff                 push -1
// 004d9872  683bf47b00           push 0x7bf43b
// 004d9877  64a100000000         mov eax, dword ptr fs:[0]
// 004d987d  50                   push eax
// 004d987e  64892500000000       mov dword ptr fs:[0], esp
// 004d9885  51                   push ecx
// 004d9886  6a60                 push 0x60
// 004d9888  e893701c00           call 0x6a0920
// 004d988d  83c404               add esp, 4
// 004d9890  890424               mov dword ptr [esp], eax
// 004d9893  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d989b  85c0                 test eax, eax
// 004d989d  741b                 je 0x4d98ba
// 004d989f  8bc8                 mov ecx, eax
// 004d98a1  e85afbffff           call 0x4d9400
// 004d98a6  a330279700           mov dword ptr [0x972730], eax
// 004d98ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d98af  64890d00000000       mov dword ptr fs:[0], ecx
// 004d98b6  83c410               add esp, 0x10
// 004d98b9  c3                   ret 
// 004d98ba  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d98be  33c0                 xor eax, eax
// 004d98c0  a330279700           mov dword ptr [0x972730], eax
// 004d98c5  64890d00000000       mov dword ptr fs:[0], ecx
// 004d98cc  83c410               add esp, 0x10
// 004d98cf  c3                   ret 

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
