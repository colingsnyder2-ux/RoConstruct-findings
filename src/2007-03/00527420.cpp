// roc 2007-03 00527420  unit: seg_00520000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527420
//
// 00527420  8b4620               mov eax, dword ptr [esi + 0x20]
// 00527423  57                   push edi
// 00527424  8b7818               mov edi, dword ptr [eax + 0x18]
// 00527427  50                   push eax
// 00527428  8b470c               mov eax, dword ptr [edi + 0xc]
// 0052742b  ffd0                 call eax
// 0052742d  83c404               add esp, 4
// 00527430  84c0                 test al, al
// 00527432  7519                 jne 0x52744d
// 00527434  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00527437  8b11                 mov edx, dword ptr [ecx]
// 00527439  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 00527440  8b4620               mov eax, dword ptr [esi + 0x20]
// 00527443  8b08                 mov ecx, dword ptr [eax]
// 00527445  8b11                 mov edx, dword ptr [ecx]
// 00527447  50                   push eax
// 00527448  ffd2                 call edx
// 0052744a  83c404               add esp, 4
// 0052744d  8b07                 mov eax, dword ptr [edi]
// 0052744f  894610               mov dword ptr [esi + 0x10], eax
// 00527452  8b4f04               mov ecx, dword ptr [edi + 4]
// 00527455  894e14               mov dword ptr [esi + 0x14], ecx
// 00527458  5f                   pop edi
// 00527459  c3                   ret 
// library jpeg-6b/jcphuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
