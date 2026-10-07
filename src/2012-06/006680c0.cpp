// roc 2012-06 006680c0  unit: seg_00660000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006680c0
//
// 006680c0  53                   push ebx
// 006680c1  56                   push esi
// 006680c2  8bf2                 mov esi, edx
// 006680c4  807e0c00             cmp byte ptr [esi + 0xc], 0
// 006680c8  57                   push edi
// 006680c9  8bd8                 mov ebx, eax
// 006680cb  8bf9                 mov edi, ecx
// 006680cd  7518                 jne 0x6680e7
// 006680cf  85db                 test ebx, ebx
// 006680d1  7614                 jbe 0x6680e7
// 006680d3  0fbe07               movsx eax, byte ptr [edi]
// 006680d6  6a01                 push 1
// 006680d8  50                   push eax
// 006680d9  e8a2feffff           call 0x667f80
// 006680de  83c408               add esp, 8
// 006680e1  47                   inc edi
// 006680e2  83eb01               sub ebx, 1
// 006680e5  75ec                 jne 0x6680d3
// 006680e7  5f                   pop edi
// 006680e8  5e                   pop esi
// 006680e9  5b                   pop ebx
// 006680ea  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_buffered_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
