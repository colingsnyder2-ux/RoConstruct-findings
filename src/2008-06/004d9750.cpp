// from server: 100% by king_originala
// roc 2008-06 004d9750  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9750
//
// 004d9750  6aff                 push -1
// 004d9752  683bf47b00           push 0x7bf43b
// 004d9757  64a100000000         mov eax, dword ptr fs:[0]
// 004d975d  50                   push eax
// 004d975e  64892500000000       mov dword ptr fs:[0], esp
// 004d9765  51                   push ecx
// 004d9766  6a60                 push 0x60
// 004d9768  e8b3711c00           call 0x6a0920
// 004d976d  83c404               add esp, 4
// 004d9770  890424               mov dword ptr [esp], eax
// 004d9773  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d977b  85c0                 test eax, eax
// 004d977d  741b                 je 0x4d979a
// 004d977f  8bc8                 mov ecx, eax
// 004d9781  e86afaffff           call 0x4d91f0
// 004d9786  a324279700           mov dword ptr [0x972724], eax
// 004d978b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d978f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9796  83c410               add esp, 0x10
// 004d9799  c3                   ret 
// 004d979a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d979e  33c0                 xor eax, eax
// 004d97a0  a324279700           mov dword ptr [0x972724], eax
// 004d97a5  64890d00000000       mov dword ptr fs:[0], ecx
// 004d97ac  83c410               add esp, 0x10
// 004d97af  c3                   ret 

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
