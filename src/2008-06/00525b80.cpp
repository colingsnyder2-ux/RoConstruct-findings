// from server: 100% by auto
// roc 2008-06 00525b80  unit: seg_00520000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525b80
//
// 00525b80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00525b84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00525b88  8b542408             mov edx, dword ptr [esp + 8]
// 00525b8c  c1e007               shl eax, 7
// 00525b8f  50                   push eax
// 00525b90  51                   push ecx
// 00525b91  52                   push edx
// 00525b92  e849bc1700           call 0x6a17e0
// 00525b97  83c40c               add esp, 0xc
// 00525b9a  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_block_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
