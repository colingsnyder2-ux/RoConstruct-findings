// from server: 100% by auto
// roc 2009-06 006c8c00  unit: seg_006c0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8c00
//
// 006c8c00  8b442404             mov eax, dword ptr [esp + 4]
// 006c8c04  8bc8                 mov ecx, eax
// 006c8c06  c1f903               sar ecx, 3
// 006c8c09  83e11f               and ecx, 0x1f
// 006c8c0c  7409                 je 0x6c8c17
// 006c8c0e  83e007               and eax, 7
// 006c8c11  83c008               add eax, 8
// 006c8c14  49                   dec ecx
// 006c8c15  d3e0                 shl eax, cl
// 006c8c17  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_fb2int)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
