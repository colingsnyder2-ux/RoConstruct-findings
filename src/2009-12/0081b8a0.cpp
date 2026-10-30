// roc 2009-12 0081b8a0  unit: CInstanceRecord::CNameItem  size: 617 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b8a0
//
// 0081b8a0  83ec08               sub esp, 8
// 0081b8a3  56                   push esi
// 0081b8a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0081b8a8  57                   push edi
// 0081b8a9  8bf9                 mov edi, ecx
// 0081b8ab  85f6                 test esi, esi
// 0081b8ad  0f844e020000         je 0x81bb01
// 0081b8b3  837e0400             cmp dword ptr [esi + 4], 0
// 0081b8b7  0f8444020000         je 0x81bb01
// 0081b8bd  53                   push ebx
// 0081b8be  8b1d0cb29800         mov ebx, dword ptr [0x98b20c]
// 0081b8c4  55                   push ebp
// 0081b8c5  8d4704               lea eax, [edi + 4]
// 0081b8c8  50                   push eax
// 0081b8c9  ffd3                 call ebx
// 0081b8cb  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081b8ce  85c0                 test eax, eax
// 0081b8d0  7406                 je 0x81b8d8
// 0081b8d2  83c004               add eax, 4
// 0081b8d5  50                   push eax
// 0081b8d6  ffd3                 call ebx
// 0081b8d8  8b4604               mov eax, dword ptr [esi + 4]
// 0081b8db  85c0                 test eax, eax
// 0081b8dd  7406                 je 0x81b8e5
// 0081b8df  83c004               add eax, 4
// 0081b8e2  50                   push eax
// 0081b8e3  ffd3                 call ebx
// 0081b8e5  8b6e08               mov ebp, dword ptr [esi + 8]
// 0081b8e8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0081b8ec  85ed                 test ebp, ebp
// 0081b8ee  7406                 je 0x81b8f6
// 0081b8f0  8d4d04               lea ecx, [ebp + 4]
// 0081b8f3  51                   push ecx
// 0081b8f4  ffd3                 call ebx
// 0081b8f6  8b17                 mov edx, dword ptr [edi]
// 0081b8f8  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 0081b8fe  8b5e04               mov ebx, dword ptr [esi + 4]
// 0081b901  8bcf                 mov ecx, edi
// 0081b903  ffd0                 call eax
// 0081b905  85c0                 test eax, eax
// 0081b907  0f84b7000000         je 0x81b9c4
// 0081b90d  837f6c00             cmp dword ptr [edi + 0x6c], 0
// 0081b911  0f84ad000000         je 0x81b9c4
// 0081b917  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081b91a  85c0                 test eax, eax
// 0081b91c  740d                 je 0x81b92b
// 0081b91e  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 0081b925  0f8499000000         je 0x81b9c4
// 0081b92b  8b17                 mov edx, dword ptr [edi]
// 0081b92d  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0081b933  56                   push esi
// 0081b934  8bcf                 mov ecx, edi
// 0081b936  ffd0                 call eax
// 0081b938  85c0                 test eax, eax
// 0081b93a  0f8484000000         je 0x81b9c4
// 0081b940  8bcb                 mov ecx, ebx
// 0081b942  e8f92b0000           call 0x81e540
// 0081b947  85c0                 test eax, eax
// 0081b949  740c                 je 0x81b957
// 0081b94b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0081b94e  894f24               mov dword ptr [edi + 0x24], ecx
// 0081b951  8b5620               mov edx, dword ptr [esi + 0x20]
// 0081b954  89572c               mov dword ptr [edi + 0x2c], edx
// 0081b957  8b4628               mov eax, dword ptr [esi + 0x28]
// 0081b95a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0081b95d  8d6e24               lea ebp, [esi + 0x24]
// 0081b960  50                   push eax
// 0081b961  51                   push ecx
// 0081b962  8d4f20               lea ecx, [edi + 0x20]
// 0081b965  e8466dc3ff           call 0x4526b0
// 0081b96a  85c0                 test eax, eax
// 0081b96c  7452                 je 0x81b9c0
// 0081b96e  83bbcc01000000       cmp dword ptr [ebx + 0x1cc], 0
// 0081b975  7424                 je 0x81b99b
// 0081b977  8b07                 mov eax, dword ptr [edi]
// 0081b979  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 0081b97f  8bcf                 mov ecx, edi
// 0081b981  89442410             mov dword ptr [esp + 0x10], eax
// 0081b985  ffd2                 call edx
// 0081b987  f7d8                 neg eax
// 0081b989  1bc0                 sbb eax, eax
// 0081b98b  40                   inc eax
// 0081b98c  50                   push eax
// 0081b98d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081b991  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 0081b997  8bcf                 mov ecx, edi
// 0081b999  ffd2                 call edx
// 0081b99b  8bcb                 mov ecx, ebx
// 0081b99d  e8de3a0000           call 0x81f480
// 0081b9a2  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081b9a5  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081b9a8  6aff                 push -1
// 0081b9aa  55                   push ebp
// 0081b9ab  6acb                 push -0x35
// 0081b9ad  50                   push eax
// 0081b9ae  57                   push edi
// 0081b9af  51                   push ecx
// 0081b9b0  8bcb                 mov ecx, ebx
// 0081b9b2  e849790000           call 0x823300
// 0081b9b7  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0081b9bb  e9c2000000           jmp 0x81ba82
// 0081b9c0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0081b9c4  8b17                 mov edx, dword ptr [edi]
// 0081b9c6  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0081b9cc  56                   push esi
// 0081b9cd  8bcf                 mov ecx, edi
// 0081b9cf  ffd0                 call eax
// 0081b9d1  85c0                 test eax, eax
// 0081b9d3  0f84a9000000         je 0x81ba82
// 0081b9d9  83bbdc01000000       cmp dword ptr [ebx + 0x1dc], 0
// 0081b9e0  0f849c000000         je 0x81ba82
// 0081b9e6  56                   push esi
// 0081b9e7  8bcb                 mov ecx, ebx
// 0081b9e9  e842910000           call 0x824b30
// 0081b9ee  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0081b9f1  8b5628               mov edx, dword ptr [esi + 0x28]
// 0081b9f4  8d442410             lea eax, [esp + 0x10]
// 0081b9f8  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081b9fc  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0081b9ff  50                   push eax
// 0081ba00  51                   push ecx
// 0081ba01  8954241c             mov dword ptr [esp + 0x1c], edx
// 0081ba05  ff1554cc9800         call dword ptr [0x98cc54]
// 0081ba0b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081ba0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081ba13  52                   push edx
// 0081ba14  50                   push eax
// 0081ba15  ff1528cb9800         call dword ptr [0x98cb28]
// 0081ba1b  50                   push eax
// 0081ba1c  e80981fdff           call 0x7f3b2a
// 0081ba21  50                   push eax
// 0081ba22  e809590800           call 0x8a1330
// 0081ba27  50                   push eax
// 0081ba28  e81182fdff           call 0x7f3c3e
// 0081ba2d  8bd8                 mov ebx, eax
// 0081ba2f  83c408               add esp, 8
// 0081ba32  85db                 test ebx, ebx
// 0081ba34  744c                 je 0x81ba82
// 0081ba36  397b64               cmp dword ptr [ebx + 0x64], edi
// 0081ba39  7547                 jne 0x81ba82
// 0081ba3b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081ba3e  51                   push ecx
// 0081ba3f  8bcf                 mov ecx, edi
// 0081ba41  e86afaffff           call 0x81b4b0
// 0081ba46  83784000             cmp dword ptr [eax + 0x40], 0
// 0081ba4a  742a                 je 0x81ba76
// 0081ba4c  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0081ba4f  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 0081ba55  6aff                 push -1
// 0081ba57  6a00                 push 0
// 0081ba59  68b1000000           push 0xb1
// 0081ba5e  52                   push edx
// 0081ba5f  ffd5                 call ebp
// 0081ba61  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0081ba64  6a00                 push 0
// 0081ba66  6a00                 push 0
// 0081ba68  68b7000000           push 0xb7
// 0081ba6d  50                   push eax
// 0081ba6e  ffd5                 call ebp
// 0081ba70  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0081ba74  eb0c                 jmp 0x81ba82
// 0081ba76  8b17                 mov edx, dword ptr [edi]
// 0081ba78  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0081ba7e  8bcf                 mov ecx, edi
// 0081ba80  ffd0                 call eax
// 0081ba82  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081ba85  8b5608               mov edx, dword ptr [esi + 8]
// 0081ba88  6aff                 push -1
// 0081ba8a  8d5e24               lea ebx, [esi + 0x24]
// 0081ba8d  53                   push ebx
// 0081ba8e  6afe                 push -2
// 0081ba90  51                   push ecx
// 0081ba91  8b4e04               mov ecx, dword ptr [esi + 4]
// 0081ba94  57                   push edi
// 0081ba95  52                   push edx
// 0081ba96  e865780000           call 0x823300
// 0081ba9b  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0081ba9e  8b07                 mov eax, dword ptr [edi]
// 0081baa0  8b13                 mov edx, dword ptr [ebx]
// 0081baa2  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 0081baa8  51                   push ecx
// 0081baa9  52                   push edx
// 0081baaa  8bcf                 mov ecx, edi
// 0081baac  ffd0                 call eax
// 0081baae  85c0                 test eax, eax
// 0081bab0  7c15                 jl 0x81bac7
// 0081bab2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081bab5  8b5608               mov edx, dword ptr [esi + 8]
// 0081bab8  50                   push eax
// 0081bab9  53                   push ebx
// 0081baba  6aca                 push -0x36
// 0081babc  51                   push ecx
// 0081babd  8b4e04               mov ecx, dword ptr [esi + 4]
// 0081bac0  57                   push edi
// 0081bac1  52                   push edx
// 0081bac2  e839780000           call 0x823300
// 0081bac7  85ed                 test ebp, ebp
// 0081bac9  7407                 je 0x81bad2
// 0081bacb  8bcd                 mov ecx, ebp
// 0081bacd  e80a83fdff           call 0x7f3ddc
// 0081bad2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081bad5  5d                   pop ebp
// 0081bad6  5b                   pop ebx
// 0081bad7  85c9                 test ecx, ecx
// 0081bad9  740c                 je 0x81bae7
// 0081badb  e8fc82fdff           call 0x7f3ddc
// 0081bae0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0081bae7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0081baea  85c9                 test ecx, ecx
// 0081baec  740c                 je 0x81bafa
// 0081baee  e8e982fdff           call 0x7f3ddc
// 0081baf3  c7460400000000       mov dword ptr [esi + 4], 0
// 0081bafa  8bcf                 mov ecx, edi
// 0081bafc  e8db82fdff           call 0x7f3ddc
// 0081bb01  5f                   pop edi
// 0081bb02  5e                   pop esi
// 0081bb03  83c408               add esp, 8
// 0081bb06  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp