// from server: 37% by colin
// roc 2007-08 005fe0a0  unit: RBX::GameTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe0a0
//
// 005fe0a0  6aff                 push -1
// 005fe0a2  681bb67500           push 0x75b61b
// 005fe0a7  64a100000000         mov eax, dword ptr fs:[0]
// 005fe0ad  50                   push eax
// 005fe0ae  64892500000000       mov dword ptr fs:[0], esp
// 005fe0b5  51                   push ecx
// 005fe0b6  56                   push esi
// 005fe0b7  6a3c                 push 0x3c
// 005fe0b9  8bf1                 mov esi, ecx
// 005fe0bb  e8361e0300           call 0x62fef6
// 005fe0c0  83c404               add esp, 4
// 005fe0c3  89442404             mov dword ptr [esp + 4], eax
// 005fe0c7  85c0                 test eax, eax
// 005fe0c9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fe0d1  741b                 je 0x5fe0ee
// 005fe0d3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005fe0d6  51                   push ecx
// 005fe0d7  8bc8                 mov ecx, eax
// 005fe0d9  e842ffffff           call 0x5fe020
// 005fe0de  5e                   pop esi
// 005fe0df  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fe0e3  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe0ea  83c410               add esp, 0x10
// 005fe0ed  c3                   ret 
// 005fe0ee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe0f2  33c0                 xor eax, eax
// 005fe0f4  5e                   pop esi
// 005fe0f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe0fc  83c410               add esp, 0x10
// 005fe0ff  c3                   ret 

struct GameTool {
    char pad[0x18];
    int field_18;

    void* createSubobject();
};

extern "C" void* __cdecl func_0062fef6(unsigned int);
extern "C" void __cdecl func_005fe020(void*, int);

void* GameTool::createSubobject()
{
    void* p = func_0062fef6(0x3c);
    if (p) {
        func_005fe020(p, this->field_18);
    }
    return p;
}
