// from server: 100% by auto
// roc 2011-06 00875f50  unit: CXTPPropertyGridView  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875f50
//
// 00875f50  53                   push ebx
// 00875f51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00875f55  56                   push esi
// 00875f56  57                   push edi
// 00875f57  33ff                 xor edi, edi
// 00875f59  3bdf                 cmp ebx, edi
// 00875f5b  8bf1                 mov esi, ecx
// 00875f5d  7d05                 jge 0x875f64
// 00875f5f  e8a643f9ff           call 0x80a30a
// 00875f64  8b442414             mov eax, dword ptr [esp + 0x14]
// 00875f68  3bc7                 cmp eax, edi
// 00875f6a  7c03                 jl 0x875f6f
// 00875f6c  894610               mov dword ptr [esi + 0x10], eax
// 00875f6f  3bdf                 cmp ebx, edi
// 00875f71  751f                 jne 0x875f92
// 00875f73  8b4604               mov eax, dword ptr [esi + 4]
// 00875f76  3bc7                 cmp eax, edi
// 00875f78  740c                 je 0x875f86
// 00875f7a  50                   push eax
// 00875f7b  e88443f9ff           call 0x80a304
// 00875f80  83c404               add esp, 4
// 00875f83  897e04               mov dword ptr [esi + 4], edi
// 00875f86  897e0c               mov dword ptr [esi + 0xc], edi
// 00875f89  897e08               mov dword ptr [esi + 8], edi
// 00875f8c  5f                   pop edi
// 00875f8d  5e                   pop esi
// 00875f8e  5b                   pop ebx
// 00875f8f  c20800               ret 8
// 00875f92  8b5604               mov edx, dword ptr [esi + 4]
// 00875f95  55                   push ebp
// 00875f96  3bd7                 cmp edx, edi
// 00875f98  7533                 jne 0x875fcd
// 00875f9a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00875f9d  3bdd                 cmp ebx, ebp
// 00875f9f  7e02                 jle 0x875fa3
// 00875fa1  8beb                 mov ebp, ebx
// 00875fa3  8d7cad00             lea edi, [ebp + ebp*4]
// 00875fa7  03ff                 add edi, edi
// 00875fa9  03ff                 add edi, edi
// 00875fab  57                   push edi
// 00875fac  e88f43f9ff           call 0x80a340
// 00875fb1  57                   push edi
// 00875fb2  6a00                 push 0
// 00875fb4  50                   push eax
// 00875fb5  894604               mov dword ptr [esi + 4], eax
// 00875fb8  e82753f9ff           call 0x80b2e4
// 00875fbd  83c410               add esp, 0x10
// 00875fc0  896e0c               mov dword ptr [esi + 0xc], ebp
// 00875fc3  5d                   pop ebp
// 00875fc4  5f                   pop edi
// 00875fc5  895e08               mov dword ptr [esi + 8], ebx
// 00875fc8  5e                   pop esi
// 00875fc9  5b                   pop ebx
// 00875fca  c20800               ret 8
// 00875fcd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00875fd0  3bd9                 cmp ebx, ecx
// 00875fd2  7f31                 jg 0x876005
// 00875fd4  8b4e08               mov ecx, dword ptr [esi + 8]
// 00875fd7  3bd9                 cmp ebx, ecx
// 00875fd9  0f8ec6000000         jle 0x8760a5
// 00875fdf  8bc3                 mov eax, ebx
// 00875fe1  2bc1                 sub eax, ecx
// 00875fe3  8d0480               lea eax, [eax + eax*4]
// 00875fe6  03c0                 add eax, eax
// 00875fe8  03c0                 add eax, eax
// 00875fea  50                   push eax
// 00875feb  8d0c89               lea ecx, [ecx + ecx*4]
// 00875fee  8d148a               lea edx, [edx + ecx*4]
// 00875ff1  57                   push edi
// 00875ff2  52                   push edx
// 00875ff3  e8ec52f9ff           call 0x80b2e4
// 00875ff8  83c40c               add esp, 0xc
// 00875ffb  5d                   pop ebp
// 00875ffc  5f                   pop edi
// 00875ffd  895e08               mov dword ptr [esi + 8], ebx
// 00876000  5e                   pop esi
// 00876001  5b                   pop ebx
// 00876002  c20800               ret 8
// 00876005  8b4610               mov eax, dword ptr [esi + 0x10]
// 00876008  3bc7                 cmp eax, edi
// 0087600a  7524                 jne 0x876030
// 0087600c  8b4608               mov eax, dword ptr [esi + 8]
// 0087600f  99                   cdq 
// 00876010  83e207               and edx, 7
// 00876013  03c2                 add eax, edx
// 00876015  c1f803               sar eax, 3
// 00876018  83f804               cmp eax, 4
// 0087601b  7d07                 jge 0x876024
// 0087601d  b804000000           mov eax, 4
// 00876022  eb0c                 jmp 0x876030
// 00876024  3d00040000           cmp eax, 0x400
// 00876029  7e05                 jle 0x876030
// 0087602b  b800040000           mov eax, 0x400
// 00876030  8d3c01               lea edi, [ecx + eax]
// 00876033  3bdf                 cmp ebx, edi
// 00876035  7d06                 jge 0x87603d
// 00876037  897c2414             mov dword ptr [esp + 0x14], edi
// 0087603b  eb06                 jmp 0x876043
// 0087603d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00876041  8bfb                 mov edi, ebx
// 00876043  3bf9                 cmp edi, ecx
// 00876045  7d05                 jge 0x87604c
// 00876047  e8be42f9ff           call 0x80a30a
// 0087604c  8d3cbf               lea edi, [edi + edi*4]
// 0087604f  03ff                 add edi, edi
// 00876051  03ff                 add edi, edi
// 00876053  57                   push edi
// 00876054  e8e742f9ff           call 0x80a340
// 00876059  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087605c  8be8                 mov ebp, eax
// 0087605e  8b4608               mov eax, dword ptr [esi + 8]
// 00876061  8d0480               lea eax, [eax + eax*4]
// 00876064  03c0                 add eax, eax
// 00876066  03c0                 add eax, eax
// 00876068  50                   push eax
// 00876069  51                   push ecx
// 0087606a  57                   push edi
// 0087606b  55                   push ebp
// 0087606c  e84fd5b8ff           call 0x4035c0
// 00876071  8b4e08               mov ecx, dword ptr [esi + 8]
// 00876074  8bc3                 mov eax, ebx
// 00876076  2bc1                 sub eax, ecx
// 00876078  8d1480               lea edx, [eax + eax*4]
// 0087607b  03d2                 add edx, edx
// 0087607d  03d2                 add edx, edx
// 0087607f  52                   push edx
// 00876080  8d0489               lea eax, [ecx + ecx*4]
// 00876083  8d4c8500             lea ecx, [ebp + eax*4]
// 00876087  6a00                 push 0
// 00876089  51                   push ecx
// 0087608a  e85552f9ff           call 0x80b2e4
// 0087608f  8b5604               mov edx, dword ptr [esi + 4]
// 00876092  52                   push edx
// 00876093  e86c42f9ff           call 0x80a304
// 00876098  8b442438             mov eax, dword ptr [esp + 0x38]
// 0087609c  83c424               add esp, 0x24
// 0087609f  896e04               mov dword ptr [esi + 4], ebp
// 008760a2  89460c               mov dword ptr [esi + 0xc], eax
// 008760a5  5d                   pop ebp
// 008760a6  5f                   pop edi
// 008760a7  895e08               mov dword ptr [esi + 8], ebx
// 008760aa  5e                   pop esi
// 008760ab  5b                   pop ebx
// 008760ac  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetSize@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
