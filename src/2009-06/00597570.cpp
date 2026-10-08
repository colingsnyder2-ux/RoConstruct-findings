// from server: 100% by auto
// roc 2009-06 00597570  unit: seg_00590000  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597570
//
// 00597570  83ec08               sub esp, 8
// 00597573  53                   push ebx
// 00597574  56                   push esi
// 00597575  8bf0                 mov esi, eax
// 00597577  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059757b  57                   push edi
// 0059757c  8b7c8648             mov edi, dword ptr [esi + eax*4 + 0x48]
// 00597580  897c2410             mov dword ptr [esp + 0x10], edi
// 00597584  85ff                 test edi, edi
// 00597586  7518                 jne 0x5975a0
// 00597588  8b0e                 mov ecx, dword ptr [esi]
// 0059758a  c7411434000000       mov dword ptr [ecx + 0x14], 0x34
// 00597591  8b16                 mov edx, dword ptr [esi]
// 00597593  894218               mov dword ptr [edx + 0x18], eax
// 00597596  8b06                 mov eax, dword ptr [esi]
// 00597598  8b08                 mov ecx, dword ptr [eax]
// 0059759a  56                   push esi
// 0059759b  ffd1                 call ecx
// 0059759d  83c404               add esp, 4
// 005975a0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005975a8  8d4704               lea eax, [edi + 4]
// 005975ab  ba10000000           mov edx, 0x10
// 005975b0  b9ff000000           mov ecx, 0xff
// 005975b5  663948fc             cmp word ptr [eax - 4], cx
// 005975b9  b901000000           mov ecx, 1
// 005975be  7604                 jbe 0x5975c4
// 005975c0  894c240c             mov dword ptr [esp + 0xc], ecx
// 005975c4  bbff000000           mov ebx, 0xff
// 005975c9  663958fe             cmp word ptr [eax - 2], bx
// 005975cd  7604                 jbe 0x5975d3
// 005975cf  894c240c             mov dword ptr [esp + 0xc], ecx
// 005975d3  663918               cmp word ptr [eax], bx
// 005975d6  7604                 jbe 0x5975dc
// 005975d8  894c240c             mov dword ptr [esp + 0xc], ecx
// 005975dc  66395802             cmp word ptr [eax + 2], bx
// 005975e0  7604                 jbe 0x5975e6
// 005975e2  894c240c             mov dword ptr [esp + 0xc], ecx
// 005975e6  83c008               add eax, 8
// 005975e9  2bd1                 sub edx, ecx
// 005975eb  75c3                 jne 0x5975b0
// 005975ed  389780000000         cmp byte ptr [edi + 0x80], dl
// 005975f3  0f8540010000         jne 0x597739
// 005975f9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005975fc  8b10                 mov edx, dword ptr [eax]
// 005975fe  55                   push ebp
// 005975ff  881a                 mov byte ptr [edx], bl
// 00597601  ff00                 inc dword ptr [eax]
// 00597603  83cdff               or ebp, 0xffffffff
// 00597606  016804               add dword ptr [eax + 4], ebp
// 00597609  7523                 jne 0x59762e
// 0059760b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059760e  56                   push esi
// 0059760f  ffd0                 call eax
// 00597611  83c404               add esp, 4
// 00597614  84c0                 test al, al
// 00597616  7516                 jne 0x59762e
// 00597618  8b0e                 mov ecx, dword ptr [esi]
// 0059761a  bf18000000           mov edi, 0x18
// 0059761f  897914               mov dword ptr [ecx + 0x14], edi
// 00597622  8b16                 mov edx, dword ptr [esi]
// 00597624  8b02                 mov eax, dword ptr [edx]
// 00597626  56                   push esi
// 00597627  ffd0                 call eax
// 00597629  83c404               add esp, 4
// 0059762c  eb05                 jmp 0x597633
// 0059762e  bf18000000           mov edi, 0x18
// 00597633  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597636  8b08                 mov ecx, dword ptr [eax]
// 00597638  c601db               mov byte ptr [ecx], 0xdb
// 0059763b  ff00                 inc dword ptr [eax]
// 0059763d  016804               add dword ptr [eax + 4], ebp
// 00597640  751c                 jne 0x59765e
// 00597642  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597645  56                   push esi
// 00597646  ffd2                 call edx
// 00597648  83c404               add esp, 4
// 0059764b  84c0                 test al, al
// 0059764d  750f                 jne 0x59765e
// 0059764f  8b06                 mov eax, dword ptr [esi]
// 00597651  897814               mov dword ptr [eax + 0x14], edi
// 00597654  8b0e                 mov ecx, dword ptr [esi]
// 00597656  8b11                 mov edx, dword ptr [ecx]
// 00597658  56                   push esi
// 00597659  ffd2                 call edx
// 0059765b  83c404               add esp, 4
// 0059765e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00597662  f7db                 neg ebx
// 00597664  1bdb                 sbb ebx, ebx
// 00597666  83e340               and ebx, 0x40
// 00597669  83c343               add ebx, 0x43
// 0059766c  e88ffeffff           call 0x597500
// 00597671  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597674  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00597678  8b10                 mov edx, dword ptr [eax]
// 0059767a  c0e104               shl cl, 4
// 0059767d  024c241c             add cl, byte ptr [esp + 0x1c]
// 00597681  880a                 mov byte ptr [edx], cl
// 00597683  ff00                 inc dword ptr [eax]
// 00597685  016804               add dword ptr [eax + 4], ebp
// 00597688  751c                 jne 0x5976a6
// 0059768a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059768d  56                   push esi
// 0059768e  ffd0                 call eax
// 00597690  83c404               add esp, 4
// 00597693  84c0                 test al, al
// 00597695  750f                 jne 0x5976a6
// 00597697  8b0e                 mov ecx, dword ptr [esi]
// 00597699  897914               mov dword ptr [ecx + 0x14], edi
// 0059769c  8b16                 mov edx, dword ptr [esi]
// 0059769e  8b02                 mov eax, dword ptr [edx]
// 005976a0  56                   push esi
// 005976a1  ffd0                 call eax
// 005976a3  83c404               add esp, 4
// 005976a6  bff8e88c00           mov edi, 0x8ce8f8
// 005976ab  eb03                 jmp 0x5976b0
// 005976ad  8d4900               lea ecx, [ecx]
// 005976b0  837c241000           cmp dword ptr [esp + 0x10], 0
// 005976b5  8b0f                 mov ecx, dword ptr [edi]
// 005976b7  8b542414             mov edx, dword ptr [esp + 0x14]
// 005976bb  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 005976bf  7433                 je 0x5976f4
// 005976c1  8b4618               mov eax, dword ptr [esi + 0x18]
// 005976c4  8b10                 mov edx, dword ptr [eax]
// 005976c6  8bcb                 mov ecx, ebx
// 005976c8  c1e908               shr ecx, 8
// 005976cb  880a                 mov byte ptr [edx], cl
// 005976cd  ff00                 inc dword ptr [eax]
// 005976cf  016804               add dword ptr [eax + 4], ebp
// 005976d2  7520                 jne 0x5976f4
// 005976d4  8b400c               mov eax, dword ptr [eax + 0xc]
// 005976d7  56                   push esi
// 005976d8  ffd0                 call eax
// 005976da  83c404               add esp, 4
// 005976dd  84c0                 test al, al
// 005976df  7513                 jne 0x5976f4
// 005976e1  8b0e                 mov ecx, dword ptr [esi]
// 005976e3  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 005976ea  8b16                 mov edx, dword ptr [esi]
// 005976ec  8b02                 mov eax, dword ptr [edx]
// 005976ee  56                   push esi
// 005976ef  ffd0                 call eax
// 005976f1  83c404               add esp, 4
// 005976f4  8b4618               mov eax, dword ptr [esi + 0x18]
// 005976f7  8b08                 mov ecx, dword ptr [eax]
// 005976f9  8819                 mov byte ptr [ecx], bl
// 005976fb  ff00                 inc dword ptr [eax]
// 005976fd  016804               add dword ptr [eax + 4], ebp
// 00597700  7520                 jne 0x597722
// 00597702  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597705  56                   push esi
// 00597706  ffd2                 call edx
// 00597708  83c404               add esp, 4
// 0059770b  84c0                 test al, al
// 0059770d  7513                 jne 0x597722
// 0059770f  8b06                 mov eax, dword ptr [esi]
// 00597711  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00597718  8b0e                 mov ecx, dword ptr [esi]
// 0059771a  8b11                 mov edx, dword ptr [ecx]
// 0059771c  56                   push esi
// 0059771d  ffd2                 call edx
// 0059771f  83c404               add esp, 4
// 00597722  83c704               add edi, 4
// 00597725  81fff8e98c00         cmp edi, 0x8ce9f8
// 0059772b  7c83                 jl 0x5976b0
// 0059772d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00597731  c6808000000001       mov byte ptr [eax + 0x80], 1
// 00597738  5d                   pop ebp
// 00597739  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059773d  5f                   pop edi
// 0059773e  5e                   pop esi
// 0059773f  5b                   pop ebx
// 00597740  83c408               add esp, 8
// 00597743  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
