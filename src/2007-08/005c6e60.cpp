// roc 2007-08 005c6e60  unit: lua_exception  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6e60
//
// 005c6e60  8b4104               mov eax, dword ptr [ecx + 4]
// 005c6e63  56                   push esi
// 005c6e64  be06000000           mov esi, 6
// 005c6e69  397008               cmp dword ptr [eax + 8], esi
// 005c6e6c  750e                 jne 0x5c6e7c
// 005c6e6e  8b00                 mov eax, dword ptr [eax]
// 005c6e70  80780600             cmp byte ptr [eax + 6], 0
// 005c6e74  7506                 jne 0x5c6e7c
// 005c6e76  83791400             cmp dword ptr [ecx + 0x14], 0
// 005c6e7a  7f7c                 jg 0x5c6ef8
// 005c6e7c  8b41ec               mov eax, dword ptr [ecx - 0x14]
// 005c6e7f  397008               cmp dword ptr [eax + 8], esi
// 005c6e82  7574                 jne 0x5c6ef8
// 005c6e84  8b10                 mov edx, dword ptr [eax]
// 005c6e86  807a0600             cmp byte ptr [edx + 6], 0
// 005c6e8a  756c                 jne 0x5c6ef8
// 005c6e8c  8b51ec               mov edx, dword ptr [ecx - 0x14]
// 005c6e8f  83e918               sub ecx, 0x18
// 005c6e92  397208               cmp dword ptr [edx + 8], esi
// 005c6e95  7526                 jne 0x5c6ebd
// 005c6e97  8b02                 mov eax, dword ptr [edx]
// 005c6e99  80780600             cmp byte ptr [eax + 6], 0
// 005c6e9d  751e                 jne 0x5c6ebd
// 005c6e9f  3b4f14               cmp ecx, dword ptr [edi + 0x14]
// 005c6ea2  7506                 jne 0x5c6eaa
// 005c6ea4  8b4718               mov eax, dword ptr [edi + 0x18]
// 005c6ea7  89410c               mov dword ptr [ecx + 0xc], eax
// 005c6eaa  8b02                 mov eax, dword ptr [edx]
// 005c6eac  8b7010               mov esi, dword ptr [eax + 0x10]
// 005c6eaf  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005c6eb2  2b460c               sub eax, dword ptr [esi + 0xc]
// 005c6eb5  c1f802               sar eax, 2
// 005c6eb8  83e801               sub eax, 1
// 005c6ebb  eb03                 jmp 0x5c6ec0
// 005c6ebd  83c8ff               or eax, 0xffffffff
// 005c6ec0  8b12                 mov edx, dword ptr [edx]
// 005c6ec2  8b5210               mov edx, dword ptr [edx + 0x10]
// 005c6ec5  8b520c               mov edx, dword ptr [edx + 0xc]
// 005c6ec8  8b0482               mov eax, dword ptr [edx + eax*4]
// 005c6ecb  8bd0                 mov edx, eax
// 005c6ecd  83e23f               and edx, 0x3f
// 005c6ed0  83fa1c               cmp edx, 0x1c
// 005c6ed3  740a                 je 0x5c6edf
// 005c6ed5  83fa1d               cmp edx, 0x1d
// 005c6ed8  7405                 je 0x5c6edf
// 005c6eda  83fa21               cmp edx, 0x21
// 005c6edd  7519                 jne 0x5c6ef8
// 005c6edf  8b542408             mov edx, dword ptr [esp + 8]
// 005c6ee3  52                   push edx
// 005c6ee4  c1e806               shr eax, 6
// 005c6ee7  51                   push ecx
// 005c6ee8  25ff000000           and eax, 0xff
// 005c6eed  57                   push edi
// 005c6eee  e8edfdffff           call 0x5c6ce0
// 005c6ef3  83c40c               add esp, 0xc
// 005c6ef6  5e                   pop esi
// 005c6ef7  c3                   ret 
// 005c6ef8  33c0                 xor eax, eax
// 005c6efa  5e                   pop esi
// 005c6efb  c3                   ret 
// library lua-5.1.4/ldebug.c (function _getfuncname)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
