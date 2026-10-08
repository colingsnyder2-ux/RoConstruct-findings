// from server: 100% by auto
// roc 2010-06 00733a00  unit: seg_00730000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733a00
//
// 00733a00  8b4104               mov eax, dword ptr [ecx + 4]
// 00733a03  56                   push esi
// 00733a04  be06000000           mov esi, 6
// 00733a09  397008               cmp dword ptr [eax + 8], esi
// 00733a0c  750e                 jne 0x733a1c
// 00733a0e  8b00                 mov eax, dword ptr [eax]
// 00733a10  80780600             cmp byte ptr [eax + 6], 0
// 00733a14  7506                 jne 0x733a1c
// 00733a16  83791400             cmp dword ptr [ecx + 0x14], 0
// 00733a1a  7f7a                 jg 0x733a96
// 00733a1c  8b41ec               mov eax, dword ptr [ecx - 0x14]
// 00733a1f  397008               cmp dword ptr [eax + 8], esi
// 00733a22  7572                 jne 0x733a96
// 00733a24  8b10                 mov edx, dword ptr [eax]
// 00733a26  807a0600             cmp byte ptr [edx + 6], 0
// 00733a2a  756a                 jne 0x733a96
// 00733a2c  8b51ec               mov edx, dword ptr [ecx - 0x14]
// 00733a2f  83e918               sub ecx, 0x18
// 00733a32  397208               cmp dword ptr [edx + 8], esi
// 00733a35  7524                 jne 0x733a5b
// 00733a37  8b02                 mov eax, dword ptr [edx]
// 00733a39  80780600             cmp byte ptr [eax + 6], 0
// 00733a3d  751c                 jne 0x733a5b
// 00733a3f  3b4f14               cmp ecx, dword ptr [edi + 0x14]
// 00733a42  7506                 jne 0x733a4a
// 00733a44  8b4718               mov eax, dword ptr [edi + 0x18]
// 00733a47  89410c               mov dword ptr [ecx + 0xc], eax
// 00733a4a  8b02                 mov eax, dword ptr [edx]
// 00733a4c  8b7010               mov esi, dword ptr [eax + 0x10]
// 00733a4f  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00733a52  2b460c               sub eax, dword ptr [esi + 0xc]
// 00733a55  c1f802               sar eax, 2
// 00733a58  48                   dec eax
// 00733a59  eb03                 jmp 0x733a5e
// 00733a5b  83c8ff               or eax, 0xffffffff
// 00733a5e  8b12                 mov edx, dword ptr [edx]
// 00733a60  8b5210               mov edx, dword ptr [edx + 0x10]
// 00733a63  8b520c               mov edx, dword ptr [edx + 0xc]
// 00733a66  8b0482               mov eax, dword ptr [edx + eax*4]
// 00733a69  8bd0                 mov edx, eax
// 00733a6b  83e23f               and edx, 0x3f
// 00733a6e  83fa1c               cmp edx, 0x1c
// 00733a71  740a                 je 0x733a7d
// 00733a73  83fa1d               cmp edx, 0x1d
// 00733a76  7405                 je 0x733a7d
// 00733a78  83fa21               cmp edx, 0x21
// 00733a7b  7519                 jne 0x733a96
// 00733a7d  8b542408             mov edx, dword ptr [esp + 8]
// 00733a81  52                   push edx
// 00733a82  c1e806               shr eax, 6
// 00733a85  51                   push ecx
// 00733a86  25ff000000           and eax, 0xff
// 00733a8b  57                   push edi
// 00733a8c  e8effdffff           call 0x733880
// 00733a91  83c40c               add esp, 0xc
// 00733a94  5e                   pop esi
// 00733a95  c3                   ret 
// 00733a96  33c0                 xor eax, eax
// 00733a98  5e                   pop esi
// 00733a99  c3                   ret 
// library lua-5.1.4/ldebug.c (function _getfuncname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
