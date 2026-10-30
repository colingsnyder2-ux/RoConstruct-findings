// from server: 100% by auto
// roc 2009-06 006c86a0  unit: seg_006c0000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c86a0
//
// 006c86a0  8b4104               mov eax, dword ptr [ecx + 4]
// 006c86a3  56                   push esi
// 006c86a4  be06000000           mov esi, 6
// 006c86a9  397008               cmp dword ptr [eax + 8], esi
// 006c86ac  750e                 jne 0x6c86bc
// 006c86ae  8b00                 mov eax, dword ptr [eax]
// 006c86b0  80780600             cmp byte ptr [eax + 6], 0
// 006c86b4  7506                 jne 0x6c86bc
// 006c86b6  83791400             cmp dword ptr [ecx + 0x14], 0
// 006c86ba  7f7a                 jg 0x6c8736
// 006c86bc  8b41ec               mov eax, dword ptr [ecx - 0x14]
// 006c86bf  397008               cmp dword ptr [eax + 8], esi
// 006c86c2  7572                 jne 0x6c8736
// 006c86c4  8b10                 mov edx, dword ptr [eax]
// 006c86c6  807a0600             cmp byte ptr [edx + 6], 0
// 006c86ca  756a                 jne 0x6c8736
// 006c86cc  8b51ec               mov edx, dword ptr [ecx - 0x14]
// 006c86cf  83e918               sub ecx, 0x18
// 006c86d2  397208               cmp dword ptr [edx + 8], esi
// 006c86d5  7524                 jne 0x6c86fb
// 006c86d7  8b02                 mov eax, dword ptr [edx]
// 006c86d9  80780600             cmp byte ptr [eax + 6], 0
// 006c86dd  751c                 jne 0x6c86fb
// 006c86df  3b4f14               cmp ecx, dword ptr [edi + 0x14]
// 006c86e2  7506                 jne 0x6c86ea
// 006c86e4  8b4718               mov eax, dword ptr [edi + 0x18]
// 006c86e7  89410c               mov dword ptr [ecx + 0xc], eax
// 006c86ea  8b02                 mov eax, dword ptr [edx]
// 006c86ec  8b7010               mov esi, dword ptr [eax + 0x10]
// 006c86ef  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006c86f2  2b460c               sub eax, dword ptr [esi + 0xc]
// 006c86f5  c1f802               sar eax, 2
// 006c86f8  48                   dec eax
// 006c86f9  eb03                 jmp 0x6c86fe
// 006c86fb  83c8ff               or eax, 0xffffffff
// 006c86fe  8b12                 mov edx, dword ptr [edx]
// 006c8700  8b5210               mov edx, dword ptr [edx + 0x10]
// 006c8703  8b520c               mov edx, dword ptr [edx + 0xc]
// 006c8706  8b0482               mov eax, dword ptr [edx + eax*4]
// 006c8709  8bd0                 mov edx, eax
// 006c870b  83e23f               and edx, 0x3f
// 006c870e  83fa1c               cmp edx, 0x1c
// 006c8711  740a                 je 0x6c871d
// 006c8713  83fa1d               cmp edx, 0x1d
// 006c8716  7405                 je 0x6c871d
// 006c8718  83fa21               cmp edx, 0x21
// 006c871b  7519                 jne 0x6c8736
// 006c871d  8b542408             mov edx, dword ptr [esp + 8]
// 006c8721  52                   push edx
// 006c8722  c1e806               shr eax, 6
// 006c8725  51                   push ecx
// 006c8726  25ff000000           and eax, 0xff
// 006c872b  57                   push edi
// 006c872c  e8effdffff           call 0x6c8520
// 006c8731  83c40c               add esp, 0xc
// 006c8734  5e                   pop esi
// 006c8735  c3                   ret 
// 006c8736  33c0                 xor eax, eax
// 006c8738  5e                   pop esi
// 006c8739  c3                   ret 
// library lua-5.1.4/ldebug.c (function _getfuncname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
