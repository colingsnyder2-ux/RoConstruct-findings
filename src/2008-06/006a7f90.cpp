// roc 2008-06 006a7f90  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7f90
//
// 006a7f90  56                   push esi
// 006a7f91  8bf1                 mov esi, ecx
// 006a7f93  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 006a7f99  85c0                 test eax, eax
// 006a7f9b  7452                 je 0x6a7fef
// 006a7f9d  83782000             cmp dword ptr [eax + 0x20], 0
// 006a7fa1  744c                 je 0x6a7fef
// 006a7fa3  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 006a7faa  7425                 je 0x6a7fd1
// 006a7fac  8b06                 mov eax, dword ptr [esi]
// 006a7fae  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 006a7fb4  6a00                 push 0
// 006a7fb6  ffd2                 call edx
// 006a7fb8  85c0                 test eax, eax
// 006a7fba  7415                 je 0x6a7fd1
// 006a7fbc  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006a7fc2  85c0                 test eax, eax
// 006a7fc4  740b                 je 0x6a7fd1
// 006a7fc6  83782000             cmp dword ptr [eax + 0x20], 0
// 006a7fca  b840000000           mov eax, 0x40
// 006a7fcf  7505                 jne 0x6a7fd6
// 006a7fd1  b880000000           mov eax, 0x80
// 006a7fd6  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006a7fdc  83c817               or eax, 0x17
// 006a7fdf  50                   push eax
// 006a7fe0  6a00                 push 0
// 006a7fe2  6a00                 push 0
// 006a7fe4  6a00                 push 0
// 006a7fe6  6a00                 push 0
// 006a7fe8  6a00                 push 0
// 006a7fea  e8578affff           call 0x6a0a46
// 006a7fef  5e                   pop esi
// 006a7ff0  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?ShowHideEditControl@CXTPControlComboBox@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
