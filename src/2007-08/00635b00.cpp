// roc 2007-08 00635b00  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635b00
//
// 00635b00  56                   push esi
// 00635b01  8bf1                 mov esi, ecx
// 00635b03  e836a7ffff           call 0x63023e
// 00635b08  c7465401000000       mov dword ptr [esi + 0x54], 1
// 00635b0f  5e                   pop esi
// 00635b10  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?OnImeStartComposition@CXTPEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
