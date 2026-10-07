// roc 2009-06 00590ad0  unit: seg_00590000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00590ad0
//
// 00590ad0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00590ad4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00590ad8  8b542404             mov edx, dword ptr [esp + 4]
// 00590adc  50                   push eax
// 00590add  51                   push ecx
// 00590ade  6a0f                 push 0xf
// 00590ae0  52                   push edx
// 00590ae1  e81affffff           call 0x590a00
// 00590ae6  83c410               add esp, 0x10
// 00590ae9  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateInit_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
