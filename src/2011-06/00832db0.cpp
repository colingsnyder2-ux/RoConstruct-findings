// from server: 100% by auto
// roc 2011-06 00832db0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832db0
//
// 00832db0  53                   push ebx
// 00832db1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00832db5  56                   push esi
// 00832db6  57                   push edi
// 00832db7  33ff                 xor edi, edi
// 00832db9  3bdf                 cmp ebx, edi
// 00832dbb  8bf1                 mov esi, ecx
// 00832dbd  7d05                 jge 0x832dc4
// 00832dbf  e84675fdff           call 0x80a30a
// 00832dc4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00832dc8  3bc7                 cmp eax, edi
// 00832dca  7c03                 jl 0x832dcf
// 00832dcc  894610               mov dword ptr [esi + 0x10], eax
// 00832dcf  3bdf                 cmp ebx, edi
// 00832dd1  751f                 jne 0x832df2
// 00832dd3  8b4604               mov eax, dword ptr [esi + 4]
// 00832dd6  3bc7                 cmp eax, edi
// 00832dd8  740c                 je 0x832de6
// 00832dda  50                   push eax
// 00832ddb  e82475fdff           call 0x80a304
// 00832de0  83c404               add esp, 4
// 00832de3  897e04               mov dword ptr [esi + 4], edi
// 00832de6  897e0c               mov dword ptr [esi + 0xc], edi
// 00832de9  897e08               mov dword ptr [esi + 8], edi
// 00832dec  5f                   pop edi
// 00832ded  5e                   pop esi
// 00832dee  5b                   pop ebx
// 00832def  c20800               ret 8
// 00832df2  8b5604               mov edx, dword ptr [esi + 4]
// 00832df5  55                   push ebp
// 00832df6  3bd7                 cmp edx, edi
// 00832df8  7533                 jne 0x832e2d
// 00832dfa  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00832dfd  3bdd                 cmp ebx, ebp
// 00832dff  7e02                 jle 0x832e03
// 00832e01  8beb                 mov ebp, ebx
// 00832e03  8d7c6d00             lea edi, [ebp + ebp*2]
// 00832e07  03ff                 add edi, edi
// 00832e09  03ff                 add edi, edi
// 00832e0b  57                   push edi
// 00832e0c  e82f75fdff           call 0x80a340
// 00832e11  57                   push edi
// 00832e12  6a00                 push 0
// 00832e14  50                   push eax
// 00832e15  894604               mov dword ptr [esi + 4], eax
// 00832e18  e8c784fdff           call 0x80b2e4
// 00832e1d  83c410               add esp, 0x10
// 00832e20  896e0c               mov dword ptr [esi + 0xc], ebp
// 00832e23  5d                   pop ebp
// 00832e24  5f                   pop edi
// 00832e25  895e08               mov dword ptr [esi + 8], ebx
// 00832e28  5e                   pop esi
// 00832e29  5b                   pop ebx
// 00832e2a  c20800               ret 8
// 00832e2d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00832e30  3bd9                 cmp ebx, ecx
// 00832e32  7f31                 jg 0x832e65
// 00832e34  8b4e08               mov ecx, dword ptr [esi + 8]
// 00832e37  3bd9                 cmp ebx, ecx
// 00832e39  0f8ec6000000         jle 0x832f05
// 00832e3f  8bc3                 mov eax, ebx
// 00832e41  2bc1                 sub eax, ecx
// 00832e43  8d0440               lea eax, [eax + eax*2]
// 00832e46  03c0                 add eax, eax
// 00832e48  03c0                 add eax, eax
// 00832e4a  50                   push eax
// 00832e4b  8d0c49               lea ecx, [ecx + ecx*2]
// 00832e4e  8d148a               lea edx, [edx + ecx*4]
// 00832e51  57                   push edi
// 00832e52  52                   push edx
// 00832e53  e88c84fdff           call 0x80b2e4
// 00832e58  83c40c               add esp, 0xc
// 00832e5b  5d                   pop ebp
// 00832e5c  5f                   pop edi
// 00832e5d  895e08               mov dword ptr [esi + 8], ebx
// 00832e60  5e                   pop esi
// 00832e61  5b                   pop ebx
// 00832e62  c20800               ret 8
// 00832e65  8b4610               mov eax, dword ptr [esi + 0x10]
// 00832e68  3bc7                 cmp eax, edi
// 00832e6a  7524                 jne 0x832e90
// 00832e6c  8b4608               mov eax, dword ptr [esi + 8]
// 00832e6f  99                   cdq 
// 00832e70  83e207               and edx, 7
// 00832e73  03c2                 add eax, edx
// 00832e75  c1f803               sar eax, 3
// 00832e78  83f804               cmp eax, 4
// 00832e7b  7d07                 jge 0x832e84
// 00832e7d  b804000000           mov eax, 4
// 00832e82  eb0c                 jmp 0x832e90
// 00832e84  3d00040000           cmp eax, 0x400
// 00832e89  7e05                 jle 0x832e90
// 00832e8b  b800040000           mov eax, 0x400
// 00832e90  8d3c01               lea edi, [ecx + eax]
// 00832e93  3bdf                 cmp ebx, edi
// 00832e95  7d06                 jge 0x832e9d
// 00832e97  897c2414             mov dword ptr [esp + 0x14], edi
// 00832e9b  eb06                 jmp 0x832ea3
// 00832e9d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00832ea1  8bfb                 mov edi, ebx
// 00832ea3  3bf9                 cmp edi, ecx
// 00832ea5  7d05                 jge 0x832eac
// 00832ea7  e85e74fdff           call 0x80a30a
// 00832eac  8d3c7f               lea edi, [edi + edi*2]
// 00832eaf  03ff                 add edi, edi
// 00832eb1  03ff                 add edi, edi
// 00832eb3  57                   push edi
// 00832eb4  e88774fdff           call 0x80a340
// 00832eb9  8b4e04               mov ecx, dword ptr [esi + 4]
// 00832ebc  8be8                 mov ebp, eax
// 00832ebe  8b4608               mov eax, dword ptr [esi + 8]
// 00832ec1  8d0440               lea eax, [eax + eax*2]
// 00832ec4  03c0                 add eax, eax
// 00832ec6  03c0                 add eax, eax
// 00832ec8  50                   push eax
// 00832ec9  51                   push ecx
// 00832eca  57                   push edi
// 00832ecb  55                   push ebp
// 00832ecc  e8ef06bdff           call 0x4035c0
// 00832ed1  8b4e08               mov ecx, dword ptr [esi + 8]
// 00832ed4  8bc3                 mov eax, ebx
// 00832ed6  2bc1                 sub eax, ecx
// 00832ed8  8d1440               lea edx, [eax + eax*2]
// 00832edb  03d2                 add edx, edx
// 00832edd  03d2                 add edx, edx
// 00832edf  52                   push edx
// 00832ee0  8d0449               lea eax, [ecx + ecx*2]
// 00832ee3  8d4c8500             lea ecx, [ebp + eax*4]
// 00832ee7  6a00                 push 0
// 00832ee9  51                   push ecx
// 00832eea  e8f583fdff           call 0x80b2e4
// 00832eef  8b5604               mov edx, dword ptr [esi + 4]
// 00832ef2  52                   push edx
// 00832ef3  e80c74fdff           call 0x80a304
// 00832ef8  8b442438             mov eax, dword ptr [esp + 0x38]
// 00832efc  83c424               add esp, 0x24
// 00832eff  896e04               mov dword ptr [esi + 4], ebp
// 00832f02  89460c               mov dword ptr [esi + 0xc], eax
// 00832f05  5d                   pop ebp
// 00832f06  5f                   pop edi
// 00832f07  895e08               mov dword ptr [esi + 8], ebx
// 00832f0a  5e                   pop esi
// 00832f0b  5b                   pop ebx
// 00832f0c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPNotifyConnection.cpp (function ?SetSize@?$CArray@UCONNECTION_DESCRIPTOR@CXTPNotifyConnection@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPNotifyConnection.cpp
