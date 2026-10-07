// roc 2012-06 00855440  unit: lua_exception  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855440
//
// 00855440  56                   push esi
// 00855441  8b742408             mov esi, dword ptr [esp + 8]
// 00855445  6a05                 push 5
// 00855447  6a01                 push 1
// 00855449  56                   push esi
// 0085544a  e851e4fdff           call 0x8338a0
// 0085544f  68203abd00           push 0xbd3a20
// 00855454  56                   push esi
// 00855455  e846dafdff           call 0x832ea0
// 0085545a  6a01                 push 1
// 0085545c  56                   push esi
// 0085545d  e84ec8fdff           call 0x831cb0
// 00855462  83c41c               add esp, 0x1c
// 00855465  b801000000           mov eax, 1
// 0085546a  5e                   pop esi
// 0085546b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _setn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
