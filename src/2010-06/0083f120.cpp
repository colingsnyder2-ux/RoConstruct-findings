// roc 2010-06 0083f120  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083f120
//
// 0083f120  8b442404             mov eax, dword ptr [esp + 4]
// 0083f124  56                   push esi
// 0083f125  8bf1                 mov esi, ecx
// 0083f127  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 0083f12d  7412                 je 0x83f141
// 0083f12f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0083f135  e8a6fcffff           call 0x83ede0
// 0083f13a  8bce                 mov ecx, esi
// 0083f13c  e8bfacf6ff           call 0x7a9e00
// 0083f141  5e                   pop esi
// 0083f142  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
