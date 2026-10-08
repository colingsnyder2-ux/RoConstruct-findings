// roc 2007-03 00514e90  unit: seg_00510000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514e90
//
// 00514e90  56                   push esi
// 00514e91  8b742408             mov esi, dword ptr [esp + 8]
// 00514e95  8b4604               mov eax, dword ptr [esi + 4]
// 00514e98  85c0                 test eax, eax
// 00514e9a  742b                 je 0x514ec7
// 00514e9c  8b4024               mov eax, dword ptr [eax + 0x24]
// 00514e9f  6a01                 push 1
// 00514ea1  56                   push esi
// 00514ea2  ffd0                 call eax
// 00514ea4  83c408               add esp, 8
// 00514ea7  807e1000             cmp byte ptr [esi + 0x10], 0
// 00514eab  7413                 je 0x514ec0
// 00514ead  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00514eb4  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 00514ebe  5e                   pop esi
// 00514ebf  c3                   ret 
// 00514ec0  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00514ec7  5e                   pop esi
// 00514ec8  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_abort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
