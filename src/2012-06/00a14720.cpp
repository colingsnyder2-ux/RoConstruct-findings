// roc 2012-06 00a14720  unit: CXTPControlEdit  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a14720
//
// 00a14720  8b442404             mov eax, dword ptr [esp + 4]
// 00a14724  56                   push esi
// 00a14725  8bf1                 mov esi, ecx
// 00a14727  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 00a1472d  7412                 je 0xa14741
// 00a1472f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00a14735  e8a6fcffff           call 0xa143e0
// 00a1473a  8bce                 mov ecx, esi
// 00a1473c  e83f00f7ff           call 0x984780
// 00a14741  5e                   pop esi
// 00a14742  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
