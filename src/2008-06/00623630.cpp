// from server: 100% by auto
// roc 2008-06 00623630  unit: lua_exception  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623630
//
// 00623630  8b4104               mov eax, dword ptr [ecx + 4]
// 00623633  56                   push esi
// 00623634  be06000000           mov esi, 6
// 00623639  397008               cmp dword ptr [eax + 8], esi
// 0062363c  750e                 jne 0x62364c
// 0062363e  8b00                 mov eax, dword ptr [eax]
// 00623640  80780600             cmp byte ptr [eax + 6], 0
// 00623644  7506                 jne 0x62364c
// 00623646  83791400             cmp dword ptr [ecx + 0x14], 0
// 0062364a  7f7a                 jg 0x6236c6
// 0062364c  8b41ec               mov eax, dword ptr [ecx - 0x14]
// 0062364f  397008               cmp dword ptr [eax + 8], esi
// 00623652  7572                 jne 0x6236c6
// 00623654  8b10                 mov edx, dword ptr [eax]
// 00623656  807a0600             cmp byte ptr [edx + 6], 0
// 0062365a  756a                 jne 0x6236c6
// 0062365c  8b51ec               mov edx, dword ptr [ecx - 0x14]
// 0062365f  83e918               sub ecx, 0x18
// 00623662  397208               cmp dword ptr [edx + 8], esi
// 00623665  7524                 jne 0x62368b
// 00623667  8b02                 mov eax, dword ptr [edx]
// 00623669  80780600             cmp byte ptr [eax + 6], 0
// 0062366d  751c                 jne 0x62368b
// 0062366f  3b4f14               cmp ecx, dword ptr [edi + 0x14]
// 00623672  7506                 jne 0x62367a
// 00623674  8b4718               mov eax, dword ptr [edi + 0x18]
// 00623677  89410c               mov dword ptr [ecx + 0xc], eax
// 0062367a  8b02                 mov eax, dword ptr [edx]
// 0062367c  8b7010               mov esi, dword ptr [eax + 0x10]
// 0062367f  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00623682  2b460c               sub eax, dword ptr [esi + 0xc]
// 00623685  c1f802               sar eax, 2
// 00623688  48                   dec eax
// 00623689  eb03                 jmp 0x62368e
// 0062368b  83c8ff               or eax, 0xffffffff
// 0062368e  8b12                 mov edx, dword ptr [edx]
// 00623690  8b5210               mov edx, dword ptr [edx + 0x10]
// 00623693  8b520c               mov edx, dword ptr [edx + 0xc]
// 00623696  8b0482               mov eax, dword ptr [edx + eax*4]
// 00623699  8bd0                 mov edx, eax
// 0062369b  83e23f               and edx, 0x3f
// 0062369e  83fa1c               cmp edx, 0x1c
// 006236a1  740a                 je 0x6236ad
// 006236a3  83fa1d               cmp edx, 0x1d
// 006236a6  7405                 je 0x6236ad
// 006236a8  83fa21               cmp edx, 0x21
// 006236ab  7519                 jne 0x6236c6
// 006236ad  8b542408             mov edx, dword ptr [esp + 8]
// 006236b1  52                   push edx
// 006236b2  c1e806               shr eax, 6
// 006236b5  51                   push ecx
// 006236b6  25ff000000           and eax, 0xff
// 006236bb  57                   push edi
// 006236bc  e8effdffff           call 0x6234b0
// 006236c1  83c40c               add esp, 0xc
// 006236c4  5e                   pop esi
// 006236c5  c3                   ret 
// 006236c6  33c0                 xor eax, eax
// 006236c8  5e                   pop esi
// 006236c9  c3                   ret 
// library lua-5.1.4/ldebug.c (function _getfuncname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
