// roc 2009-12 00624a20  unit: seg_00620000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624a20
//
// 00624a20  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624a23  57                   push edi
// 00624a24  8b7818               mov edi, dword ptr [eax + 0x18]
// 00624a27  50                   push eax
// 00624a28  8b470c               mov eax, dword ptr [edi + 0xc]
// 00624a2b  ffd0                 call eax
// 00624a2d  83c404               add esp, 4
// 00624a30  84c0                 test al, al
// 00624a32  7519                 jne 0x624a4d
// 00624a34  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00624a37  8b11                 mov edx, dword ptr [ecx]
// 00624a39  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 00624a40  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624a43  8b08                 mov ecx, dword ptr [eax]
// 00624a45  8b11                 mov edx, dword ptr [ecx]
// 00624a47  50                   push eax
// 00624a48  ffd2                 call edx
// 00624a4a  83c404               add esp, 4
// 00624a4d  8b07                 mov eax, dword ptr [edi]
// 00624a4f  894610               mov dword ptr [esi + 0x10], eax
// 00624a52  8b4f04               mov ecx, dword ptr [edi + 4]
// 00624a55  894e14               mov dword ptr [esi + 0x14], ecx
// 00624a58  5f                   pop edi
// 00624a59  c3                   ret 
// library jpeg-6b/jcphuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
