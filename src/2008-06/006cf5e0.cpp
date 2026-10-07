// roc 2008-06 006cf5e0  unit: CXTPReportControlLocale::UXTP_TIMESPEC::?$CArray  size: 560 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf5e0
//
// 006cf5e0  53                   push ebx
// 006cf5e1  56                   push esi
// 006cf5e2  57                   push edi
// 006cf5e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006cf5e7  33db                 xor ebx, ebx
// 006cf5e9  3bfb                 cmp edi, ebx
// 006cf5eb  8bf1                 mov esi, ecx
// 006cf5ed  7d05                 jge 0x6cf5f4
// 006cf5ef  e85013fdff           call 0x6a0944
// 006cf5f4  8b442414             mov eax, dword ptr [esp + 0x14]
// 006cf5f8  3bc3                 cmp eax, ebx
// 006cf5fa  7c03                 jl 0x6cf5ff
// 006cf5fc  894610               mov dword ptr [esi + 0x10], eax
// 006cf5ff  3bfb                 cmp edi, ebx
// 006cf601  753c                 jne 0x6cf63f
// 006cf603  395e04               cmp dword ptr [esi + 4], ebx
// 006cf606  742b                 je 0x6cf633
// 006cf608  33ff                 xor edi, edi
// 006cf60a  395e08               cmp dword ptr [esi + 8], ebx
// 006cf60d  7e15                 jle 0x6cf624
// 006cf60f  90                   nop 
// 006cf610  8b4604               mov eax, dword ptr [esi + 4]
// 006cf613  8b14f8               mov edx, dword ptr [eax + edi*8]
// 006cf616  8d0cf8               lea ecx, [eax + edi*8]
// 006cf619  8b02                 mov eax, dword ptr [edx]
// 006cf61b  53                   push ebx
// 006cf61c  ffd0                 call eax
// 006cf61e  47                   inc edi
// 006cf61f  3b7e08               cmp edi, dword ptr [esi + 8]
// 006cf622  7cec                 jl 0x6cf610
// 006cf624  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cf627  51                   push ecx
// 006cf628  e81d13fdff           call 0x6a094a
// 006cf62d  83c404               add esp, 4
// 006cf630  895e04               mov dword ptr [esi + 4], ebx
// 006cf633  5f                   pop edi
// 006cf634  895e0c               mov dword ptr [esi + 0xc], ebx
// 006cf637  895e08               mov dword ptr [esi + 8], ebx
// 006cf63a  5e                   pop esi
// 006cf63b  5b                   pop ebx
// 006cf63c  c20800               ret 8
// 006cf63f  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cf642  55                   push ebp
// 006cf643  3bcb                 cmp ecx, ebx
// 006cf645  7553                 jne 0x6cf69a
// 006cf647  8b4610               mov eax, dword ptr [esi + 0x10]
// 006cf64a  3bf8                 cmp edi, eax
// 006cf64c  8bdf                 mov ebx, edi
// 006cf64e  7f02                 jg 0x6cf652
// 006cf650  8bd8                 mov ebx, eax
// 006cf652  8d2cdd00000000       lea ebp, [ebx*8]
// 006cf659  55                   push ebp
// 006cf65a  e8f712fdff           call 0x6a0956
// 006cf65f  55                   push ebp
// 006cf660  33ed                 xor ebp, ebp
// 006cf662  55                   push ebp
// 006cf663  50                   push eax
// 006cf664  894604               mov dword ptr [esi + 4], eax
// 006cf667  e89820fdff           call 0x6a1704
// 006cf66c  83c410               add esp, 0x10
// 006cf66f  33c9                 xor ecx, ecx
// 006cf671  3bfd                 cmp edi, ebp
// 006cf673  7e18                 jle 0x6cf68d
// 006cf675  8b5604               mov edx, dword ptr [esi + 4]
// 006cf678  8d04ca               lea eax, [edx + ecx*8]
// 006cf67b  3bc5                 cmp eax, ebp
// 006cf67d  7409                 je 0x6cf688
// 006cf67f  c7009c3b8500         mov dword ptr [eax], 0x853b9c
// 006cf685  896804               mov dword ptr [eax + 4], ebp
// 006cf688  41                   inc ecx
// 006cf689  3bcf                 cmp ecx, edi
// 006cf68b  7ce8                 jl 0x6cf675
// 006cf68d  5d                   pop ebp
// 006cf68e  897e08               mov dword ptr [esi + 8], edi
// 006cf691  5f                   pop edi
// 006cf692  895e0c               mov dword ptr [esi + 0xc], ebx
// 006cf695  5e                   pop esi
// 006cf696  5b                   pop ebx
// 006cf697  c20800               ret 8
// 006cf69a  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 006cf69d  3bfd                 cmp edi, ebp
// 006cf69f  0f8f96000000         jg 0x6cf73b
// 006cf6a5  8b4608               mov eax, dword ptr [esi + 8]
// 006cf6a8  3bc7                 cmp eax, edi
// 006cf6aa  7d53                 jge 0x6cf6ff
// 006cf6ac  8bd7                 mov edx, edi
// 006cf6ae  2bd0                 sub edx, eax
// 006cf6b0  03d2                 add edx, edx
// 006cf6b2  03d2                 add edx, edx
// 006cf6b4  03d2                 add edx, edx
// 006cf6b6  52                   push edx
// 006cf6b7  8d04c1               lea eax, [ecx + eax*8]
// 006cf6ba  53                   push ebx
// 006cf6bb  50                   push eax
// 006cf6bc  e84320fdff           call 0x6a1704
// 006cf6c1  8bd7                 mov edx, edi
// 006cf6c3  2b5608               sub edx, dword ptr [esi + 8]
// 006cf6c6  83c40c               add esp, 0xc
// 006cf6c9  33c9                 xor ecx, ecx
// 006cf6cb  85d2                 test edx, edx
// 006cf6cd  0f8e33010000         jle 0x6cf806
// 006cf6d3  8b4608               mov eax, dword ptr [esi + 8]
// 006cf6d6  8b5604               mov edx, dword ptr [esi + 4]
// 006cf6d9  03c1                 add eax, ecx
// 006cf6db  8d04c2               lea eax, [edx + eax*8]
// 006cf6de  3bc3                 cmp eax, ebx
// 006cf6e0  7409                 je 0x6cf6eb
// 006cf6e2  c7009c3b8500         mov dword ptr [eax], 0x853b9c
// 006cf6e8  895804               mov dword ptr [eax + 4], ebx
// 006cf6eb  8bc7                 mov eax, edi
// 006cf6ed  2b4608               sub eax, dword ptr [esi + 8]
// 006cf6f0  41                   inc ecx
// 006cf6f1  3bc8                 cmp ecx, eax
// 006cf6f3  7cde                 jl 0x6cf6d3
// 006cf6f5  5d                   pop ebp
// 006cf6f6  897e08               mov dword ptr [esi + 8], edi
// 006cf6f9  5f                   pop edi
// 006cf6fa  5e                   pop esi
// 006cf6fb  5b                   pop ebx
// 006cf6fc  c20800               ret 8
// 006cf6ff  0f8e01010000         jle 0x6cf806
// 006cf705  2bc7                 sub eax, edi
// 006cf707  85c0                 test eax, eax
// 006cf709  0f8ef7000000         jle 0x6cf806
// 006cf70f  8d2cfd00000000       lea ebp, [edi*8]
// 006cf716  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cf719  8b1429               mov edx, dword ptr [ecx + ebp]
// 006cf71c  8b02                 mov eax, dword ptr [edx]
// 006cf71e  03cd                 add ecx, ebp
// 006cf720  6a00                 push 0
// 006cf722  ffd0                 call eax
// 006cf724  8b4e08               mov ecx, dword ptr [esi + 8]
// 006cf727  43                   inc ebx
// 006cf728  2bcf                 sub ecx, edi
// 006cf72a  83c508               add ebp, 8
// 006cf72d  3bd9                 cmp ebx, ecx
// 006cf72f  7ce5                 jl 0x6cf716
// 006cf731  5d                   pop ebp
// 006cf732  897e08               mov dword ptr [esi + 8], edi
// 006cf735  5f                   pop edi
// 006cf736  5e                   pop esi
// 006cf737  5b                   pop ebx
// 006cf738  c20800               ret 8
// 006cf73b  8b4610               mov eax, dword ptr [esi + 0x10]
// 006cf73e  3bc3                 cmp eax, ebx
// 006cf740  7524                 jne 0x6cf766
// 006cf742  8b4608               mov eax, dword ptr [esi + 8]
// 006cf745  99                   cdq 
// 006cf746  83e207               and edx, 7
// 006cf749  03c2                 add eax, edx
// 006cf74b  c1f803               sar eax, 3
// 006cf74e  83f804               cmp eax, 4
// 006cf751  7d07                 jge 0x6cf75a
// 006cf753  b804000000           mov eax, 4
// 006cf758  eb0c                 jmp 0x6cf766
// 006cf75a  3d00040000           cmp eax, 0x400
// 006cf75f  7e05                 jle 0x6cf766
// 006cf761  b800040000           mov eax, 0x400
// 006cf766  03c5                 add eax, ebp
// 006cf768  3bf8                 cmp edi, eax
// 006cf76a  7d06                 jge 0x6cf772
// 006cf76c  89442414             mov dword ptr [esp + 0x14], eax
// 006cf770  eb06                 jmp 0x6cf778
// 006cf772  897c2414             mov dword ptr [esp + 0x14], edi
// 006cf776  8bc7                 mov eax, edi
// 006cf778  3bc5                 cmp eax, ebp
// 006cf77a  7d05                 jge 0x6cf781
// 006cf77c  e8c311fdff           call 0x6a0944
// 006cf781  8d1cc500000000       lea ebx, [eax*8]
// 006cf788  53                   push ebx
// 006cf789  e8c811fdff           call 0x6a0956
// 006cf78e  8b5608               mov edx, dword ptr [esi + 8]
// 006cf791  03d2                 add edx, edx
// 006cf793  03d2                 add edx, edx
// 006cf795  8be8                 mov ebp, eax
// 006cf797  8b4604               mov eax, dword ptr [esi + 4]
// 006cf79a  03d2                 add edx, edx
// 006cf79c  52                   push edx
// 006cf79d  50                   push eax
// 006cf79e  53                   push ebx
// 006cf79f  55                   push ebp
// 006cf7a0  e86b20d3ff           call 0x401810
// 006cf7a5  8b4608               mov eax, dword ptr [esi + 8]
// 006cf7a8  8bcf                 mov ecx, edi
// 006cf7aa  2bc8                 sub ecx, eax
// 006cf7ac  03c9                 add ecx, ecx
// 006cf7ae  03c9                 add ecx, ecx
// 006cf7b0  03c9                 add ecx, ecx
// 006cf7b2  51                   push ecx
// 006cf7b3  33db                 xor ebx, ebx
// 006cf7b5  8d54c500             lea edx, [ebp + eax*8]
// 006cf7b9  53                   push ebx
// 006cf7ba  52                   push edx
// 006cf7bb  e8441ffdff           call 0x6a1704
// 006cf7c0  8bc7                 mov eax, edi
// 006cf7c2  2b4608               sub eax, dword ptr [esi + 8]
// 006cf7c5  83c420               add esp, 0x20
// 006cf7c8  33c9                 xor ecx, ecx
// 006cf7ca  85c0                 test eax, eax
// 006cf7cc  7e22                 jle 0x6cf7f0
// 006cf7ce  8bff                 mov edi, edi
// 006cf7d0  8b5608               mov edx, dword ptr [esi + 8]
// 006cf7d3  03d1                 add edx, ecx
// 006cf7d5  8d44d500             lea eax, [ebp + edx*8]
// 006cf7d9  3bc3                 cmp eax, ebx
// 006cf7db  7409                 je 0x6cf7e6
// 006cf7dd  c7009c3b8500         mov dword ptr [eax], 0x853b9c
// 006cf7e3  895804               mov dword ptr [eax + 4], ebx
// 006cf7e6  8bc7                 mov eax, edi
// 006cf7e8  2b4608               sub eax, dword ptr [esi + 8]
// 006cf7eb  41                   inc ecx
// 006cf7ec  3bc8                 cmp ecx, eax
// 006cf7ee  7ce0                 jl 0x6cf7d0
// 006cf7f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cf7f3  51                   push ecx
// 006cf7f4  e85111fdff           call 0x6a094a
// 006cf7f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 006cf7fd  83c404               add esp, 4
// 006cf800  896e04               mov dword ptr [esi + 4], ebp
// 006cf803  89560c               mov dword ptr [esi + 0xc], edx
// 006cf806  5d                   pop ebp
// 006cf807  897e08               mov dword ptr [esi + 8], edi
// 006cf80a  5f                   pop edi
// 006cf80b  5e                   pop esi
// 006cf80c  5b                   pop ebx
// 006cf80d  c20800               ret 8
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ?SetSize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarResource@@@@AAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
