// from server: 100% by tester
// roc 2008-06 006a8d30  unit: CXTPControlComboBoxList  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8d30
//
// 006a8d30  56                   push esi
// 006a8d31  8bf1                 mov esi, ecx
// 006a8d33  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 006a8d36  e885240000           call 0x6ab1c0
// 006a8d3b  85c0                 test eax, eax
// 006a8d3d  7553                 jne 0x6a8d92
// 006a8d3f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 006a8d42  8b01                 mov eax, dword ptr [ecx]
// 006a8d44  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 006a8d4a  57                   push edi
// 006a8d4b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a8d4f  57                   push edi
// 006a8d50  ffd2                 call edx
// 006a8d52  57                   push edi
// 006a8d53  8bce                 mov ecx, esi
// 006a8d55  e87086ffff           call 0x6a13ca
// 006a8d5a  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a8d5d  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 006a8d63  6a00                 push 0
// 006a8d65  6a00                 push 0
// 006a8d67  68b1000000           push 0xb1
// 006a8d6c  50                   push eax
// 006a8d6d  ffd7                 call edi
// 006a8d6f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a8d72  6a00                 push 0
// 006a8d74  6a00                 push 0
// 006a8d76  68b7000000           push 0xb7
// 006a8d7b  51                   push ecx
// 006a8d7c  ffd7                 call edi
// 006a8d7e  8b5620               mov edx, dword ptr [esi + 0x20]
// 006a8d81  6aff                 push -1
// 006a8d83  6a00                 push 0
// 006a8d85  68b1000000           push 0xb1
// 006a8d8a  52                   push edx
// 006a8d8b  ff150c2e8000         call dword ptr [0x802e0c]
// 006a8d91  5f                   pop edi
// 006a8d92  5e                   pop esi
// 006a8d93  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnSetFocus@CXTPControlComboBoxEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
