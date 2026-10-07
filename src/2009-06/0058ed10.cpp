// roc 2009-06 0058ed10  unit: seg_00580000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058ed10
//
// 0058ed10  56                   push esi
// 0058ed11  8b7008               mov esi, dword ptr [eax + 8]
// 0058ed14  57                   push edi
// 0058ed15  8b7814               mov edi, dword ptr [eax + 0x14]
// 0058ed18  8bd1                 mov edx, ecx
// 0058ed1a  c1ea08               shr edx, 8
// 0058ed1d  88143e               mov byte ptr [esi + edi], dl
// 0058ed20  8b7808               mov edi, dword ptr [eax + 8]
// 0058ed23  be01000000           mov esi, 1
// 0058ed28  017014               add dword ptr [eax + 0x14], esi
// 0058ed2b  8b5014               mov edx, dword ptr [eax + 0x14]
// 0058ed2e  880c3a               mov byte ptr [edx + edi], cl
// 0058ed31  017014               add dword ptr [eax + 0x14], esi
// 0058ed34  5f                   pop edi
// 0058ed35  5e                   pop esi
// 0058ed36  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
