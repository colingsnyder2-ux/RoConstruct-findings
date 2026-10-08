// roc 2009-12 006283f0  unit: seg_00620000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006283f0
//
// 006283f0  56                   push esi
// 006283f1  8b742408             mov esi, dword ptr [esp + 8]
// 006283f5  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 006283fb  c6400c00             mov byte ptr [eax + 0xc], 0
// 006283ff  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 00628405  8b5104               mov edx, dword ptr [ecx + 4]
// 00628408  56                   push esi
// 00628409  ffd2                 call edx
// 0062840b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00628411  8b4808               mov ecx, dword ptr [eax + 8]
// 00628414  56                   push esi
// 00628415  ffd1                 call ecx
// 00628417  83c408               add esp, 8
// 0062841a  5e                   pop esi
// 0062841b  c3                   ret 
// library jpeg-6b/jcmaster.c (function _pass_startup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
