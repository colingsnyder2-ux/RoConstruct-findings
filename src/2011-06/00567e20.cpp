// roc 2011-06 00567e20  unit: seg_00560000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567e20
//
// 00567e20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00567e24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00567e28  8b542408             mov edx, dword ptr [esp + 8]
// 00567e2c  c1e007               shl eax, 7
// 00567e2f  50                   push eax
// 00567e30  51                   push ecx
// 00567e31  52                   push edx
// 00567e32  e8a5372a00           call 0x80b5dc
// 00567e37  83c40c               add esp, 0xc
// 00567e3a  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
