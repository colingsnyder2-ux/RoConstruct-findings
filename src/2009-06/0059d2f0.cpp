// from server: 100% by auto
// roc 2009-06 0059d2f0  unit: seg_00590000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059d2f0
//
// 0059d2f0  81ec3c010000         sub esp, 0x13c
// 0059d2f6  53                   push ebx
// 0059d2f7  55                   push ebp
// 0059d2f8  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 0059d2ff  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 0059d305  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 0059d30b  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 0059d311  89442414             mov dword ptr [esp + 0x14], eax
// 0059d315  b801000000           mov eax, 1
// 0059d31a  d3e0                 shl eax, cl
// 0059d31c  56                   push esi
// 0059d31d  895c2420             mov dword ptr [esp + 0x20], ebx
// 0059d321  89442440             mov dword ptr [esp + 0x40], eax
// 0059d325  83c8ff               or eax, 0xffffffff
// 0059d328  d3e0                 shl eax, cl
// 0059d32a  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 0059d331  8944243c             mov dword ptr [esp + 0x3c], eax
// 0059d335  741b                 je 0x59d352
// 0059d337  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0059d33b  7515                 jne 0x59d352
// 0059d33d  8bf5                 mov esi, ebp
// 0059d33f  e8ccf9ffff           call 0x59cd10
// 0059d344  84c0                 test al, al
// 0059d346  750a                 jne 0x59d352
// 0059d348  5e                   pop esi
// 0059d349  5d                   pop ebp
// 0059d34a  5b                   pop ebx
// 0059d34b  81c43c010000         add esp, 0x13c
// 0059d351  c3                   ret 
// 0059d352  807b0800             cmp byte ptr [ebx + 8], 0
// 0059d356  57                   push edi
// 0059d357  0f855d020000         jne 0x59d5ba
// 0059d35d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0059d360  896c2438             mov dword ptr [esp + 0x38], ebp
// 0059d364  8b08                 mov ecx, dword ptr [eax]
// 0059d366  894c2428             mov dword ptr [esp + 0x28], ecx
// 0059d36a  8b5004               mov edx, dword ptr [eax + 4]
// 0059d36d  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 0059d374  8954242c             mov dword ptr [esp + 0x2c], edx
// 0059d378  8b11                 mov edx, dword ptr [ecx]
// 0059d37a  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0059d37d  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0059d380  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0059d383  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0059d386  894c2448             mov dword ptr [esp + 0x48], ecx
// 0059d38a  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 0059d390  89442410             mov dword ptr [esp + 0x10], eax
// 0059d394  89542420             mov dword ptr [esp + 0x20], edx
// 0059d398  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0059d3a0  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059d3a4  85c0                 test eax, eax
// 0059d3a6  0f855f010000         jne 0x59d50b
// 0059d3ac  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0059d3b0  0f8fe4010000         jg 0x59d59a
// 0059d3b6  83ff08               cmp edi, 8
// 0059d3b9  7d2d                 jge 0x59d3e8
// 0059d3bb  6a00                 push 0
// 0059d3bd  57                   push edi
// 0059d3be  8d542430             lea edx, [esp + 0x30]
// 0059d3c2  56                   push esi
// 0059d3c3  52                   push edx
// 0059d3c4  e807f1ffff           call 0x59c4d0
// 0059d3c9  83c410               add esp, 0x10
// 0059d3cc  84c0                 test al, al
// 0059d3ce  0f84cb020000         je 0x59d69f
// 0059d3d4  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059d3d8  83ff08               cmp edi, 8
// 0059d3db  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d3df  7d07                 jge 0x59d3e8
// 0059d3e1  b801000000           mov eax, 1
// 0059d3e6  eb2c                 jmp 0x59d414
// 0059d3e8  8b542448             mov edx, dword ptr [esp + 0x48]
// 0059d3ec  8d4ff8               lea ecx, [edi - 8]
// 0059d3ef  8bc6                 mov eax, esi
// 0059d3f1  d3f8                 sar eax, cl
// 0059d3f3  25ff000000           and eax, 0xff
// 0059d3f8  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 0059d3ff  85c9                 test ecx, ecx
// 0059d401  740c                 je 0x59d40f
// 0059d403  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 0059d40b  2bf9                 sub edi, ecx
// 0059d40d  eb2c                 jmp 0x59d43b
// 0059d40f  b809000000           mov eax, 9
// 0059d414  50                   push eax
// 0059d415  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0059d419  50                   push eax
// 0059d41a  57                   push edi
// 0059d41b  8d4c2434             lea ecx, [esp + 0x34]
// 0059d41f  56                   push esi
// 0059d420  51                   push ecx
// 0059d421  e8caf1ffff           call 0x59c5f0
// 0059d426  8be8                 mov ebp, eax
// 0059d428  83c414               add esp, 0x14
// 0059d42b  85ed                 test ebp, ebp
// 0059d42d  0f8c6c020000         jl 0x59d69f
// 0059d433  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d437  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059d43b  8bcd                 mov ecx, ebp
// 0059d43d  c1f904               sar ecx, 4
// 0059d440  83e50f               and ebp, 0xf
// 0059d443  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059d447  746a                 je 0x59d4b3
// 0059d449  83fd01               cmp ebp, 1
// 0059d44c  741d                 je 0x59d46b
// 0059d44e  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 0059d455  8b10                 mov edx, dword ptr [eax]
// 0059d457  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 0059d45e  8b08                 mov ecx, dword ptr [eax]
// 0059d460  8b5104               mov edx, dword ptr [ecx + 4]
// 0059d463  6aff                 push -1
// 0059d465  50                   push eax
// 0059d466  ffd2                 call edx
// 0059d468  83c408               add esp, 8
// 0059d46b  83ff01               cmp edi, 1
// 0059d46e  7d21                 jge 0x59d491
// 0059d470  6a01                 push 1
// 0059d472  57                   push edi
// 0059d473  8d442430             lea eax, [esp + 0x30]
// 0059d477  56                   push esi
// 0059d478  50                   push eax
// 0059d479  e852f0ffff           call 0x59c4d0
// 0059d47e  83c410               add esp, 0x10
// 0059d481  84c0                 test al, al
// 0059d483  0f8416020000         je 0x59d69f
// 0059d489  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d48d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059d491  4f                   dec edi
// 0059d492  8bcf                 mov ecx, edi
// 0059d494  8bd6                 mov edx, esi
// 0059d496  d3fa                 sar edx, cl
// 0059d498  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059d49c  f6c201               test dl, 1
// 0059d49f  7409                 je 0x59d4aa
// 0059d4a1  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0059d4a5  e92a010000           jmp 0x59d5d4
// 0059d4aa  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0059d4ae  e921010000           jmp 0x59d5d4
// 0059d4b3  83f90f               cmp ecx, 0xf
// 0059d4b6  0f8418010000         je 0x59d5d4
// 0059d4bc  bb01000000           mov ebx, 1
// 0059d4c1  d3e3                 shl ebx, cl
// 0059d4c3  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059d4c7  85c9                 test ecx, ecx
// 0059d4c9  7435                 je 0x59d500
// 0059d4cb  3bf9                 cmp edi, ecx
// 0059d4cd  7d20                 jge 0x59d4ef
// 0059d4cf  51                   push ecx
// 0059d4d0  57                   push edi
// 0059d4d1  8d542430             lea edx, [esp + 0x30]
// 0059d4d5  56                   push esi
// 0059d4d6  52                   push edx
// 0059d4d7  e8f4efffff           call 0x59c4d0
// 0059d4dc  83c410               add esp, 0x10
// 0059d4df  84c0                 test al, al
// 0059d4e1  0f84b8010000         je 0x59d69f
// 0059d4e7  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d4eb  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059d4ef  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 0059d4f3  8bc6                 mov eax, esi
// 0059d4f5  8bcf                 mov ecx, edi
// 0059d4f7  d3f8                 sar eax, cl
// 0059d4f9  4b                   dec ebx
// 0059d4fa  23c3                 and eax, ebx
// 0059d4fc  01442410             add dword ptr [esp + 0x10], eax
// 0059d500  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0059d504  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0059d50b  837c241000           cmp dword ptr [esp + 0x10], 0
// 0059d510  0f8684000000         jbe 0x59d59a
// 0059d516  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059d51a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0059d51e  7f76                 jg 0x59d596
// 0059d520  8b0c85f8e88c00       mov ecx, dword ptr [eax*4 + 0x8ce8f8]
// 0059d527  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059d52b  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 0059d530  8d1c4a               lea ebx, [edx + ecx*2]
// 0059d533  744e                 je 0x59d583
// 0059d535  83ff01               cmp edi, 1
// 0059d538  7d21                 jge 0x59d55b
// 0059d53a  6a01                 push 1
// 0059d53c  57                   push edi
// 0059d53d  8d442430             lea eax, [esp + 0x30]
// 0059d541  56                   push esi
// 0059d542  50                   push eax
// 0059d543  e888efffff           call 0x59c4d0
// 0059d548  83c410               add esp, 0x10
// 0059d54b  84c0                 test al, al
// 0059d54d  0f844c010000         je 0x59d69f
// 0059d553  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d557  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059d55b  4f                   dec edi
// 0059d55c  8bd6                 mov edx, esi
// 0059d55e  8bcf                 mov ecx, edi
// 0059d560  d3fa                 sar edx, cl
// 0059d562  f6c201               test dl, 1
// 0059d565  741c                 je 0x59d583
// 0059d567  0fb703               movzx eax, word ptr [ebx]
// 0059d56a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059d56e  0fbfd0               movsx edx, ax
// 0059d571  85d1                 test ecx, edx
// 0059d573  750e                 jne 0x59d583
// 0059d575  6685c0               test ax, ax
// 0059d578  7d04                 jge 0x59d57e
// 0059d57a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0059d57e  03c1                 add eax, ecx
// 0059d580  668903               mov word ptr [ebx], ax
// 0059d583  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059d587  40                   inc eax
// 0059d588  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0059d58c  89442414             mov dword ptr [esp + 0x14], eax
// 0059d590  7e8e                 jle 0x59d520
// 0059d592  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0059d596  ff4c2410             dec dword ptr [esp + 0x10]
// 0059d59a  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0059d59d  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059d5a1  8902                 mov dword ptr [edx], eax
// 0059d5a3  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0059d5a6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059d5aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059d5ae  895104               mov dword ptr [ecx + 4], edx
// 0059d5b1  89730c               mov dword ptr [ebx + 0xc], esi
// 0059d5b4  897b10               mov dword ptr [ebx + 0x10], edi
// 0059d5b7  894314               mov dword ptr [ebx + 0x14], eax
// 0059d5ba  ff4b28               dec dword ptr [ebx + 0x28]
// 0059d5bd  5f                   pop edi
// 0059d5be  5e                   pop esi
// 0059d5bf  5d                   pop ebp
// 0059d5c0  b001                 mov al, 1
// 0059d5c2  5b                   pop ebx
// 0059d5c3  81c43c010000         add esp, 0x13c
// 0059d5c9  c3                   ret 
// 0059d5ca  8d9b00000000         lea ebx, [ebx]
// 0059d5d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059d5d4  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059d5d8  8b0495f8e88c00       mov eax, dword ptr [edx*4 + 0x8ce8f8]
// 0059d5df  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059d5e3  66833c4300           cmp word ptr [ebx + eax*2], 0
// 0059d5e8  8d1c43               lea ebx, [ebx + eax*2]
// 0059d5eb  7457                 je 0x59d644
// 0059d5ed  83ff01               cmp edi, 1
// 0059d5f0  7d21                 jge 0x59d613
// 0059d5f2  6a01                 push 1
// 0059d5f4  57                   push edi
// 0059d5f5  8d4c2430             lea ecx, [esp + 0x30]
// 0059d5f9  56                   push esi
// 0059d5fa  51                   push ecx
// 0059d5fb  e8d0eeffff           call 0x59c4d0
// 0059d600  83c410               add esp, 0x10
// 0059d603  84c0                 test al, al
// 0059d605  0f8494000000         je 0x59d69f
// 0059d60b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d60f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059d613  4f                   dec edi
// 0059d614  8bd6                 mov edx, esi
// 0059d616  8bcf                 mov ecx, edi
// 0059d618  d3fa                 sar edx, cl
// 0059d61a  f6c201               test dl, 1
// 0059d61d  742e                 je 0x59d64d
// 0059d61f  0fb703               movzx eax, word ptr [ebx]
// 0059d622  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059d626  0fbfd0               movsx edx, ax
// 0059d629  85d1                 test ecx, edx
// 0059d62b  7520                 jne 0x59d64d
// 0059d62d  6685c0               test ax, ax
// 0059d630  7c07                 jl 0x59d639
// 0059d632  03c1                 add eax, ecx
// 0059d634  668903               mov word ptr [ebx], ax
// 0059d637  eb14                 jmp 0x59d64d
// 0059d639  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0059d63d  03c1                 add eax, ecx
// 0059d63f  668903               mov word ptr [ebx], ax
// 0059d642  eb09                 jmp 0x59d64d
// 0059d644  83e901               sub ecx, 1
// 0059d647  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059d64b  7813                 js 0x59d660
// 0059d64d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059d651  42                   inc edx
// 0059d652  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0059d656  89542414             mov dword ptr [esp + 0x14], edx
// 0059d65a  0f8e70ffffff         jle 0x59d5d0
// 0059d660  85ed                 test ebp, ebp
// 0059d662  741c                 je 0x59d680
// 0059d664  8b0495f8e88c00       mov eax, dword ptr [edx*4 + 0x8ce8f8]
// 0059d66b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059d66f  66892c41             mov word ptr [ecx + eax*2], bp
// 0059d673  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0059d677  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 0059d67b  41                   inc ecx
// 0059d67c  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0059d680  42                   inc edx
// 0059d681  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0059d685  89542414             mov dword ptr [esp + 0x14], edx
// 0059d689  0f8e27fdffff         jle 0x59d3b6
// 0059d68f  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0059d696  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0059d69a  e9fbfeffff           jmp 0x59d59a
// 0059d69f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0059d6a3  85c0                 test eax, eax
// 0059d6a5  7e13                 jle 0x59d6ba
// 0059d6a7  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 0059d6ab  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059d6af  48                   dec eax
// 0059d6b0  33c9                 xor ecx, ecx
// 0059d6b2  66890c56             mov word ptr [esi + edx*2], cx
// 0059d6b6  85c0                 test eax, eax
// 0059d6b8  7fed                 jg 0x59d6a7
// 0059d6ba  5f                   pop edi
// 0059d6bb  5e                   pop esi
// 0059d6bc  5d                   pop ebp
// 0059d6bd  32c0                 xor al, al
// 0059d6bf  5b                   pop ebx
// 0059d6c0  81c43c010000         add esp, 0x13c
// 0059d6c6  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
