// roc 2012-06 0066b910  unit: seg_00660000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066b910
//
// 0066b910  56                   push esi
// 0066b911  8b742408             mov esi, dword ptr [esp + 8]
// 0066b915  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0066b91b  c6400c00             mov byte ptr [eax + 0xc], 0
// 0066b91f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0066b925  8b5104               mov edx, dword ptr [ecx + 4]
// 0066b928  56                   push esi
// 0066b929  ffd2                 call edx
// 0066b92b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0066b931  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b934  56                   push esi
// 0066b935  ffd1                 call ecx
// 0066b937  83c408               add esp, 8
// 0066b93a  5e                   pop esi
// 0066b93b  c3                   ret 
// library jpeg-6b/jcmaster.c (function _pass_startup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
