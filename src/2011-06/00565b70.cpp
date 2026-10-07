// roc 2011-06 00565b70  unit: G3D::Random  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00565b70
//
// 00565b70  56                   push esi
// 00565b71  8b7008               mov esi, dword ptr [eax + 8]
// 00565b74  57                   push edi
// 00565b75  8b7814               mov edi, dword ptr [eax + 0x14]
// 00565b78  8bd1                 mov edx, ecx
// 00565b7a  c1ea08               shr edx, 8
// 00565b7d  88143e               mov byte ptr [esi + edi], dl
// 00565b80  8b7808               mov edi, dword ptr [eax + 8]
// 00565b83  be01000000           mov esi, 1
// 00565b88  017014               add dword ptr [eax + 0x14], esi
// 00565b8b  8b5014               mov edx, dword ptr [eax + 0x14]
// 00565b8e  880c3a               mov byte ptr [edx + edi], cl
// 00565b91  017014               add dword ptr [eax + 0x14], esi
// 00565b94  5f                   pop edi
// 00565b95  5e                   pop esi
// 00565b96  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
