// roc 2011-06 0057c9b0  unit: seg_00570000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c9b0
//
// 0057c9b0  53                   push ebx
// 0057c9b1  56                   push esi
// 0057c9b2  8bf2                 mov esi, edx
// 0057c9b4  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057c9b8  57                   push edi
// 0057c9b9  8bd8                 mov ebx, eax
// 0057c9bb  8bf9                 mov edi, ecx
// 0057c9bd  7518                 jne 0x57c9d7
// 0057c9bf  85db                 test ebx, ebx
// 0057c9c1  7614                 jbe 0x57c9d7
// 0057c9c3  0fbe07               movsx eax, byte ptr [edi]
// 0057c9c6  6a01                 push 1
// 0057c9c8  50                   push eax
// 0057c9c9  e8a2feffff           call 0x57c870
// 0057c9ce  83c408               add esp, 8
// 0057c9d1  47                   inc edi
// 0057c9d2  83eb01               sub ebx, 1
// 0057c9d5  75ec                 jne 0x57c9c3
// 0057c9d7  5f                   pop edi
// 0057c9d8  5e                   pop esi
// 0057c9d9  5b                   pop ebx
// 0057c9da  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_buffered_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
