// from server: 100% by auto
// roc 2012-06 00833ad0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833ad0
//
// 00833ad0  56                   push esi
// 00833ad1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00833ad5  57                   push edi
// 00833ad6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00833ada  56                   push esi
// 00833adb  57                   push edi
// 00833adc  e8ffe1ffff           call 0x831ce0
// 00833ae1  83c408               add esp, 8
// 00833ae4  85c0                 test eax, eax
// 00833ae6  7f07                 jg 0x833aef
// 00833ae8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833aec  5f                   pop edi
// 00833aed  5e                   pop esi
// 00833aee  c3                   ret 
// 00833aef  56                   push esi
// 00833af0  57                   push edi
// 00833af1  e86affffff           call 0x833a60
// 00833af6  83c408               add esp, 8
// 00833af9  5f                   pop edi
// 00833afa  5e                   pop esi
// 00833afb  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
