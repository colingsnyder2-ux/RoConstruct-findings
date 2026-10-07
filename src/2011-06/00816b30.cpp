// roc 2011-06 00816b30  unit: CXTPControlComboBoxList  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816b30
//
// 00816b30  83ec10               sub esp, 0x10
// 00816b33  56                   push esi
// 00816b34  57                   push edi
// 00816b35  8bf1                 mov esi, ecx
// 00816b37  e8a4e80200           call 0x8453e0
// 00816b3c  6a05                 push 5
// 00816b3e  8bc8                 mov ecx, eax
// 00816b40  e86be00200           call 0x844bb0
// 00816b45  56                   push esi
// 00816b46  8d4c240c             lea ecx, [esp + 0xc]
// 00816b4a  8bf8                 mov edi, eax
// 00816b4c  e83f620400           call 0x85cd90
// 00816b51  57                   push edi
// 00816b52  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00816b56  50                   push eax
// 00816b57  8bcf                 mov ecx, edi
// 00816b59  e8c242ffff           call 0x80ae20
// 00816b5e  8b4704               mov eax, dword ptr [edi + 4]
// 00816b61  6a00                 push 0
// 00816b63  50                   push eax
// 00816b64  6a0f                 push 0xf
// 00816b66  8bce                 mov ecx, esi
// 00816b68  e87136ffff           call 0x80a1de
// 00816b6d  5f                   pop edi
// 00816b6e  5e                   pop esi
// 00816b6f  83c410               add esp, 0x10
// 00816b72  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?DrawCommandBar@CXTPControlComboBoxList@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
