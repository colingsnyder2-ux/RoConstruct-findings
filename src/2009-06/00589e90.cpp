// roc 2009-06 00589e90  unit: seg_00580000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589e90
//
// 00589e90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00589e94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00589e98  8b542408             mov edx, dword ptr [esp + 8]
// 00589e9c  c1e007               shl eax, 7
// 00589e9f  50                   push eax
// 00589ea0  51                   push ecx
// 00589ea1  52                   push edx
// 00589ea2  e80f001900           call 0x719eb6
// 00589ea7  83c40c               add esp, 0xc
// 00589eaa  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
