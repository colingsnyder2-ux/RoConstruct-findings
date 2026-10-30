// from server: 100% by auto
// roc 2011-06 0077c9a0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077c9a0
//
// 0077c9a0  8b442404             mov eax, dword ptr [esp + 4]
// 0077c9a4  83c9ff               or ecx, 0xffffffff
// 0077c9a7  3d00010000           cmp eax, 0x100
// 0077c9ac  720f                 jb 0x77c9bd
// 0077c9ae  8bff                 mov edi, edi
// 0077c9b0  c1e808               shr eax, 8
// 0077c9b3  83c108               add ecx, 8
// 0077c9b6  3d00010000           cmp eax, 0x100
// 0077c9bb  73f3                 jae 0x77c9b0
// 0077c9bd  0fb680c875ab00       movzx eax, byte ptr [eax + 0xab75c8]
// 0077c9c4  03c1                 add eax, ecx
// 0077c9c6  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_log2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
