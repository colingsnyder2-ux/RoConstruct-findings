// roc 2007-03 0052af40  unit: seg_00520000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052af40
//
// 0052af40  56                   push esi
// 0052af41  8b742408             mov esi, dword ptr [esp + 8]
// 0052af45  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0052af4b  c6400c00             mov byte ptr [eax + 0xc], 0
// 0052af4f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0052af55  8b5104               mov edx, dword ptr [ecx + 4]
// 0052af58  56                   push esi
// 0052af59  ffd2                 call edx
// 0052af5b  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0052af61  8b4808               mov ecx, dword ptr [eax + 8]
// 0052af64  56                   push esi
// 0052af65  ffd1                 call ecx
// 0052af67  83c408               add esp, 8
// 0052af6a  5e                   pop esi
// 0052af6b  c3                   ret 
// library jpeg-6b/jcmaster.c (function _pass_startup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
