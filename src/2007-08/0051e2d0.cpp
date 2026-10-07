// roc 2007-08 0051e2d0  unit: seg_00510000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e2d0
//
// 0051e2d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051e2d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051e2d8  8b542408             mov edx, dword ptr [esp + 8]
// 0051e2dc  c1e007               shl eax, 7
// 0051e2df  50                   push eax
// 0051e2e0  51                   push ecx
// 0051e2e1  52                   push edx
// 0051e2e2  e8652a1100           call 0x630d4c
// 0051e2e7  83c40c               add esp, 0xc
// 0051e2ea  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
