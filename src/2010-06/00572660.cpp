// roc 2010-06 00572660  unit: seg_00570000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00572660
//
// 00572660  56                   push esi
// 00572661  8b7008               mov esi, dword ptr [eax + 8]
// 00572664  57                   push edi
// 00572665  8b7814               mov edi, dword ptr [eax + 0x14]
// 00572668  8bd1                 mov edx, ecx
// 0057266a  c1ea08               shr edx, 8
// 0057266d  88143e               mov byte ptr [esi + edi], dl
// 00572670  8b7808               mov edi, dword ptr [eax + 8]
// 00572673  be01000000           mov esi, 1
// 00572678  017014               add dword ptr [eax + 0x14], esi
// 0057267b  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057267e  880c3a               mov byte ptr [edx + edi], cl
// 00572681  017014               add dword ptr [eax + 0x14], esi
// 00572684  5f                   pop edi
// 00572685  5e                   pop esi
// 00572686  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
