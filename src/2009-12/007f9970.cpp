// roc 2009-12 007f9970  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9970
//
// 007f9970  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 007f9973  8b01                 mov eax, dword ptr [ecx]
// 007f9975  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 007f997b  ffd2                 call edx
// 007f997d  8b10                 mov edx, dword ptr [eax]
// 007f997f  8bc8                 mov ecx, eax
// 007f9981  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 007f9987  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnShellAutoCompleteStart@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp