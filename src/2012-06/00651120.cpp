// from server: 100% by auto
// roc 2012-06 00651120  unit: seg_00650000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00651120
//
// 00651120  56                   push esi
// 00651121  8b7008               mov esi, dword ptr [eax + 8]
// 00651124  57                   push edi
// 00651125  8b7814               mov edi, dword ptr [eax + 0x14]
// 00651128  8bd1                 mov edx, ecx
// 0065112a  c1ea08               shr edx, 8
// 0065112d  88143e               mov byte ptr [esi + edi], dl
// 00651130  8b7808               mov edi, dword ptr [eax + 8]
// 00651133  be01000000           mov esi, 1
// 00651138  017014               add dword ptr [eax + 0x14], esi
// 0065113b  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065113e  880c3a               mov byte ptr [edx + edi], cl
// 00651141  017014               add dword ptr [eax + 0x14], esi
// 00651144  5f                   pop edi
// 00651145  5e                   pop esi
// 00651146  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
