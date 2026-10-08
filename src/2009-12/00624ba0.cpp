// roc 2009-12 00624ba0  unit: seg_00620000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624ba0
//
// 00624ba0  53                   push ebx
// 00624ba1  56                   push esi
// 00624ba2  8bf2                 mov esi, edx
// 00624ba4  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00624ba8  57                   push edi
// 00624ba9  8bd8                 mov ebx, eax
// 00624bab  8bf9                 mov edi, ecx
// 00624bad  7518                 jne 0x624bc7
// 00624baf  85db                 test ebx, ebx
// 00624bb1  7614                 jbe 0x624bc7
// 00624bb3  0fbe07               movsx eax, byte ptr [edi]
// 00624bb6  6a01                 push 1
// 00624bb8  50                   push eax
// 00624bb9  e8a2feffff           call 0x624a60
// 00624bbe  83c408               add esp, 8
// 00624bc1  47                   inc edi
// 00624bc2  83eb01               sub ebx, 1
// 00624bc5  75ec                 jne 0x624bb3
// 00624bc7  5f                   pop edi
// 00624bc8  5e                   pop esi
// 00624bc9  5b                   pop ebx
// 00624bca  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_buffered_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
