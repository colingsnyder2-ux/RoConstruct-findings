// roc 2012-06 008336c0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008336c0
//
// 008336c0  83ec08               sub esp, 8
// 008336c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008336c7  8b542418             mov edx, dword ptr [esp + 0x18]
// 008336cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008336cf  52                   push edx
// 008336d0  89442404             mov dword ptr [esp + 4], eax
// 008336d4  8d442404             lea eax, [esp + 4]
// 008336d8  50                   push eax
// 008336d9  894c240c             mov dword ptr [esp + 0xc], ecx
// 008336dd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008336e1  68a0368300           push 0x8336a0
// 008336e6  51                   push ecx
// 008336e7  e8f4f1ffff           call 0x8328e0
// 008336ec  83c418               add esp, 0x18
// 008336ef  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
