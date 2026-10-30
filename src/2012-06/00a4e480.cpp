// roc 2012-06 00a4e480  unit: CXTPTabPaintManager  size: 881 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4e480
//
// 00a4e480  6aff                 push -1
// 00a4e482  68b86fae00           push 0xae6fb8
// 00a4e487  64a100000000         mov eax, dword ptr fs:[0]
// 00a4e48d  50                   push eax
// 00a4e48e  83ec18               sub esp, 0x18
// 00a4e491  53                   push ebx
// 00a4e492  55                   push ebp
// 00a4e493  56                   push esi
// 00a4e494  57                   push edi
// 00a4e495  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a4e49a  33c4                 xor eax, esp
// 00a4e49c  50                   push eax
// 00a4e49d  8d44242c             lea eax, [esp + 0x2c]
// 00a4e4a1  64a300000000         mov dword ptr fs:[0], eax
// 00a4e4a7  8bf1                 mov esi, ecx
// 00a4e4a9  89742414             mov dword ptr [esp + 0x14], esi
// 00a4e4ad  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a4e4b1  6a00                 push 0
// 00a4e4b3  6a5c                 push 0x5c
// 00a4e4b5  8bcd                 mov ecx, ebp
// 00a4e4b7  ff15f447b200         call dword ptr [0xb247f4]
// 00a4e4bd  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00a4e4c1  83f8ff               cmp eax, -1
// 00a4e4c4  7431                 je 0xa4e4f7
// 00a4e4c6  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a4e4ca  8b37                 mov esi, dword ptr [edi]
// 00a4e4cc  0d00400000           or eax, 0x4000
// 00a4e4d1  50                   push eax
// 00a4e4d2  8d4c2448             lea ecx, [esp + 0x48]
// 00a4e4d6  51                   push ecx
// 00a4e4d7  8bcd                 mov ecx, ebp
// 00a4e4d9  83c670               add esi, 0x70
// 00a4e4dc  ff155846b200         call dword ptr [0xb24658]
// 00a4e4e2  50                   push eax
// 00a4e4e3  8bcd                 mov ecx, ebp
// 00a4e4e5  ff159847b200         call dword ptr [0xb24798]
// 00a4e4eb  8b16                 mov edx, dword ptr [esi]
// 00a4e4ed  50                   push eax
// 00a4e4ee  8bcf                 mov ecx, edi
// 00a4e4f0  ffd2                 call edx
// 00a4e4f2  e9e4020000           jmp 0xa4e7db
// 00a4e4f7  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a4e4fa  8d44241c             lea eax, [esp + 0x1c]
// 00a4e4fe  50                   push eax
// 00a4e4ff  6a03                 push 3
// 00a4e501  68502ebd00           push 0xbd2e50
// 00a4e506  51                   push ecx
// 00a4e507  ff154021b200         call dword ptr [0xb22140]
// 00a4e50d  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a4e511  53                   push ebx
// 00a4e512  55                   push ebp
// 00a4e513  57                   push edi
// 00a4e514  8bce                 mov ecx, esi
// 00a4e516  e895feffff           call 0xa4e3b0
// 00a4e51b  8bf0                 mov esi, eax
// 00a4e51d  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a4e521  2b442444             sub eax, dword ptr [esp + 0x44]
// 00a4e525  3bf0                 cmp esi, eax
// 00a4e527  7f28                 jg 0xa4e551
// 00a4e529  8b37                 mov esi, dword ptr [edi]
// 00a4e52b  53                   push ebx
// 00a4e52c  8d542448             lea edx, [esp + 0x48]
// 00a4e530  52                   push edx
// 00a4e531  8bcd                 mov ecx, ebp
// 00a4e533  83c670               add esi, 0x70
// 00a4e536  ff155846b200         call dword ptr [0xb24658]
// 00a4e53c  50                   push eax
// 00a4e53d  8bcd                 mov ecx, ebp
// 00a4e53f  ff159847b200         call dword ptr [0xb24798]
// 00a4e545  50                   push eax
// 00a4e546  8b06                 mov eax, dword ptr [esi]
// 00a4e548  8bcf                 mov ecx, edi
// 00a4e54a  ffd0                 call eax
// 00a4e54c  e98a020000           jmp 0xa4e7db
// 00a4e551  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4e555  3bc1                 cmp eax, ecx
// 00a4e557  7f1b                 jg 0xa4e574
// 00a4e559  8b17                 mov edx, dword ptr [edi]
// 00a4e55b  8b5270               mov edx, dword ptr [edx + 0x70]
// 00a4e55e  53                   push ebx
// 00a4e55f  8d442448             lea eax, [esp + 0x48]
// 00a4e563  50                   push eax
// 00a4e564  6a03                 push 3
// 00a4e566  68502ebd00           push 0xbd2e50
// 00a4e56b  8bcf                 mov ecx, edi
// 00a4e56d  ffd2                 call edx
// 00a4e56f  e967020000           jmp 0xa4e7db
// 00a4e574  2bc1                 sub eax, ecx
// 00a4e576  8bd8                 mov ebx, eax
// 00a4e578  8bcd                 mov ecx, ebp
// 00a4e57a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a4e57e  ff155846b200         call dword ptr [0xb24658]
// 00a4e584  0fafc3               imul eax, ebx
// 00a4e587  99                   cdq 
// 00a4e588  f7fe                 idiv esi
// 00a4e58a  8d4c2418             lea ecx, [esp + 0x18]
// 00a4e58e  8bf0                 mov esi, eax
// 00a4e590  99                   cdq 
// 00a4e591  2bc2                 sub eax, edx
// 00a4e593  8bd8                 mov ebx, eax
// 00a4e595  d1fb                 sar ebx, 1
// 00a4e597  8bc6                 mov eax, esi
// 00a4e599  2bc3                 sub eax, ebx
// 00a4e59b  50                   push eax
// 00a4e59c  51                   push ecx
// 00a4e59d  8bcd                 mov ecx, ebp
// 00a4e59f  ff152850b200         call dword ptr [0xb25028]
// 00a4e5a5  53                   push ebx
// 00a4e5a6  8d542444             lea edx, [esp + 0x44]
// 00a4e5aa  52                   push edx
// 00a4e5ab  8bcd                 mov ecx, ebp
// 00a4e5ad  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a4e5b5  ff15ec49b200         call dword ptr [0xb249ec]
// 00a4e5bb  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a4e5bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4e5c3  53                   push ebx
// 00a4e5c4  8d442444             lea eax, [esp + 0x44]
// 00a4e5c8  50                   push eax
// 00a4e5c9  57                   push edi
// 00a4e5ca  c644244001           mov byte ptr [esp + 0x40], 1
// 00a4e5cf  e8dcfdffff           call 0xa4e3b0
// 00a4e5d4  53                   push ebx
// 00a4e5d5  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4e5d9  51                   push ecx
// 00a4e5da  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4e5de  57                   push edi
// 00a4e5df  89442428             mov dword ptr [esp + 0x28], eax
// 00a4e5e3  e8c8fdffff           call 0xa4e3b0
// 00a4e5e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4e5ec  03c8                 add ecx, eax
// 00a4e5ee  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 00a4e5f2  0f8da0000000         jge 0xa4e698
// 00a4e5f8  46                   inc esi
// 00a4e5f9  8bc6                 mov eax, esi
// 00a4e5fb  99                   cdq 
// 00a4e5fc  2bc2                 sub eax, edx
// 00a4e5fe  8bd8                 mov ebx, eax
// 00a4e600  d1fb                 sar ebx, 1
// 00a4e602  8bd6                 mov edx, esi
// 00a4e604  2bd3                 sub edx, ebx
// 00a4e606  52                   push edx
// 00a4e607  8d442420             lea eax, [esp + 0x20]
// 00a4e60b  50                   push eax
// 00a4e60c  8bcd                 mov ecx, ebp
// 00a4e60e  ff152850b200         call dword ptr [0xb25028]
// 00a4e614  50                   push eax
// 00a4e615  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4e619  c644243802           mov byte ptr [esp + 0x38], 2
// 00a4e61e  ff152045b200         call dword ptr [0xb24520]
// 00a4e624  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4e628  c644243401           mov byte ptr [esp + 0x34], 1
// 00a4e62d  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e633  53                   push ebx
// 00a4e634  8d4c2428             lea ecx, [esp + 0x28]
// 00a4e638  51                   push ecx
// 00a4e639  8bcd                 mov ecx, ebp
// 00a4e63b  ff15ec49b200         call dword ptr [0xb249ec]
// 00a4e641  50                   push eax
// 00a4e642  8d4c2444             lea ecx, [esp + 0x44]
// 00a4e646  c644243803           mov byte ptr [esp + 0x38], 3
// 00a4e64b  ff152045b200         call dword ptr [0xb24520]
// 00a4e651  8d4c2424             lea ecx, [esp + 0x24]
// 00a4e655  c644243401           mov byte ptr [esp + 0x34], 1
// 00a4e65a  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e660  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a4e664  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4e668  53                   push ebx
// 00a4e669  8d542444             lea edx, [esp + 0x44]
// 00a4e66d  52                   push edx
// 00a4e66e  57                   push edi
// 00a4e66f  e83cfdffff           call 0xa4e3b0
// 00a4e674  53                   push ebx
// 00a4e675  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4e679  51                   push ecx
// 00a4e67a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4e67e  57                   push edi
// 00a4e67f  89442434             mov dword ptr [esp + 0x34], eax
// 00a4e683  e828fdffff           call 0xa4e3b0
// 00a4e688  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a4e68c  03c8                 add ecx, eax
// 00a4e68e  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 00a4e692  0f8c60ffffff         jl 0xa4e5f8
// 00a4e698  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a4e69c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4e6a0  53                   push ebx
// 00a4e6a1  8d542444             lea edx, [esp + 0x44]
// 00a4e6a5  52                   push edx
// 00a4e6a6  57                   push edi
// 00a4e6a7  e804fdffff           call 0xa4e3b0
// 00a4e6ac  53                   push ebx
// 00a4e6ad  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4e6b1  51                   push ecx
// 00a4e6b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4e6b6  57                   push edi
// 00a4e6b7  89442434             mov dword ptr [esp + 0x34], eax
// 00a4e6bb  e8f0fcffff           call 0xa4e3b0
// 00a4e6c0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a4e6c4  03c8                 add ecx, eax
// 00a4e6c6  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 00a4e6ca  0f8ea0000000         jle 0xa4e770
// 00a4e6d0  4e                   dec esi
// 00a4e6d1  8bc6                 mov eax, esi
// 00a4e6d3  99                   cdq 
// 00a4e6d4  2bc2                 sub eax, edx
// 00a4e6d6  8bd8                 mov ebx, eax
// 00a4e6d8  d1fb                 sar ebx, 1
// 00a4e6da  8bd6                 mov edx, esi
// 00a4e6dc  2bd3                 sub edx, ebx
// 00a4e6de  52                   push edx
// 00a4e6df  8d44242c             lea eax, [esp + 0x2c]
// 00a4e6e3  50                   push eax
// 00a4e6e4  8bcd                 mov ecx, ebp
// 00a4e6e6  ff152850b200         call dword ptr [0xb25028]
// 00a4e6ec  50                   push eax
// 00a4e6ed  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4e6f1  c644243804           mov byte ptr [esp + 0x38], 4
// 00a4e6f6  ff152045b200         call dword ptr [0xb24520]
// 00a4e6fc  8d4c2428             lea ecx, [esp + 0x28]
// 00a4e700  c644243401           mov byte ptr [esp + 0x34], 1
// 00a4e705  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e70b  53                   push ebx
// 00a4e70c  8d4c2428             lea ecx, [esp + 0x28]
// 00a4e710  51                   push ecx
// 00a4e711  8bcd                 mov ecx, ebp
// 00a4e713  ff15ec49b200         call dword ptr [0xb249ec]
// 00a4e719  50                   push eax
// 00a4e71a  8d4c2444             lea ecx, [esp + 0x44]
// 00a4e71e  c644243805           mov byte ptr [esp + 0x38], 5
// 00a4e723  ff152045b200         call dword ptr [0xb24520]
// 00a4e729  8d4c2424             lea ecx, [esp + 0x24]
// 00a4e72d  c644243401           mov byte ptr [esp + 0x34], 1
// 00a4e732  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e738  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a4e73c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4e740  53                   push ebx
// 00a4e741  8d542444             lea edx, [esp + 0x44]
// 00a4e745  52                   push edx
// 00a4e746  57                   push edi
// 00a4e747  e864fcffff           call 0xa4e3b0
// 00a4e74c  53                   push ebx
// 00a4e74d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4e751  51                   push ecx
// 00a4e752  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4e756  57                   push edi
// 00a4e757  89442428             mov dword ptr [esp + 0x28], eax
// 00a4e75b  e850fcffff           call 0xa4e3b0
// 00a4e760  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a4e764  03c8                 add ecx, eax
// 00a4e766  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 00a4e76a  0f8f60ffffff         jg 0xa4e6d0
// 00a4e770  68502ebd00           push 0xbd2e50
// 00a4e775  8d54241c             lea edx, [esp + 0x1c]
// 00a4e779  52                   push edx
// 00a4e77a  8d44242c             lea eax, [esp + 0x2c]
// 00a4e77e  50                   push eax
// 00a4e77f  e81c729cff           call 0x4159a0
// 00a4e784  8d4c244c             lea ecx, [esp + 0x4c]
// 00a4e788  51                   push ecx
// 00a4e789  50                   push eax
// 00a4e78a  8d54243c             lea edx, [esp + 0x3c]
// 00a4e78e  52                   push edx
// 00a4e78f  c644244c06           mov byte ptr [esp + 0x4c], 6
// 00a4e794  e8576ea0ff           call 0x4555f0
// 00a4e799  83c418               add esp, 0x18
// 00a4e79c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a4e7a0  51                   push ecx
// 00a4e7a1  8d542448             lea edx, [esp + 0x48]
// 00a4e7a5  52                   push edx
// 00a4e7a6  50                   push eax
// 00a4e7a7  8bcf                 mov ecx, edi
// 00a4e7a9  c644244007           mov byte ptr [esp + 0x40], 7
// 00a4e7ae  e81d9cf3ff           call 0x9883d0
// 00a4e7b3  8d4c2428             lea ecx, [esp + 0x28]
// 00a4e7b7  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e7bd  8d4c2424             lea ecx, [esp + 0x24]
// 00a4e7c1  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e7c7  8d4c2440             lea ecx, [esp + 0x40]
// 00a4e7cb  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e7d1  8d4c2418             lea ecx, [esp + 0x18]
// 00a4e7d5  ff15d047b200         call dword ptr [0xb247d0]
// 00a4e7db  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a4e7df  64890d00000000       mov dword ptr fs:[0], ecx
// 00a4e7e6  59                   pop ecx
// 00a4e7e7  5f                   pop edi
// 00a4e7e8  5e                   pop esi
// 00a4e7e9  5d                   pop ebp
// 00a4e7ea  5b                   pop ebx
// 00a4e7eb  83c424               add esp, 0x24
// 00a4e7ee  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawTextPathEllipsis@CXTPTabPaintManager@@IAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp