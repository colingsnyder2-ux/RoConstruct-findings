// roc 2009-06 005a5720  unit: seg_005a0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5720
//
// 005a5720  836c241401           sub dword ptr [esp + 0x14], 1
// 005a5725  8b442404             mov eax, dword ptr [esp + 4]
// 005a5729  57                   push edi
// 005a572a  8b781c               mov edi, dword ptr [eax + 0x1c]
// 005a572d  8b4024               mov eax, dword ptr [eax + 0x24]
// 005a5730  89442408             mov dword ptr [esp + 8], eax
// 005a5734  7842                 js 0x5a5778
// 005a5736  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a573a  53                   push ebx
// 005a573b  55                   push ebp
// 005a573c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a5740  03d2                 add edx, edx
// 005a5742  56                   push esi
// 005a5743  03d2                 add edx, edx
// 005a5745  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a5749  8b00                 mov eax, dword ptr [eax]
// 005a574b  8b3402               mov esi, dword ptr [edx + eax]
// 005a574e  8b4d00               mov ecx, dword ptr [ebp]
// 005a5751  83c504               add ebp, 4
// 005a5754  83c204               add edx, 4
// 005a5757  33c0                 xor eax, eax
// 005a5759  85ff                 test edi, edi
// 005a575b  7611                 jbe 0x5a576e
// 005a575d  8d4900               lea ecx, [ecx]
// 005a5760  8a19                 mov bl, byte ptr [ecx]
// 005a5762  034c2414             add ecx, dword ptr [esp + 0x14]
// 005a5766  881c30               mov byte ptr [eax + esi], bl
// 005a5769  40                   inc eax
// 005a576a  3bc7                 cmp eax, edi
// 005a576c  72f2                 jb 0x5a5760
// 005a576e  836c242401           sub dword ptr [esp + 0x24], 1
// 005a5773  79d0                 jns 0x5a5745
// 005a5775  5e                   pop esi
// 005a5776  5d                   pop ebp
// 005a5777  5b                   pop ebx
// 005a5778  5f                   pop edi
// 005a5779  c3                   ret 
// library jpeg-6b/jccolor.c (function _grayscale_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
