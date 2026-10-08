// from server: 100% by auto
// roc 2007-08 0060f350  unit: RBX::Ball  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f350
//
// 0060f350  837e2000             cmp dword ptr [esi + 0x20], 0
// 0060f354  7407                 je 0x60f35d
// 0060f356  8b4620               mov eax, dword ptr [esi + 0x20]
// 0060f359  806005fc             and byte ptr [eax + 5], 0xfc
// 0060f35d  57                   push edi
// 0060f35e  33ff                 xor edi, edi
// 0060f360  397e28               cmp dword ptr [esi + 0x28], edi
// 0060f363  7e38                 jle 0x60f39d
// 0060f365  55                   push ebp
// 0060f366  33ed                 xor ebp, ebp
// 0060f368  eb06                 jmp 0x60f370
// 0060f36a  8d9b00000000         lea ebx, [ebx]
// 0060f370  8b4608               mov eax, dword ptr [esi + 8]
// 0060f373  03c5                 add eax, ebp
// 0060f375  83780804             cmp dword ptr [eax + 8], 4
// 0060f379  7c16                 jl 0x60f391
// 0060f37b  8b00                 mov eax, dword ptr [eax]
// 0060f37d  f6400503             test byte ptr [eax + 5], 3
// 0060f381  740e                 je 0x60f391
// 0060f383  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060f387  50                   push eax
// 0060f388  51                   push ecx
// 0060f389  e882fcffff           call 0x60f010
// 0060f38e  83c408               add esp, 8
// 0060f391  83c701               add edi, 1
// 0060f394  83c510               add ebp, 0x10
// 0060f397  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0060f39a  7cd4                 jl 0x60f370
// 0060f39c  5d                   pop ebp
// 0060f39d  33c0                 xor eax, eax
// 0060f39f  394624               cmp dword ptr [esi + 0x24], eax
// 0060f3a2  7e1a                 jle 0x60f3be
// 0060f3a4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0060f3a7  833c8200             cmp dword ptr [edx + eax*4], 0
// 0060f3ab  7409                 je 0x60f3b6
// 0060f3ad  8bca                 mov ecx, edx
// 0060f3af  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0060f3b2  806105fc             and byte ptr [ecx + 5], 0xfc
// 0060f3b6  83c001               add eax, 1
// 0060f3b9  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0060f3bc  7ce6                 jl 0x60f3a4
// 0060f3be  33ff                 xor edi, edi
// 0060f3c0  397e34               cmp dword ptr [esi + 0x34], edi
// 0060f3c3  7e2a                 jle 0x60f3ef
// 0060f3c5  8b5610               mov edx, dword ptr [esi + 0x10]
// 0060f3c8  833cba00             cmp dword ptr [edx + edi*4], 0
// 0060f3cc  8d04ba               lea eax, [edx + edi*4]
// 0060f3cf  7416                 je 0x60f3e7
// 0060f3d1  8b00                 mov eax, dword ptr [eax]
// 0060f3d3  f6400503             test byte ptr [eax + 5], 3
// 0060f3d7  740e                 je 0x60f3e7
// 0060f3d9  50                   push eax
// 0060f3da  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060f3de  50                   push eax
// 0060f3df  e82cfcffff           call 0x60f010
// 0060f3e4  83c408               add esp, 8
// 0060f3e7  83c701               add edi, 1
// 0060f3ea  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 0060f3ed  7cd6                 jl 0x60f3c5
// 0060f3ef  33ff                 xor edi, edi
// 0060f3f1  397e38               cmp dword ptr [esi + 0x38], edi
// 0060f3f4  7e30                 jle 0x60f426
// 0060f3f6  33c0                 xor eax, eax
// 0060f3f8  eb06                 jmp 0x60f400
// 0060f3fa  8d9b00000000         lea ebx, [ebx]
// 0060f400  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0060f403  833c0800             cmp dword ptr [eax + ecx], 0
// 0060f407  7412                 je 0x60f41b
// 0060f409  8bd1                 mov edx, ecx
// 0060f40b  8d0c02               lea ecx, [edx + eax]
// 0060f40e  8b11                 mov edx, dword ptr [ecx]
// 0060f410  8a5205               mov dl, byte ptr [edx + 5]
// 0060f413  8b09                 mov ecx, dword ptr [ecx]
// 0060f415  80e2fc               and dl, 0xfc
// 0060f418  885105               mov byte ptr [ecx + 5], dl
// 0060f41b  83c701               add edi, 1
// 0060f41e  83c00c               add eax, 0xc
// 0060f421  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0060f424  7cda                 jl 0x60f400
// 0060f426  5f                   pop edi
// 0060f427  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseproto)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
