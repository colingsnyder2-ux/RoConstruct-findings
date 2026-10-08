// from server: 100% by auto
// roc 2012-06 00653530  unit: seg_00650000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653530
//
// 00653530  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00653534  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00653538  8b542408             mov edx, dword ptr [esp + 8]
// 0065353c  c1e007               shl eax, 7
// 0065353f  50                   push eax
// 00653540  51                   push ecx
// 00653541  52                   push edx
// 00653542  e815013300           call 0x98365c
// 00653547  83c40c               add esp, 0xc
// 0065354a  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
