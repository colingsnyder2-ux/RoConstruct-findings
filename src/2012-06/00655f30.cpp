// roc 2012-06 00655f30  unit: seg_00650000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655f30
//
// 00655f30  56                   push esi
// 00655f31  8b742408             mov esi, dword ptr [esp + 8]
// 00655f35  8b4604               mov eax, dword ptr [esi + 4]
// 00655f38  8b08                 mov ecx, dword ptr [eax]
// 00655f3a  6a20                 push 0x20
// 00655f3c  6a01                 push 1
// 00655f3e  56                   push esi
// 00655f3f  ffd1                 call ecx
// 00655f41  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00655f47  83c40c               add esp, 0xc
// 00655f4a  c700005c6500         mov dword ptr [eax], 0x655c00
// 00655f50  c74004505c6500       mov dword ptr [eax + 4], 0x655c50
// 00655f57  c74008505d6500       mov dword ptr [eax + 8], 0x655d50
// 00655f5e  c7400c305e6500       mov dword ptr [eax + 0xc], 0x655e30
// 00655f65  c74010505e6500       mov dword ptr [eax + 0x10], 0x655e50
// 00655f6c  c74014805b6500       mov dword ptr [eax + 0x14], 0x655b80
// 00655f73  c74018c05b6500       mov dword ptr [eax + 0x18], 0x655bc0
// 00655f7a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 00655f81  5e                   pop esi
// 00655f82  c3                   ret 
// library jpeg-6b/jcmarker.c (function _jinit_marker_writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
