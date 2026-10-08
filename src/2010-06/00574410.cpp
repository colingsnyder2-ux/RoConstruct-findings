// from server: 100% by auto
// roc 2010-06 00574410  unit: seg_00570000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00574410
//
// 00574410  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00574414  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574418  8b542404             mov edx, dword ptr [esp + 4]
// 0057441c  50                   push eax
// 0057441d  51                   push ecx
// 0057441e  6a0f                 push 0xf
// 00574420  52                   push edx
// 00574421  e81affffff           call 0x574340
// 00574426  83c410               add esp, 0x10
// 00574429  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateInit_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
