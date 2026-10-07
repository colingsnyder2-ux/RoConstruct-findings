// roc 2011-06 00763740  unit: seg_00760000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763740
//
// 00763740  56                   push esi
// 00763741  8b742408             mov esi, dword ptr [esp + 8]
// 00763745  57                   push edi
// 00763746  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076374a  57                   push edi
// 0076374b  68f0d8ffff           push 0xffffd8f0
// 00763750  56                   push esi
// 00763751  e85af4ffff           call 0x762bb0
// 00763756  6aff                 push -1
// 00763758  56                   push esi
// 00763759  e8f2edffff           call 0x762550
// 0076375e  83c414               add esp, 0x14
// 00763761  85c0                 test eax, eax
// 00763763  7405                 je 0x76376a
// 00763765  5f                   pop edi
// 00763766  33c0                 xor eax, eax
// 00763768  5e                   pop esi
// 00763769  c3                   ret 
// 0076376a  6afe                 push -2
// 0076376c  56                   push esi
// 0076376d  e8feebffff           call 0x762370
// 00763772  6a00                 push 0
// 00763774  6a00                 push 0
// 00763776  56                   push esi
// 00763777  e814f5ffff           call 0x762c90
// 0076377c  6aff                 push -1
// 0076377e  56                   push esi
// 0076377f  e89cedffff           call 0x762520
// 00763784  57                   push edi
// 00763785  68f0d8ffff           push 0xffffd8f0
// 0076378a  56                   push esi
// 0076378b  e860f6ffff           call 0x762df0
// 00763790  83c428               add esp, 0x28
// 00763793  5f                   pop edi
// 00763794  b801000000           mov eax, 1
// 00763799  5e                   pop esi
// 0076379a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_newmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
