// from server: 46% by colin
// roc 2007-08 005947c0  unit: RBX::InletTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005947c0
//
// 005947c0  6aff                 push -1
// 005947c2  681bb67500           push 0x75b61b
// 005947c7  64a100000000         mov eax, dword ptr fs:[0]
// 005947cd  50                   push eax
// 005947ce  64892500000000       mov dword ptr fs:[0], esp
// 005947d5  51                   push ecx
// 005947d6  56                   push esi
// 005947d7  57                   push edi
// 005947d8  6a4c                 push 0x4c
// 005947da  8bf9                 mov edi, ecx
// 005947dc  e815b70900           call 0x62fef6
// 005947e1  8bf0                 mov esi, eax
// 005947e3  83c404               add esp, 4
// 005947e6  89742408             mov dword ptr [esp + 8], esi
// 005947ea  33c0                 xor eax, eax
// 005947ec  3bf0                 cmp esi, eax
// 005947ee  89442414             mov dword ptr [esp + 0x14], eax
// 005947f2  741a                 je 0x59480e
// 005947f4  8b4718               mov eax, dword ptr [edi + 0x18]
// 005947f7  50                   push eax
// 005947f8  8bce                 mov ecx, esi
// 005947fa  e8716c0600           call 0x5fb470
// 005947ff  c7065c077b00         mov dword ptr [esi], 0x7b075c
// 00594805  c7460440077b00       mov dword ptr [esi + 4], 0x7b0740
// 0059480c  8bc6                 mov eax, esi
// 0059480e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594812  5f                   pop edi
// 00594813  5e                   pop esi
// 00594814  64890d00000000       mov dword ptr fs:[0], ecx
// 0059481b  83c410               add esp, 0x10
// 0059481e  c3                   ret 

struct InletTool {
    char pad[0x18];
    int field_18;
    InletTool(int);
};

struct Base {
    void construct(int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

InletTool::InletTool(int a)
{
    void* p = operator_new(0x4c);
    if (p) {
        ((Base*)p)->construct(field_18);
        *(int*)((char*)p + 0) = 0x7b075c;
        *(int*)((char*)p + 4) = 0x7b0740;
    }
}
