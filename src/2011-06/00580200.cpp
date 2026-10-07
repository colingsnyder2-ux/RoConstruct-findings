// roc 2011-06 00580200  unit: seg_00580000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00580200
//
// 00580200  56                   push esi
// 00580201  8b742408             mov esi, dword ptr [esp + 8]
// 00580205  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0058020b  c6400c00             mov byte ptr [eax + 0xc], 0
// 0058020f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 00580215  8b5104               mov edx, dword ptr [ecx + 4]
// 00580218  56                   push esi
// 00580219  ffd2                 call edx
// 0058021b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00580221  8b4808               mov ecx, dword ptr [eax + 8]
// 00580224  56                   push esi
// 00580225  ffd1                 call ecx
// 00580227  83c408               add esp, 8
// 0058022a  5e                   pop esi
// 0058022b  c3                   ret 
// library jpeg-6b/jcmaster.c (function _pass_startup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
