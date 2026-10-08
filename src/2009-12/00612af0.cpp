// roc 2009-12 00612af0  unit: seg_00610000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00612af0
//
// 00612af0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00612af4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00612af8  8b542404             mov edx, dword ptr [esp + 4]
// 00612afc  50                   push eax
// 00612afd  51                   push ecx
// 00612afe  6a0f                 push 0xf
// 00612b00  52                   push edx
// 00612b01  e81affffff           call 0x612a20
// 00612b06  83c410               add esp, 0x10
// 00612b09  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateInit_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
