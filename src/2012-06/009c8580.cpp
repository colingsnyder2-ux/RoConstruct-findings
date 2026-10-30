// roc 2012-06 009c8580  unit: CXTPDockingPaneManager  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c8580
//
// 009c8580  83ec14               sub esp, 0x14
// 009c8583  53                   push ebx
// 009c8584  55                   push ebp
// 009c8585  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 009c8589  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009c858c  8b5018               mov edx, dword ptr [eax + 0x18]
// 009c858f  56                   push esi
// 009c8590  57                   push edi
// 009c8591  8d7d20               lea edi, [ebp + 0x20]
// 009c8594  8bd9                 mov ebx, ecx
// 009c8596  8bcf                 mov ecx, edi
// 009c8598  ffd2                 call edx
// 009c859a  50                   push eax
// 009c859b  e850f80600           call 0xa37df0
// 009c85a0  50                   push eax
// 009c85a1  e8409ffbff           call 0x9824e6
// 009c85a6  8bf0                 mov esi, eax
// 009c85a8  8b07                 mov eax, dword ptr [edi]
// 009c85aa  8b501c               mov edx, dword ptr [eax + 0x1c]
// 009c85ad  83c408               add esp, 8
// 009c85b0  f7de                 neg esi
// 009c85b2  1bf6                 sbb esi, esi
// 009c85b4  8bcf                 mov ecx, edi
// 009c85b6  f7de                 neg esi
// 009c85b8  ffd2                 call edx
// 009c85ba  89442410             mov dword ptr [esp + 0x10], eax
// 009c85be  85f6                 test esi, esi
// 009c85c0  7523                 jne 0x9c85e5
// 009c85c2  85c0                 test eax, eax
// 009c85c4  751f                 jne 0x9c85e5
// 009c85c6  8bcd                 mov ecx, ebp
// 009c85c8  c744242801000000     mov dword ptr [esp + 0x28], 1
// 009c85d0  e8bbba0100           call 0x9e4090
// 009c85d5  a804                 test al, 4
// 009c85d7  743e                 je 0x9c8617
// 009c85d9  33c0                 xor eax, eax
// 009c85db  5f                   pop edi
// 009c85dc  5e                   pop esi
// 009c85dd  5d                   pop ebp
// 009c85de  5b                   pop ebx
// 009c85df  83c414               add esp, 0x14
// 009c85e2  c20800               ret 8
// 009c85e5  c744242800000000     mov dword ptr [esp + 0x28], 0
// 009c85ed  85f6                 test esi, esi
// 009c85ef  741b                 je 0x9c860c
// 009c85f1  8bcd                 mov ecx, ebp
// 009c85f3  e898ba0100           call 0x9e4090
// 009c85f8  a820                 test al, 0x20
// 009c85fa  740c                 je 0x9c8608
// 009c85fc  33c0                 xor eax, eax
// 009c85fe  5f                   pop edi
// 009c85ff  5e                   pop esi
// 009c8600  5d                   pop ebp
// 009c8601  5b                   pop ebx
// 009c8602  83c414               add esp, 0x14
// 009c8605  c20800               ret 8
// 009c8608  8b442410             mov eax, dword ptr [esp + 0x10]
// 009c860c  85c0                 test eax, eax
// 009c860e  7407                 je 0x9c8617
// 009c8610  b808000000           mov eax, 8
// 009c8615  eb0e                 jmp 0x9c8625
// 009c8617  8b442428             mov eax, dword ptr [esp + 0x28]
// 009c861b  f7d8                 neg eax
// 009c861d  1bc0                 sbb eax, eax
// 009c861f  83e0fc               and eax, 0xfffffffc
// 009c8622  83c004               add eax, 4
// 009c8625  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c8629  6a00                 push 0
// 009c862b  56                   push esi
// 009c862c  55                   push ebp
// 009c862d  50                   push eax
// 009c862e  8bcb                 mov ecx, ebx
// 009c8630  e8dbddffff           call 0x9c6410
// 009c8635  85c0                 test eax, eax
// 009c8637  75c3                 jne 0x9c85fc
// 009c8639  85f6                 test esi, esi
// 009c863b  741f                 je 0x9c865c
// 009c863d  56                   push esi
// 009c863e  57                   push edi
// 009c863f  8bcb                 mov ecx, ebx
// 009c8641  c7833c01000001000000 mov dword ptr [ebx + 0x13c], 1
// 009c864b  e810ffffff           call 0x9c8560
// 009c8650  c7833c01000000000000 mov dword ptr [ebx + 0x13c], 0
// 009c865a  eb30                 jmp 0x9c868c
// 009c865c  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 009c865f  8d442414             lea eax, [esp + 0x14]
// 009c8663  50                   push eax
// 009c8664  e8671a0700           call 0xa3a0d0
// 009c8669  8b10                 mov edx, dword ptr [eax]
// 009c866b  83ec10               sub esp, 0x10
// 009c866e  8bcc                 mov ecx, esp
// 009c8670  8911                 mov dword ptr [ecx], edx
// 009c8672  8b5004               mov edx, dword ptr [eax + 4]
// 009c8675  895104               mov dword ptr [ecx + 4], edx
// 009c8678  8b5008               mov edx, dword ptr [eax + 8]
// 009c867b  8b400c               mov eax, dword ptr [eax + 0xc]
// 009c867e  895108               mov dword ptr [ecx + 8], edx
// 009c8681  89410c               mov dword ptr [ecx + 0xc], eax
// 009c8684  57                   push edi
// 009c8685  8bcb                 mov ecx, ebx
// 009c8687  e8c4e2ffff           call 0x9c6950
// 009c868c  837c241000           cmp dword ptr [esp + 0x10], 0
// 009c8691  7407                 je 0x9c869a
// 009c8693  b809000000           mov eax, 9
// 009c8698  eb10                 jmp 0x9c86aa
// 009c869a  33c0                 xor eax, eax
// 009c869c  39442428             cmp dword ptr [esp + 0x28], eax
// 009c86a0  0f94c0               sete al
// 009c86a3  8d048501000000       lea eax, [eax*4 + 1]
// 009c86aa  6a00                 push 0
// 009c86ac  6a00                 push 0
// 009c86ae  55                   push ebp
// 009c86af  50                   push eax
// 009c86b0  8bcb                 mov ecx, ebx
// 009c86b2  e859ddffff           call 0x9c6410
// 009c86b7  5f                   pop edi
// 009c86b8  5e                   pop esi
// 009c86b9  5d                   pop ebp
// 009c86ba  b801000000           mov eax, 1
// 009c86bf  5b                   pop ebx
// 009c86c0  83c414               add esp, 0x14
// 009c86c3  c20800               ret 8
// copied from an identical function in another client (function ?_ToggleDocking@CXTPDockingPaneManager@@AAEHPAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp