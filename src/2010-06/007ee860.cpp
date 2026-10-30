// roc 2010-06 007ee860  unit: CXTPDockingPaneManager  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ee860
//
// 007ee860  83ec14               sub esp, 0x14
// 007ee863  53                   push ebx
// 007ee864  55                   push ebp
// 007ee865  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007ee869  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007ee86c  8b5018               mov edx, dword ptr [eax + 0x18]
// 007ee86f  56                   push esi
// 007ee870  57                   push edi
// 007ee871  8d7d20               lea edi, [ebp + 0x20]
// 007ee874  8bd9                 mov ebx, ecx
// 007ee876  8bcf                 mov ecx, edi
// 007ee878  ffd2                 call edx
// 007ee87a  50                   push eax
// 007ee87b  e8103d0700           call 0x862590
// 007ee880  50                   push eax
// 007ee881  e8f894fbff           call 0x7a7d7e
// 007ee886  8bf0                 mov esi, eax
// 007ee888  8b07                 mov eax, dword ptr [edi]
// 007ee88a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007ee88d  83c408               add esp, 8
// 007ee890  f7de                 neg esi
// 007ee892  1bf6                 sbb esi, esi
// 007ee894  8bcf                 mov ecx, edi
// 007ee896  f7de                 neg esi
// 007ee898  ffd2                 call edx
// 007ee89a  89442410             mov dword ptr [esp + 0x10], eax
// 007ee89e  85f6                 test esi, esi
// 007ee8a0  7523                 jne 0x7ee8c5
// 007ee8a2  85c0                 test eax, eax
// 007ee8a4  751f                 jne 0x7ee8c5
// 007ee8a6  8bcd                 mov ecx, ebp
// 007ee8a8  c744242801000000     mov dword ptr [esp + 0x28], 1
// 007ee8b0  e89b220200           call 0x810b50
// 007ee8b5  a804                 test al, 4
// 007ee8b7  743e                 je 0x7ee8f7
// 007ee8b9  33c0                 xor eax, eax
// 007ee8bb  5f                   pop edi
// 007ee8bc  5e                   pop esi
// 007ee8bd  5d                   pop ebp
// 007ee8be  5b                   pop ebx
// 007ee8bf  83c414               add esp, 0x14
// 007ee8c2  c20800               ret 8
// 007ee8c5  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007ee8cd  85f6                 test esi, esi
// 007ee8cf  741b                 je 0x7ee8ec
// 007ee8d1  8bcd                 mov ecx, ebp
// 007ee8d3  e878220200           call 0x810b50
// 007ee8d8  a820                 test al, 0x20
// 007ee8da  740c                 je 0x7ee8e8
// 007ee8dc  33c0                 xor eax, eax
// 007ee8de  5f                   pop edi
// 007ee8df  5e                   pop esi
// 007ee8e0  5d                   pop ebp
// 007ee8e1  5b                   pop ebx
// 007ee8e2  83c414               add esp, 0x14
// 007ee8e5  c20800               ret 8
// 007ee8e8  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ee8ec  85c0                 test eax, eax
// 007ee8ee  7407                 je 0x7ee8f7
// 007ee8f0  b808000000           mov eax, 8
// 007ee8f5  eb0e                 jmp 0x7ee905
// 007ee8f7  8b442428             mov eax, dword ptr [esp + 0x28]
// 007ee8fb  f7d8                 neg eax
// 007ee8fd  1bc0                 sbb eax, eax
// 007ee8ff  83e0fc               and eax, 0xfffffffc
// 007ee902  83c004               add eax, 4
// 007ee905  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007ee909  6a00                 push 0
// 007ee90b  56                   push esi
// 007ee90c  55                   push ebp
// 007ee90d  50                   push eax
// 007ee90e  8bcb                 mov ecx, ebx
// 007ee910  e82bdeffff           call 0x7ec740
// 007ee915  85c0                 test eax, eax
// 007ee917  75c3                 jne 0x7ee8dc
// 007ee919  85f6                 test esi, esi
// 007ee91b  741f                 je 0x7ee93c
// 007ee91d  56                   push esi
// 007ee91e  57                   push edi
// 007ee91f  8bcb                 mov ecx, ebx
// 007ee921  c7833c01000001000000 mov dword ptr [ebx + 0x13c], 1
// 007ee92b  e810ffffff           call 0x7ee840
// 007ee930  c7833c01000000000000 mov dword ptr [ebx + 0x13c], 0
// 007ee93a  eb30                 jmp 0x7ee96c
// 007ee93c  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 007ee93f  8d442414             lea eax, [esp + 0x14]
// 007ee943  50                   push eax
// 007ee944  e8275f0700           call 0x864870
// 007ee949  8b10                 mov edx, dword ptr [eax]
// 007ee94b  83ec10               sub esp, 0x10
// 007ee94e  8bcc                 mov ecx, esp
// 007ee950  8911                 mov dword ptr [ecx], edx
// 007ee952  8b5004               mov edx, dword ptr [eax + 4]
// 007ee955  895104               mov dword ptr [ecx + 4], edx
// 007ee958  8b5008               mov edx, dword ptr [eax + 8]
// 007ee95b  8b400c               mov eax, dword ptr [eax + 0xc]
// 007ee95e  895108               mov dword ptr [ecx + 8], edx
// 007ee961  89410c               mov dword ptr [ecx + 0xc], eax
// 007ee964  57                   push edi
// 007ee965  8bcb                 mov ecx, ebx
// 007ee967  e8c4e2ffff           call 0x7ecc30
// 007ee96c  837c241000           cmp dword ptr [esp + 0x10], 0
// 007ee971  7407                 je 0x7ee97a
// 007ee973  b809000000           mov eax, 9
// 007ee978  eb10                 jmp 0x7ee98a
// 007ee97a  33c0                 xor eax, eax
// 007ee97c  39442428             cmp dword ptr [esp + 0x28], eax
// 007ee980  0f94c0               sete al
// 007ee983  8d048501000000       lea eax, [eax*4 + 1]
// 007ee98a  6a00                 push 0
// 007ee98c  6a00                 push 0
// 007ee98e  55                   push ebp
// 007ee98f  50                   push eax
// 007ee990  8bcb                 mov ecx, ebx
// 007ee992  e8a9ddffff           call 0x7ec740
// 007ee997  5f                   pop edi
// 007ee998  5e                   pop esi
// 007ee999  5d                   pop ebp
// 007ee99a  b801000000           mov eax, 1
// 007ee99f  5b                   pop ebx
// 007ee9a0  83c414               add esp, 0x14
// 007ee9a3  c20800               ret 8
// copied from an identical function in another client (function ?_ToggleDocking@CXTPDockingPaneManager@@AAEHPAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp