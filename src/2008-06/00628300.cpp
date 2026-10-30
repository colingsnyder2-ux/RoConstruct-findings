// from server: 100% by auto
// roc 2008-06 00628300  unit: seg_00620000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628300
//
// 00628300  56                   push esi
// 00628301  8b742408             mov esi, dword ptr [esp + 8]
// 00628305  6a05                 push 5
// 00628307  6a01                 push 1
// 00628309  56                   push esi
// 0062830a  e83193feff           call 0x611640
// 0062830f  6a02                 push 2
// 00628311  56                   push esi
// 00628312  e87993feff           call 0x611690
// 00628317  6a02                 push 2
// 00628319  56                   push esi
// 0062831a  e80199feff           call 0x611c20
// 0062831f  6a01                 push 1
// 00628321  56                   push esi
// 00628322  e8c9a1feff           call 0x6124f0
// 00628327  83c424               add esp, 0x24
// 0062832a  b801000000           mov eax, 1
// 0062832f  5e                   pop esi
// 00628330  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawget)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
