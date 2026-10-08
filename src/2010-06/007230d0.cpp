// from server: 100% by auto
// roc 2010-06 007230d0  unit: RBX::UniversalTool  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007230d0
//
// 007230d0  56                   push esi
// 007230d1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007230d5  57                   push edi
// 007230d6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007230da  56                   push esi
// 007230db  57                   push edi
// 007230dc  e85fe0ffff           call 0x721140
// 007230e1  83c408               add esp, 8
// 007230e4  85c0                 test eax, eax
// 007230e6  7f07                 jg 0x7230ef
// 007230e8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007230ec  5f                   pop edi
// 007230ed  5e                   pop esi
// 007230ee  c3                   ret 
// 007230ef  56                   push esi
// 007230f0  57                   push edi
// 007230f1  e86affffff           call 0x723060
// 007230f6  83c408               add esp, 8
// 007230f9  5f                   pop edi
// 007230fa  5e                   pop esi
// 007230fb  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
