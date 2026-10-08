// from server: 100% by auto
// roc 2009-06 006c60c0  unit: lua_exception  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c60c0
//
// 006c60c0  56                   push esi
// 006c60c1  8b742408             mov esi, dword ptr [esp + 8]
// 006c60c5  6a00                 push 0
// 006c60c7  6a01                 push 1
// 006c60c9  56                   push esi
// 006c60ca  e8f14bffff           call 0x6bacc0
// 006c60cf  6a00                 push 0
// 006c60d1  6a02                 push 2
// 006c60d3  56                   push esi
// 006c60d4  e8e74bffff           call 0x6bacc0
// 006c60d9  6a02                 push 2
// 006c60db  56                   push esi
// 006c60dc  e8af2cffff           call 0x6b8d90
// 006c60e1  6a00                 push 0
// 006c60e3  56                   push esi
// 006c60e4  e87732ffff           call 0x6b9360
// 006c60e9  6a03                 push 3
// 006c60eb  68505f6c00           push 0x6c5f50
// 006c60f0  56                   push esi
// 006c60f1  e89a33ffff           call 0x6b9490
// 006c60f6  83c434               add esp, 0x34
// 006c60f9  b801000000           mov eax, 1
// 006c60fe  5e                   pop esi
// 006c60ff  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gmatch)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
