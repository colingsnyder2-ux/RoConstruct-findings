// roc 2007-03 0072be20  unit: seg_00720000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072be20
//
// 0072be20  56                   push esi
// 0072be21  8b7008               mov esi, dword ptr [eax + 8]
// 0072be24  57                   push edi
// 0072be25  8b7814               mov edi, dword ptr [eax + 0x14]
// 0072be28  8bd1                 mov edx, ecx
// 0072be2a  c1ea08               shr edx, 8
// 0072be2d  88143e               mov byte ptr [esi + edi], dl
// 0072be30  8b7808               mov edi, dword ptr [eax + 8]
// 0072be33  be01000000           mov esi, 1
// 0072be38  017014               add dword ptr [eax + 0x14], esi
// 0072be3b  8b5014               mov edx, dword ptr [eax + 0x14]
// 0072be3e  880c3a               mov byte ptr [edx + edi], cl
// 0072be41  017014               add dword ptr [eax + 0x14], esi
// 0072be44  5f                   pop edi
// 0072be45  5e                   pop esi
// 0072be46  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
