// from server: 100% by tester
// roc 2008-06 006a7210  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7210
//
// 006a7210  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006a7213  8b01                 mov eax, dword ptr [ecx]
// 006a7215  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 006a721b  ffd2                 call edx
// 006a721d  8b10                 mov edx, dword ptr [eax]
// 006a721f  8bc8                 mov ecx, eax
// 006a7221  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 006a7227  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnShellAutoCompleteStart@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
