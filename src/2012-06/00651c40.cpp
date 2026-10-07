// roc 2012-06 00651c40  unit: seg_00650000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00651c40
//
// 00651c40  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00651c43  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00651c46  55                   push ebp
// 00651c47  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00651c4b  8a1429               mov dl, byte ptr [ecx + ebp]
// 00651c4e  03c1                 add eax, ecx
// 00651c50  03cd                 add ecx, ebp
// 00651c52  57                   push edi
// 00651c53  8db802010000         lea edi, [eax + 0x102]
// 00651c59  3a10                 cmp dl, byte ptr [eax]
// 00651c5b  757a                 jne 0x651cd7
// 00651c5d  8a5101               mov dl, byte ptr [ecx + 1]
// 00651c60  3a5001               cmp dl, byte ptr [eax + 1]
// 00651c63  7572                 jne 0x651cd7
// 00651c65  83c002               add eax, 2
// 00651c68  83c102               add ecx, 2
// 00651c6b  eb03                 jmp 0x651c70
// 00651c6d  8d4900               lea ecx, [ecx]
// 00651c70  8a5001               mov dl, byte ptr [eax + 1]
// 00651c73  40                   inc eax
// 00651c74  41                   inc ecx
// 00651c75  3a11                 cmp dl, byte ptr [ecx]
// 00651c77  7543                 jne 0x651cbc
// 00651c79  8a5001               mov dl, byte ptr [eax + 1]
// 00651c7c  40                   inc eax
// 00651c7d  41                   inc ecx
// 00651c7e  3a11                 cmp dl, byte ptr [ecx]
// 00651c80  753a                 jne 0x651cbc
// 00651c82  8a5001               mov dl, byte ptr [eax + 1]
// 00651c85  40                   inc eax
// 00651c86  41                   inc ecx
// 00651c87  3a11                 cmp dl, byte ptr [ecx]
// 00651c89  7531                 jne 0x651cbc
// 00651c8b  8a5001               mov dl, byte ptr [eax + 1]
// 00651c8e  40                   inc eax
// 00651c8f  41                   inc ecx
// 00651c90  3a11                 cmp dl, byte ptr [ecx]
// 00651c92  7528                 jne 0x651cbc
// 00651c94  8a5001               mov dl, byte ptr [eax + 1]
// 00651c97  40                   inc eax
// 00651c98  41                   inc ecx
// 00651c99  3a11                 cmp dl, byte ptr [ecx]
// 00651c9b  751f                 jne 0x651cbc
// 00651c9d  8a5001               mov dl, byte ptr [eax + 1]
// 00651ca0  40                   inc eax
// 00651ca1  41                   inc ecx
// 00651ca2  3a11                 cmp dl, byte ptr [ecx]
// 00651ca4  7516                 jne 0x651cbc
// 00651ca6  8a5001               mov dl, byte ptr [eax + 1]
// 00651ca9  40                   inc eax
// 00651caa  41                   inc ecx
// 00651cab  3a11                 cmp dl, byte ptr [ecx]
// 00651cad  750d                 jne 0x651cbc
// 00651caf  8a5001               mov dl, byte ptr [eax + 1]
// 00651cb2  40                   inc eax
// 00651cb3  41                   inc ecx
// 00651cb4  3a11                 cmp dl, byte ptr [ecx]
// 00651cb6  7504                 jne 0x651cbc
// 00651cb8  3bc7                 cmp eax, edi
// 00651cba  72b4                 jb 0x651c70
// 00651cbc  2bc7                 sub eax, edi
// 00651cbe  0502010000           add eax, 0x102
// 00651cc3  83f803               cmp eax, 3
// 00651cc6  7c0f                 jl 0x651cd7
// 00651cc8  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00651ccb  896e70               mov dword ptr [esi + 0x70], ebp
// 00651cce  3bc1                 cmp eax, ecx
// 00651cd0  760a                 jbe 0x651cdc
// 00651cd2  5f                   pop edi
// 00651cd3  8bc1                 mov eax, ecx
// 00651cd5  5d                   pop ebp
// 00651cd6  c3                   ret 
// 00651cd7  b802000000           mov eax, 2
// 00651cdc  5f                   pop edi
// 00651cdd  5d                   pop ebp
// 00651cde  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
