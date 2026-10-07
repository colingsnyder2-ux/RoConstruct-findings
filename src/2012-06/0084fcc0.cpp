// roc 2012-06 0084fcc0  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084fcc0
//
// 0084fcc0  8b442404             mov eax, dword ptr [esp + 4]
// 0084fcc4  83c9ff               or ecx, 0xffffffff
// 0084fcc7  3d00010000           cmp eax, 0x100
// 0084fccc  720f                 jb 0x84fcdd
// 0084fcce  8bff                 mov edi, edi
// 0084fcd0  c1e808               shr eax, 8
// 0084fcd3  83c108               add ecx, 8
// 0084fcd6  3d00010000           cmp eax, 0x100
// 0084fcdb  73f3                 jae 0x84fcd0
// 0084fcdd  0fb680302dbd00       movzx eax, byte ptr [eax + 0xbd2d30]
// 0084fce4  03c1                 add eax, ecx
// 0084fce6  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_log2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
