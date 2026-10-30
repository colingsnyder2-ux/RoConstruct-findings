// roc 2010-06 00871490  unit: CXTPDockingPaneContext  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00871490
//
// 00871490  83ec14               sub esp, 0x14
// 00871493  53                   push ebx
// 00871494  55                   push ebp
// 00871495  56                   push esi
// 00871496  57                   push edi
// 00871497  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0087149b  8d442414             lea eax, [esp + 0x14]
// 0087149f  8bf1                 mov esi, ecx
// 008714a1  57                   push edi
// 008714a2  50                   push eax
// 008714a3  89742418             mov dword ptr [esp + 0x18], esi
// 008714a7  e824f4f7ff           call 0x7f08d0
// 008714ac  8bc8                 mov ecx, eax
// 008714ae  e87deff7ff           call 0x7f0430
// 008714b3  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008714b9  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 008714bf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008714c3  2b4f04               sub ecx, dword ptr [edi + 4]
// 008714c6  8b2d40bc9e00         mov ebp, dword ptr [0x9ebc40]
// 008714cc  8bc1                 mov eax, ecx
// 008714ce  99                   cdq 
// 008714cf  33c2                 xor eax, edx
// 008714d1  2bc2                 sub eax, edx
// 008714d3  3bc6                 cmp eax, esi
// 008714d5  7d06                 jge 0x8714dd
// 008714d7  51                   push ecx
// 008714d8  6a00                 push 0
// 008714da  57                   push edi
// 008714db  ffd5                 call ebp
// 008714dd  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 008714e0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008714e4  8bc3                 mov eax, ebx
// 008714e6  2bc1                 sub eax, ecx
// 008714e8  99                   cdq 
// 008714e9  33c2                 xor eax, edx
// 008714eb  2bc2                 sub eax, edx
// 008714ed  3bc6                 cmp eax, esi
// 008714ef  7d08                 jge 0x8714f9
// 008714f1  2bcb                 sub ecx, ebx
// 008714f3  51                   push ecx
// 008714f4  6a00                 push 0
// 008714f6  57                   push edi
// 008714f7  ffd5                 call ebp
// 008714f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008714fd  2b4f08               sub ecx, dword ptr [edi + 8]
// 00871500  8bc1                 mov eax, ecx
// 00871502  99                   cdq 
// 00871503  33c2                 xor eax, edx
// 00871505  2bc2                 sub eax, edx
// 00871507  3bc6                 cmp eax, esi
// 00871509  7d06                 jge 0x871511
// 0087150b  6a00                 push 0
// 0087150d  51                   push ecx
// 0087150e  57                   push edi
// 0087150f  ffd5                 call ebp
// 00871511  8b1f                 mov ebx, dword ptr [edi]
// 00871513  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00871517  8bc3                 mov eax, ebx
// 00871519  2bc1                 sub eax, ecx
// 0087151b  99                   cdq 
// 0087151c  33c2                 xor eax, edx
// 0087151e  2bc2                 sub eax, edx
// 00871520  3bc6                 cmp eax, esi
// 00871522  7d08                 jge 0x87152c
// 00871524  6a00                 push 0
// 00871526  2bcb                 sub ecx, ebx
// 00871528  51                   push ecx
// 00871529  57                   push edi
// 0087152a  ffd5                 call ebp
// 0087152c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00871530  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 00871536  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 0087153c  e89db81000           call 0x97cdde
// 00871541  a900000021           test eax, 0x21000000
// 00871546  7515                 jne 0x87155d
// 00871548  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0087154e  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 00871554  51                   push ecx
// 00871555  57                   push edi
// 00871556  8bcd                 mov ecx, ebp
// 00871558  e8c3fdffff           call 0x871320
// 0087155d  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 00871563  e828b3f7ff           call 0x7ec890
// 00871568  8b5804               mov ebx, dword ptr [eax + 4]
// 0087156b  85db                 test ebx, ebx
// 0087156d  7448                 je 0x8715b7
// 0087156f  90                   nop 
// 00871570  8bc3                 mov eax, ebx
// 00871572  8b4008               mov eax, dword ptr [eax + 8]
// 00871575  83781803             cmp dword ptr [eax + 0x18], 3
// 00871579  8b1b                 mov ebx, dword ptr [ebx]
// 0087157b  7536                 jne 0x8715b3
// 0087157d  8db008ffffff         lea esi, [eax - 0xf8]
// 00871583  85f6                 test esi, esi
// 00871585  742c                 je 0x8715b3
// 00871587  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087158a  85c0                 test eax, eax
// 0087158c  7425                 je 0x8715b3
// 0087158e  50                   push eax
// 0087158f  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 00871595  85c0                 test eax, eax
// 00871597  741a                 je 0x8715b3
// 00871599  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 0087159f  8b11                 mov edx, dword ptr [ecx]
// 008715a1  8b4218               mov eax, dword ptr [edx + 0x18]
// 008715a4  ffd0                 call eax
// 008715a6  3bc6                 cmp eax, esi
// 008715a8  7409                 je 0x8715b3
// 008715aa  56                   push esi
// 008715ab  57                   push edi
// 008715ac  8bcd                 mov ecx, ebp
// 008715ae  e86dfdffff           call 0x871320
// 008715b3  85db                 test ebx, ebx
// 008715b5  75b9                 jne 0x871570
// 008715b7  5f                   pop edi
// 008715b8  5e                   pop esi
// 008715b9  5d                   pop ebp
// 008715ba  5b                   pop ebx
// 008715bb  83c414               add esp, 0x14
// 008715be  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
