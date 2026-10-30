// roc 2007-03 006445c0  unit: seg_00640000  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006445c0
//
// 006445c0  53                   push ebx
// 006445c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006445c5  56                   push esi
// 006445c6  57                   push edi
// 006445c7  33ff                 xor edi, edi
// 006445c9  3bdf                 cmp ebx, edi
// 006445cb  8bf1                 mov esi, ecx
// 006445cd  7d05                 jge 0x6445d4
// 006445cf  e8da9dfdff           call 0x61e3ae
// 006445d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 006445d8  3bc7                 cmp eax, edi
// 006445da  7c03                 jl 0x6445df
// 006445dc  894610               mov dword ptr [esi + 0x10], eax
// 006445df  3bdf                 cmp ebx, edi
// 006445e1  751f                 jne 0x644602
// 006445e3  8b4604               mov eax, dword ptr [esi + 4]
// 006445e6  3bc7                 cmp eax, edi
// 006445e8  740c                 je 0x6445f6
// 006445ea  50                   push eax
// 006445eb  e8c49dfdff           call 0x61e3b4
// 006445f0  83c404               add esp, 4
// 006445f3  897e04               mov dword ptr [esi + 4], edi
// 006445f6  897e0c               mov dword ptr [esi + 0xc], edi
// 006445f9  897e08               mov dword ptr [esi + 8], edi
// 006445fc  5f                   pop edi
// 006445fd  5e                   pop esi
// 006445fe  5b                   pop ebx
// 006445ff  c20800               ret 8
// 00644602  8b5604               mov edx, dword ptr [esi + 4]
// 00644605  3bd7                 cmp edx, edi
// 00644607  55                   push ebp
// 00644608  7533                 jne 0x64463d
// 0064460a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0064460d  3bdd                 cmp ebx, ebp
// 0064460f  7e02                 jle 0x644613
// 00644611  8beb                 mov ebp, ebx
// 00644613  8d7c6d00             lea edi, [ebp + ebp*2]
// 00644617  03ff                 add edi, edi
// 00644619  03ff                 add edi, edi
// 0064461b  57                   push edi
// 0064461c  e89f9dfdff           call 0x61e3c0
// 00644621  57                   push edi
// 00644622  6a00                 push 0
// 00644624  50                   push eax
// 00644625  894604               mov dword ptr [esi + 4], eax
// 00644628  e8efa9fdff           call 0x61f01c
// 0064462d  83c410               add esp, 0x10
// 00644630  896e0c               mov dword ptr [esi + 0xc], ebp
// 00644633  5d                   pop ebp
// 00644634  5f                   pop edi
// 00644635  895e08               mov dword ptr [esi + 8], ebx
// 00644638  5e                   pop esi
// 00644639  5b                   pop ebx
// 0064463a  c20800               ret 8
// 0064463d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00644640  3bd9                 cmp ebx, ecx
// 00644642  7f31                 jg 0x644675
// 00644644  8b4e08               mov ecx, dword ptr [esi + 8]
// 00644647  3bd9                 cmp ebx, ecx
// 00644649  0f8ec6000000         jle 0x644715
// 0064464f  8bc3                 mov eax, ebx
// 00644651  2bc1                 sub eax, ecx
// 00644653  8d0440               lea eax, [eax + eax*2]
// 00644656  03c0                 add eax, eax
// 00644658  03c0                 add eax, eax
// 0064465a  50                   push eax
// 0064465b  8d0c49               lea ecx, [ecx + ecx*2]
// 0064465e  8d148a               lea edx, [edx + ecx*4]
// 00644661  57                   push edi
// 00644662  52                   push edx
// 00644663  e8b4a9fdff           call 0x61f01c
// 00644668  83c40c               add esp, 0xc
// 0064466b  5d                   pop ebp
// 0064466c  5f                   pop edi
// 0064466d  895e08               mov dword ptr [esi + 8], ebx
// 00644670  5e                   pop esi
// 00644671  5b                   pop ebx
// 00644672  c20800               ret 8
// 00644675  8b4610               mov eax, dword ptr [esi + 0x10]
// 00644678  3bc7                 cmp eax, edi
// 0064467a  7524                 jne 0x6446a0
// 0064467c  8b4608               mov eax, dword ptr [esi + 8]
// 0064467f  99                   cdq 
// 00644680  83e207               and edx, 7
// 00644683  03c2                 add eax, edx
// 00644685  c1f803               sar eax, 3
// 00644688  83f804               cmp eax, 4
// 0064468b  7d07                 jge 0x644694
// 0064468d  b804000000           mov eax, 4
// 00644692  eb0c                 jmp 0x6446a0
// 00644694  3d00040000           cmp eax, 0x400
// 00644699  7e05                 jle 0x6446a0
// 0064469b  b800040000           mov eax, 0x400
// 006446a0  8d3c01               lea edi, [ecx + eax]
// 006446a3  3bdf                 cmp ebx, edi
// 006446a5  7d06                 jge 0x6446ad
// 006446a7  897c2414             mov dword ptr [esp + 0x14], edi
// 006446ab  eb06                 jmp 0x6446b3
// 006446ad  895c2414             mov dword ptr [esp + 0x14], ebx
// 006446b1  8bfb                 mov edi, ebx
// 006446b3  3bf9                 cmp edi, ecx
// 006446b5  7d05                 jge 0x6446bc
// 006446b7  e8f29cfdff           call 0x61e3ae
// 006446bc  8d3c7f               lea edi, [edi + edi*2]
// 006446bf  03ff                 add edi, edi
// 006446c1  03ff                 add edi, edi
// 006446c3  57                   push edi
// 006446c4  e8f79cfdff           call 0x61e3c0
// 006446c9  8b4e04               mov ecx, dword ptr [esi + 4]
// 006446cc  8be8                 mov ebp, eax
// 006446ce  8b4608               mov eax, dword ptr [esi + 8]
// 006446d1  8d0440               lea eax, [eax + eax*2]
// 006446d4  03c0                 add eax, eax
// 006446d6  03c0                 add eax, eax
// 006446d8  50                   push eax
// 006446d9  51                   push ecx
// 006446da  57                   push edi
// 006446db  55                   push ebp
// 006446dc  e8afd1dbff           call 0x401890
// 006446e1  8b4e08               mov ecx, dword ptr [esi + 8]
// 006446e4  8bc3                 mov eax, ebx
// 006446e6  2bc1                 sub eax, ecx
// 006446e8  8d1440               lea edx, [eax + eax*2]
// 006446eb  03d2                 add edx, edx
// 006446ed  03d2                 add edx, edx
// 006446ef  52                   push edx
// 006446f0  8d0449               lea eax, [ecx + ecx*2]
// 006446f3  8d4c8500             lea ecx, [ebp + eax*4]
// 006446f7  6a00                 push 0
// 006446f9  51                   push ecx
// 006446fa  e81da9fdff           call 0x61f01c
// 006446ff  8b5604               mov edx, dword ptr [esi + 4]
// 00644702  52                   push edx
// 00644703  e8ac9cfdff           call 0x61e3b4
// 00644708  8b442438             mov eax, dword ptr [esp + 0x38]
// 0064470c  83c424               add esp, 0x24
// 0064470f  896e04               mov dword ptr [esi + 4], ebp
// 00644712  89460c               mov dword ptr [esi + 0xc], eax
// 00644715  5d                   pop ebp
// 00644716  5f                   pop edi
// 00644717  895e08               mov dword ptr [esi + 8], ebx
// 0064471a  5e                   pop esi
// 0064471b  5b                   pop ebx
// 0064471c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPNotifyConnection.cpp (function ?SetSize@?$CArray@UCONNECTION_DESCRIPTOR@CXTPNotifyConnection@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPNotifyConnection.cpp
