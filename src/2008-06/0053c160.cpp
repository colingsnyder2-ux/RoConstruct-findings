// from server: 100% by auto
// roc 2008-06 0053c160  unit: seg_00530000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053c160
//
// 0053c160  56                   push esi
// 0053c161  8b742408             mov esi, dword ptr [esp + 8]
// 0053c165  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0053c16b  c6400c00             mov byte ptr [eax + 0xc], 0
// 0053c16f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0053c175  8b5104               mov edx, dword ptr [ecx + 4]
// 0053c178  56                   push esi
// 0053c179  ffd2                 call edx
// 0053c17b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0053c181  8b4808               mov ecx, dword ptr [eax + 8]
// 0053c184  56                   push esi
// 0053c185  ffd1                 call ecx
// 0053c187  83c408               add esp, 8
// 0053c18a  5e                   pop esi
// 0053c18b  c3                   ret 
// library jpeg-6b/jcmaster.c (function _pass_startup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
