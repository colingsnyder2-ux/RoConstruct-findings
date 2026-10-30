// from server: 100% by auto
// roc 2011-06 007dafe0  unit: seg_007d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dafe0
//
// 007dafe0  8b5130               mov edx, dword ptr [ecx + 0x30]
// 007dafe3  50                   push eax
// 007dafe4  52                   push edx
// 007dafe5  e836740100           call 0x7f2420
// 007dafea  83c9ff               or ecx, 0xffffffff
// 007dafed  83c408               add esp, 8
// 007daff0  894e10               mov dword ptr [esi + 0x10], ecx
// 007daff3  894e14               mov dword ptr [esi + 0x14], ecx
// 007daff6  c70604000000         mov dword ptr [esi], 4
// 007daffc  894608               mov dword ptr [esi + 8], eax
// 007dafff  c3                   ret 
// library lua-5.1.4/lparser.c (function _codestring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
