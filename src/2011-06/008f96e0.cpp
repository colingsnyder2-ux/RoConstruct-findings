// roc 2011-06 008f96e0  unit: CXTPDialogBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f96e0
//
// 008f96e0  53                   push ebx
// 008f96e1  56                   push esi
// 008f96e2  57                   push edi
// 008f96e3  8bf1                 mov esi, ecx
// 008f96e5  e8440ff1ff           call 0x80a62e
// 008f96ea  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008f96ee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008f96f2  83ec10               sub esp, 0x10
// 008f96f5  8bc4                 mov eax, esp
// 008f96f7  33c9                 xor ecx, ecx
// 008f96f9  8908                 mov dword ptr [eax], ecx
// 008f96fb  33d2                 xor edx, edx
// 008f96fd  895004               mov dword ptr [eax + 4], edx
// 008f9700  897808               mov dword ptr [eax + 8], edi
// 008f9703  8bce                 mov ecx, esi
// 008f9705  89580c               mov dword ptr [eax + 0xc], ebx
// 008f9708  e863ffffff           call 0x8f9670
// 008f970d  5f                   pop edi
// 008f970e  5e                   pop esi
// 008f970f  5b                   pop ebx
// 008f9710  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPDialogBar.cpp (function ?OnSize@CXTPDialogBar@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDialogBar.cpp
