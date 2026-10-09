// roc 2009-12 007f9990  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9990
//
// 007f9990  56                   push esi
// 007f9991  8bf1                 mov esi, ecx
// 007f9993  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f9996  05c8010000           add eax, 0x1c8
// 007f999b  50                   push eax
// 007f999c  e82ff6ffff           call 0x7f8fd0
// 007f99a1  8bce                 mov ecx, esi
// 007f99a3  5e                   pop esi
// 007f99a4  e973a9ffff           jmp 0x7f431c
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnDestroy@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
