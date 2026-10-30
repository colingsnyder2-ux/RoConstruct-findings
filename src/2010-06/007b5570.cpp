// roc 2010-06 007b5570  unit: CPatchedControlComboBox  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b5570
//
// 007b5570  8b442404             mov eax, dword ptr [esp + 4]
// 007b5574  56                   push esi
// 007b5575  8bf1                 mov esi, ecx
// 007b5577  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 007b557d  7412                 je 0x7b5591
// 007b557f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 007b5585  e806ffffff           call 0x7b5490
// 007b558a  8bce                 mov ecx, esi
// 007b558c  e86f48ffff           call 0x7a9e00
// 007b5591  5e                   pop esi
// 007b5592  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
