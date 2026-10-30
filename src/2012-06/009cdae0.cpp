// roc 2012-06 009cdae0  unit: CXTPPopupBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cdae0
//
// 009cdae0  83ec10               sub esp, 0x10
// 009cdae3  53                   push ebx
// 009cdae4  8b1d483bb200         mov ebx, dword ptr [0xb23b48]
// 009cdaea  55                   push ebp
// 009cdaeb  56                   push esi
// 009cdaec  57                   push edi
// 009cdaed  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009cdaf1  8b4704               mov eax, dword ptr [edi + 4]
// 009cdaf4  8be9                 mov ebp, ecx
// 009cdaf6  8b0f                 mov ecx, dword ptr [edi]
// 009cdaf8  50                   push eax
// 009cdaf9  51                   push ecx
// 009cdafa  8db5c4010000         lea esi, [ebp + 0x1c4]
// 009cdb00  56                   push esi
// 009cdb01  ffd3                 call ebx
// 009cdb03  85c0                 test eax, eax
// 009cdb05  744d                 je 0x9cdb54
// 009cdb07  83bdd401000002       cmp dword ptr [ebp + 0x1d4], 2
// 009cdb0e  750f                 jne 0x9cdb1f
// 009cdb10  5f                   pop edi
// 009cdb11  5e                   pop esi
// 009cdb12  5d                   pop ebp
// 009cdb13  b801000000           mov eax, 1
// 009cdb18  5b                   pop ebx
// 009cdb19  83c410               add esp, 0x10
// 009cdb1c  c20400               ret 4
// 009cdb1f  8b4e08               mov ecx, dword ptr [esi + 8]
// 009cdb22  8b16                 mov edx, dword ptr [esi]
// 009cdb24  8b4604               mov eax, dword ptr [esi + 4]
// 009cdb27  8b760c               mov esi, dword ptr [esi + 0xc]
// 009cdb2a  89442414             mov dword ptr [esp + 0x14], eax
// 009cdb2e  2bc6                 sub eax, esi
// 009cdb30  03c1                 add eax, ecx
// 009cdb32  89542410             mov dword ptr [esp + 0x10], edx
// 009cdb36  89442410             mov dword ptr [esp + 0x10], eax
// 009cdb3a  8b4704               mov eax, dword ptr [edi + 4]
// 009cdb3d  894c2418             mov dword ptr [esp + 0x18], ecx
// 009cdb41  8b0f                 mov ecx, dword ptr [edi]
// 009cdb43  50                   push eax
// 009cdb44  51                   push ecx
// 009cdb45  8d542418             lea edx, [esp + 0x18]
// 009cdb49  52                   push edx
// 009cdb4a  89742428             mov dword ptr [esp + 0x28], esi
// 009cdb4e  ffd3                 call ebx
// 009cdb50  85c0                 test eax, eax
// 009cdb52  75bc                 jne 0x9cdb10
// 009cdb54  5f                   pop edi
// 009cdb55  5e                   pop esi
// 009cdb56  5d                   pop ebp
// 009cdb57  33c0                 xor eax, eax
// 009cdb59  5b                   pop ebx
// 009cdb5a  83c410               add esp, 0x10
// 009cdb5d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?_MouseInResizeGripper@CXTPPopupBar@@AAEHABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
