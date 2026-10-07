// roc 2009-06 00598300  unit: seg_00590000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598300
//
// 00598300  56                   push esi
// 00598301  8b742408             mov esi, dword ptr [esp + 8]
// 00598305  8b4604               mov eax, dword ptr [esi + 4]
// 00598308  8b08                 mov ecx, dword ptr [eax]
// 0059830a  6a20                 push 0x20
// 0059830c  6a01                 push 1
// 0059830e  56                   push esi
// 0059830f  ffd1                 call ecx
// 00598311  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00598317  83c40c               add esp, 0xc
// 0059831a  c700d07f5900         mov dword ptr [eax], 0x597fd0
// 00598320  c7400420805900       mov dword ptr [eax + 4], 0x598020
// 00598327  c7400820815900       mov dword ptr [eax + 8], 0x598120
// 0059832e  c7400c00825900       mov dword ptr [eax + 0xc], 0x598200
// 00598335  c7401020825900       mov dword ptr [eax + 0x10], 0x598220
// 0059833c  c74014507f5900       mov dword ptr [eax + 0x14], 0x597f50
// 00598343  c74018907f5900       mov dword ptr [eax + 0x18], 0x597f90
// 0059834a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 00598351  5e                   pop esi
// 00598352  c3                   ret 
// library jpeg-6b/jcmarker.c (function _jinit_marker_writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
