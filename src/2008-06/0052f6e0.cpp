// from server: 100% by auto
// roc 2008-06 0052f6e0  unit: seg_00520000  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052f6e0
//
// 0052f6e0  83ec08               sub esp, 8
// 0052f6e3  53                   push ebx
// 0052f6e4  56                   push esi
// 0052f6e5  8bf0                 mov esi, eax
// 0052f6e7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052f6eb  57                   push edi
// 0052f6ec  8b7c8648             mov edi, dword ptr [esi + eax*4 + 0x48]
// 0052f6f0  897c2410             mov dword ptr [esp + 0x10], edi
// 0052f6f4  85ff                 test edi, edi
// 0052f6f6  7518                 jne 0x52f710
// 0052f6f8  8b0e                 mov ecx, dword ptr [esi]
// 0052f6fa  c7411434000000       mov dword ptr [ecx + 0x14], 0x34
// 0052f701  8b16                 mov edx, dword ptr [esi]
// 0052f703  894218               mov dword ptr [edx + 0x18], eax
// 0052f706  8b06                 mov eax, dword ptr [esi]
// 0052f708  8b08                 mov ecx, dword ptr [eax]
// 0052f70a  56                   push esi
// 0052f70b  ffd1                 call ecx
// 0052f70d  83c404               add esp, 4
// 0052f710  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0052f718  8d4704               lea eax, [edi + 4]
// 0052f71b  ba10000000           mov edx, 0x10
// 0052f720  b9ff000000           mov ecx, 0xff
// 0052f725  663948fc             cmp word ptr [eax - 4], cx
// 0052f729  b901000000           mov ecx, 1
// 0052f72e  7604                 jbe 0x52f734
// 0052f730  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052f734  bbff000000           mov ebx, 0xff
// 0052f739  663958fe             cmp word ptr [eax - 2], bx
// 0052f73d  7604                 jbe 0x52f743
// 0052f73f  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052f743  663918               cmp word ptr [eax], bx
// 0052f746  7604                 jbe 0x52f74c
// 0052f748  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052f74c  66395802             cmp word ptr [eax + 2], bx
// 0052f750  7604                 jbe 0x52f756
// 0052f752  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052f756  83c008               add eax, 8
// 0052f759  2bd1                 sub edx, ecx
// 0052f75b  75c3                 jne 0x52f720
// 0052f75d  389780000000         cmp byte ptr [edi + 0x80], dl
// 0052f763  0f8540010000         jne 0x52f8a9
// 0052f769  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f76c  8b10                 mov edx, dword ptr [eax]
// 0052f76e  55                   push ebp
// 0052f76f  881a                 mov byte ptr [edx], bl
// 0052f771  ff00                 inc dword ptr [eax]
// 0052f773  83cdff               or ebp, 0xffffffff
// 0052f776  016804               add dword ptr [eax + 4], ebp
// 0052f779  7523                 jne 0x52f79e
// 0052f77b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f77e  56                   push esi
// 0052f77f  ffd0                 call eax
// 0052f781  83c404               add esp, 4
// 0052f784  84c0                 test al, al
// 0052f786  7516                 jne 0x52f79e
// 0052f788  8b0e                 mov ecx, dword ptr [esi]
// 0052f78a  bf18000000           mov edi, 0x18
// 0052f78f  897914               mov dword ptr [ecx + 0x14], edi
// 0052f792  8b16                 mov edx, dword ptr [esi]
// 0052f794  8b02                 mov eax, dword ptr [edx]
// 0052f796  56                   push esi
// 0052f797  ffd0                 call eax
// 0052f799  83c404               add esp, 4
// 0052f79c  eb05                 jmp 0x52f7a3
// 0052f79e  bf18000000           mov edi, 0x18
// 0052f7a3  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f7a6  8b08                 mov ecx, dword ptr [eax]
// 0052f7a8  c601db               mov byte ptr [ecx], 0xdb
// 0052f7ab  ff00                 inc dword ptr [eax]
// 0052f7ad  016804               add dword ptr [eax + 4], ebp
// 0052f7b0  751c                 jne 0x52f7ce
// 0052f7b2  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052f7b5  56                   push esi
// 0052f7b6  ffd2                 call edx
// 0052f7b8  83c404               add esp, 4
// 0052f7bb  84c0                 test al, al
// 0052f7bd  750f                 jne 0x52f7ce
// 0052f7bf  8b06                 mov eax, dword ptr [esi]
// 0052f7c1  897814               mov dword ptr [eax + 0x14], edi
// 0052f7c4  8b0e                 mov ecx, dword ptr [esi]
// 0052f7c6  8b11                 mov edx, dword ptr [ecx]
// 0052f7c8  56                   push esi
// 0052f7c9  ffd2                 call edx
// 0052f7cb  83c404               add esp, 4
// 0052f7ce  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052f7d2  f7db                 neg ebx
// 0052f7d4  1bdb                 sbb ebx, ebx
// 0052f7d6  83e340               and ebx, 0x40
// 0052f7d9  83c343               add ebx, 0x43
// 0052f7dc  e88ffeffff           call 0x52f670
// 0052f7e1  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f7e4  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 0052f7e8  8b10                 mov edx, dword ptr [eax]
// 0052f7ea  c0e104               shl cl, 4
// 0052f7ed  024c241c             add cl, byte ptr [esp + 0x1c]
// 0052f7f1  880a                 mov byte ptr [edx], cl
// 0052f7f3  ff00                 inc dword ptr [eax]
// 0052f7f5  016804               add dword ptr [eax + 4], ebp
// 0052f7f8  751c                 jne 0x52f816
// 0052f7fa  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f7fd  56                   push esi
// 0052f7fe  ffd0                 call eax
// 0052f800  83c404               add esp, 4
// 0052f803  84c0                 test al, al
// 0052f805  750f                 jne 0x52f816
// 0052f807  8b0e                 mov ecx, dword ptr [esi]
// 0052f809  897914               mov dword ptr [ecx + 0x14], edi
// 0052f80c  8b16                 mov edx, dword ptr [esi]
// 0052f80e  8b02                 mov eax, dword ptr [edx]
// 0052f810  56                   push esi
// 0052f811  ffd0                 call eax
// 0052f813  83c404               add esp, 4
// 0052f816  bfb0b18200           mov edi, 0x82b1b0
// 0052f81b  eb03                 jmp 0x52f820
// 0052f81d  8d4900               lea ecx, [ecx]
// 0052f820  837c241000           cmp dword ptr [esp + 0x10], 0
// 0052f825  8b0f                 mov ecx, dword ptr [edi]
// 0052f827  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052f82b  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0052f82f  7433                 je 0x52f864
// 0052f831  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f834  8b10                 mov edx, dword ptr [eax]
// 0052f836  8bcb                 mov ecx, ebx
// 0052f838  c1e908               shr ecx, 8
// 0052f83b  880a                 mov byte ptr [edx], cl
// 0052f83d  ff00                 inc dword ptr [eax]
// 0052f83f  016804               add dword ptr [eax + 4], ebp
// 0052f842  7520                 jne 0x52f864
// 0052f844  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f847  56                   push esi
// 0052f848  ffd0                 call eax
// 0052f84a  83c404               add esp, 4
// 0052f84d  84c0                 test al, al
// 0052f84f  7513                 jne 0x52f864
// 0052f851  8b0e                 mov ecx, dword ptr [esi]
// 0052f853  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052f85a  8b16                 mov edx, dword ptr [esi]
// 0052f85c  8b02                 mov eax, dword ptr [edx]
// 0052f85e  56                   push esi
// 0052f85f  ffd0                 call eax
// 0052f861  83c404               add esp, 4
// 0052f864  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f867  8b08                 mov ecx, dword ptr [eax]
// 0052f869  8819                 mov byte ptr [ecx], bl
// 0052f86b  ff00                 inc dword ptr [eax]
// 0052f86d  016804               add dword ptr [eax + 4], ebp
// 0052f870  7520                 jne 0x52f892
// 0052f872  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052f875  56                   push esi
// 0052f876  ffd2                 call edx
// 0052f878  83c404               add esp, 4
// 0052f87b  84c0                 test al, al
// 0052f87d  7513                 jne 0x52f892
// 0052f87f  8b06                 mov eax, dword ptr [esi]
// 0052f881  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0052f888  8b0e                 mov ecx, dword ptr [esi]
// 0052f88a  8b11                 mov edx, dword ptr [ecx]
// 0052f88c  56                   push esi
// 0052f88d  ffd2                 call edx
// 0052f88f  83c404               add esp, 4
// 0052f892  83c704               add edi, 4
// 0052f895  81ffb0b28200         cmp edi, 0x82b2b0
// 0052f89b  7c83                 jl 0x52f820
// 0052f89d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052f8a1  c6808000000001       mov byte ptr [eax + 0x80], 1
// 0052f8a8  5d                   pop ebp
// 0052f8a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052f8ad  5f                   pop edi
// 0052f8ae  5e                   pop esi
// 0052f8af  5b                   pop ebx
// 0052f8b0  83c408               add esp, 8
// 0052f8b3  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
