// roc 2012-06 00858be0  unit: seg_00850000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858be0
//
// 00858be0  56                   push esi
// 00858be1  57                   push edi
// 00858be2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00858be6  6a01                 push 1
// 00858be8  57                   push edi
// 00858be9  e81294fdff           call 0x832000
// 00858bee  8bf0                 mov esi, eax
// 00858bf0  83c408               add esp, 8
// 00858bf3  85f6                 test esi, esi
// 00858bf5  7510                 jne 0x858c07
// 00858bf7  687843bd00           push 0xbd4378
// 00858bfc  6a01                 push 1
// 00858bfe  57                   push edi
// 00858bff  e82cabfdff           call 0x833730
// 00858c04  83c40c               add esp, 0xc
// 00858c07  57                   push edi
// 00858c08  e863ffffff           call 0x858b70
// 00858c0d  8b04856041bd00       mov eax, dword ptr [eax*4 + 0xbd4160]
// 00858c14  50                   push eax
// 00858c15  57                   push edi
// 00858c16  e81595fdff           call 0x832130
// 00858c1b  83c40c               add esp, 0xc
// 00858c1e  5f                   pop edi
// 00858c1f  b801000000           mov eax, 1
// 00858c24  5e                   pop esi
// 00858c25  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
