// roc 2010-06 0056d3c0  unit: seg_00560000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d3c0
//
// 0056d3c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056d3c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d3c8  8b542408             mov edx, dword ptr [esp + 8]
// 0056d3cc  c1e007               shl eax, 7
// 0056d3cf  50                   push eax
// 0056d3d0  51                   push ecx
// 0056d3d1  52                   push edx
// 0056d3d2  e84fba2300           call 0x7a8e26
// 0056d3d7  83c40c               add esp, 0xc
// 0056d3da  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
