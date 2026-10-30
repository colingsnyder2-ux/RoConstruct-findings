// roc 2011-06 008555f0  unit: CXTPPopupBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008555f0
//
// 008555f0  83ec10               sub esp, 0x10
// 008555f3  53                   push ebx
// 008555f4  8b1d101ca400         mov ebx, dword ptr [0xa41c10]
// 008555fa  55                   push ebp
// 008555fb  56                   push esi
// 008555fc  57                   push edi
// 008555fd  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00855601  8b4704               mov eax, dword ptr [edi + 4]
// 00855604  8be9                 mov ebp, ecx
// 00855606  8b0f                 mov ecx, dword ptr [edi]
// 00855608  50                   push eax
// 00855609  51                   push ecx
// 0085560a  8db5c4010000         lea esi, [ebp + 0x1c4]
// 00855610  56                   push esi
// 00855611  ffd3                 call ebx
// 00855613  85c0                 test eax, eax
// 00855615  744d                 je 0x855664
// 00855617  83bdd401000002       cmp dword ptr [ebp + 0x1d4], 2
// 0085561e  750f                 jne 0x85562f
// 00855620  5f                   pop edi
// 00855621  5e                   pop esi
// 00855622  5d                   pop ebp
// 00855623  b801000000           mov eax, 1
// 00855628  5b                   pop ebx
// 00855629  83c410               add esp, 0x10
// 0085562c  c20400               ret 4
// 0085562f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00855632  8b16                 mov edx, dword ptr [esi]
// 00855634  8b4604               mov eax, dword ptr [esi + 4]
// 00855637  8b760c               mov esi, dword ptr [esi + 0xc]
// 0085563a  89442414             mov dword ptr [esp + 0x14], eax
// 0085563e  2bc6                 sub eax, esi
// 00855640  03c1                 add eax, ecx
// 00855642  89542410             mov dword ptr [esp + 0x10], edx
// 00855646  89442410             mov dword ptr [esp + 0x10], eax
// 0085564a  8b4704               mov eax, dword ptr [edi + 4]
// 0085564d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00855651  8b0f                 mov ecx, dword ptr [edi]
// 00855653  50                   push eax
// 00855654  51                   push ecx
// 00855655  8d542418             lea edx, [esp + 0x18]
// 00855659  52                   push edx
// 0085565a  89742428             mov dword ptr [esp + 0x28], esi
// 0085565e  ffd3                 call ebx
// 00855660  85c0                 test eax, eax
// 00855662  75bc                 jne 0x855620
// 00855664  5f                   pop edi
// 00855665  5e                   pop esi
// 00855666  5d                   pop ebp
// 00855667  33c0                 xor eax, eax
// 00855669  5b                   pop ebx
// 0085566a  83c410               add esp, 0x10
// 0085566d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?_MouseInResizeGripper@CXTPPopupBar@@AAEHABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
