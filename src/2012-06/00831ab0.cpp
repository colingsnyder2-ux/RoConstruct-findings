// roc 2012-06 00831ab0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00831ab0
//
// 00831ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00831ab4  668b4834             mov cx, word ptr [eax + 0x34]
// 00831ab8  8b542408             mov edx, dword ptr [esp + 8]
// 00831abc  66894a34             mov word ptr [edx + 0x34], cx
// 00831ac0  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setlevel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
