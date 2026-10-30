// roc 2009-06 0071b7c0  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b7c0
//
// 0071b7c0  56                   push esi
// 0071b7c1  8bf1                 mov esi, ecx
// 0071b7c3  8b4660               mov eax, dword ptr [esi + 0x60]
// 0071b7c6  05c8010000           add eax, 0x1c8
// 0071b7cb  50                   push eax
// 0071b7cc  e8eff5ffff           call 0x71adc0
// 0071b7d1  8bce                 mov ecx, esi
// 0071b7d3  5e                   pop esi
// 0071b7d4  e915ddffff           jmp 0x7194ee
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnDestroy@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
