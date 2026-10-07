// roc 2008-06 00538710  unit: seg_00530000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538710
//
// 00538710  8b4620               mov eax, dword ptr [esi + 0x20]
// 00538713  57                   push edi
// 00538714  8b7818               mov edi, dword ptr [eax + 0x18]
// 00538717  50                   push eax
// 00538718  8b470c               mov eax, dword ptr [edi + 0xc]
// 0053871b  ffd0                 call eax
// 0053871d  83c404               add esp, 4
// 00538720  84c0                 test al, al
// 00538722  7519                 jne 0x53873d
// 00538724  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00538727  8b11                 mov edx, dword ptr [ecx]
// 00538729  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 00538730  8b4620               mov eax, dword ptr [esi + 0x20]
// 00538733  8b08                 mov ecx, dword ptr [eax]
// 00538735  8b11                 mov edx, dword ptr [ecx]
// 00538737  50                   push eax
// 00538738  ffd2                 call edx
// 0053873a  83c404               add esp, 4
// 0053873d  8b07                 mov eax, dword ptr [edi]
// 0053873f  894610               mov dword ptr [esi + 0x10], eax
// 00538742  8b4f04               mov ecx, dword ptr [edi + 4]
// 00538745  894e14               mov dword ptr [esi + 0x14], ecx
// 00538748  5f                   pop edi
// 00538749  c3                   ret 
// library jpeg-6b/jcphuff.c (function _dump_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
