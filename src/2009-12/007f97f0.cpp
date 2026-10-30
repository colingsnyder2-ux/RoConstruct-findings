// roc 2009-12 007f97f0  unit: CXTPControlComboBoxList  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f97f0
//
// 007f97f0  56                   push esi
// 007f97f1  8bb180010000         mov esi, dword ptr [ecx + 0x180]
// 007f97f7  8b06                 mov eax, dword ptr [esi]
// 007f97f9  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 007f97ff  8bce                 mov ecx, esi
// 007f9801  ffd2                 call edx
// 007f9803  8b06                 mov eax, dword ptr [esi]
// 007f9805  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 007f980b  8bce                 mov ecx, esi
// 007f980d  ffd2                 call edx
// 007f980f  5e                   pop esi
// 007f9810  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPControlComboBoxList@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp