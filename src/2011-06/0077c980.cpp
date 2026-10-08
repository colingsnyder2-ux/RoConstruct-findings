// from server: 100% by auto
// roc 2011-06 0077c980  unit: seg_00770000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077c980
//
// 0077c980  8b442404             mov eax, dword ptr [esp + 4]
// 0077c984  8bc8                 mov ecx, eax
// 0077c986  c1f903               sar ecx, 3
// 0077c989  83e11f               and ecx, 0x1f
// 0077c98c  7409                 je 0x77c997
// 0077c98e  83e007               and eax, 7
// 0077c991  83c008               add eax, 8
// 0077c994  49                   dec ecx
// 0077c995  d3e0                 shl eax, cl
// 0077c997  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_fb2int)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
