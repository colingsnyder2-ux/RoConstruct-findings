// from server: 100% by auto
// roc 2012-06 0084fca0  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084fca0
//
// 0084fca0  8b442404             mov eax, dword ptr [esp + 4]
// 0084fca4  8bc8                 mov ecx, eax
// 0084fca6  c1f903               sar ecx, 3
// 0084fca9  83e11f               and ecx, 0x1f
// 0084fcac  7409                 je 0x84fcb7
// 0084fcae  83e007               and eax, 7
// 0084fcb1  83c008               add eax, 8
// 0084fcb4  49                   dec ecx
// 0084fcb5  d3e0                 shl eax, cl
// 0084fcb7  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_fb2int)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
