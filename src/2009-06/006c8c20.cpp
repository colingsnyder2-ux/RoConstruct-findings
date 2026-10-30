// from server: 100% by auto
// roc 2009-06 006c8c20  unit: seg_006c0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8c20
//
// 006c8c20  8b442404             mov eax, dword ptr [esp + 4]
// 006c8c24  83c9ff               or ecx, 0xffffffff
// 006c8c27  3d00010000           cmp eax, 0x100
// 006c8c2c  720f                 jb 0x6c8c3d
// 006c8c2e  8bff                 mov edi, edi
// 006c8c30  c1e808               shr eax, 8
// 006c8c33  83c108               add ecx, 8
// 006c8c36  3d00010000           cmp eax, 0x100
// 006c8c3b  73f3                 jae 0x6c8c30
// 006c8c3d  0fb68088c38e00       movzx eax, byte ptr [eax + 0x8ec388]
// 006c8c44  03c1                 add eax, ecx
// 006c8c46  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_log2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
