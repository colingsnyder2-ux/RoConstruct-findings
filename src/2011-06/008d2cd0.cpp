// roc 2011-06 008d2cd0  unit: CXTPControlCustom  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2cd0
//
// 008d2cd0  8b442404             mov eax, dword ptr [esp + 4]
// 008d2cd4  56                   push esi
// 008d2cd5  8bf1                 mov esi, ecx
// 008d2cd7  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 008d2cdd  7412                 je 0x8d2cf1
// 008d2cdf  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 008d2ce5  e826ffffff           call 0x8d2c10
// 008d2cea  8bce                 mov ecx, esi
// 008d2cec  e8ff97f3ff           call 0x80c4f0
// 008d2cf1  5e                   pop esi
// 008d2cf2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
