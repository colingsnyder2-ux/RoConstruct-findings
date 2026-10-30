// roc 2011-06 00817a00  unit: CPatchedControlComboBox  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00817a00
//
// 00817a00  8b442404             mov eax, dword ptr [esp + 4]
// 00817a04  56                   push esi
// 00817a05  8bf1                 mov esi, ecx
// 00817a07  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 00817a0d  7412                 je 0x817a21
// 00817a0f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00817a15  e806ffffff           call 0x817920
// 00817a1a  8bce                 mov ecx, esi
// 00817a1c  e8cf4affff           call 0x80c4f0
// 00817a21  5e                   pop esi
// 00817a22  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
