// roc 2009-12 0060bce0  unit: seg_00600000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bce0
//
// 0060bce0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060bce4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bce8  8b542408             mov edx, dword ptr [esp + 8]
// 0060bcec  c1e007               shl eax, 7
// 0060bcef  50                   push eax
// 0060bcf0  51                   push ecx
// 0060bcf1  52                   push edx
// 0060bcf2  e8ef8f1e00           call 0x7f4ce6
// 0060bcf7  83c40c               add esp, 0xc
// 0060bcfa  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
