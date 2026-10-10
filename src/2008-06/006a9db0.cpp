// roc 2008-06 006a9db0  unit: CPatchedControlComboBox  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a9db0
//
// 006a9db0  56                   push esi
// 006a9db1  57                   push edi
// 006a9db2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a9db6  57                   push edi
// 006a9db7  8bf1                 mov esi, ecx
// 006a9db9  e832350000           call 0x6ad2f0
// 006a9dbe  85c0                 test eax, eax
// 006a9dc0  7505                 jne 0x6a9dc7
// 006a9dc2  5f                   pop edi
// 006a9dc3  5e                   pop esi
// 006a9dc4  c20400               ret 4
// 006a9dc7  85ff                 test edi, edi
// 006a9dc9  750a                 jne 0x6a9dd5
// 006a9dcb  8b06                 mov eax, dword ptr [esi]
// 006a9dcd  8b5070               mov edx, dword ptr [eax + 0x70]
// 006a9dd0  57                   push edi
// 006a9dd1  8bce                 mov ecx, esi
// 006a9dd3  ffd2                 call edx
// 006a9dd5  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006a9ddb  85c9                 test ecx, ecx
// 006a9ddd  740b                 je 0x6a9dea
// 006a9ddf  83792000             cmp dword ptr [ecx + 0x20], 0
// 006a9de3  7405                 je 0x6a9dea
// 006a9de5  e816eeffff           call 0x6a8c00
// 006a9dea  5f                   pop edi
// 006a9deb  b801000000           mov eax, 1
// 006a9df0  5e                   pop esi
// 006a9df1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnSetSelected@CXTPControlComboBox@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
