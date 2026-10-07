// roc 2012-06 0098ed50  unit: CXTPControlComboBoxList  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ed50
//
// 0098ed50  83ec10               sub esp, 0x10
// 0098ed53  56                   push esi
// 0098ed54  57                   push edi
// 0098ed55  8bf1                 mov esi, ecx
// 0098ed57  e804eb0200           call 0x9bd860
// 0098ed5c  6a05                 push 5
// 0098ed5e  8bc8                 mov ecx, eax
// 0098ed60  e87be20200           call 0x9bcfe0
// 0098ed65  56                   push esi
// 0098ed66  8d4c240c             lea ecx, [esp + 0xc]
// 0098ed6a  8bf8                 mov edi, eax
// 0098ed6c  e82f640400           call 0x9d51a0
// 0098ed71  57                   push edi
// 0098ed72  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0098ed76  50                   push eax
// 0098ed77  8bcf                 mov ecx, edi
// 0098ed79  e82e41ffff           call 0x982eac
// 0098ed7e  8b4704               mov eax, dword ptr [edi + 4]
// 0098ed81  6a00                 push 0
// 0098ed83  50                   push eax
// 0098ed84  6a0f                 push 0xf
// 0098ed86  8bce                 mov ecx, esi
// 0098ed88  e80d35ffff           call 0x98229a
// 0098ed8d  5f                   pop edi
// 0098ed8e  5e                   pop esi
// 0098ed8f  83c410               add esp, 0x10
// 0098ed92  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?DrawCommandBar@CXTPControlComboBoxList@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
