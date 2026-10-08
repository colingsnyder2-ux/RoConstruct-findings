// from server: 100% by auto
// roc 2008-06 007a5320  unit: CXTIconHandle  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5320
//
// 007a5320  53                   push ebx
// 007a5321  56                   push esi
// 007a5322  57                   push edi
// 007a5323  8bd9                 mov ebx, ecx
// 007a5325  8bf2                 mov esi, edx
// 007a5327  e894ffffff           call 0x7a52c0
// 007a532c  837c241000           cmp dword ptr [esp + 0x10], 0
// 007a5331  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 007a533b  bf01000000           mov edi, 1
// 007a5340  7442                 je 0x7a5384
// 007a5342  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a5345  8b5008               mov edx, dword ptr [eax + 8]
// 007a5348  881c11               mov byte ptr [ecx + edx], bl
// 007a534b  017814               add dword ptr [eax + 0x14], edi
// 007a534e  8b5008               mov edx, dword ptr [eax + 8]
// 007a5351  55                   push ebp
// 007a5352  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007a5355  8bcb                 mov ecx, ebx
// 007a5357  c1e908               shr ecx, 8
// 007a535a  880c2a               mov byte ptr [edx + ebp], cl
// 007a535d  017814               add dword ptr [eax + 0x14], edi
// 007a5360  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007a5363  8b5008               mov edx, dword ptr [eax + 8]
// 007a5366  8acb                 mov cl, bl
// 007a5368  f6d1                 not cl
// 007a536a  880c2a               mov byte ptr [edx + ebp], cl
// 007a536d  017814               add dword ptr [eax + 0x14], edi
// 007a5370  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007a5373  8b5008               mov edx, dword ptr [eax + 8]
// 007a5376  8bcb                 mov ecx, ebx
// 007a5378  f7d1                 not ecx
// 007a537a  c1e908               shr ecx, 8
// 007a537d  880c2a               mov byte ptr [edx + ebp], cl
// 007a5380  017814               add dword ptr [eax + 0x14], edi
// 007a5383  5d                   pop ebp
// 007a5384  85db                 test ebx, ebx
// 007a5386  741e                 je 0x7a53a6
// 007a5388  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a538b  8b5008               mov edx, dword ptr [eax + 8]
// 007a538e  2bdf                 sub ebx, edi
// 007a5390  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a5394  8a1e                 mov bl, byte ptr [esi]
// 007a5396  881c11               mov byte ptr [ecx + edx], bl
// 007a5399  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007a539d  017814               add dword ptr [eax + 0x14], edi
// 007a53a0  03f7                 add esi, edi
// 007a53a2  85db                 test ebx, ebx
// 007a53a4  75e2                 jne 0x7a5388
// 007a53a6  5f                   pop edi
// 007a53a7  5e                   pop esi
// 007a53a8  5b                   pop ebx
// 007a53a9  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
