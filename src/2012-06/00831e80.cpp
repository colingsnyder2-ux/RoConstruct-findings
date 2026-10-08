// from server: 100% by auto
// roc 2012-06 00831e80  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00831e80
//
// 00831e80  8b442408             mov eax, dword ptr [esp + 8]
// 00831e84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00831e88  83ec1c               sub esp, 0x1c
// 00831e8b  e8b0faffff           call 0x831940
// 00831e90  83780803             cmp dword ptr [eax + 8], 3
// 00831e94  7416                 je 0x831eac
// 00831e96  8d4c240c             lea ecx, [esp + 0xc]
// 00831e9a  51                   push ecx
// 00831e9b  50                   push eax
// 00831e9c  e8df161000           call 0x933580
// 00831ea1  83c408               add esp, 8
// 00831ea4  85c0                 test eax, eax
// 00831ea6  7504                 jne 0x831eac
// 00831ea8  83c41c               add esp, 0x1c
// 00831eab  c3                   ret 
// 00831eac  dd00                 fld qword ptr [eax]
// 00831eae  dd5c2404             fstp qword ptr [esp + 4]
// 00831eb2  dd442404             fld qword ptr [esp + 4]
// 00831eb6  db1c24               fistp dword ptr [esp]
// 00831eb9  8b0424               mov eax, dword ptr [esp]
// 00831ebc  83c41c               add esp, 0x1c
// 00831ebf  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_tointeger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
