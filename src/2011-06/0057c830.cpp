// roc 2011-06 0057c830  unit: seg_00570000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c830
//
// 0057c830  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c833  57                   push edi
// 0057c834  8b7818               mov edi, dword ptr [eax + 0x18]
// 0057c837  50                   push eax
// 0057c838  8b470c               mov eax, dword ptr [edi + 0xc]
// 0057c83b  ffd0                 call eax
// 0057c83d  83c404               add esp, 4
// 0057c840  84c0                 test al, al
// 0057c842  7519                 jne 0x57c85d
// 0057c844  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057c847  8b11                 mov edx, dword ptr [ecx]
// 0057c849  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 0057c850  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057c853  8b08                 mov ecx, dword ptr [eax]
// 0057c855  8b11                 mov edx, dword ptr [ecx]
// 0057c857  50                   push eax
// 0057c858  ffd2                 call edx
// 0057c85a  83c404               add esp, 4
// 0057c85d  8b07                 mov eax, dword ptr [edi]
// 0057c85f  894610               mov dword ptr [esi + 0x10], eax
// 0057c862  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057c865  894e14               mov dword ptr [esi + 0x14], ecx
// 0057c868  5f                   pop edi
// 0057c869  c3                   ret 
// library jpeg-6b/jcphuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
