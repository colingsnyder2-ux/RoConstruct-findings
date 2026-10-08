// from server: 100% by auto
// roc 2009-06 005a2b70  unit: seg_005a0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2b70
//
// 005a2b70  53                   push ebx
// 005a2b71  56                   push esi
// 005a2b72  8bf2                 mov esi, edx
// 005a2b74  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a2b78  57                   push edi
// 005a2b79  8bd8                 mov ebx, eax
// 005a2b7b  8bf9                 mov edi, ecx
// 005a2b7d  7518                 jne 0x5a2b97
// 005a2b7f  85db                 test ebx, ebx
// 005a2b81  7614                 jbe 0x5a2b97
// 005a2b83  0fbe07               movsx eax, byte ptr [edi]
// 005a2b86  6a01                 push 1
// 005a2b88  50                   push eax
// 005a2b89  e8a2feffff           call 0x5a2a30
// 005a2b8e  83c408               add esp, 8
// 005a2b91  47                   inc edi
// 005a2b92  83eb01               sub ebx, 1
// 005a2b95  75ec                 jne 0x5a2b83
// 005a2b97  5f                   pop edi
// 005a2b98  5e                   pop esi
// 005a2b99  5b                   pop ebx
// 005a2b9a  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_buffered_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
