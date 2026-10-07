// roc 2008-06 006a71c0  unit: CXTPControlComboBoxList  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a71c0
//
// 006a71c0  83ec10               sub esp, 0x10
// 006a71c3  56                   push esi
// 006a71c4  57                   push edi
// 006a71c5  8bf1                 mov esi, ecx
// 006a71c7  e8748b0300           call 0x6dfd40
// 006a71cc  6a05                 push 5
// 006a71ce  8bc8                 mov ecx, eax
// 006a71d0  e84b830300           call 0x6df520
// 006a71d5  56                   push esi
// 006a71d6  8d4c240c             lea ecx, [esp + 0xc]
// 006a71da  8bf8                 mov edi, eax
// 006a71dc  e84f090500           call 0x6f7b30
// 006a71e1  57                   push edi
// 006a71e2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006a71e6  50                   push eax
// 006a71e7  8bcf                 mov ecx, edi
// 006a71e9  e870a1ffff           call 0x6a135e
// 006a71ee  8b4704               mov eax, dword ptr [edi + 4]
// 006a71f1  6a00                 push 0
// 006a71f3  50                   push eax
// 006a71f4  6a0f                 push 0xf
// 006a71f6  8bce                 mov ecx, esi
// 006a71f8  e80996ffff           call 0x6a0806
// 006a71fd  5f                   pop edi
// 006a71fe  5e                   pop esi
// 006a71ff  83c410               add esp, 0x10
// 006a7202  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?DrawCommandBar@CXTPControlComboBoxList@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
