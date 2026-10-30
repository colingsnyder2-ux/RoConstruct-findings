// roc 2011-06 007631e0  unit: seg_00760000  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007631e0
//
// 007631e0  8b442408             mov eax, dword ptr [esp + 8]
// 007631e4  53                   push ebx
// 007631e5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007631e9  56                   push esi
// 007631ea  8b7310               mov esi, dword ptr [ebx + 0x10]
// 007631ed  57                   push edi
// 007631ee  33ff                 xor edi, edi
// 007631f0  83f807               cmp eax, 7
// 007631f3  0f87b1000000         ja 0x7632aa
// 007631f9  ff2485b4327600       jmp dword ptr [eax*4 + 0x7632b4]
// 00763200  8bc7                 mov eax, edi
// 00763202  5f                   pop edi
// 00763203  c74640fdffffff       mov dword ptr [esi + 0x40], 0xfffffffd
// 0076320a  5e                   pop esi
// 0076320b  5b                   pop ebx
// 0076320c  c3                   ret 
// 0076320d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00763210  894640               mov dword ptr [esi + 0x40], eax
// 00763213  8bc7                 mov eax, edi
// 00763215  5f                   pop edi
// 00763216  5e                   pop esi
// 00763217  5b                   pop ebx
// 00763218  c3                   ret 
// 00763219  53                   push ebx
// 0076321a  e801400700           call 0x7d7220
// 0076321f  83c404               add esp, 4
// 00763222  8bc7                 mov eax, edi
// 00763224  5f                   pop edi
// 00763225  5e                   pop esi
// 00763226  5b                   pop ebx
// 00763227  c3                   ret 
// 00763228  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0076322b  c1ef0a               shr edi, 0xa
// 0076322e  8bc7                 mov eax, edi
// 00763230  5f                   pop edi
// 00763231  5e                   pop esi
// 00763232  5b                   pop ebx
// 00763233  c3                   ret 
// 00763234  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00763237  81e7ff030000         and edi, 0x3ff
// 0076323d  8bc7                 mov eax, edi
// 0076323f  5f                   pop edi
// 00763240  5e                   pop esi
// 00763241  5b                   pop ebx
// 00763242  c3                   ret 
// 00763243  8b442418             mov eax, dword ptr [esp + 0x18]
// 00763247  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0076324a  c1e00a               shl eax, 0xa
// 0076324d  3bc1                 cmp eax, ecx
// 0076324f  7709                 ja 0x76325a
// 00763251  8bd1                 mov edx, ecx
// 00763253  2bd0                 sub edx, eax
// 00763255  895640               mov dword ptr [esi + 0x40], edx
// 00763258  eb03                 jmp 0x76325d
// 0076325a  897e40               mov dword ptr [esi + 0x40], edi
// 0076325d  394e40               cmp dword ptr [esi + 0x40], ecx
// 00763260  774b                 ja 0x7632ad
// 00763262  53                   push ebx
// 00763263  e8383f0700           call 0x7d71a0
// 00763268  83c404               add esp, 4
// 0076326b  807e1500             cmp byte ptr [esi + 0x15], 0
// 0076326f  740e                 je 0x76327f
// 00763271  8b4640               mov eax, dword ptr [esi + 0x40]
// 00763274  3b4644               cmp eax, dword ptr [esi + 0x44]
// 00763277  76e9                 jbe 0x763262
// 00763279  8bc7                 mov eax, edi
// 0076327b  5f                   pop edi
// 0076327c  5e                   pop esi
// 0076327d  5b                   pop ebx
// 0076327e  c3                   ret 
// 0076327f  bf01000000           mov edi, 1
// 00763284  8bc7                 mov eax, edi
// 00763286  5f                   pop edi
// 00763287  5e                   pop esi
// 00763288  5b                   pop ebx
// 00763289  c3                   ret 
// 0076328a  8b7e50               mov edi, dword ptr [esi + 0x50]
// 0076328d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00763291  8bc7                 mov eax, edi
// 00763293  5f                   pop edi
// 00763294  894e50               mov dword ptr [esi + 0x50], ecx
// 00763297  5e                   pop esi
// 00763298  5b                   pop ebx
// 00763299  c3                   ret 
// 0076329a  8b7e54               mov edi, dword ptr [esi + 0x54]
// 0076329d  8b542418             mov edx, dword ptr [esp + 0x18]
// 007632a1  8bc7                 mov eax, edi
// 007632a3  5f                   pop edi
// 007632a4  895654               mov dword ptr [esi + 0x54], edx
// 007632a7  5e                   pop esi
// 007632a8  5b                   pop ebx
// 007632a9  c3                   ret 
// 007632aa  83cfff               or edi, 0xffffffff
// 007632ad  8bc7                 mov eax, edi
// 007632af  5f                   pop edi
// 007632b0  5e                   pop esi
// 007632b1  5b                   pop ebx
// 007632b2  c3                   ret 
// 007632b3  90                   nop 
// 007632b4  0032                 add byte ptr [edx], dh
// 007632b6  7600                 jbe 0x7632b8
// 007632b8  0d32760019           or eax, 0x19007632
// 007632bd  327600               xor dh, byte ptr [esi]
// 007632c0  2832                 sub byte ptr [edx], dh
// 007632c2  7600                 jbe 0x7632c4
// 007632c4  3432                 xor al, 0x32
// 007632c6  7600                 jbe 0x7632c8
// 007632c8  43                   inc ebx
// 007632c9  327600               xor dh, byte ptr [esi]
// 007632cc  8a32                 mov dh, byte ptr [edx]
// 007632ce  7600                 jbe 0x7632d0
// library lua-5.1.4/lapi.c (function _lua_gc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
