// roc 2009-06 006b9c00  unit: RBX::UniversalTool  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b9c00
//
// 006b9c00  8b442408             mov eax, dword ptr [esp + 8]
// 006b9c04  53                   push ebx
// 006b9c05  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006b9c09  56                   push esi
// 006b9c0a  8b7310               mov esi, dword ptr [ebx + 0x10]
// 006b9c0d  57                   push edi
// 006b9c0e  33ff                 xor edi, edi
// 006b9c10  83f807               cmp eax, 7
// 006b9c13  0f87b1000000         ja 0x6b9cca
// 006b9c19  ff2485d49c6b00       jmp dword ptr [eax*4 + 0x6b9cd4]
// 006b9c20  8bc7                 mov eax, edi
// 006b9c22  5f                   pop edi
// 006b9c23  c74640fdffffff       mov dword ptr [esi + 0x40], 0xfffffffd
// 006b9c2a  5e                   pop esi
// 006b9c2b  5b                   pop ebx
// 006b9c2c  c3                   ret 
// 006b9c2d  8b4644               mov eax, dword ptr [esi + 0x44]
// 006b9c30  894640               mov dword ptr [esi + 0x40], eax
// 006b9c33  8bc7                 mov eax, edi
// 006b9c35  5f                   pop edi
// 006b9c36  5e                   pop esi
// 006b9c37  5b                   pop ebx
// 006b9c38  c3                   ret 
// 006b9c39  53                   push ebx
// 006b9c3a  e801000300           call 0x6e9c40
// 006b9c3f  83c404               add esp, 4
// 006b9c42  8bc7                 mov eax, edi
// 006b9c44  5f                   pop edi
// 006b9c45  5e                   pop esi
// 006b9c46  5b                   pop ebx
// 006b9c47  c3                   ret 
// 006b9c48  8b7e44               mov edi, dword ptr [esi + 0x44]
// 006b9c4b  c1ef0a               shr edi, 0xa
// 006b9c4e  8bc7                 mov eax, edi
// 006b9c50  5f                   pop edi
// 006b9c51  5e                   pop esi
// 006b9c52  5b                   pop ebx
// 006b9c53  c3                   ret 
// 006b9c54  8b7e44               mov edi, dword ptr [esi + 0x44]
// 006b9c57  81e7ff030000         and edi, 0x3ff
// 006b9c5d  8bc7                 mov eax, edi
// 006b9c5f  5f                   pop edi
// 006b9c60  5e                   pop esi
// 006b9c61  5b                   pop ebx
// 006b9c62  c3                   ret 
// 006b9c63  8b442418             mov eax, dword ptr [esp + 0x18]
// 006b9c67  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006b9c6a  c1e00a               shl eax, 0xa
// 006b9c6d  3bc1                 cmp eax, ecx
// 006b9c6f  7709                 ja 0x6b9c7a
// 006b9c71  8bd1                 mov edx, ecx
// 006b9c73  2bd0                 sub edx, eax
// 006b9c75  895640               mov dword ptr [esi + 0x40], edx
// 006b9c78  eb03                 jmp 0x6b9c7d
// 006b9c7a  897e40               mov dword ptr [esi + 0x40], edi
// 006b9c7d  394e40               cmp dword ptr [esi + 0x40], ecx
// 006b9c80  774b                 ja 0x6b9ccd
// 006b9c82  53                   push ebx
// 006b9c83  e838ff0200           call 0x6e9bc0
// 006b9c88  83c404               add esp, 4
// 006b9c8b  807e1500             cmp byte ptr [esi + 0x15], 0
// 006b9c8f  740e                 je 0x6b9c9f
// 006b9c91  8b4640               mov eax, dword ptr [esi + 0x40]
// 006b9c94  3b4644               cmp eax, dword ptr [esi + 0x44]
// 006b9c97  76e9                 jbe 0x6b9c82
// 006b9c99  8bc7                 mov eax, edi
// 006b9c9b  5f                   pop edi
// 006b9c9c  5e                   pop esi
// 006b9c9d  5b                   pop ebx
// 006b9c9e  c3                   ret 
// 006b9c9f  bf01000000           mov edi, 1
// 006b9ca4  8bc7                 mov eax, edi
// 006b9ca6  5f                   pop edi
// 006b9ca7  5e                   pop esi
// 006b9ca8  5b                   pop ebx
// 006b9ca9  c3                   ret 
// 006b9caa  8b7e50               mov edi, dword ptr [esi + 0x50]
// 006b9cad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b9cb1  8bc7                 mov eax, edi
// 006b9cb3  5f                   pop edi
// 006b9cb4  894e50               mov dword ptr [esi + 0x50], ecx
// 006b9cb7  5e                   pop esi
// 006b9cb8  5b                   pop ebx
// 006b9cb9  c3                   ret 
// 006b9cba  8b7e54               mov edi, dword ptr [esi + 0x54]
// 006b9cbd  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b9cc1  8bc7                 mov eax, edi
// 006b9cc3  5f                   pop edi
// 006b9cc4  895654               mov dword ptr [esi + 0x54], edx
// 006b9cc7  5e                   pop esi
// 006b9cc8  5b                   pop ebx
// 006b9cc9  c3                   ret 
// 006b9cca  83cfff               or edi, 0xffffffff
// 006b9ccd  8bc7                 mov eax, edi
// 006b9ccf  5f                   pop edi
// 006b9cd0  5e                   pop esi
// 006b9cd1  5b                   pop ebx
// 006b9cd2  c3                   ret 
// 006b9cd3  90                   nop 
// 006b9cd4  209c6b002d9c6b       and byte ptr [ebx + ebp*2 + 0x6b9c2d00], bl
// 006b9cdb  0039                 add byte ptr [ecx], bh
// 006b9cdd  9c                   pushfd 
// 006b9cde  6b0048               imul eax, dword ptr [eax], 0x48
// 006b9ce1  9c                   pushfd 
// 006b9ce2  6b0054               imul eax, dword ptr [eax], 0x54
// 006b9ce5  9c                   pushfd 
// 006b9ce6  6b0063               imul eax, dword ptr [eax], 0x63
// 006b9ce9  9c                   pushfd 
// 006b9cea  6b00aa               imul eax, dword ptr [eax], -0x56
// 006b9ced  9c                   pushfd 
// 006b9cee  6b00ba               imul eax, dword ptr [eax], -0x46
// 006b9cf1  9c                   pushfd 
// library lua-5.1.4/lapi.c (function _lua_gc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
