// roc 2012-06 009ab3b0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab3b0
//
// 009ab3b0  53                   push ebx
// 009ab3b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009ab3b5  56                   push esi
// 009ab3b6  57                   push edi
// 009ab3b7  33ff                 xor edi, edi
// 009ab3b9  3bdf                 cmp ebx, edi
// 009ab3bb  8bf1                 mov esi, ecx
// 009ab3bd  7d05                 jge 0x9ab3c4
// 009ab3bf  e8fc6ffdff           call 0x9823c0
// 009ab3c4  8b442414             mov eax, dword ptr [esp + 0x14]
// 009ab3c8  3bc7                 cmp eax, edi
// 009ab3ca  7c03                 jl 0x9ab3cf
// 009ab3cc  894610               mov dword ptr [esi + 0x10], eax
// 009ab3cf  3bdf                 cmp ebx, edi
// 009ab3d1  751f                 jne 0x9ab3f2
// 009ab3d3  8b4604               mov eax, dword ptr [esi + 4]
// 009ab3d6  3bc7                 cmp eax, edi
// 009ab3d8  740c                 je 0x9ab3e6
// 009ab3da  50                   push eax
// 009ab3db  e8da6ffdff           call 0x9823ba
// 009ab3e0  83c404               add esp, 4
// 009ab3e3  897e04               mov dword ptr [esi + 4], edi
// 009ab3e6  897e0c               mov dword ptr [esi + 0xc], edi
// 009ab3e9  897e08               mov dword ptr [esi + 8], edi
// 009ab3ec  5f                   pop edi
// 009ab3ed  5e                   pop esi
// 009ab3ee  5b                   pop ebx
// 009ab3ef  c20800               ret 8
// 009ab3f2  8b5604               mov edx, dword ptr [esi + 4]
// 009ab3f5  55                   push ebp
// 009ab3f6  3bd7                 cmp edx, edi
// 009ab3f8  7533                 jne 0x9ab42d
// 009ab3fa  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 009ab3fd  3bdd                 cmp ebx, ebp
// 009ab3ff  7e02                 jle 0x9ab403
// 009ab401  8beb                 mov ebp, ebx
// 009ab403  8d7c6d00             lea edi, [ebp + ebp*2]
// 009ab407  03ff                 add edi, edi
// 009ab409  03ff                 add edi, edi
// 009ab40b  57                   push edi
// 009ab40c  e8df6ffdff           call 0x9823f0
// 009ab411  57                   push edi
// 009ab412  6a00                 push 0
// 009ab414  50                   push eax
// 009ab415  894604               mov dword ptr [esi + 4], eax
// 009ab418  e8577ffdff           call 0x983374
// 009ab41d  83c410               add esp, 0x10
// 009ab420  896e0c               mov dword ptr [esi + 0xc], ebp
// 009ab423  5d                   pop ebp
// 009ab424  5f                   pop edi
// 009ab425  895e08               mov dword ptr [esi + 8], ebx
// 009ab428  5e                   pop esi
// 009ab429  5b                   pop ebx
// 009ab42a  c20800               ret 8
// 009ab42d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009ab430  3bd9                 cmp ebx, ecx
// 009ab432  7f31                 jg 0x9ab465
// 009ab434  8b4e08               mov ecx, dword ptr [esi + 8]
// 009ab437  3bd9                 cmp ebx, ecx
// 009ab439  0f8ec6000000         jle 0x9ab505
// 009ab43f  8bc3                 mov eax, ebx
// 009ab441  2bc1                 sub eax, ecx
// 009ab443  8d0440               lea eax, [eax + eax*2]
// 009ab446  03c0                 add eax, eax
// 009ab448  03c0                 add eax, eax
// 009ab44a  50                   push eax
// 009ab44b  8d0c49               lea ecx, [ecx + ecx*2]
// 009ab44e  8d148a               lea edx, [edx + ecx*4]
// 009ab451  57                   push edi
// 009ab452  52                   push edx
// 009ab453  e81c7ffdff           call 0x983374
// 009ab458  83c40c               add esp, 0xc
// 009ab45b  5d                   pop ebp
// 009ab45c  5f                   pop edi
// 009ab45d  895e08               mov dword ptr [esi + 8], ebx
// 009ab460  5e                   pop esi
// 009ab461  5b                   pop ebx
// 009ab462  c20800               ret 8
// 009ab465  8b4610               mov eax, dword ptr [esi + 0x10]
// 009ab468  3bc7                 cmp eax, edi
// 009ab46a  7524                 jne 0x9ab490
// 009ab46c  8b4608               mov eax, dword ptr [esi + 8]
// 009ab46f  99                   cdq 
// 009ab470  83e207               and edx, 7
// 009ab473  03c2                 add eax, edx
// 009ab475  c1f803               sar eax, 3
// 009ab478  83f804               cmp eax, 4
// 009ab47b  7d07                 jge 0x9ab484
// 009ab47d  b804000000           mov eax, 4
// 009ab482  eb0c                 jmp 0x9ab490
// 009ab484  3d00040000           cmp eax, 0x400
// 009ab489  7e05                 jle 0x9ab490
// 009ab48b  b800040000           mov eax, 0x400
// 009ab490  8d3c01               lea edi, [ecx + eax]
// 009ab493  3bdf                 cmp ebx, edi
// 009ab495  7d06                 jge 0x9ab49d
// 009ab497  897c2414             mov dword ptr [esp + 0x14], edi
// 009ab49b  eb06                 jmp 0x9ab4a3
// 009ab49d  895c2414             mov dword ptr [esp + 0x14], ebx
// 009ab4a1  8bfb                 mov edi, ebx
// 009ab4a3  3bf9                 cmp edi, ecx
// 009ab4a5  7d05                 jge 0x9ab4ac
// 009ab4a7  e8146ffdff           call 0x9823c0
// 009ab4ac  8d3c7f               lea edi, [edi + edi*2]
// 009ab4af  03ff                 add edi, edi
// 009ab4b1  03ff                 add edi, edi
// 009ab4b3  57                   push edi
// 009ab4b4  e8376ffdff           call 0x9823f0
// 009ab4b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 009ab4bc  8be8                 mov ebp, eax
// 009ab4be  8b4608               mov eax, dword ptr [esi + 8]
// 009ab4c1  8d0440               lea eax, [eax + eax*2]
// 009ab4c4  03c0                 add eax, eax
// 009ab4c6  03c0                 add eax, eax
// 009ab4c8  50                   push eax
// 009ab4c9  51                   push ecx
// 009ab4ca  57                   push edi
// 009ab4cb  55                   push ebp
// 009ab4cc  e8ff8ca5ff           call 0x4041d0
// 009ab4d1  8b4e08               mov ecx, dword ptr [esi + 8]
// 009ab4d4  8bc3                 mov eax, ebx
// 009ab4d6  2bc1                 sub eax, ecx
// 009ab4d8  8d1440               lea edx, [eax + eax*2]
// 009ab4db  03d2                 add edx, edx
// 009ab4dd  03d2                 add edx, edx
// 009ab4df  52                   push edx
// 009ab4e0  8d0449               lea eax, [ecx + ecx*2]
// 009ab4e3  8d4c8500             lea ecx, [ebp + eax*4]
// 009ab4e7  6a00                 push 0
// 009ab4e9  51                   push ecx
// 009ab4ea  e8857efdff           call 0x983374
// 009ab4ef  8b5604               mov edx, dword ptr [esi + 4]
// 009ab4f2  52                   push edx
// 009ab4f3  e8c26efdff           call 0x9823ba
// 009ab4f8  8b442438             mov eax, dword ptr [esp + 0x38]
// 009ab4fc  83c424               add esp, 0x24
// 009ab4ff  896e04               mov dword ptr [esi + 4], ebp
// 009ab502  89460c               mov dword ptr [esi + 0xc], eax
// 009ab505  5d                   pop ebp
// 009ab506  5f                   pop edi
// 009ab507  895e08               mov dword ptr [esi + 8], ebx
// 009ab50a  5e                   pop esi
// 009ab50b  5b                   pop ebx
// 009ab50c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPNotifyConnection.cpp (function ?SetSize@?$CArray@UCONNECTION_DESCRIPTOR@CXTPNotifyConnection@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPNotifyConnection.cpp
