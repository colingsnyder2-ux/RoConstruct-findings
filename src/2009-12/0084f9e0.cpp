// roc 2009-12 0084f9e0  unit: CXTPPropertyGridVerbs  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f9e0
//
// 0084f9e0  57                   push edi
// 0084f9e1  8bf9                 mov edi, ecx
// 0084f9e3  8b4728               mov eax, dword ptr [edi + 0x28]
// 0084f9e6  85c0                 test eax, eax
// 0084f9e8  743c                 je 0x84fa26
// 0084f9ea  56                   push esi
// 0084f9eb  33f6                 xor esi, esi
// 0084f9ed  85c0                 test eax, eax
// 0084f9ef  7e1a                 jle 0x84fa0b
// 0084f9f1  85f6                 test esi, esi
// 0084f9f3  7c2c                 jl 0x84fa21
// 0084f9f5  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0084f9f8  7d27                 jge 0x84fa21
// 0084f9fa  8b4724               mov eax, dword ptr [edi + 0x24]
// 0084f9fd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0084fa00  e8d743faff           call 0x7f3ddc
// 0084fa05  46                   inc esi
// 0084fa06  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0084fa09  7ce6                 jl 0x84f9f1
// 0084fa0b  6aff                 push -1
// 0084fa0d  6a00                 push 0
// 0084fa0f  8d4f20               lea ecx, [edi + 0x20]
// 0084fa12  e889590000           call 0x8553a0
// 0084fa17  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0084fa1a  5e                   pop esi
// 0084fa1b  5f                   pop edi
// 0084fa1c  e93ffcffff           jmp 0x84f660
// 0084fa21  e8e640faff           call 0x7f3b0c
// 0084fa26  5f                   pop edi
// 0084fa27  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@CXTPPropertyGridVerbs@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp