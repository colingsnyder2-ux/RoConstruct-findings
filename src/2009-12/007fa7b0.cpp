// roc 2009-12 007fa7b0  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa7b0
//
// 007fa7b0  56                   push esi
// 007fa7b1  8bf1                 mov esi, ecx
// 007fa7b3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fa7b9  85c0                 test eax, eax
// 007fa7bb  7452                 je 0x7fa80f
// 007fa7bd  83782000             cmp dword ptr [eax + 0x20], 0
// 007fa7c1  744c                 je 0x7fa80f
// 007fa7c3  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 007fa7ca  7425                 je 0x7fa7f1
// 007fa7cc  8b06                 mov eax, dword ptr [esi]
// 007fa7ce  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 007fa7d4  6a00                 push 0
// 007fa7d6  ffd2                 call edx
// 007fa7d8  85c0                 test eax, eax
// 007fa7da  7415                 je 0x7fa7f1
// 007fa7dc  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007fa7e2  85c0                 test eax, eax
// 007fa7e4  740b                 je 0x7fa7f1
// 007fa7e6  83782000             cmp dword ptr [eax + 0x20], 0
// 007fa7ea  b840000000           mov eax, 0x40
// 007fa7ef  7505                 jne 0x7fa7f6
// 007fa7f1  b880000000           mov eax, 0x80
// 007fa7f6  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fa7fc  83c817               or eax, 0x17
// 007fa7ff  50                   push eax
// 007fa800  6a00                 push 0
// 007fa802  6a00                 push 0
// 007fa804  6a00                 push 0
// 007fa806  6a00                 push 0
// 007fa808  6a00                 push 0
// 007fa80a  e81d94ffff           call 0x7f3c2c
// 007fa80f  5e                   pop esi
// 007fa810  c3                   ret 
// copied from an identical function in another client (function ?ShowHideEditControl@CXTPControlComboBox@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp