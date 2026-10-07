// roc 2010-06 00586700  unit: seg_00580000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586700
//
// 00586700  53                   push ebx
// 00586701  56                   push esi
// 00586702  8bf2                 mov esi, edx
// 00586704  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586708  57                   push edi
// 00586709  8bd8                 mov ebx, eax
// 0058670b  8bf9                 mov edi, ecx
// 0058670d  7518                 jne 0x586727
// 0058670f  85db                 test ebx, ebx
// 00586711  7614                 jbe 0x586727
// 00586713  0fbe07               movsx eax, byte ptr [edi]
// 00586716  6a01                 push 1
// 00586718  50                   push eax
// 00586719  e8a2feffff           call 0x5865c0
// 0058671e  83c408               add esp, 8
// 00586721  47                   inc edi
// 00586722  83eb01               sub ebx, 1
// 00586725  75ec                 jne 0x586713
// 00586727  5f                   pop edi
// 00586728  5e                   pop esi
// 00586729  5b                   pop ebx
// 0058672a  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_buffered_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
