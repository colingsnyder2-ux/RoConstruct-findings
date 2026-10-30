// from server: 100% by auto
// roc 2010-06 00589f50  unit: seg_00580000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589f50
//
// 00589f50  56                   push esi
// 00589f51  8b742408             mov esi, dword ptr [esp + 8]
// 00589f55  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00589f5b  c6400c00             mov byte ptr [eax + 0xc], 0
// 00589f5f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 00589f65  8b5104               mov edx, dword ptr [ecx + 4]
// 00589f68  56                   push esi
// 00589f69  ffd2                 call edx
// 00589f6b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00589f71  8b4808               mov ecx, dword ptr [eax + 8]
// 00589f74  56                   push esi
// 00589f75  ffd1                 call ecx
// 00589f77  83c408               add esp, 8
// 00589f7a  5e                   pop esi
// 00589f7b  c3                   ret 
// library jpeg-6b/jcmaster.c (function _pass_startup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
