// from server: 100% by auto
// roc 2012-06 00833cd0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833cd0
//
// 00833cd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00833cd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00833cd8  8b542404             mov edx, dword ptr [esp + 4]
// 00833cdc  6a00                 push 0
// 00833cde  50                   push eax
// 00833cdf  51                   push ecx
// 00833ce0  52                   push edx
// 00833ce1  e81afeffff           call 0x833b00
// 00833ce6  83c410               add esp, 0x10
// 00833ce9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_register)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
