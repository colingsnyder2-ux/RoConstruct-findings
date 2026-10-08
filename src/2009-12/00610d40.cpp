// roc 2009-12 00610d40  unit: seg_00610000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00610d40
//
// 00610d40  56                   push esi
// 00610d41  8b7008               mov esi, dword ptr [eax + 8]
// 00610d44  57                   push edi
// 00610d45  8b7814               mov edi, dword ptr [eax + 0x14]
// 00610d48  8bd1                 mov edx, ecx
// 00610d4a  c1ea08               shr edx, 8
// 00610d4d  88143e               mov byte ptr [esi + edi], dl
// 00610d50  8b7808               mov edi, dword ptr [eax + 8]
// 00610d53  be01000000           mov esi, 1
// 00610d58  017014               add dword ptr [eax + 0x14], esi
// 00610d5b  8b5014               mov edx, dword ptr [eax + 0x14]
// 00610d5e  880c3a               mov byte ptr [edx + edi], cl
// 00610d61  017014               add dword ptr [eax + 0x14], esi
// 00610d64  5f                   pop edi
// 00610d65  5e                   pop esi
// 00610d66  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
