// roc 2010-06 007b4700  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b4700
//
// 007b4700  56                   push esi
// 007b4701  8bf1                 mov esi, ecx
// 007b4703  8b4660               mov eax, dword ptr [esi + 0x60]
// 007b4706  05c8010000           add eax, 0x1c8
// 007b470b  50                   push eax
// 007b470c  e88ff6ffff           call 0x7b3da0
// 007b4711  8bce                 mov ecx, esi
// 007b4713  5e                   pop esi
// 007b4714  e9433dffff           jmp 0x7a845c
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnDestroy@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
