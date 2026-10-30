// from server: 100% by auto
// roc 2009-06 006c6f30  unit: seg_006c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6f30
//
// 006c6f30  56                   push esi
// 006c6f31  8b742408             mov esi, dword ptr [esp + 8]
// 006c6f35  6a05                 push 5
// 006c6f37  6a01                 push 1
// 006c6f39  56                   push esi
// 006c6f3a  e8013dffff           call 0x6bac40
// 006c6f3f  6a02                 push 2
// 006c6f41  56                   push esi
// 006c6f42  e8493dffff           call 0x6bac90
// 006c6f47  6a02                 push 2
// 006c6f49  56                   push esi
// 006c6f4a  e8411effff           call 0x6b8d90
// 006c6f4f  6a01                 push 1
// 006c6f51  56                   push esi
// 006c6f52  e8d926ffff           call 0x6b9630
// 006c6f57  83c424               add esp, 0x24
// 006c6f5a  b801000000           mov eax, 1
// 006c6f5f  5e                   pop esi
// 006c6f60  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawget)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
