// from server: 100% by auto
// roc 2008-06 00663240  unit: RBX::FilterStairs  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663240
//
// 00663240  83ec18               sub esp, 0x18
// 00663243  53                   push ebx
// 00663244  56                   push esi
// 00663245  8bf0                 mov esi, eax
// 00663247  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 0066324a  56                   push esi
// 0066324b  e8b0230000           call 0x665600
// 00663250  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00663253  8d81fcfeffff         lea eax, [ecx - 0x104]
// 00663259  83c404               add esp, 4
// 0066325c  83f81b               cmp eax, 0x1b
// 0066325f  770e                 ja 0x66326f
// 00663261  0fb68044336600       movzx eax, byte ptr [eax + 0x663344]
// 00663268  ff24853c336600       jmp dword ptr [eax*4 + 0x66333c]
// 0066326f  83f93b               cmp ecx, 0x3b
// 00663272  0f84ad000000         je 0x663325
// 00663278  57                   push edi
// 00663279  8d7c240c             lea edi, [esp + 0xc]
// 0066327d  e8fee4ffff           call 0x661780
// 00663282  8bf0                 mov esi, eax
// 00663284  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00663288  5f                   pop edi
// 00663289  83f80d               cmp eax, 0xd
// 0066328c  744c                 je 0x6632da
// 0066328e  83f80e               cmp eax, 0xe
// 00663291  7447                 je 0x6632da
// 00663293  83fe01               cmp esi, 1
// 00663296  751f                 jne 0x6632b7
// 00663298  8d4c2408             lea ecx, [esp + 8]
// 0066329c  51                   push ecx
// 0066329d  53                   push ebx
// 0066329e  e80d860000           call 0x66b8b0
// 006632a3  83c408               add esp, 8
// 006632a6  56                   push esi
// 006632a7  50                   push eax
// 006632a8  53                   push ebx
// 006632a9  e842810000           call 0x66b3f0
// 006632ae  83c40c               add esp, 0xc
// 006632b1  5e                   pop esi
// 006632b2  5b                   pop ebx
// 006632b3  83c418               add esp, 0x18
// 006632b6  c3                   ret 
// 006632b7  8d542408             lea edx, [esp + 8]
// 006632bb  52                   push edx
// 006632bc  53                   push ebx
// 006632bd  e86e850000           call 0x66b830
// 006632c2  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 006632c6  83c408               add esp, 8
// 006632c9  56                   push esi
// 006632ca  50                   push eax
// 006632cb  53                   push ebx
// 006632cc  e81f810000           call 0x66b3f0
// 006632d1  83c40c               add esp, 0xc
// 006632d4  5e                   pop esi
// 006632d5  5b                   pop ebx
// 006632d6  83c418               add esp, 0x18
// 006632d9  c3                   ret 
// 006632da  6aff                 push -1
// 006632dc  8d44240c             lea eax, [esp + 0xc]
// 006632e0  50                   push eax
// 006632e1  53                   push ebx
// 006632e2  e8597c0000           call 0x66af40
// 006632e7  83c40c               add esp, 0xc
// 006632ea  837c24080d           cmp dword ptr [esp + 8], 0xd
// 006632ef  751c                 jne 0x66330d
// 006632f1  83fe01               cmp esi, 1
// 006632f4  7517                 jne 0x66330d
// 006632f6  8b0b                 mov ecx, dword ptr [ebx]
// 006632f8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006632fb  8b442410             mov eax, dword ptr [esp + 0x10]
// 006632ff  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 00663302  8d0482               lea eax, [edx + eax*4]
// 00663305  83e1dd               and ecx, 0xffffffdd
// 00663308  83c91d               or ecx, 0x1d
// 0066330b  8908                 mov dword ptr [eax], ecx
// 0066330d  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 00663311  83ceff               or esi, 0xffffffff
// 00663314  56                   push esi
// 00663315  50                   push eax
// 00663316  53                   push ebx
// 00663317  e8d4800000           call 0x66b3f0
// 0066331c  83c40c               add esp, 0xc
// 0066331f  5e                   pop esi
// 00663320  5b                   pop ebx
// 00663321  83c418               add esp, 0x18
// 00663324  c3                   ret 
// 00663325  33f6                 xor esi, esi
// 00663327  33c0                 xor eax, eax
// 00663329  56                   push esi
// 0066332a  50                   push eax
// 0066332b  53                   push ebx
// 0066332c  e8bf800000           call 0x66b3f0
// 00663331  83c40c               add esp, 0xc
// 00663334  5e                   pop esi
// 00663335  5b                   pop ebx
// 00663336  83c418               add esp, 0x18
// 00663339  c3                   ret 
// 0066333a  8bff                 mov edi, edi
// 0066333c  253366006f           and eax, 0x6f006633
// 00663341  326600               xor ah, byte ptr [esi]
// 00663344  0000                 add byte ptr [eax], al
// 00663346  0001                 add byte ptr [ecx], al
// 00663348  0101                 add dword ptr [ecx], eax
// 0066334a  0101                 add dword ptr [ecx], eax
// 0066334c  0101                 add dword ptr [ecx], eax
// 0066334e  0101                 add dword ptr [ecx], eax
// 00663350  0101                 add dword ptr [ecx], eax
// 00663352  0101                 add dword ptr [ecx], eax
// 00663354  0001                 add byte ptr [ecx], al
// 00663356  0101                 add dword ptr [ecx], eax
// 00663358  0101                 add dword ptr [ecx], eax
// 0066335a  0101                 add dword ptr [ecx], eax
// 0066335c  0101                 add dword ptr [ecx], eax
// 0066335e  0100                 add dword ptr [eax], eax
// library lua-5.1.4/lparser.c (function _retstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
