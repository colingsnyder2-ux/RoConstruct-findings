// roc 2008-06 00772be0  unit: CXTPControlCustom  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772be0
//
// 00772be0  8b442404             mov eax, dword ptr [esp + 4]
// 00772be4  56                   push esi
// 00772be5  8bf1                 mov esi, ecx
// 00772be7  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 00772bed  7412                 je 0x772c01
// 00772bef  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00772bf5  e826ffffff           call 0x772b20
// 00772bfa  8bce                 mov ecx, esi
// 00772bfc  e8bf83f3ff           call 0x6aafc0
// 00772c01  5e                   pop esi
// 00772c02  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
