// roc 2008-06 00742c40  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742c40
//
// 00742c40  56                   push esi
// 00742c41  8bf1                 mov esi, ecx
// 00742c43  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742c46  e87585f6ff           call 0x6ab1c0
// 00742c4b  85c0                 test eax, eax
// 00742c4d  7429                 je 0x742c78
// 00742c4f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742c52  8b01                 mov eax, dword ptr [ecx]
// 00742c54  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00742c5a  ffd2                 call edx
// 00742c5c  85c0                 test eax, eax
// 00742c5e  741f                 je 0x742c7f
// 00742c60  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742c63  8b31                 mov esi, dword ptr [ecx]
// 00742c65  33d2                 xor edx, edx
// 00742c67  33c0                 xor eax, eax
// 00742c69  52                   push edx
// 00742c6a  50                   push eax
// 00742c6b  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00742c71  52                   push edx
// 00742c72  ffd0                 call eax
// 00742c74  5e                   pop esi
// 00742c75  c20c00               ret 0xc
// 00742c78  8bce                 mov ecx, esi
// 00742c7a  e8e9dff5ff           call 0x6a0c68
// 00742c7f  5e                   pop esi
// 00742c80  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnLButtonDown@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
