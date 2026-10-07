// roc 2008-06 006a9460  unit: CXTPControlEditCtrl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a9460
//
// 006a9460  56                   push esi
// 006a9461  8b742408             mov esi, dword ptr [esp + 8]
// 006a9465  57                   push edi
// 006a9466  8bf9                 mov edi, ecx
// 006a9468  397708               cmp dword ptr [edi + 8], esi
// 006a946b  7443                 je 0x6a94b0
// 006a946d  6810306a00           push 0x6a3010
// 006a9472  b99ced9700           mov ecx, 0x97ed9c
// 006a9477  e85e2b1100           call 0x7bbfda
// 006a947c  85f6                 test esi, esi
// 006a947e  7419                 je 0x6a9499
// 006a9480  85c0                 test eax, eax
// 006a9482  7505                 jne 0x6a9489
// 006a9484  e8bb74ffff           call 0x6a0944
// 006a9489  56                   push esi
// 006a948a  8bc8                 mov ecx, eax
// 006a948c  e8df420700           call 0x71d770
// 006a9491  897708               mov dword ptr [edi + 8], esi
// 006a9494  5f                   pop edi
// 006a9495  5e                   pop esi
// 006a9496  c20400               ret 4
// 006a9499  85c0                 test eax, eax
// 006a949b  7505                 jne 0x6a94a2
// 006a949d  e8a274ffff           call 0x6a0944
// 006a94a2  8b4f08               mov ecx, dword ptr [edi + 8]
// 006a94a5  51                   push ecx
// 006a94a6  8bc8                 mov ecx, eax
// 006a94a8  e8433d0700           call 0x71d1f0
// 006a94ad  897708               mov dword ptr [edi + 8], esi
// 006a94b0  5f                   pop edi
// 006a94b1  5e                   pop esi
// 006a94b2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetAutoCompeteHandle@CXTPControlComboBoxAutoCompleteWnd@@AAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
