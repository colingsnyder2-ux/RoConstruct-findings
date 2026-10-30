// roc 2009-12 0083a700  unit: CXTPDockingPaneManager  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a700
//
// 0083a700  83ec14               sub esp, 0x14
// 0083a703  53                   push ebx
// 0083a704  55                   push ebp
// 0083a705  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0083a709  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0083a70c  8b5018               mov edx, dword ptr [eax + 0x18]
// 0083a70f  56                   push esi
// 0083a710  57                   push edi
// 0083a711  8d7d20               lea edi, [ebp + 0x20]
// 0083a714  8bd9                 mov ebx, ecx
// 0083a716  8bcf                 mov ecx, edi
// 0083a718  ffd2                 call edx
// 0083a71a  50                   push eax
// 0083a71b  e8a03d0700           call 0x8ae4c0
// 0083a720  50                   push eax
// 0083a721  e81895fbff           call 0x7f3c3e
// 0083a726  8bf0                 mov esi, eax
// 0083a728  8b07                 mov eax, dword ptr [edi]
// 0083a72a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0083a72d  83c408               add esp, 8
// 0083a730  f7de                 neg esi
// 0083a732  1bf6                 sbb esi, esi
// 0083a734  8bcf                 mov ecx, edi
// 0083a736  f7de                 neg esi
// 0083a738  ffd2                 call edx
// 0083a73a  89442410             mov dword ptr [esp + 0x10], eax
// 0083a73e  85f6                 test esi, esi
// 0083a740  7523                 jne 0x83a765
// 0083a742  85c0                 test eax, eax
// 0083a744  751f                 jne 0x83a765
// 0083a746  8bcd                 mov ecx, ebp
// 0083a748  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0083a750  e82b240200           call 0x85cb80
// 0083a755  a804                 test al, 4
// 0083a757  743e                 je 0x83a797
// 0083a759  33c0                 xor eax, eax
// 0083a75b  5f                   pop edi
// 0083a75c  5e                   pop esi
// 0083a75d  5d                   pop ebp
// 0083a75e  5b                   pop ebx
// 0083a75f  83c414               add esp, 0x14
// 0083a762  c20800               ret 8
// 0083a765  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0083a76d  85f6                 test esi, esi
// 0083a76f  741b                 je 0x83a78c
// 0083a771  8bcd                 mov ecx, ebp
// 0083a773  e808240200           call 0x85cb80
// 0083a778  a820                 test al, 0x20
// 0083a77a  740c                 je 0x83a788
// 0083a77c  33c0                 xor eax, eax
// 0083a77e  5f                   pop edi
// 0083a77f  5e                   pop esi
// 0083a780  5d                   pop ebp
// 0083a781  5b                   pop ebx
// 0083a782  83c414               add esp, 0x14
// 0083a785  c20800               ret 8
// 0083a788  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083a78c  85c0                 test eax, eax
// 0083a78e  7407                 je 0x83a797
// 0083a790  b808000000           mov eax, 8
// 0083a795  eb0e                 jmp 0x83a7a5
// 0083a797  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083a79b  f7d8                 neg eax
// 0083a79d  1bc0                 sbb eax, eax
// 0083a79f  83e0fc               and eax, 0xfffffffc
// 0083a7a2  83c004               add eax, 4
// 0083a7a5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0083a7a9  6a00                 push 0
// 0083a7ab  56                   push esi
// 0083a7ac  55                   push ebp
// 0083a7ad  50                   push eax
// 0083a7ae  8bcb                 mov ecx, ebx
// 0083a7b0  e86bddffff           call 0x838520
// 0083a7b5  85c0                 test eax, eax
// 0083a7b7  75c3                 jne 0x83a77c
// 0083a7b9  85f6                 test esi, esi
// 0083a7bb  741f                 je 0x83a7dc
// 0083a7bd  56                   push esi
// 0083a7be  57                   push edi
// 0083a7bf  8bcb                 mov ecx, ebx
// 0083a7c1  c7833c01000001000000 mov dword ptr [ebx + 0x13c], 1
// 0083a7cb  e810ffffff           call 0x83a6e0
// 0083a7d0  c7833c01000000000000 mov dword ptr [ebx + 0x13c], 0
// 0083a7da  eb30                 jmp 0x83a80c
// 0083a7dc  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 0083a7df  8d442414             lea eax, [esp + 0x14]
// 0083a7e3  50                   push eax
// 0083a7e4  e8b75f0700           call 0x8b07a0
// 0083a7e9  8b10                 mov edx, dword ptr [eax]
// 0083a7eb  83ec10               sub esp, 0x10
// 0083a7ee  8bcc                 mov ecx, esp
// 0083a7f0  8911                 mov dword ptr [ecx], edx
// 0083a7f2  8b5004               mov edx, dword ptr [eax + 4]
// 0083a7f5  895104               mov dword ptr [ecx + 4], edx
// 0083a7f8  8b5008               mov edx, dword ptr [eax + 8]
// 0083a7fb  8b400c               mov eax, dword ptr [eax + 0xc]
// 0083a7fe  895108               mov dword ptr [ecx + 8], edx
// 0083a801  89410c               mov dword ptr [ecx + 0xc], eax
// 0083a804  57                   push edi
// 0083a805  8bcb                 mov ecx, ebx
// 0083a807  e8c4e2ffff           call 0x838ad0
// 0083a80c  837c241000           cmp dword ptr [esp + 0x10], 0
// 0083a811  7407                 je 0x83a81a
// 0083a813  b809000000           mov eax, 9
// 0083a818  eb10                 jmp 0x83a82a
// 0083a81a  33c0                 xor eax, eax
// 0083a81c  39442428             cmp dword ptr [esp + 0x28], eax
// 0083a820  0f94c0               sete al
// 0083a823  8d048501000000       lea eax, [eax*4 + 1]
// 0083a82a  6a00                 push 0
// 0083a82c  6a00                 push 0
// 0083a82e  55                   push ebp
// 0083a82f  50                   push eax
// 0083a830  8bcb                 mov ecx, ebx
// 0083a832  e8e9dcffff           call 0x838520
// 0083a837  5f                   pop edi
// 0083a838  5e                   pop esi
// 0083a839  5d                   pop ebp
// 0083a83a  b801000000           mov eax, 1
// 0083a83f  5b                   pop ebx
// 0083a840  83c414               add esp, 0x14
// 0083a843  c20800               ret 8
// copied from an identical function in another client (function ?_ToggleDocking@CXTPDockingPaneManager@@AAEHPAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp