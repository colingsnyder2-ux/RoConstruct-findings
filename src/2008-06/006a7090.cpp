// roc 2008-06 006a7090  unit: CXTPControlComboBoxList  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7090
//
// 006a7090  56                   push esi
// 006a7091  8bb180010000         mov esi, dword ptr [ecx + 0x180]
// 006a7097  8b06                 mov eax, dword ptr [esi]
// 006a7099  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 006a709f  8bce                 mov ecx, esi
// 006a70a1  ffd2                 call edx
// 006a70a3  8b06                 mov eax, dword ptr [esi]
// 006a70a5  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006a70ab  8bce                 mov ecx, esi
// 006a70ad  ffd2                 call edx
// 006a70af  5e                   pop esi
// 006a70b0  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnLButtonUp@CXTPControlComboBoxList@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
