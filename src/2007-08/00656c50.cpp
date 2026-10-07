// roc 2007-08 00656c50  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656c50
//
// 00656c50  53                   push ebx
// 00656c51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00656c55  56                   push esi
// 00656c56  57                   push edi
// 00656c57  33ff                 xor edi, edi
// 00656c59  3bdf                 cmp ebx, edi
// 00656c5b  8bf1                 mov esi, ecx
// 00656c5d  7d05                 jge 0x656c64
// 00656c5f  e8bc92fdff           call 0x62ff20
// 00656c64  8b442414             mov eax, dword ptr [esp + 0x14]
// 00656c68  3bc7                 cmp eax, edi
// 00656c6a  7c03                 jl 0x656c6f
// 00656c6c  894610               mov dword ptr [esi + 0x10], eax
// 00656c6f  3bdf                 cmp ebx, edi
// 00656c71  751f                 jne 0x656c92
// 00656c73  8b4604               mov eax, dword ptr [esi + 4]
// 00656c76  3bc7                 cmp eax, edi
// 00656c78  740c                 je 0x656c86
// 00656c7a  50                   push eax
// 00656c7b  e8a692fdff           call 0x62ff26
// 00656c80  83c404               add esp, 4
// 00656c83  897e04               mov dword ptr [esi + 4], edi
// 00656c86  897e0c               mov dword ptr [esi + 0xc], edi
// 00656c89  897e08               mov dword ptr [esi + 8], edi
// 00656c8c  5f                   pop edi
// 00656c8d  5e                   pop esi
// 00656c8e  5b                   pop ebx
// 00656c8f  c20800               ret 8
// 00656c92  8b5604               mov edx, dword ptr [esi + 4]
// 00656c95  3bd7                 cmp edx, edi
// 00656c97  55                   push ebp
// 00656c98  7533                 jne 0x656ccd
// 00656c9a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00656c9d  3bdd                 cmp ebx, ebp
// 00656c9f  7e02                 jle 0x656ca3
// 00656ca1  8beb                 mov ebp, ebx
// 00656ca3  8d7c6d00             lea edi, [ebp + ebp*2]
// 00656ca7  03ff                 add edi, edi
// 00656ca9  03ff                 add edi, edi
// 00656cab  57                   push edi
// 00656cac  e88192fdff           call 0x62ff32
// 00656cb1  57                   push edi
// 00656cb2  6a00                 push 0
// 00656cb4  50                   push eax
// 00656cb5  894604               mov dword ptr [esi + 4], eax
// 00656cb8  e8cf9efdff           call 0x630b8c
// 00656cbd  83c410               add esp, 0x10
// 00656cc0  896e0c               mov dword ptr [esi + 0xc], ebp
// 00656cc3  5d                   pop ebp
// 00656cc4  5f                   pop edi
// 00656cc5  895e08               mov dword ptr [esi + 8], ebx
// 00656cc8  5e                   pop esi
// 00656cc9  5b                   pop ebx
// 00656cca  c20800               ret 8
// 00656ccd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00656cd0  3bd9                 cmp ebx, ecx
// 00656cd2  7f31                 jg 0x656d05
// 00656cd4  8b4e08               mov ecx, dword ptr [esi + 8]
// 00656cd7  3bd9                 cmp ebx, ecx
// 00656cd9  0f8ec6000000         jle 0x656da5
// 00656cdf  8bc3                 mov eax, ebx
// 00656ce1  2bc1                 sub eax, ecx
// 00656ce3  8d0440               lea eax, [eax + eax*2]
// 00656ce6  03c0                 add eax, eax
// 00656ce8  03c0                 add eax, eax
// 00656cea  50                   push eax
// 00656ceb  8d0c49               lea ecx, [ecx + ecx*2]
// 00656cee  8d148a               lea edx, [edx + ecx*4]
// 00656cf1  57                   push edi
// 00656cf2  52                   push edx
// 00656cf3  e8949efdff           call 0x630b8c
// 00656cf8  83c40c               add esp, 0xc
// 00656cfb  5d                   pop ebp
// 00656cfc  5f                   pop edi
// 00656cfd  895e08               mov dword ptr [esi + 8], ebx
// 00656d00  5e                   pop esi
// 00656d01  5b                   pop ebx
// 00656d02  c20800               ret 8
// 00656d05  8b4610               mov eax, dword ptr [esi + 0x10]
// 00656d08  3bc7                 cmp eax, edi
// 00656d0a  7524                 jne 0x656d30
// 00656d0c  8b4608               mov eax, dword ptr [esi + 8]
// 00656d0f  99                   cdq 
// 00656d10  83e207               and edx, 7
// 00656d13  03c2                 add eax, edx
// 00656d15  c1f803               sar eax, 3
// 00656d18  83f804               cmp eax, 4
// 00656d1b  7d07                 jge 0x656d24
// 00656d1d  b804000000           mov eax, 4
// 00656d22  eb0c                 jmp 0x656d30
// 00656d24  3d00040000           cmp eax, 0x400
// 00656d29  7e05                 jle 0x656d30
// 00656d2b  b800040000           mov eax, 0x400
// 00656d30  8d3c01               lea edi, [ecx + eax]
// 00656d33  3bdf                 cmp ebx, edi
// 00656d35  7d06                 jge 0x656d3d
// 00656d37  897c2414             mov dword ptr [esp + 0x14], edi
// 00656d3b  eb06                 jmp 0x656d43
// 00656d3d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00656d41  8bfb                 mov edi, ebx
// 00656d43  3bf9                 cmp edi, ecx
// 00656d45  7d05                 jge 0x656d4c
// 00656d47  e8d491fdff           call 0x62ff20
// 00656d4c  8d3c7f               lea edi, [edi + edi*2]
// 00656d4f  03ff                 add edi, edi
// 00656d51  03ff                 add edi, edi
// 00656d53  57                   push edi
// 00656d54  e8d991fdff           call 0x62ff32
// 00656d59  8b4e04               mov ecx, dword ptr [esi + 4]
// 00656d5c  8be8                 mov ebp, eax
// 00656d5e  8b4608               mov eax, dword ptr [esi + 8]
// 00656d61  8d0440               lea eax, [eax + eax*2]
// 00656d64  03c0                 add eax, eax
// 00656d66  03c0                 add eax, eax
// 00656d68  50                   push eax
// 00656d69  51                   push ecx
// 00656d6a  57                   push edi
// 00656d6b  55                   push ebp
// 00656d6c  e80fabdaff           call 0x401880
// 00656d71  8b4e08               mov ecx, dword ptr [esi + 8]
// 00656d74  8bc3                 mov eax, ebx
// 00656d76  2bc1                 sub eax, ecx
// 00656d78  8d1440               lea edx, [eax + eax*2]
// 00656d7b  03d2                 add edx, edx
// 00656d7d  03d2                 add edx, edx
// 00656d7f  52                   push edx
// 00656d80  8d0449               lea eax, [ecx + ecx*2]
// 00656d83  8d4c8500             lea ecx, [ebp + eax*4]
// 00656d87  6a00                 push 0
// 00656d89  51                   push ecx
// 00656d8a  e8fd9dfdff           call 0x630b8c
// 00656d8f  8b5604               mov edx, dword ptr [esi + 4]
// 00656d92  52                   push edx
// 00656d93  e88e91fdff           call 0x62ff26
// 00656d98  8b442438             mov eax, dword ptr [esp + 0x38]
// 00656d9c  83c424               add esp, 0x24
// 00656d9f  896e04               mov dword ptr [esi + 4], ebp
// 00656da2  89460c               mov dword ptr [esi + 0xc], eax
// 00656da5  5d                   pop ebp
// 00656da6  5f                   pop edi
// 00656da7  895e08               mov dword ptr [esi + 8], ebx
// 00656daa  5e                   pop esi
// 00656dab  5b                   pop ebx
// 00656dac  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPNotifyConnection.cpp (function ?SetSize@?$CArray@UCONNECTION_DESCRIPTOR@CXTPNotifyConnection@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPNotifyConnection.cpp
