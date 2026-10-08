// from server: 100% by auto
// roc 2008-06 00714280  unit: CXTPPropertyGridView  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714280
//
// 00714280  53                   push ebx
// 00714281  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00714285  56                   push esi
// 00714286  57                   push edi
// 00714287  33ff                 xor edi, edi
// 00714289  3bdf                 cmp ebx, edi
// 0071428b  8bf1                 mov esi, ecx
// 0071428d  7d05                 jge 0x714294
// 0071428f  e8b0c6f8ff           call 0x6a0944
// 00714294  8b442414             mov eax, dword ptr [esp + 0x14]
// 00714298  3bc7                 cmp eax, edi
// 0071429a  7c03                 jl 0x71429f
// 0071429c  894610               mov dword ptr [esi + 0x10], eax
// 0071429f  3bdf                 cmp ebx, edi
// 007142a1  751f                 jne 0x7142c2
// 007142a3  8b4604               mov eax, dword ptr [esi + 4]
// 007142a6  3bc7                 cmp eax, edi
// 007142a8  740c                 je 0x7142b6
// 007142aa  50                   push eax
// 007142ab  e89ac6f8ff           call 0x6a094a
// 007142b0  83c404               add esp, 4
// 007142b3  897e04               mov dword ptr [esi + 4], edi
// 007142b6  897e0c               mov dword ptr [esi + 0xc], edi
// 007142b9  897e08               mov dword ptr [esi + 8], edi
// 007142bc  5f                   pop edi
// 007142bd  5e                   pop esi
// 007142be  5b                   pop ebx
// 007142bf  c20800               ret 8
// 007142c2  8b5604               mov edx, dword ptr [esi + 4]
// 007142c5  55                   push ebp
// 007142c6  3bd7                 cmp edx, edi
// 007142c8  7533                 jne 0x7142fd
// 007142ca  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 007142cd  3bdd                 cmp ebx, ebp
// 007142cf  7e02                 jle 0x7142d3
// 007142d1  8beb                 mov ebp, ebx
// 007142d3  8d7cad00             lea edi, [ebp + ebp*4]
// 007142d7  03ff                 add edi, edi
// 007142d9  03ff                 add edi, edi
// 007142db  57                   push edi
// 007142dc  e875c6f8ff           call 0x6a0956
// 007142e1  57                   push edi
// 007142e2  6a00                 push 0
// 007142e4  50                   push eax
// 007142e5  894604               mov dword ptr [esi + 4], eax
// 007142e8  e817d4f8ff           call 0x6a1704
// 007142ed  83c410               add esp, 0x10
// 007142f0  896e0c               mov dword ptr [esi + 0xc], ebp
// 007142f3  5d                   pop ebp
// 007142f4  5f                   pop edi
// 007142f5  895e08               mov dword ptr [esi + 8], ebx
// 007142f8  5e                   pop esi
// 007142f9  5b                   pop ebx
// 007142fa  c20800               ret 8
// 007142fd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00714300  3bd9                 cmp ebx, ecx
// 00714302  7f31                 jg 0x714335
// 00714304  8b4e08               mov ecx, dword ptr [esi + 8]
// 00714307  3bd9                 cmp ebx, ecx
// 00714309  0f8ec6000000         jle 0x7143d5
// 0071430f  8bc3                 mov eax, ebx
// 00714311  2bc1                 sub eax, ecx
// 00714313  8d0480               lea eax, [eax + eax*4]
// 00714316  03c0                 add eax, eax
// 00714318  03c0                 add eax, eax
// 0071431a  50                   push eax
// 0071431b  8d0c89               lea ecx, [ecx + ecx*4]
// 0071431e  8d148a               lea edx, [edx + ecx*4]
// 00714321  57                   push edi
// 00714322  52                   push edx
// 00714323  e8dcd3f8ff           call 0x6a1704
// 00714328  83c40c               add esp, 0xc
// 0071432b  5d                   pop ebp
// 0071432c  5f                   pop edi
// 0071432d  895e08               mov dword ptr [esi + 8], ebx
// 00714330  5e                   pop esi
// 00714331  5b                   pop ebx
// 00714332  c20800               ret 8
// 00714335  8b4610               mov eax, dword ptr [esi + 0x10]
// 00714338  3bc7                 cmp eax, edi
// 0071433a  7524                 jne 0x714360
// 0071433c  8b4608               mov eax, dword ptr [esi + 8]
// 0071433f  99                   cdq 
// 00714340  83e207               and edx, 7
// 00714343  03c2                 add eax, edx
// 00714345  c1f803               sar eax, 3
// 00714348  83f804               cmp eax, 4
// 0071434b  7d07                 jge 0x714354
// 0071434d  b804000000           mov eax, 4
// 00714352  eb0c                 jmp 0x714360
// 00714354  3d00040000           cmp eax, 0x400
// 00714359  7e05                 jle 0x714360
// 0071435b  b800040000           mov eax, 0x400
// 00714360  8d3c01               lea edi, [ecx + eax]
// 00714363  3bdf                 cmp ebx, edi
// 00714365  7d06                 jge 0x71436d
// 00714367  897c2414             mov dword ptr [esp + 0x14], edi
// 0071436b  eb06                 jmp 0x714373
// 0071436d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00714371  8bfb                 mov edi, ebx
// 00714373  3bf9                 cmp edi, ecx
// 00714375  7d05                 jge 0x71437c
// 00714377  e8c8c5f8ff           call 0x6a0944
// 0071437c  8d3cbf               lea edi, [edi + edi*4]
// 0071437f  03ff                 add edi, edi
// 00714381  03ff                 add edi, edi
// 00714383  57                   push edi
// 00714384  e8cdc5f8ff           call 0x6a0956
// 00714389  8b4e04               mov ecx, dword ptr [esi + 4]
// 0071438c  8be8                 mov ebp, eax
// 0071438e  8b4608               mov eax, dword ptr [esi + 8]
// 00714391  8d0480               lea eax, [eax + eax*4]
// 00714394  03c0                 add eax, eax
// 00714396  03c0                 add eax, eax
// 00714398  50                   push eax
// 00714399  51                   push ecx
// 0071439a  57                   push edi
// 0071439b  55                   push ebp
// 0071439c  e86fd4ceff           call 0x401810
// 007143a1  8b4e08               mov ecx, dword ptr [esi + 8]
// 007143a4  8bc3                 mov eax, ebx
// 007143a6  2bc1                 sub eax, ecx
// 007143a8  8d1480               lea edx, [eax + eax*4]
// 007143ab  03d2                 add edx, edx
// 007143ad  03d2                 add edx, edx
// 007143af  52                   push edx
// 007143b0  8d0489               lea eax, [ecx + ecx*4]
// 007143b3  8d4c8500             lea ecx, [ebp + eax*4]
// 007143b7  6a00                 push 0
// 007143b9  51                   push ecx
// 007143ba  e845d3f8ff           call 0x6a1704
// 007143bf  8b5604               mov edx, dword ptr [esi + 4]
// 007143c2  52                   push edx
// 007143c3  e882c5f8ff           call 0x6a094a
// 007143c8  8b442438             mov eax, dword ptr [esp + 0x38]
// 007143cc  83c424               add esp, 0x24
// 007143cf  896e04               mov dword ptr [esi + 4], ebp
// 007143d2  89460c               mov dword ptr [esi + 0xc], eax
// 007143d5  5d                   pop ebp
// 007143d6  5f                   pop edi
// 007143d7  895e08               mov dword ptr [esi + 8], ebx
// 007143da  5e                   pop esi
// 007143db  5b                   pop ebx
// 007143dc  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetSize@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
