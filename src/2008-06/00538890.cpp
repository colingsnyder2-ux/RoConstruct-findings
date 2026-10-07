// roc 2008-06 00538890  unit: seg_00530000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538890
//
// 00538890  53                   push ebx
// 00538891  56                   push esi
// 00538892  8bf2                 mov esi, edx
// 00538894  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538898  57                   push edi
// 00538899  8bd8                 mov ebx, eax
// 0053889b  8bf9                 mov edi, ecx
// 0053889d  7518                 jne 0x5388b7
// 0053889f  85db                 test ebx, ebx
// 005388a1  7614                 jbe 0x5388b7
// 005388a3  0fbe07               movsx eax, byte ptr [edi]
// 005388a6  6a01                 push 1
// 005388a8  50                   push eax
// 005388a9  e8a2feffff           call 0x538750
// 005388ae  83c408               add esp, 8
// 005388b1  47                   inc edi
// 005388b2  83eb01               sub ebx, 1
// 005388b5  75ec                 jne 0x5388a3
// 005388b7  5f                   pop edi
// 005388b8  5e                   pop esi
// 005388b9  5b                   pop ebx
// 005388ba  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_buffered_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
