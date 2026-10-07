// roc 2009-06 005a6440  unit: seg_005a0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a6440
//
// 005a6440  56                   push esi
// 005a6441  8b742408             mov esi, dword ptr [esp + 8]
// 005a6445  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005a644b  c6400c00             mov byte ptr [eax + 0xc], 0
// 005a644f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 005a6455  8b5104               mov edx, dword ptr [ecx + 4]
// 005a6458  56                   push esi
// 005a6459  ffd2                 call edx
// 005a645b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 005a6461  8b4808               mov ecx, dword ptr [eax + 8]
// 005a6464  56                   push esi
// 005a6465  ffd1                 call ecx
// 005a6467  83c408               add esp, 8
// 005a646a  5e                   pop esi
// 005a646b  c3                   ret 
// library jpeg-6b/jcmaster.c (function _pass_startup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
