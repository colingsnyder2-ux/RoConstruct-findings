// roc 2009-12 008c5e90  unit: CXTPControlCustom  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5e90
//
// 008c5e90  8b442404             mov eax, dword ptr [esp + 4]
// 008c5e94  56                   push esi
// 008c5e95  8bf1                 mov esi, ecx
// 008c5e97  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 008c5e9d  7412                 je 0x8c5eb1
// 008c5e9f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 008c5ea5  e826ffffff           call 0x8c5dd0
// 008c5eaa  8bce                 mov ecx, esi
// 008c5eac  e80ffef2ff           call 0x7f5cc0
// 008c5eb1  5e                   pop esi
// 008c5eb2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
