// roc 2010-06 00573180  unit: seg_00570000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00573180
//
// 00573180  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00573183  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00573186  55                   push ebp
// 00573187  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0057318b  8a1429               mov dl, byte ptr [ecx + ebp]
// 0057318e  03c1                 add eax, ecx
// 00573190  03cd                 add ecx, ebp
// 00573192  57                   push edi
// 00573193  8db802010000         lea edi, [eax + 0x102]
// 00573199  3a10                 cmp dl, byte ptr [eax]
// 0057319b  757a                 jne 0x573217
// 0057319d  8a5101               mov dl, byte ptr [ecx + 1]
// 005731a0  3a5001               cmp dl, byte ptr [eax + 1]
// 005731a3  7572                 jne 0x573217
// 005731a5  83c002               add eax, 2
// 005731a8  83c102               add ecx, 2
// 005731ab  eb03                 jmp 0x5731b0
// 005731ad  8d4900               lea ecx, [ecx]
// 005731b0  8a5001               mov dl, byte ptr [eax + 1]
// 005731b3  40                   inc eax
// 005731b4  41                   inc ecx
// 005731b5  3a11                 cmp dl, byte ptr [ecx]
// 005731b7  7543                 jne 0x5731fc
// 005731b9  8a5001               mov dl, byte ptr [eax + 1]
// 005731bc  40                   inc eax
// 005731bd  41                   inc ecx
// 005731be  3a11                 cmp dl, byte ptr [ecx]
// 005731c0  753a                 jne 0x5731fc
// 005731c2  8a5001               mov dl, byte ptr [eax + 1]
// 005731c5  40                   inc eax
// 005731c6  41                   inc ecx
// 005731c7  3a11                 cmp dl, byte ptr [ecx]
// 005731c9  7531                 jne 0x5731fc
// 005731cb  8a5001               mov dl, byte ptr [eax + 1]
// 005731ce  40                   inc eax
// 005731cf  41                   inc ecx
// 005731d0  3a11                 cmp dl, byte ptr [ecx]
// 005731d2  7528                 jne 0x5731fc
// 005731d4  8a5001               mov dl, byte ptr [eax + 1]
// 005731d7  40                   inc eax
// 005731d8  41                   inc ecx
// 005731d9  3a11                 cmp dl, byte ptr [ecx]
// 005731db  751f                 jne 0x5731fc
// 005731dd  8a5001               mov dl, byte ptr [eax + 1]
// 005731e0  40                   inc eax
// 005731e1  41                   inc ecx
// 005731e2  3a11                 cmp dl, byte ptr [ecx]
// 005731e4  7516                 jne 0x5731fc
// 005731e6  8a5001               mov dl, byte ptr [eax + 1]
// 005731e9  40                   inc eax
// 005731ea  41                   inc ecx
// 005731eb  3a11                 cmp dl, byte ptr [ecx]
// 005731ed  750d                 jne 0x5731fc
// 005731ef  8a5001               mov dl, byte ptr [eax + 1]
// 005731f2  40                   inc eax
// 005731f3  41                   inc ecx
// 005731f4  3a11                 cmp dl, byte ptr [ecx]
// 005731f6  7504                 jne 0x5731fc
// 005731f8  3bc7                 cmp eax, edi
// 005731fa  72b4                 jb 0x5731b0
// 005731fc  2bc7                 sub eax, edi
// 005731fe  0502010000           add eax, 0x102
// 00573203  83f803               cmp eax, 3
// 00573206  7c0f                 jl 0x573217
// 00573208  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0057320b  896e70               mov dword ptr [esi + 0x70], ebp
// 0057320e  3bc1                 cmp eax, ecx
// 00573210  760a                 jbe 0x57321c
// 00573212  5f                   pop edi
// 00573213  8bc1                 mov eax, ecx
// 00573215  5d                   pop ebp
// 00573216  c3                   ret 
// 00573217  b802000000           mov eax, 2
// 0057321c  5f                   pop edi
// 0057321d  5d                   pop ebp
// 0057321e  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
