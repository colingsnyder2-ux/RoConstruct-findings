// roc 2011-06 008d6170  unit: CXTPTabPaintManager  size: 881 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d6170
//
// 008d6170  6aff                 push -1
// 008d6172  6848d3a000           push 0xa0d348
// 008d6177  64a100000000         mov eax, dword ptr fs:[0]
// 008d617d  50                   push eax
// 008d617e  83ec18               sub esp, 0x18
// 008d6181  53                   push ebx
// 008d6182  55                   push ebp
// 008d6183  56                   push esi
// 008d6184  57                   push edi
// 008d6185  a12058c900           mov eax, dword ptr [0xc95820]
// 008d618a  33c4                 xor eax, esp
// 008d618c  50                   push eax
// 008d618d  8d44242c             lea eax, [esp + 0x2c]
// 008d6191  64a300000000         mov dword ptr fs:[0], eax
// 008d6197  8bf1                 mov esi, ecx
// 008d6199  89742414             mov dword ptr [esp + 0x14], esi
// 008d619d  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d61a1  6a00                 push 0
// 008d61a3  6a5c                 push 0x5c
// 008d61a5  8bcd                 mov ecx, ebp
// 008d61a7  ff154c27a400         call dword ptr [0xa4274c]
// 008d61ad  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008d61b1  83f8ff               cmp eax, -1
// 008d61b4  7431                 je 0x8d61e7
// 008d61b6  8b442454             mov eax, dword ptr [esp + 0x54]
// 008d61ba  8b37                 mov esi, dword ptr [edi]
// 008d61bc  0d00400000           or eax, 0x4000
// 008d61c1  50                   push eax
// 008d61c2  8d4c2448             lea ecx, [esp + 0x48]
// 008d61c6  51                   push ecx
// 008d61c7  8bcd                 mov ecx, ebp
// 008d61c9  83c670               add esi, 0x70
// 008d61cc  ff15a826a400         call dword ptr [0xa426a8]
// 008d61d2  50                   push eax
// 008d61d3  8bcd                 mov ecx, ebp
// 008d61d5  ff15c82da400         call dword ptr [0xa42dc8]
// 008d61db  8b16                 mov edx, dword ptr [esi]
// 008d61dd  50                   push eax
// 008d61de  8bcf                 mov ecx, edi
// 008d61e0  ffd2                 call edx
// 008d61e2  e9e4020000           jmp 0x8d64cb
// 008d61e7  8b4f08               mov ecx, dword ptr [edi + 8]
// 008d61ea  8d44241c             lea eax, [esp + 0x1c]
// 008d61ee  50                   push eax
// 008d61ef  6a03                 push 3
// 008d61f1  68e876ab00           push 0xab76e8
// 008d61f6  51                   push ecx
// 008d61f7  ff153801a400         call dword ptr [0xa40138]
// 008d61fd  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d6201  53                   push ebx
// 008d6202  55                   push ebp
// 008d6203  57                   push edi
// 008d6204  8bce                 mov ecx, esi
// 008d6206  e895feffff           call 0x8d60a0
// 008d620b  8bf0                 mov esi, eax
// 008d620d  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d6211  2b442444             sub eax, dword ptr [esp + 0x44]
// 008d6215  3bf0                 cmp esi, eax
// 008d6217  7f28                 jg 0x8d6241
// 008d6219  8b37                 mov esi, dword ptr [edi]
// 008d621b  53                   push ebx
// 008d621c  8d542448             lea edx, [esp + 0x48]
// 008d6220  52                   push edx
// 008d6221  8bcd                 mov ecx, ebp
// 008d6223  83c670               add esi, 0x70
// 008d6226  ff15a826a400         call dword ptr [0xa426a8]
// 008d622c  50                   push eax
// 008d622d  8bcd                 mov ecx, ebp
// 008d622f  ff15c82da400         call dword ptr [0xa42dc8]
// 008d6235  50                   push eax
// 008d6236  8b06                 mov eax, dword ptr [esi]
// 008d6238  8bcf                 mov ecx, edi
// 008d623a  ffd0                 call eax
// 008d623c  e98a020000           jmp 0x8d64cb
// 008d6241  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d6245  3bc1                 cmp eax, ecx
// 008d6247  7f1b                 jg 0x8d6264
// 008d6249  8b17                 mov edx, dword ptr [edi]
// 008d624b  8b5270               mov edx, dword ptr [edx + 0x70]
// 008d624e  53                   push ebx
// 008d624f  8d442448             lea eax, [esp + 0x48]
// 008d6253  50                   push eax
// 008d6254  6a03                 push 3
// 008d6256  68e876ab00           push 0xab76e8
// 008d625b  8bcf                 mov ecx, edi
// 008d625d  ffd2                 call edx
// 008d625f  e967020000           jmp 0x8d64cb
// 008d6264  2bc1                 sub eax, ecx
// 008d6266  8bd8                 mov ebx, eax
// 008d6268  8bcd                 mov ecx, ebp
// 008d626a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008d626e  ff15a826a400         call dword ptr [0xa426a8]
// 008d6274  0fafc3               imul eax, ebx
// 008d6277  99                   cdq 
// 008d6278  f7fe                 idiv esi
// 008d627a  8d4c2418             lea ecx, [esp + 0x18]
// 008d627e  8bf0                 mov esi, eax
// 008d6280  99                   cdq 
// 008d6281  2bc2                 sub eax, edx
// 008d6283  8bd8                 mov ebx, eax
// 008d6285  d1fb                 sar ebx, 1
// 008d6287  8bc6                 mov eax, esi
// 008d6289  2bc3                 sub eax, ebx
// 008d628b  50                   push eax
// 008d628c  51                   push ecx
// 008d628d  8bcd                 mov ecx, ebp
// 008d628f  ff15601fa400         call dword ptr [0xa41f60]
// 008d6295  53                   push ebx
// 008d6296  8d542444             lea edx, [esp + 0x44]
// 008d629a  52                   push edx
// 008d629b  8bcd                 mov ecx, ebp
// 008d629d  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008d62a5  ff154829a400         call dword ptr [0xa42948]
// 008d62ab  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d62af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d62b3  53                   push ebx
// 008d62b4  8d442444             lea eax, [esp + 0x44]
// 008d62b8  50                   push eax
// 008d62b9  57                   push edi
// 008d62ba  c644244001           mov byte ptr [esp + 0x40], 1
// 008d62bf  e8dcfdffff           call 0x8d60a0
// 008d62c4  53                   push ebx
// 008d62c5  8d4c241c             lea ecx, [esp + 0x1c]
// 008d62c9  51                   push ecx
// 008d62ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d62ce  57                   push edi
// 008d62cf  89442428             mov dword ptr [esp + 0x28], eax
// 008d62d3  e8c8fdffff           call 0x8d60a0
// 008d62d8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d62dc  03c8                 add ecx, eax
// 008d62de  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d62e2  0f8da0000000         jge 0x8d6388
// 008d62e8  46                   inc esi
// 008d62e9  8bc6                 mov eax, esi
// 008d62eb  99                   cdq 
// 008d62ec  2bc2                 sub eax, edx
// 008d62ee  8bd8                 mov ebx, eax
// 008d62f0  d1fb                 sar ebx, 1
// 008d62f2  8bd6                 mov edx, esi
// 008d62f4  2bd3                 sub edx, ebx
// 008d62f6  52                   push edx
// 008d62f7  8d442420             lea eax, [esp + 0x20]
// 008d62fb  50                   push eax
// 008d62fc  8bcd                 mov ecx, ebp
// 008d62fe  ff15601fa400         call dword ptr [0xa41f60]
// 008d6304  50                   push eax
// 008d6305  8d4c241c             lea ecx, [esp + 0x1c]
// 008d6309  c644243802           mov byte ptr [esp + 0x38], 2
// 008d630e  ff156425a400         call dword ptr [0xa42564]
// 008d6314  8d4c241c             lea ecx, [esp + 0x1c]
// 008d6318  c644243401           mov byte ptr [esp + 0x34], 1
// 008d631d  ff15082ea400         call dword ptr [0xa42e08]
// 008d6323  53                   push ebx
// 008d6324  8d4c2428             lea ecx, [esp + 0x28]
// 008d6328  51                   push ecx
// 008d6329  8bcd                 mov ecx, ebp
// 008d632b  ff154829a400         call dword ptr [0xa42948]
// 008d6331  50                   push eax
// 008d6332  8d4c2444             lea ecx, [esp + 0x44]
// 008d6336  c644243803           mov byte ptr [esp + 0x38], 3
// 008d633b  ff156425a400         call dword ptr [0xa42564]
// 008d6341  8d4c2424             lea ecx, [esp + 0x24]
// 008d6345  c644243401           mov byte ptr [esp + 0x34], 1
// 008d634a  ff15082ea400         call dword ptr [0xa42e08]
// 008d6350  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d6354  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d6358  53                   push ebx
// 008d6359  8d542444             lea edx, [esp + 0x44]
// 008d635d  52                   push edx
// 008d635e  57                   push edi
// 008d635f  e83cfdffff           call 0x8d60a0
// 008d6364  53                   push ebx
// 008d6365  8d4c241c             lea ecx, [esp + 0x1c]
// 008d6369  51                   push ecx
// 008d636a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d636e  57                   push edi
// 008d636f  89442434             mov dword ptr [esp + 0x34], eax
// 008d6373  e828fdffff           call 0x8d60a0
// 008d6378  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d637c  03c8                 add ecx, eax
// 008d637e  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d6382  0f8c60ffffff         jl 0x8d62e8
// 008d6388  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d638c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d6390  53                   push ebx
// 008d6391  8d542444             lea edx, [esp + 0x44]
// 008d6395  52                   push edx
// 008d6396  57                   push edi
// 008d6397  e804fdffff           call 0x8d60a0
// 008d639c  53                   push ebx
// 008d639d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d63a1  51                   push ecx
// 008d63a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d63a6  57                   push edi
// 008d63a7  89442434             mov dword ptr [esp + 0x34], eax
// 008d63ab  e8f0fcffff           call 0x8d60a0
// 008d63b0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d63b4  03c8                 add ecx, eax
// 008d63b6  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d63ba  0f8ea0000000         jle 0x8d6460
// 008d63c0  4e                   dec esi
// 008d63c1  8bc6                 mov eax, esi
// 008d63c3  99                   cdq 
// 008d63c4  2bc2                 sub eax, edx
// 008d63c6  8bd8                 mov ebx, eax
// 008d63c8  d1fb                 sar ebx, 1
// 008d63ca  8bd6                 mov edx, esi
// 008d63cc  2bd3                 sub edx, ebx
// 008d63ce  52                   push edx
// 008d63cf  8d44242c             lea eax, [esp + 0x2c]
// 008d63d3  50                   push eax
// 008d63d4  8bcd                 mov ecx, ebp
// 008d63d6  ff15601fa400         call dword ptr [0xa41f60]
// 008d63dc  50                   push eax
// 008d63dd  8d4c241c             lea ecx, [esp + 0x1c]
// 008d63e1  c644243804           mov byte ptr [esp + 0x38], 4
// 008d63e6  ff156425a400         call dword ptr [0xa42564]
// 008d63ec  8d4c2428             lea ecx, [esp + 0x28]
// 008d63f0  c644243401           mov byte ptr [esp + 0x34], 1
// 008d63f5  ff15082ea400         call dword ptr [0xa42e08]
// 008d63fb  53                   push ebx
// 008d63fc  8d4c2428             lea ecx, [esp + 0x28]
// 008d6400  51                   push ecx
// 008d6401  8bcd                 mov ecx, ebp
// 008d6403  ff154829a400         call dword ptr [0xa42948]
// 008d6409  50                   push eax
// 008d640a  8d4c2444             lea ecx, [esp + 0x44]
// 008d640e  c644243805           mov byte ptr [esp + 0x38], 5
// 008d6413  ff156425a400         call dword ptr [0xa42564]
// 008d6419  8d4c2424             lea ecx, [esp + 0x24]
// 008d641d  c644243401           mov byte ptr [esp + 0x34], 1
// 008d6422  ff15082ea400         call dword ptr [0xa42e08]
// 008d6428  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008d642c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d6430  53                   push ebx
// 008d6431  8d542444             lea edx, [esp + 0x44]
// 008d6435  52                   push edx
// 008d6436  57                   push edi
// 008d6437  e864fcffff           call 0x8d60a0
// 008d643c  53                   push ebx
// 008d643d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d6441  51                   push ecx
// 008d6442  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d6446  57                   push edi
// 008d6447  89442428             mov dword ptr [esp + 0x28], eax
// 008d644b  e850fcffff           call 0x8d60a0
// 008d6450  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d6454  03c8                 add ecx, eax
// 008d6456  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 008d645a  0f8f60ffffff         jg 0x8d63c0
// 008d6460  68e876ab00           push 0xab76e8
// 008d6465  8d54241c             lea edx, [esp + 0x1c]
// 008d6469  52                   push edx
// 008d646a  8d44242c             lea eax, [esp + 0x2c]
// 008d646e  50                   push eax
// 008d646f  e87cc4b3ff           call 0x4128f0
// 008d6474  8d4c244c             lea ecx, [esp + 0x4c]
// 008d6478  51                   push ecx
// 008d6479  50                   push eax
// 008d647a  8d54243c             lea edx, [esp + 0x3c]
// 008d647e  52                   push edx
// 008d647f  c644244c06           mov byte ptr [esp + 0x4c], 6
// 008d6484  e807dcb6ff           call 0x444090
// 008d6489  83c418               add esp, 0x18
// 008d648c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008d6490  51                   push ecx
// 008d6491  8d542448             lea edx, [esp + 0x48]
// 008d6495  52                   push edx
// 008d6496  50                   push eax
// 008d6497  8bcf                 mov ecx, edi
// 008d6499  c644244007           mov byte ptr [esp + 0x40], 7
// 008d649e  e84d9cf3ff           call 0x8100f0
// 008d64a3  8d4c2428             lea ecx, [esp + 0x28]
// 008d64a7  ff15082ea400         call dword ptr [0xa42e08]
// 008d64ad  8d4c2424             lea ecx, [esp + 0x24]
// 008d64b1  ff15082ea400         call dword ptr [0xa42e08]
// 008d64b7  8d4c2440             lea ecx, [esp + 0x40]
// 008d64bb  ff15082ea400         call dword ptr [0xa42e08]
// 008d64c1  8d4c2418             lea ecx, [esp + 0x18]
// 008d64c5  ff15082ea400         call dword ptr [0xa42e08]
// 008d64cb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d64cf  64890d00000000       mov dword ptr fs:[0], ecx
// 008d64d6  59                   pop ecx
// 008d64d7  5f                   pop edi
// 008d64d8  5e                   pop esi
// 008d64d9  5d                   pop ebp
// 008d64da  5b                   pop ebx
// 008d64db  83c424               add esp, 0x24
// 008d64de  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawTextPathEllipsis@CXTPTabPaintManager@@IAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp