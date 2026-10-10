// roc 2008-06 006c83f0  unit: CInstanceRecord::CNameItem  size: 617 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c83f0
//
// 006c83f0  83ec08               sub esp, 8
// 006c83f3  56                   push esi
// 006c83f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c83f8  57                   push edi
// 006c83f9  8bf9                 mov edi, ecx
// 006c83fb  85f6                 test esi, esi
// 006c83fd  0f844e020000         je 0x6c8651
// 006c8403  837e0400             cmp dword ptr [esi + 4], 0
// 006c8407  0f8444020000         je 0x6c8651
// 006c840d  53                   push ebx
// 006c840e  8b1db0218000         mov ebx, dword ptr [0x8021b0]
// 006c8414  55                   push ebp
// 006c8415  8d4704               lea eax, [edi + 4]
// 006c8418  50                   push eax
// 006c8419  ffd3                 call ebx
// 006c841b  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c841e  85c0                 test eax, eax
// 006c8420  7406                 je 0x6c8428
// 006c8422  83c004               add eax, 4
// 006c8425  50                   push eax
// 006c8426  ffd3                 call ebx
// 006c8428  8b4604               mov eax, dword ptr [esi + 4]
// 006c842b  85c0                 test eax, eax
// 006c842d  7406                 je 0x6c8435
// 006c842f  83c004               add eax, 4
// 006c8432  50                   push eax
// 006c8433  ffd3                 call ebx
// 006c8435  8b6e08               mov ebp, dword ptr [esi + 8]
// 006c8438  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006c843c  85ed                 test ebp, ebp
// 006c843e  7406                 je 0x6c8446
// 006c8440  8d4d04               lea ecx, [ebp + 4]
// 006c8443  51                   push ecx
// 006c8444  ffd3                 call ebx
// 006c8446  8b17                 mov edx, dword ptr [edi]
// 006c8448  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 006c844e  8b5e04               mov ebx, dword ptr [esi + 4]
// 006c8451  8bcf                 mov ecx, edi
// 006c8453  ffd0                 call eax
// 006c8455  85c0                 test eax, eax
// 006c8457  0f84b7000000         je 0x6c8514
// 006c845d  837f6c00             cmp dword ptr [edi + 0x6c], 0
// 006c8461  0f84ad000000         je 0x6c8514
// 006c8467  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c846a  85c0                 test eax, eax
// 006c846c  740d                 je 0x6c847b
// 006c846e  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 006c8475  0f8499000000         je 0x6c8514
// 006c847b  8b17                 mov edx, dword ptr [edi]
// 006c847d  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 006c8483  56                   push esi
// 006c8484  8bcf                 mov ecx, edi
// 006c8486  ffd0                 call eax
// 006c8488  85c0                 test eax, eax
// 006c848a  0f8484000000         je 0x6c8514
// 006c8490  8bcb                 mov ecx, ebx
// 006c8492  e8f92b0000           call 0x6cb090
// 006c8497  85c0                 test eax, eax
// 006c8499  740c                 je 0x6c84a7
// 006c849b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006c849e  894f24               mov dword ptr [edi + 0x24], ecx
// 006c84a1  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c84a4  89572c               mov dword ptr [edi + 0x2c], edx
// 006c84a7  8b4628               mov eax, dword ptr [esi + 0x28]
// 006c84aa  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006c84ad  8d6e24               lea ebp, [esi + 0x24]
// 006c84b0  50                   push eax
// 006c84b1  51                   push ecx
// 006c84b2  8d4f20               lea ecx, [edi + 0x20]
// 006c84b5  e8a65ad8ff           call 0x44df60
// 006c84ba  85c0                 test eax, eax
// 006c84bc  7452                 je 0x6c8510
// 006c84be  83bbcc01000000       cmp dword ptr [ebx + 0x1cc], 0
// 006c84c5  7424                 je 0x6c84eb
// 006c84c7  8b07                 mov eax, dword ptr [edi]
// 006c84c9  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 006c84cf  8bcf                 mov ecx, edi
// 006c84d1  89442410             mov dword ptr [esp + 0x10], eax
// 006c84d5  ffd2                 call edx
// 006c84d7  f7d8                 neg eax
// 006c84d9  1bc0                 sbb eax, eax
// 006c84db  40                   inc eax
// 006c84dc  50                   push eax
// 006c84dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c84e1  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 006c84e7  8bcf                 mov ecx, edi
// 006c84e9  ffd2                 call edx
// 006c84eb  8bcb                 mov ecx, ebx
// 006c84ed  e83e3a0000           call 0x6cbf30
// 006c84f2  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c84f5  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c84f8  6aff                 push -1
// 006c84fa  55                   push ebp
// 006c84fb  6acb                 push -0x35
// 006c84fd  50                   push eax
// 006c84fe  57                   push edi
// 006c84ff  51                   push ecx
// 006c8500  8bcb                 mov ecx, ebx
// 006c8502  e8a9780000           call 0x6cfdb0
// 006c8507  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006c850b  e9c2000000           jmp 0x6c85d2
// 006c8510  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006c8514  8b17                 mov edx, dword ptr [edi]
// 006c8516  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 006c851c  56                   push esi
// 006c851d  8bcf                 mov ecx, edi
// 006c851f  ffd0                 call eax
// 006c8521  85c0                 test eax, eax
// 006c8523  0f84a9000000         je 0x6c85d2
// 006c8529  83bbdc01000000       cmp dword ptr [ebx + 0x1dc], 0
// 006c8530  0f849c000000         je 0x6c85d2
// 006c8536  56                   push esi
// 006c8537  8bcb                 mov ecx, ebx
// 006c8539  e8a2900000           call 0x6d15e0
// 006c853e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006c8541  8b5628               mov edx, dword ptr [esi + 0x28]
// 006c8544  8d442410             lea eax, [esp + 0x10]
// 006c8548  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c854c  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006c854f  50                   push eax
// 006c8550  51                   push ecx
// 006c8551  8954241c             mov dword ptr [esp + 0x1c], edx
// 006c8555  ff15802d8000         call dword ptr [0x802d80]
// 006c855b  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c855f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c8563  52                   push edx
// 006c8564  50                   push eax
// 006c8565  ff15a42b8000         call dword ptr [0x802ba4]
// 006c856b  50                   push eax
// 006c856c  e86d86fdff           call 0x6a0bde
// 006c8571  50                   push eax
// 006c8572  e8e94c0800           call 0x74d260
// 006c8577  50                   push eax
// 006c8578  e8a986fdff           call 0x6a0c26
// 006c857d  8bd8                 mov ebx, eax
// 006c857f  83c408               add esp, 8
// 006c8582  85db                 test ebx, ebx
// 006c8584  744c                 je 0x6c85d2
// 006c8586  397b64               cmp dword ptr [ebx + 0x64], edi
// 006c8589  7547                 jne 0x6c85d2
// 006c858b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006c858e  51                   push ecx
// 006c858f  8bcf                 mov ecx, edi
// 006c8591  e86afaffff           call 0x6c8000
// 006c8596  83784000             cmp dword ptr [eax + 0x40], 0
// 006c859a  742a                 je 0x6c85c6
// 006c859c  8b5320               mov edx, dword ptr [ebx + 0x20]
// 006c859f  8b2d142e8000         mov ebp, dword ptr [0x802e14]
// 006c85a5  6aff                 push -1
// 006c85a7  6a00                 push 0
// 006c85a9  68b1000000           push 0xb1
// 006c85ae  52                   push edx
// 006c85af  ffd5                 call ebp
// 006c85b1  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006c85b4  6a00                 push 0
// 006c85b6  6a00                 push 0
// 006c85b8  68b7000000           push 0xb7
// 006c85bd  50                   push eax
// 006c85be  ffd5                 call ebp
// 006c85c0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006c85c4  eb0c                 jmp 0x6c85d2
// 006c85c6  8b17                 mov edx, dword ptr [edi]
// 006c85c8  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006c85ce  8bcf                 mov ecx, edi
// 006c85d0  ffd0                 call eax
// 006c85d2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006c85d5  8b5608               mov edx, dword ptr [esi + 8]
// 006c85d8  6aff                 push -1
// 006c85da  8d5e24               lea ebx, [esi + 0x24]
// 006c85dd  53                   push ebx
// 006c85de  6afe                 push -2
// 006c85e0  51                   push ecx
// 006c85e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006c85e4  57                   push edi
// 006c85e5  52                   push edx
// 006c85e6  e8c5770000           call 0x6cfdb0
// 006c85eb  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006c85ee  8b07                 mov eax, dword ptr [edi]
// 006c85f0  8b13                 mov edx, dword ptr [ebx]
// 006c85f2  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 006c85f8  51                   push ecx
// 006c85f9  52                   push edx
// 006c85fa  8bcf                 mov ecx, edi
// 006c85fc  ffd0                 call eax
// 006c85fe  85c0                 test eax, eax
// 006c8600  7c15                 jl 0x6c8617
// 006c8602  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006c8605  8b5608               mov edx, dword ptr [esi + 8]
// 006c8608  50                   push eax
// 006c8609  53                   push ebx
// 006c860a  6aca                 push -0x36
// 006c860c  51                   push ecx
// 006c860d  8b4e04               mov ecx, dword ptr [esi + 4]
// 006c8610  57                   push edi
// 006c8611  52                   push edx
// 006c8612  e899770000           call 0x6cfdb0
// 006c8617  85ed                 test ebp, ebp
// 006c8619  7407                 je 0x6c8622
// 006c861b  8bcd                 mov ecx, ebp
// 006c861d  e8c285fdff           call 0x6a0be4
// 006c8622  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006c8625  5d                   pop ebp
// 006c8626  5b                   pop ebx
// 006c8627  85c9                 test ecx, ecx
// 006c8629  740c                 je 0x6c8637
// 006c862b  e8b485fdff           call 0x6a0be4
// 006c8630  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006c8637  8b4e04               mov ecx, dword ptr [esi + 4]
// 006c863a  85c9                 test ecx, ecx
// 006c863c  740c                 je 0x6c864a
// 006c863e  e8a185fdff           call 0x6a0be4
// 006c8643  c7460400000000       mov dword ptr [esi + 4], 0
// 006c864a  8bcf                 mov ecx, edi
// 006c864c  e89385fdff           call 0x6a0be4
// 006c8651  5f                   pop edi
// 006c8652  5e                   pop esi
// 006c8653  83c408               add esp, 8
// 006c8656  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnClick@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
