// from server: 100% by king_originala
// roc 2008-06 005c63a0  unit: RBX::ResizeTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c63a0
//
// 005c63a0  6aff                 push -1
// 005c63a2  683bf47b00           push 0x7bf43b
// 005c63a7  64a100000000         mov eax, dword ptr fs:[0]
// 005c63ad  50                   push eax
// 005c63ae  64892500000000       mov dword ptr fs:[0], esp
// 005c63b5  51                   push ecx
// 005c63b6  56                   push esi
// 005c63b7  6a48                 push 0x48
// 005c63b9  8bf1                 mov esi, ecx
// 005c63bb  e860a50d00           call 0x6a0920
// 005c63c0  83c404               add esp, 4
// 005c63c3  89442404             mov dword ptr [esp + 4], eax
// 005c63c7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c63cf  85c0                 test eax, eax
// 005c63d1  741b                 je 0x5c63ee
// 005c63d3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005c63d6  51                   push ecx
// 005c63d7  8bc8                 mov ecx, eax
// 005c63d9  e812ffffff           call 0x5c62f0
// 005c63de  5e                   pop esi
// 005c63df  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c63e3  64890d00000000       mov dword ptr fs:[0], ecx
// 005c63ea  83c410               add esp, 0x10
// 005c63ed  c3                   ret 
// 005c63ee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c63f2  33c0                 xor eax, eax
// 005c63f4  5e                   pop esi
// 005c63f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005c63fc  83c410               add esp, 0x10
// 005c63ff  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct ResizeTool {
    char pad[0x18];
    void* context;
    char tail[0x2c];

    ResizeTool(void*);
    ResizeTool* clone();
};

ResizeTool* ResizeTool::clone()
{
    return new ResizeTool(context);
}
