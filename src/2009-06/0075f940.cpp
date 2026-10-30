// roc 2009-06 0075f940  unit: CXTPDockingPaneManager  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075f940
//
// 0075f940  83ec14               sub esp, 0x14
// 0075f943  53                   push ebx
// 0075f944  55                   push ebp
// 0075f945  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0075f949  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0075f94c  8b5018               mov edx, dword ptr [eax + 0x18]
// 0075f94f  56                   push esi
// 0075f950  57                   push edi
// 0075f951  8d7d20               lea edi, [ebp + 0x20]
// 0075f954  8bd9                 mov ebx, ecx
// 0075f956  8bcf                 mov ecx, edi
// 0075f958  ffd2                 call edx
// 0075f95a  50                   push eax
// 0075f95b  e800400700           call 0x7d3960
// 0075f960  50                   push eax
// 0075f961  e86096fbff           call 0x718fc6
// 0075f966  8bf0                 mov esi, eax
// 0075f968  8b07                 mov eax, dword ptr [edi]
// 0075f96a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0075f96d  83c408               add esp, 8
// 0075f970  f7de                 neg esi
// 0075f972  1bf6                 sbb esi, esi
// 0075f974  8bcf                 mov ecx, edi
// 0075f976  f7de                 neg esi
// 0075f978  ffd2                 call edx
// 0075f97a  89442410             mov dword ptr [esp + 0x10], eax
// 0075f97e  85f6                 test esi, esi
// 0075f980  7523                 jne 0x75f9a5
// 0075f982  85c0                 test eax, eax
// 0075f984  751f                 jne 0x75f9a5
// 0075f986  8bcd                 mov ecx, ebp
// 0075f988  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0075f990  e89b210200           call 0x781b30
// 0075f995  a804                 test al, 4
// 0075f997  743e                 je 0x75f9d7
// 0075f999  33c0                 xor eax, eax
// 0075f99b  5f                   pop edi
// 0075f99c  5e                   pop esi
// 0075f99d  5d                   pop ebp
// 0075f99e  5b                   pop ebx
// 0075f99f  83c414               add esp, 0x14
// 0075f9a2  c20800               ret 8
// 0075f9a5  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0075f9ad  85f6                 test esi, esi
// 0075f9af  741b                 je 0x75f9cc
// 0075f9b1  8bcd                 mov ecx, ebp
// 0075f9b3  e878210200           call 0x781b30
// 0075f9b8  a820                 test al, 0x20
// 0075f9ba  740c                 je 0x75f9c8
// 0075f9bc  33c0                 xor eax, eax
// 0075f9be  5f                   pop edi
// 0075f9bf  5e                   pop esi
// 0075f9c0  5d                   pop ebp
// 0075f9c1  5b                   pop ebx
// 0075f9c2  83c414               add esp, 0x14
// 0075f9c5  c20800               ret 8
// 0075f9c8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075f9cc  85c0                 test eax, eax
// 0075f9ce  7407                 je 0x75f9d7
// 0075f9d0  b808000000           mov eax, 8
// 0075f9d5  eb0e                 jmp 0x75f9e5
// 0075f9d7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0075f9db  f7d8                 neg eax
// 0075f9dd  1bc0                 sbb eax, eax
// 0075f9df  83e0fc               and eax, 0xfffffffc
// 0075f9e2  83c004               add eax, 4
// 0075f9e5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0075f9e9  6a00                 push 0
// 0075f9eb  56                   push esi
// 0075f9ec  55                   push ebp
// 0075f9ed  50                   push eax
// 0075f9ee  8bcb                 mov ecx, ebx
// 0075f9f0  e8bbddffff           call 0x75d7b0
// 0075f9f5  85c0                 test eax, eax
// 0075f9f7  75c3                 jne 0x75f9bc
// 0075f9f9  85f6                 test esi, esi
// 0075f9fb  741f                 je 0x75fa1c
// 0075f9fd  56                   push esi
// 0075f9fe  57                   push edi
// 0075f9ff  8bcb                 mov ecx, ebx
// 0075fa01  c7833c01000001000000 mov dword ptr [ebx + 0x13c], 1
// 0075fa0b  e810ffffff           call 0x75f920
// 0075fa10  c7833c01000000000000 mov dword ptr [ebx + 0x13c], 0
// 0075fa1a  eb30                 jmp 0x75fa4c
// 0075fa1c  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 0075fa1f  8d442414             lea eax, [esp + 0x14]
// 0075fa23  50                   push eax
// 0075fa24  e837620700           call 0x7d5c60
// 0075fa29  8b10                 mov edx, dword ptr [eax]
// 0075fa2b  83ec10               sub esp, 0x10
// 0075fa2e  8bcc                 mov ecx, esp
// 0075fa30  8911                 mov dword ptr [ecx], edx
// 0075fa32  8b5004               mov edx, dword ptr [eax + 4]
// 0075fa35  895104               mov dword ptr [ecx + 4], edx
// 0075fa38  8b5008               mov edx, dword ptr [eax + 8]
// 0075fa3b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0075fa3e  895108               mov dword ptr [ecx + 8], edx
// 0075fa41  89410c               mov dword ptr [ecx + 0xc], eax
// 0075fa44  57                   push edi
// 0075fa45  8bcb                 mov ecx, ebx
// 0075fa47  e8c4e2ffff           call 0x75dd10
// 0075fa4c  837c241000           cmp dword ptr [esp + 0x10], 0
// 0075fa51  7407                 je 0x75fa5a
// 0075fa53  b809000000           mov eax, 9
// 0075fa58  eb10                 jmp 0x75fa6a
// 0075fa5a  33c0                 xor eax, eax
// 0075fa5c  39442428             cmp dword ptr [esp + 0x28], eax
// 0075fa60  0f94c0               sete al
// 0075fa63  8d048501000000       lea eax, [eax*4 + 1]
// 0075fa6a  6a00                 push 0
// 0075fa6c  6a00                 push 0
// 0075fa6e  55                   push ebp
// 0075fa6f  50                   push eax
// 0075fa70  8bcb                 mov ecx, ebx
// 0075fa72  e839ddffff           call 0x75d7b0
// 0075fa77  5f                   pop edi
// 0075fa78  5e                   pop esi
// 0075fa79  5d                   pop ebp
// 0075fa7a  b801000000           mov eax, 1
// 0075fa7f  5b                   pop ebx
// 0075fa80  83c414               add esp, 0x14
// 0075fa83  c20800               ret 8
// copied from an identical function in another client (function ?_ToggleDocking@CXTPDockingPaneManager@@AAEHPAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp