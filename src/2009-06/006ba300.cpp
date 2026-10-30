// from server: 100% by auto
// roc 2009-06 006ba300  unit: RBX::UniversalTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba300
//
// 006ba300  8b442408             mov eax, dword ptr [esp + 8]
// 006ba304  56                   push esi
// 006ba305  8b742408             mov esi, dword ptr [esp + 8]
// 006ba309  50                   push eax
// 006ba30a  56                   push esi
// 006ba30b  e800f4ffff           call 0x6b9710
// 006ba310  83c408               add esp, 8
// 006ba313  85c0                 test eax, eax
// 006ba315  742d                 je 0x6ba344
// 006ba317  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ba31b  51                   push ecx
// 006ba31c  56                   push esi
// 006ba31d  e89ef0ffff           call 0x6b93c0
// 006ba322  6afe                 push -2
// 006ba324  56                   push esi
// 006ba325  e806f3ffff           call 0x6b9630
// 006ba32a  6aff                 push -1
// 006ba32c  56                   push esi
// 006ba32d  e83eecffff           call 0x6b8f70
// 006ba332  83c418               add esp, 0x18
// 006ba335  85c0                 test eax, eax
// 006ba337  750f                 jne 0x6ba348
// 006ba339  6afd                 push -3
// 006ba33b  56                   push esi
// 006ba33c  e84feaffff           call 0x6b8d90
// 006ba341  83c408               add esp, 8
// 006ba344  33c0                 xor eax, eax
// 006ba346  5e                   pop esi
// 006ba347  c3                   ret 
// 006ba348  6afe                 push -2
// 006ba34a  56                   push esi
// 006ba34b  e890eaffff           call 0x6b8de0
// 006ba350  83c408               add esp, 8
// 006ba353  b801000000           mov eax, 1
// 006ba358  5e                   pop esi
// 006ba359  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_getmetafield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
