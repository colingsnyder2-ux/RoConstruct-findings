// roc 2012-06 0098edc0  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098edc0
//
// 0098edc0  56                   push esi
// 0098edc1  8bf1                 mov esi, ecx
// 0098edc3  8b4660               mov eax, dword ptr [esi + 0x60]
// 0098edc6  05c8010000           add eax, 0x1c8
// 0098edcb  50                   push eax
// 0098edcc  e88ff6ffff           call 0x98e460
// 0098edd1  8bce                 mov ecx, esi
// 0098edd3  5e                   pop esi
// 0098edd4  e9cd3dffff           jmp 0x982ba6
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnDestroy@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
