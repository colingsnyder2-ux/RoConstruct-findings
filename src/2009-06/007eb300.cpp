// roc 2009-06 007eb300  unit: CXTPControlCustom  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb300
//
// 007eb300  8b442404             mov eax, dword ptr [esp + 4]
// 007eb304  56                   push esi
// 007eb305  8bf1                 mov esi, ecx
// 007eb307  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 007eb30d  7412                 je 0x7eb321
// 007eb30f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 007eb315  e826ffffff           call 0x7eb240
// 007eb31a  8bce                 mov ecx, esi
// 007eb31c  e87f43f3ff           call 0x71f6a0
// 007eb321  5e                   pop esi
// 007eb322  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
