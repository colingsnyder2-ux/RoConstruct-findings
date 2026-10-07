// roc 2008-06 006cb780  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb780
//
// 006cb780  53                   push ebx
// 006cb781  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006cb785  56                   push esi
// 006cb786  57                   push edi
// 006cb787  33ff                 xor edi, edi
// 006cb789  3bdf                 cmp ebx, edi
// 006cb78b  8bf1                 mov esi, ecx
// 006cb78d  7d05                 jge 0x6cb794
// 006cb78f  e8b051fdff           call 0x6a0944
// 006cb794  8b442414             mov eax, dword ptr [esp + 0x14]
// 006cb798  3bc7                 cmp eax, edi
// 006cb79a  7c03                 jl 0x6cb79f
// 006cb79c  894610               mov dword ptr [esi + 0x10], eax
// 006cb79f  3bdf                 cmp ebx, edi
// 006cb7a1  751f                 jne 0x6cb7c2
// 006cb7a3  8b4604               mov eax, dword ptr [esi + 4]
// 006cb7a6  3bc7                 cmp eax, edi
// 006cb7a8  740c                 je 0x6cb7b6
// 006cb7aa  50                   push eax
// 006cb7ab  e89a51fdff           call 0x6a094a
// 006cb7b0  83c404               add esp, 4
// 006cb7b3  897e04               mov dword ptr [esi + 4], edi
// 006cb7b6  897e0c               mov dword ptr [esi + 0xc], edi
// 006cb7b9  897e08               mov dword ptr [esi + 8], edi
// 006cb7bc  5f                   pop edi
// 006cb7bd  5e                   pop esi
// 006cb7be  5b                   pop ebx
// 006cb7bf  c20800               ret 8
// 006cb7c2  8b5604               mov edx, dword ptr [esi + 4]
// 006cb7c5  55                   push ebp
// 006cb7c6  3bd7                 cmp edx, edi
// 006cb7c8  7533                 jne 0x6cb7fd
// 006cb7ca  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006cb7cd  3bdd                 cmp ebx, ebp
// 006cb7cf  7e02                 jle 0x6cb7d3
// 006cb7d1  8beb                 mov ebp, ebx
// 006cb7d3  8d7c6d00             lea edi, [ebp + ebp*2]
// 006cb7d7  03ff                 add edi, edi
// 006cb7d9  03ff                 add edi, edi
// 006cb7db  57                   push edi
// 006cb7dc  e87551fdff           call 0x6a0956
// 006cb7e1  57                   push edi
// 006cb7e2  6a00                 push 0
// 006cb7e4  50                   push eax
// 006cb7e5  894604               mov dword ptr [esi + 4], eax
// 006cb7e8  e8175ffdff           call 0x6a1704
// 006cb7ed  83c410               add esp, 0x10
// 006cb7f0  896e0c               mov dword ptr [esi + 0xc], ebp
// 006cb7f3  5d                   pop ebp
// 006cb7f4  5f                   pop edi
// 006cb7f5  895e08               mov dword ptr [esi + 8], ebx
// 006cb7f8  5e                   pop esi
// 006cb7f9  5b                   pop ebx
// 006cb7fa  c20800               ret 8
// 006cb7fd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006cb800  3bd9                 cmp ebx, ecx
// 006cb802  7f31                 jg 0x6cb835
// 006cb804  8b4e08               mov ecx, dword ptr [esi + 8]
// 006cb807  3bd9                 cmp ebx, ecx
// 006cb809  0f8ec6000000         jle 0x6cb8d5
// 006cb80f  8bc3                 mov eax, ebx
// 006cb811  2bc1                 sub eax, ecx
// 006cb813  8d0440               lea eax, [eax + eax*2]
// 006cb816  03c0                 add eax, eax
// 006cb818  03c0                 add eax, eax
// 006cb81a  50                   push eax
// 006cb81b  8d0c49               lea ecx, [ecx + ecx*2]
// 006cb81e  8d148a               lea edx, [edx + ecx*4]
// 006cb821  57                   push edi
// 006cb822  52                   push edx
// 006cb823  e8dc5efdff           call 0x6a1704
// 006cb828  83c40c               add esp, 0xc
// 006cb82b  5d                   pop ebp
// 006cb82c  5f                   pop edi
// 006cb82d  895e08               mov dword ptr [esi + 8], ebx
// 006cb830  5e                   pop esi
// 006cb831  5b                   pop ebx
// 006cb832  c20800               ret 8
// 006cb835  8b4610               mov eax, dword ptr [esi + 0x10]
// 006cb838  3bc7                 cmp eax, edi
// 006cb83a  7524                 jne 0x6cb860
// 006cb83c  8b4608               mov eax, dword ptr [esi + 8]
// 006cb83f  99                   cdq 
// 006cb840  83e207               and edx, 7
// 006cb843  03c2                 add eax, edx
// 006cb845  c1f803               sar eax, 3
// 006cb848  83f804               cmp eax, 4
// 006cb84b  7d07                 jge 0x6cb854
// 006cb84d  b804000000           mov eax, 4
// 006cb852  eb0c                 jmp 0x6cb860
// 006cb854  3d00040000           cmp eax, 0x400
// 006cb859  7e05                 jle 0x6cb860
// 006cb85b  b800040000           mov eax, 0x400
// 006cb860  8d3c01               lea edi, [ecx + eax]
// 006cb863  3bdf                 cmp ebx, edi
// 006cb865  7d06                 jge 0x6cb86d
// 006cb867  897c2414             mov dword ptr [esp + 0x14], edi
// 006cb86b  eb06                 jmp 0x6cb873
// 006cb86d  895c2414             mov dword ptr [esp + 0x14], ebx
// 006cb871  8bfb                 mov edi, ebx
// 006cb873  3bf9                 cmp edi, ecx
// 006cb875  7d05                 jge 0x6cb87c
// 006cb877  e8c850fdff           call 0x6a0944
// 006cb87c  8d3c7f               lea edi, [edi + edi*2]
// 006cb87f  03ff                 add edi, edi
// 006cb881  03ff                 add edi, edi
// 006cb883  57                   push edi
// 006cb884  e8cd50fdff           call 0x6a0956
// 006cb889  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cb88c  8be8                 mov ebp, eax
// 006cb88e  8b4608               mov eax, dword ptr [esi + 8]
// 006cb891  8d0440               lea eax, [eax + eax*2]
// 006cb894  03c0                 add eax, eax
// 006cb896  03c0                 add eax, eax
// 006cb898  50                   push eax
// 006cb899  51                   push ecx
// 006cb89a  57                   push edi
// 006cb89b  55                   push ebp
// 006cb89c  e86f5fd3ff           call 0x401810
// 006cb8a1  8b4e08               mov ecx, dword ptr [esi + 8]
// 006cb8a4  8bc3                 mov eax, ebx
// 006cb8a6  2bc1                 sub eax, ecx
// 006cb8a8  8d1440               lea edx, [eax + eax*2]
// 006cb8ab  03d2                 add edx, edx
// 006cb8ad  03d2                 add edx, edx
// 006cb8af  52                   push edx
// 006cb8b0  8d0449               lea eax, [ecx + ecx*2]
// 006cb8b3  8d4c8500             lea ecx, [ebp + eax*4]
// 006cb8b7  6a00                 push 0
// 006cb8b9  51                   push ecx
// 006cb8ba  e8455efdff           call 0x6a1704
// 006cb8bf  8b5604               mov edx, dword ptr [esi + 4]
// 006cb8c2  52                   push edx
// 006cb8c3  e88250fdff           call 0x6a094a
// 006cb8c8  8b442438             mov eax, dword ptr [esp + 0x38]
// 006cb8cc  83c424               add esp, 0x24
// 006cb8cf  896e04               mov dword ptr [esi + 4], ebp
// 006cb8d2  89460c               mov dword ptr [esi + 0xc], eax
// 006cb8d5  5d                   pop ebp
// 006cb8d6  5f                   pop edi
// 006cb8d7  895e08               mov dword ptr [esi + 8], ebx
// 006cb8da  5e                   pop esi
// 006cb8db  5b                   pop ebx
// 006cb8dc  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPNotifyConnection.cpp (function ?SetSize@?$CArray@UCONNECTION_DESCRIPTOR@CXTPNotifyConnection@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPNotifyConnection.cpp
