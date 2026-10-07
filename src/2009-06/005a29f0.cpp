// roc 2009-06 005a29f0  unit: seg_005a0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a29f0
//
// 005a29f0  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a29f3  57                   push edi
// 005a29f4  8b7818               mov edi, dword ptr [eax + 0x18]
// 005a29f7  50                   push eax
// 005a29f8  8b470c               mov eax, dword ptr [edi + 0xc]
// 005a29fb  ffd0                 call eax
// 005a29fd  83c404               add esp, 4
// 005a2a00  84c0                 test al, al
// 005a2a02  7519                 jne 0x5a2a1d
// 005a2a04  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005a2a07  8b11                 mov edx, dword ptr [ecx]
// 005a2a09  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 005a2a10  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2a13  8b08                 mov ecx, dword ptr [eax]
// 005a2a15  8b11                 mov edx, dword ptr [ecx]
// 005a2a17  50                   push eax
// 005a2a18  ffd2                 call edx
// 005a2a1a  83c404               add esp, 4
// 005a2a1d  8b07                 mov eax, dword ptr [edi]
// 005a2a1f  894610               mov dword ptr [esi + 0x10], eax
// 005a2a22  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a2a25  894e14               mov dword ptr [esi + 0x14], ecx
// 005a2a28  5f                   pop edi
// 005a2a29  c3                   ret 
// library jpeg-6b/jcphuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
