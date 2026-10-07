// roc 2010-06 00586580  unit: seg_00580000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586580
//
// 00586580  8b4620               mov eax, dword ptr [esi + 0x20]
// 00586583  57                   push edi
// 00586584  8b7818               mov edi, dword ptr [eax + 0x18]
// 00586587  50                   push eax
// 00586588  8b470c               mov eax, dword ptr [edi + 0xc]
// 0058658b  ffd0                 call eax
// 0058658d  83c404               add esp, 4
// 00586590  84c0                 test al, al
// 00586592  7519                 jne 0x5865ad
// 00586594  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00586597  8b11                 mov edx, dword ptr [ecx]
// 00586599  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 005865a0  8b4620               mov eax, dword ptr [esi + 0x20]
// 005865a3  8b08                 mov ecx, dword ptr [eax]
// 005865a5  8b11                 mov edx, dword ptr [ecx]
// 005865a7  50                   push eax
// 005865a8  ffd2                 call edx
// 005865aa  83c404               add esp, 4
// 005865ad  8b07                 mov eax, dword ptr [edi]
// 005865af  894610               mov dword ptr [esi + 0x10], eax
// 005865b2  8b4f04               mov ecx, dword ptr [edi + 4]
// 005865b5  894e14               mov dword ptr [esi + 0x14], ecx
// 005865b8  5f                   pop edi
// 005865b9  c3                   ret 
// library jpeg-6b/jcphuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
