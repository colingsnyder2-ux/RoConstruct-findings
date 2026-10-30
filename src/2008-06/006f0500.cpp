// from server: 100% by auto
// roc 2008-06 006f0500  unit: CXTPPopupBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0500
//
// 006f0500  83ec10               sub esp, 0x10
// 006f0503  53                   push ebx
// 006f0504  8b1d2c2d8000         mov ebx, dword ptr [0x802d2c]
// 006f050a  55                   push ebp
// 006f050b  56                   push esi
// 006f050c  57                   push edi
// 006f050d  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006f0511  8b4704               mov eax, dword ptr [edi + 4]
// 006f0514  8be9                 mov ebp, ecx
// 006f0516  8b0f                 mov ecx, dword ptr [edi]
// 006f0518  50                   push eax
// 006f0519  51                   push ecx
// 006f051a  8db5c4010000         lea esi, [ebp + 0x1c4]
// 006f0520  56                   push esi
// 006f0521  ffd3                 call ebx
// 006f0523  85c0                 test eax, eax
// 006f0525  744d                 je 0x6f0574
// 006f0527  83bdd401000002       cmp dword ptr [ebp + 0x1d4], 2
// 006f052e  750f                 jne 0x6f053f
// 006f0530  5f                   pop edi
// 006f0531  5e                   pop esi
// 006f0532  5d                   pop ebp
// 006f0533  b801000000           mov eax, 1
// 006f0538  5b                   pop ebx
// 006f0539  83c410               add esp, 0x10
// 006f053c  c20400               ret 4
// 006f053f  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f0542  8b16                 mov edx, dword ptr [esi]
// 006f0544  8b4604               mov eax, dword ptr [esi + 4]
// 006f0547  8b760c               mov esi, dword ptr [esi + 0xc]
// 006f054a  89442414             mov dword ptr [esp + 0x14], eax
// 006f054e  2bc6                 sub eax, esi
// 006f0550  03c1                 add eax, ecx
// 006f0552  89542410             mov dword ptr [esp + 0x10], edx
// 006f0556  89442410             mov dword ptr [esp + 0x10], eax
// 006f055a  8b4704               mov eax, dword ptr [edi + 4]
// 006f055d  894c2418             mov dword ptr [esp + 0x18], ecx
// 006f0561  8b0f                 mov ecx, dword ptr [edi]
// 006f0563  50                   push eax
// 006f0564  51                   push ecx
// 006f0565  8d542418             lea edx, [esp + 0x18]
// 006f0569  52                   push edx
// 006f056a  89742428             mov dword ptr [esp + 0x28], esi
// 006f056e  ffd3                 call ebx
// 006f0570  85c0                 test eax, eax
// 006f0572  75bc                 jne 0x6f0530
// 006f0574  5f                   pop edi
// 006f0575  5e                   pop esi
// 006f0576  5d                   pop ebp
// 006f0577  33c0                 xor eax, eax
// 006f0579  5b                   pop ebx
// 006f057a  83c410               add esp, 0x10
// 006f057d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?_MouseInResizeGripper@CXTPPopupBar@@AAEHABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
