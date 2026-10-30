// roc 2009-12 007fb550  unit: CXTPControlComboBoxList  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb550
//
// 007fb550  56                   push esi
// 007fb551  8bf1                 mov esi, ecx
// 007fb553  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb556  e855a9ffff           call 0x7f5eb0
// 007fb55b  85c0                 test eax, eax
// 007fb55d  7429                 je 0x7fb588
// 007fb55f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb562  8b01                 mov eax, dword ptr [ecx]
// 007fb564  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 007fb56a  ffd2                 call edx
// 007fb56c  85c0                 test eax, eax
// 007fb56e  741f                 je 0x7fb58f
// 007fb570  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb573  8b31                 mov esi, dword ptr [ecx]
// 007fb575  33d2                 xor edx, edx
// 007fb577  33c0                 xor eax, eax
// 007fb579  52                   push edx
// 007fb57a  50                   push eax
// 007fb57b  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 007fb581  52                   push edx
// 007fb582  ffd0                 call eax
// 007fb584  5e                   pop esi
// 007fb585  c20c00               ret 0xc
// 007fb588  8bce                 mov ecx, esi
// 007fb58a  e8a188ffff           call 0x7f3e30
// 007fb58f  5e                   pop esi
// 007fb590  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp