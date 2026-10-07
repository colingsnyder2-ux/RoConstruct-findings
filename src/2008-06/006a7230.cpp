// roc 2008-06 006a7230  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7230
//
// 006a7230  56                   push esi
// 006a7231  8bf1                 mov esi, ecx
// 006a7233  8b4660               mov eax, dword ptr [esi + 0x60]
// 006a7236  05c8010000           add eax, 0x1c8
// 006a723b  50                   push eax
// 006a723c  e83ff6ffff           call 0x6a6880
// 006a7241  8bce                 mov ecx, esi
// 006a7243  5e                   pop esi
// 006a7244  e9339effff           jmp 0x6a107c
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnDestroy@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
