// roc 2009-06 006c6f70  unit: seg_006c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6f70
//
// 006c6f70  56                   push esi
// 006c6f71  8b742408             mov esi, dword ptr [esp + 8]
// 006c6f75  6a05                 push 5
// 006c6f77  6a01                 push 1
// 006c6f79  56                   push esi
// 006c6f7a  e8c13cffff           call 0x6bac40
// 006c6f7f  6a02                 push 2
// 006c6f81  56                   push esi
// 006c6f82  e8093dffff           call 0x6bac90
// 006c6f87  6a03                 push 3
// 006c6f89  56                   push esi
// 006c6f8a  e8013dffff           call 0x6bac90
// 006c6f8f  6a03                 push 3
// 006c6f91  56                   push esi
// 006c6f92  e8f91dffff           call 0x6b8d90
// 006c6f97  6a01                 push 1
// 006c6f99  56                   push esi
// 006c6f9a  e8d128ffff           call 0x6b9870
// 006c6f9f  83c42c               add esp, 0x2c
// 006c6fa2  b801000000           mov eax, 1
// 006c6fa7  5e                   pop esi
// 006c6fa8  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
