// roc 2009-12 00611860  unit: seg_00610000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00611860
//
// 00611860  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00611863  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00611866  55                   push ebp
// 00611867  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0061186b  8a1429               mov dl, byte ptr [ecx + ebp]
// 0061186e  03c1                 add eax, ecx
// 00611870  03cd                 add ecx, ebp
// 00611872  57                   push edi
// 00611873  8db802010000         lea edi, [eax + 0x102]
// 00611879  3a10                 cmp dl, byte ptr [eax]
// 0061187b  757a                 jne 0x6118f7
// 0061187d  8a5101               mov dl, byte ptr [ecx + 1]
// 00611880  3a5001               cmp dl, byte ptr [eax + 1]
// 00611883  7572                 jne 0x6118f7
// 00611885  83c002               add eax, 2
// 00611888  83c102               add ecx, 2
// 0061188b  eb03                 jmp 0x611890
// 0061188d  8d4900               lea ecx, [ecx]
// 00611890  8a5001               mov dl, byte ptr [eax + 1]
// 00611893  40                   inc eax
// 00611894  41                   inc ecx
// 00611895  3a11                 cmp dl, byte ptr [ecx]
// 00611897  7543                 jne 0x6118dc
// 00611899  8a5001               mov dl, byte ptr [eax + 1]
// 0061189c  40                   inc eax
// 0061189d  41                   inc ecx
// 0061189e  3a11                 cmp dl, byte ptr [ecx]
// 006118a0  753a                 jne 0x6118dc
// 006118a2  8a5001               mov dl, byte ptr [eax + 1]
// 006118a5  40                   inc eax
// 006118a6  41                   inc ecx
// 006118a7  3a11                 cmp dl, byte ptr [ecx]
// 006118a9  7531                 jne 0x6118dc
// 006118ab  8a5001               mov dl, byte ptr [eax + 1]
// 006118ae  40                   inc eax
// 006118af  41                   inc ecx
// 006118b0  3a11                 cmp dl, byte ptr [ecx]
// 006118b2  7528                 jne 0x6118dc
// 006118b4  8a5001               mov dl, byte ptr [eax + 1]
// 006118b7  40                   inc eax
// 006118b8  41                   inc ecx
// 006118b9  3a11                 cmp dl, byte ptr [ecx]
// 006118bb  751f                 jne 0x6118dc
// 006118bd  8a5001               mov dl, byte ptr [eax + 1]
// 006118c0  40                   inc eax
// 006118c1  41                   inc ecx
// 006118c2  3a11                 cmp dl, byte ptr [ecx]
// 006118c4  7516                 jne 0x6118dc
// 006118c6  8a5001               mov dl, byte ptr [eax + 1]
// 006118c9  40                   inc eax
// 006118ca  41                   inc ecx
// 006118cb  3a11                 cmp dl, byte ptr [ecx]
// 006118cd  750d                 jne 0x6118dc
// 006118cf  8a5001               mov dl, byte ptr [eax + 1]
// 006118d2  40                   inc eax
// 006118d3  41                   inc ecx
// 006118d4  3a11                 cmp dl, byte ptr [ecx]
// 006118d6  7504                 jne 0x6118dc
// 006118d8  3bc7                 cmp eax, edi
// 006118da  72b4                 jb 0x611890
// 006118dc  2bc7                 sub eax, edi
// 006118de  0502010000           add eax, 0x102
// 006118e3  83f803               cmp eax, 3
// 006118e6  7c0f                 jl 0x6118f7
// 006118e8  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 006118eb  896e70               mov dword ptr [esi + 0x70], ebp
// 006118ee  3bc1                 cmp eax, ecx
// 006118f0  760a                 jbe 0x6118fc
// 006118f2  5f                   pop edi
// 006118f3  8bc1                 mov eax, ecx
// 006118f5  5d                   pop ebp
// 006118f6  c3                   ret 
// 006118f7  b802000000           mov eax, 2
// 006118fc  5f                   pop edi
// 006118fd  5d                   pop ebp
// 006118fe  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
