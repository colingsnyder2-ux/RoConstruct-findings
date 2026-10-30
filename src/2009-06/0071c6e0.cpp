// roc 2009-06 0071c6e0  unit: CPatchedControlComboBox  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071c6e0
//
// 0071c6e0  8b442404             mov eax, dword ptr [esp + 4]
// 0071c6e4  56                   push esi
// 0071c6e5  8bf1                 mov esi, ecx
// 0071c6e7  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 0071c6ed  7412                 je 0x71c701
// 0071c6ef  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0071c6f5  e806ffffff           call 0x71c600
// 0071c6fa  8bce                 mov ecx, esi
// 0071c6fc  e89f2f0000           call 0x71f6a0
// 0071c701  5e                   pop esi
// 0071c702  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
