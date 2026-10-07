// roc 2012-06 00667f40  unit: seg_00660000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667f40
//
// 00667f40  8b4620               mov eax, dword ptr [esi + 0x20]
// 00667f43  57                   push edi
// 00667f44  8b7818               mov edi, dword ptr [eax + 0x18]
// 00667f47  50                   push eax
// 00667f48  8b470c               mov eax, dword ptr [edi + 0xc]
// 00667f4b  ffd0                 call eax
// 00667f4d  83c404               add esp, 4
// 00667f50  84c0                 test al, al
// 00667f52  7519                 jne 0x667f6d
// 00667f54  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00667f57  8b11                 mov edx, dword ptr [ecx]
// 00667f59  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 00667f60  8b4620               mov eax, dword ptr [esi + 0x20]
// 00667f63  8b08                 mov ecx, dword ptr [eax]
// 00667f65  8b11                 mov edx, dword ptr [ecx]
// 00667f67  50                   push eax
// 00667f68  ffd2                 call edx
// 00667f6a  83c404               add esp, 4
// 00667f6d  8b07                 mov eax, dword ptr [edi]
// 00667f6f  894610               mov dword ptr [esi + 0x10], eax
// 00667f72  8b4f04               mov ecx, dword ptr [edi + 4]
// 00667f75  894e14               mov dword ptr [esi + 0x14], ecx
// 00667f78  5f                   pop edi
// 00667f79  c3                   ret 
// library jpeg-6b/jcphuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
