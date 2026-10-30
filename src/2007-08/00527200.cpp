// from server: 100% by auto
// roc 2007-08 00527200  unit: G3D::Line  size: 612 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527200
//
// 00527200  83ec0c               sub esp, 0xc
// 00527203  53                   push ebx
// 00527204  55                   push ebp
// 00527205  56                   push esi
// 00527206  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052720a  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00527210  33ed                 xor ebp, ebp
// 00527212  3bc5                 cmp eax, ebp
// 00527214  0f94c3               sete bl
// 00527217  57                   push edi
// 00527218  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0052721e  32c9                 xor cl, cl
// 00527220  84db                 test bl, bl
// 00527222  897c2418             mov dword ptr [esp + 0x18], edi
// 00527226  885c2420             mov byte ptr [esp + 0x20], bl
// 0052722a  7408                 je 0x527234
// 0052722c  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 00527232  eb18                 jmp 0x52724c
// 00527234  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0052723a  3bc2                 cmp eax, edx
// 0052723c  7f05                 jg 0x527243
// 0052723e  83fa40               cmp edx, 0x40
// 00527241  7c02                 jl 0x527245
// 00527243  b101                 mov cl, 1
// 00527245  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 0052724c  7402                 je 0x527250
// 0052724e  b101                 mov cl, 1
// 00527250  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00527256  3bc5                 cmp eax, ebp
// 00527258  740d                 je 0x527267
// 0052725a  83c0ff               add eax, -1
// 0052725d  398678010000         cmp dword ptr [esi + 0x178], eax
// 00527263  7402                 je 0x527267
// 00527265  b101                 mov cl, 1
// 00527267  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 0052726e  7f04                 jg 0x527274
// 00527270  84c9                 test cl, cl
// 00527272  743f                 je 0x5272b3
// 00527274  8b06                 mov eax, dword ptr [esi]
// 00527276  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 0052727d  8b0e                 mov ecx, dword ptr [esi]
// 0052727f  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 00527285  895118               mov dword ptr [ecx + 0x18], edx
// 00527288  8b06                 mov eax, dword ptr [esi]
// 0052728a  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 00527290  89481c               mov dword ptr [eax + 0x1c], ecx
// 00527293  8b16                 mov edx, dword ptr [esi]
// 00527295  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0052729b  894220               mov dword ptr [edx + 0x20], eax
// 0052729e  8b0e                 mov ecx, dword ptr [esi]
// 005272a0  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 005272a6  895124               mov dword ptr [ecx + 0x24], edx
// 005272a9  8b06                 mov eax, dword ptr [esi]
// 005272ab  8b08                 mov ecx, dword ptr [eax]
// 005272ad  56                   push esi
// 005272ae  ffd1                 call ecx
// 005272b0  83c404               add esp, 4
// 005272b3  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 005272b9  896c2410             mov dword ptr [esp + 0x10], ebp
// 005272bd  0f8ed3000000         jle 0x527396
// 005272c3  8d9628010000         lea edx, [esi + 0x128]
// 005272c9  89542414             mov dword ptr [esp + 0x14], edx
// 005272cd  8d4900               lea ecx, [ecx]
// 005272d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005272d4  8b08                 mov ecx, dword ptr [eax]
// 005272d6  8b5904               mov ebx, dword ptr [ecx + 4]
// 005272d9  8beb                 mov ebp, ebx
// 005272db  c1e508               shl ebp, 8
// 005272de  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 005272e4  807c242000           cmp byte ptr [esp + 0x20], 0
// 005272e9  752a                 jne 0x527315
// 005272eb  837d0000             cmp dword ptr [ebp], 0
// 005272ef  7d24                 jge 0x527315
// 005272f1  8b16                 mov edx, dword ptr [esi]
// 005272f3  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 005272fa  8b06                 mov eax, dword ptr [esi]
// 005272fc  895818               mov dword ptr [eax + 0x18], ebx
// 005272ff  8b0e                 mov ecx, dword ptr [esi]
// 00527301  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 00527308  8b16                 mov edx, dword ptr [esi]
// 0052730a  8b4204               mov eax, dword ptr [edx + 4]
// 0052730d  6aff                 push -1
// 0052730f  56                   push esi
// 00527310  ffd0                 call eax
// 00527312  83c408               add esp, 8
// 00527315  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 0052731b  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 00527321  7f4d                 jg 0x527370
// 00527323  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 00527327  33c9                 xor ecx, ecx
// 00527329  85c0                 test eax, eax
// 0052732b  0f9cc1               setl cl
// 0052732e  83e901               sub ecx, 1
// 00527331  23c1                 and eax, ecx
// 00527333  398674010000         cmp dword ptr [esi + 0x174], eax
// 00527339  7420                 je 0x52735b
// 0052733b  8b16                 mov edx, dword ptr [esi]
// 0052733d  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 00527344  8b06                 mov eax, dword ptr [esi]
// 00527346  895818               mov dword ptr [eax + 0x18], ebx
// 00527349  8b0e                 mov ecx, dword ptr [esi]
// 0052734b  89791c               mov dword ptr [ecx + 0x1c], edi
// 0052734e  8b16                 mov edx, dword ptr [esi]
// 00527350  8b4204               mov eax, dword ptr [edx + 4]
// 00527353  6aff                 push -1
// 00527355  56                   push esi
// 00527356  ffd0                 call eax
// 00527358  83c408               add esp, 8
// 0052735b  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00527361  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 00527365  83c701               add edi, 1
// 00527368  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0052736e  7eb3                 jle 0x527323
// 00527370  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527374  8344241404           add dword ptr [esp + 0x14], 4
// 00527379  83c001               add eax, 1
// 0052737c  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00527382  89442410             mov dword ptr [esp + 0x10], eax
// 00527386  0f8c44ffffff         jl 0x5272d0
// 0052738c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00527390  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 00527394  33ed                 xor ebp, ebp
// 00527396  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 0052739c  7516                 jne 0x5273b4
// 0052739e  84db                 test bl, bl
// 005273a0  7409                 je 0x5273ab
// 005273a2  c7470480685200       mov dword ptr [edi + 4], 0x526880
// 005273a9  eb1d                 jmp 0x5273c8
// 005273ab  c74704c06a5200       mov dword ptr [edi + 4], 0x526ac0
// 005273b2  eb14                 jmp 0x5273c8
// 005273b4  84db                 test bl, bl
// 005273b6  7409                 je 0x5273c1
// 005273b8  c74704106d5200       mov dword ptr [edi + 4], 0x526d10
// 005273bf  eb07                 jmp 0x5273c8
// 005273c1  c74704006e5200       mov dword ptr [edi + 4], 0x526e00
// 005273c8  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 005273ce  896c2410             mov dword ptr [esp + 0x10], ebp
// 005273d2  7e72                 jle 0x527446
// 005273d4  8d6f18               lea ebp, [edi + 0x18]
// 005273d7  8d9e28010000         lea ebx, [esi + 0x128]
// 005273dd  8d4900               lea ecx, [ecx]
// 005273e0  807c242000           cmp byte ptr [esp + 0x20], 0
// 005273e5  8b03                 mov eax, dword ptr [ebx]
// 005273e7  741c                 je 0x527405
// 005273e9  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 005273f0  7532                 jne 0x527424
// 005273f2  8b4014               mov eax, dword ptr [eax + 0x14]
// 005273f5  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 005273f9  52                   push edx
// 005273fa  50                   push eax
// 005273fb  6a01                 push 1
// 005273fd  56                   push esi
// 005273fe  e89de8ffff           call 0x525ca0
// 00527403  eb1c                 jmp 0x527421
// 00527405  8b4018               mov eax, dword ptr [eax + 0x18]
// 00527408  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 0052740c  57                   push edi
// 0052740d  50                   push eax
// 0052740e  6a00                 push 0
// 00527410  56                   push esi
// 00527411  e88ae8ffff           call 0x525ca0
// 00527416  8b07                 mov eax, dword ptr [edi]
// 00527418  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052741c  89413c               mov dword ptr [ecx + 0x3c], eax
// 0052741f  8bf9                 mov edi, ecx
// 00527421  83c410               add esp, 0x10
// 00527424  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527428  c7450000000000       mov dword ptr [ebp], 0
// 0052742f  83c001               add eax, 1
// 00527432  83c304               add ebx, 4
// 00527435  83c504               add ebp, 4
// 00527438  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0052743e  89442410             mov dword ptr [esp + 0x10], eax
// 00527442  7c9c                 jl 0x5273e0
// 00527444  33ed                 xor ebp, ebp
// 00527446  896f10               mov dword ptr [edi + 0x10], ebp
// 00527449  896f0c               mov dword ptr [edi + 0xc], ebp
// 0052744c  896f14               mov dword ptr [edi + 0x14], ebp
// 0052744f  c6470800             mov byte ptr [edi + 8], 0
// 00527453  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00527459  895728               mov dword ptr [edi + 0x28], edx
// 0052745c  5f                   pop edi
// 0052745d  5e                   pop esi
// 0052745e  5d                   pop ebp
// 0052745f  5b                   pop ebx
// 00527460  83c40c               add esp, 0xc
// 00527463  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
