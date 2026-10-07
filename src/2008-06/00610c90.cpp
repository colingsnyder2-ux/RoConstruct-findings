// roc 2008-06 00610c90  unit: RBX::BlockBlockContact  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610c90
//
// 00610c90  56                   push esi
// 00610c91  8b742408             mov esi, dword ptr [esp + 8]
// 00610c95  57                   push edi
// 00610c96  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00610c9a  57                   push edi
// 00610c9b  68f0d8ffff           push 0xffffd8f0
// 00610ca0  56                   push esi
// 00610ca1  e8ea170000           call 0x612490
// 00610ca6  6aff                 push -1
// 00610ca8  56                   push esi
// 00610ca9  e852110000           call 0x611e00
// 00610cae  83c414               add esp, 0x14
// 00610cb1  85c0                 test eax, eax
// 00610cb3  7405                 je 0x610cba
// 00610cb5  5f                   pop edi
// 00610cb6  33c0                 xor eax, eax
// 00610cb8  5e                   pop esi
// 00610cb9  c3                   ret 
// 00610cba  6afe                 push -2
// 00610cbc  56                   push esi
// 00610cbd  e85e0f0000           call 0x611c20
// 00610cc2  6a00                 push 0
// 00610cc4  6a00                 push 0
// 00610cc6  56                   push esi
// 00610cc7  e8a4180000           call 0x612570
// 00610ccc  6aff                 push -1
// 00610cce  56                   push esi
// 00610ccf  e8fc100000           call 0x611dd0
// 00610cd4  57                   push edi
// 00610cd5  68f0d8ffff           push 0xffffd8f0
// 00610cda  56                   push esi
// 00610cdb  e8d0190000           call 0x6126b0
// 00610ce0  83c428               add esp, 0x28
// 00610ce3  5f                   pop edi
// 00610ce4  b801000000           mov eax, 1
// 00610ce9  5e                   pop esi
// 00610cea  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_newmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
