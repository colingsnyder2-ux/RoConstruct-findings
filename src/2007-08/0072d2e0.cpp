// from server: 100% by auto
// roc 2007-08 0072d2e0  unit: seg_00720000  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072d2e0
//
// 0072d2e0  55                   push ebp
// 0072d2e1  56                   push esi
// 0072d2e2  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 0072d2e5  33ed                 xor ebp, ebp
// 0072d2e7  396e34               cmp dword ptr [esi + 0x34], ebp
// 0072d2ea  57                   push edi
// 0072d2eb  8bf8                 mov edi, eax
// 0072d2ed  7529                 jne 0x72d318
// 0072d2ef  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0072d2f2  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0072d2f5  b801000000           mov eax, 1
// 0072d2fa  d3e0                 shl eax, cl
// 0072d2fc  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0072d2ff  6a01                 push 1
// 0072d301  50                   push eax
// 0072d302  51                   push ecx
// 0072d303  ffd2                 call edx
// 0072d305  83c40c               add esp, 0xc
// 0072d308  3bc5                 cmp eax, ebp
// 0072d30a  894634               mov dword ptr [esi + 0x34], eax
// 0072d30d  7509                 jne 0x72d318
// 0072d30f  5f                   pop edi
// 0072d310  5e                   pop esi
// 0072d311  b801000000           mov eax, 1
// 0072d316  5d                   pop ebp
// 0072d317  c3                   ret 
// 0072d318  396e28               cmp dword ptr [esi + 0x28], ebp
// 0072d31b  7513                 jne 0x72d330
// 0072d31d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0072d320  b801000000           mov eax, 1
// 0072d325  d3e0                 shl eax, cl
// 0072d327  896e30               mov dword ptr [esi + 0x30], ebp
// 0072d32a  896e2c               mov dword ptr [esi + 0x2c], ebp
// 0072d32d  894628               mov dword ptr [esi + 0x28], eax
// 0072d330  2b7b10               sub edi, dword ptr [ebx + 0x10]
// 0072d333  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072d336  3bf8                 cmp edi, eax
// 0072d338  7222                 jb 0x72d35c
// 0072d33a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0072d33d  8b5634               mov edx, dword ptr [esi + 0x34]
// 0072d340  50                   push eax
// 0072d341  2bc8                 sub ecx, eax
// 0072d343  51                   push ecx
// 0072d344  52                   push edx
// 0072d345  e8023af0ff           call 0x630d4c
// 0072d34a  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072d34d  83c40c               add esp, 0xc
// 0072d350  5f                   pop edi
// 0072d351  896e30               mov dword ptr [esi + 0x30], ebp
// 0072d354  89462c               mov dword ptr [esi + 0x2c], eax
// 0072d357  5e                   pop esi
// 0072d358  33c0                 xor eax, eax
// 0072d35a  5d                   pop ebp
// 0072d35b  c3                   ret 
// 0072d35c  2b4630               sub eax, dword ptr [esi + 0x30]
// 0072d35f  8be8                 mov ebp, eax
// 0072d361  3bef                 cmp ebp, edi
// 0072d363  7602                 jbe 0x72d367
// 0072d365  8bef                 mov ebp, edi
// 0072d367  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0072d36a  8b5634               mov edx, dword ptr [esi + 0x34]
// 0072d36d  035630               add edx, dword ptr [esi + 0x30]
// 0072d370  55                   push ebp
// 0072d371  2bcf                 sub ecx, edi
// 0072d373  51                   push ecx
// 0072d374  52                   push edx
// 0072d375  e8d239f0ff           call 0x630d4c
// 0072d37a  83c40c               add esp, 0xc
// 0072d37d  2bfd                 sub edi, ebp
// 0072d37f  7422                 je 0x72d3a3
// 0072d381  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0072d384  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0072d387  57                   push edi
// 0072d388  2bc7                 sub eax, edi
// 0072d38a  50                   push eax
// 0072d38b  51                   push ecx
// 0072d38c  e8bb39f0ff           call 0x630d4c
// 0072d391  8b5628               mov edx, dword ptr [esi + 0x28]
// 0072d394  83c40c               add esp, 0xc
// 0072d397  897e30               mov dword ptr [esi + 0x30], edi
// 0072d39a  5f                   pop edi
// 0072d39b  89562c               mov dword ptr [esi + 0x2c], edx
// 0072d39e  5e                   pop esi
// 0072d39f  33c0                 xor eax, eax
// 0072d3a1  5d                   pop ebp
// 0072d3a2  c3                   ret 
// 0072d3a3  016e30               add dword ptr [esi + 0x30], ebp
// 0072d3a6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0072d3a9  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072d3ac  3bc8                 cmp ecx, eax
// 0072d3ae  7507                 jne 0x72d3b7
// 0072d3b0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0072d3b7  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0072d3ba  3bc8                 cmp ecx, eax
// 0072d3bc  7305                 jae 0x72d3c3
// 0072d3be  03cd                 add ecx, ebp
// 0072d3c0  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0072d3c3  5f                   pop edi
// 0072d3c4  5e                   pop esi
// 0072d3c5  33c0                 xor eax, eax
// 0072d3c7  5d                   pop ebp
// 0072d3c8  c3                   ret 
// library zlib-1.2.3/inflate.c (function _updatewindow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
