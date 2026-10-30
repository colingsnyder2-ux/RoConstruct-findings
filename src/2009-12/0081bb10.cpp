// roc 2009-12 0081bb10  unit: CInstanceRecord::CNameItem  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081bb10
//
// 0081bb10  83ec08               sub esp, 8
// 0081bb13  55                   push ebp
// 0081bb14  56                   push esi
// 0081bb15  8b742414             mov esi, dword ptr [esp + 0x14]
// 0081bb19  8b6e04               mov ebp, dword ptr [esi + 4]
// 0081bb1c  57                   push edi
// 0081bb1d  8bf9                 mov edi, ecx
// 0081bb1f  8b07                 mov eax, dword ptr [edi]
// 0081bb21  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 0081bb27  56                   push esi
// 0081bb28  ffd2                 call edx
// 0081bb2a  85c0                 test eax, eax
// 0081bb2c  0f84b8000000         je 0x81bbea
// 0081bb32  83bddc01000000       cmp dword ptr [ebp + 0x1dc], 0
// 0081bb39  0f85ab000000         jne 0x81bbea
// 0081bb3f  8b8524020000         mov eax, dword ptr [ebp + 0x224]
// 0081bb45  397864               cmp dword ptr [eax + 0x64], edi
// 0081bb48  0f849c000000         je 0x81bbea
// 0081bb4e  53                   push ebx
// 0081bb4f  56                   push esi
// 0081bb50  8bcd                 mov ecx, ebp
// 0081bb52  e8d98f0000           call 0x824b30
// 0081bb57  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0081bb5a  8b5628               mov edx, dword ptr [esi + 0x28]
// 0081bb5d  8d442410             lea eax, [esp + 0x10]
// 0081bb61  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081bb65  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0081bb68  50                   push eax
// 0081bb69  51                   push ecx
// 0081bb6a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0081bb6e  ff1554cc9800         call dword ptr [0x98cc54]
// 0081bb74  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081bb78  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081bb7c  52                   push edx
// 0081bb7d  50                   push eax
// 0081bb7e  ff1528cb9800         call dword ptr [0x98cb28]
// 0081bb84  50                   push eax
// 0081bb85  e8a07ffdff           call 0x7f3b2a
// 0081bb8a  50                   push eax
// 0081bb8b  e8a0570800           call 0x8a1330
// 0081bb90  50                   push eax
// 0081bb91  e8a880fdff           call 0x7f3c3e
// 0081bb96  8bd8                 mov ebx, eax
// 0081bb98  83c408               add esp, 8
// 0081bb9b  85db                 test ebx, ebx
// 0081bb9d  744a                 je 0x81bbe9
// 0081bb9f  397b64               cmp dword ptr [ebx + 0x64], edi
// 0081bba2  7545                 jne 0x81bbe9
// 0081bba4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081bba7  51                   push ecx
// 0081bba8  8bcf                 mov ecx, edi
// 0081bbaa  e801f9ffff           call 0x81b4b0
// 0081bbaf  83784000             cmp dword ptr [eax + 0x40], 0
// 0081bbb3  7428                 je 0x81bbdd
// 0081bbb5  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0081bbb8  6aff                 push -1
// 0081bbba  6a00                 push 0
// 0081bbbc  68b1000000           push 0xb1
// 0081bbc1  52                   push edx
// 0081bbc2  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0081bbc8  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0081bbcb  6a00                 push 0
// 0081bbcd  6a00                 push 0
// 0081bbcf  68b7000000           push 0xb7
// 0081bbd4  50                   push eax
// 0081bbd5  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0081bbdb  eb0c                 jmp 0x81bbe9
// 0081bbdd  8b17                 mov edx, dword ptr [edi]
// 0081bbdf  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0081bbe5  8bcf                 mov ecx, edi
// 0081bbe7  ffd0                 call eax
// 0081bbe9  5b                   pop ebx
// 0081bbea  8b560c               mov edx, dword ptr [esi + 0xc]
// 0081bbed  8b4608               mov eax, dword ptr [esi + 8]
// 0081bbf0  6aff                 push -1
// 0081bbf2  8d4e24               lea ecx, [esi + 0x24]
// 0081bbf5  51                   push ecx
// 0081bbf6  6afd                 push -3
// 0081bbf8  52                   push edx
// 0081bbf9  57                   push edi
// 0081bbfa  50                   push eax
// 0081bbfb  8bcd                 mov ecx, ebp
// 0081bbfd  e8fe760000           call 0x823300
// 0081bc02  5f                   pop edi
// 0081bc03  5e                   pop esi
// 0081bc04  5d                   pop ebp
// 0081bc05  83c408               add esp, 8
// 0081bc08  c20400               ret 4
// copied from an identical function in another client (function ?OnDblClick@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp