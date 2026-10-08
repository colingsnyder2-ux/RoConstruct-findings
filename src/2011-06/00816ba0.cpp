// roc 2011-06 00816ba0  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816ba0
//
// 00816ba0  56                   push esi
// 00816ba1  8bf1                 mov esi, ecx
// 00816ba3  8b4660               mov eax, dword ptr [esi + 0x60]
// 00816ba6  05c8010000           add eax, 0x1c8
// 00816bab  50                   push eax
// 00816bac  e82ff6ffff           call 0x8161e0
// 00816bb1  8bce                 mov ecx, esi
// 00816bb3  5e                   pop esi
// 00816bb4  e9673fffff           jmp 0x80ab20
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnDestroy@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
