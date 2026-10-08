// from server: 100% by auto
// roc 2007-08 0060ea50  unit: RBX::Ball  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ea50
//
// 0060ea50  8b442404             mov eax, dword ptr [esp + 4]
// 0060ea54  83c9ff               or ecx, 0xffffffff
// 0060ea57  3d00010000           cmp eax, 0x100
// 0060ea5c  720f                 jb 0x60ea6d
// 0060ea5e  8bff                 mov edi, edi
// 0060ea60  c1e808               shr eax, 8
// 0060ea63  83c108               add ecx, 8
// 0060ea66  3d00010000           cmp eax, 0x100
// 0060ea6b  73f3                 jae 0x60ea60
// 0060ea6d  0fb680f82f7c00       movzx eax, byte ptr [eax + 0x7c2ff8]
// 0060ea74  03c1                 add eax, ecx
// 0060ea76  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_log2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
