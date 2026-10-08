// roc 2007-03 00514690  unit: seg_00510000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514690
//
// 00514690  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00514694  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00514698  8b542408             mov edx, dword ptr [esp + 8]
// 0051469c  c1e007               shl eax, 7
// 0051469f  50                   push eax
// 005146a0  51                   push ecx
// 005146a1  52                   push edx
// 005146a2  e83bab1000           call 0x61f1e2
// 005146a7  83c40c               add esp, 0xc
// 005146aa  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
