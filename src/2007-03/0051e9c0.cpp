// roc 2007-03 0051e9c0  unit: seg_00510000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e9c0
//
// 0051e9c0  56                   push esi
// 0051e9c1  8b742408             mov esi, dword ptr [esp + 8]
// 0051e9c5  8b4604               mov eax, dword ptr [esi + 4]
// 0051e9c8  8b08                 mov ecx, dword ptr [eax]
// 0051e9ca  6a20                 push 0x20
// 0051e9cc  6a01                 push 1
// 0051e9ce  56                   push esi
// 0051e9cf  ffd1                 call ecx
// 0051e9d1  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0051e9d7  83c40c               add esp, 0xc
// 0051e9da  c70000e75100         mov dword ptr [eax], 0x51e700
// 0051e9e0  c7400450e75100       mov dword ptr [eax + 4], 0x51e750
// 0051e9e7  c7400850e85100       mov dword ptr [eax + 8], 0x51e850
// 0051e9ee  c7400c20e95100       mov dword ptr [eax + 0xc], 0x51e920
// 0051e9f5  c7401030e95100       mov dword ptr [eax + 0x10], 0x51e930
// 0051e9fc  c74014a0e65100       mov dword ptr [eax + 0x14], 0x51e6a0
// 0051ea03  c74018e0e65100       mov dword ptr [eax + 0x18], 0x51e6e0
// 0051ea0a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0051ea11  5e                   pop esi
// 0051ea12  c3                   ret 
// library jpeg-6b/jcmarker.c (function _jinit_marker_writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
