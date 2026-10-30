// roc 2012-06 00a4b000  unit: CXTPControlCustom  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b000
//
// 00a4b000  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b004  56                   push esi
// 00a4b005  8bf1                 mov esi, ecx
// 00a4b007  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 00a4b00d  7412                 je 0xa4b021
// 00a4b00f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00a4b015  e826ffffff           call 0xa4af40
// 00a4b01a  8bce                 mov ecx, esi
// 00a4b01c  e85f97f3ff           call 0x984780
// 00a4b021  5e                   pop esi
// 00a4b022  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
