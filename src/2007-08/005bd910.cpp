// from server: 100% by auto
// roc 2007-08 005bd910  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd910
//
// 005bd910  8b442408             mov eax, dword ptr [esp + 8]
// 005bd914  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bd918  83ec1c               sub esp, 0x1c
// 005bd91b  e810fbffff           call 0x5bd430
// 005bd920  83780803             cmp dword ptr [eax + 8], 3
// 005bd924  7416                 je 0x5bd93c
// 005bd926  8d4c240c             lea ecx, [esp + 0xc]
// 005bd92a  51                   push ecx
// 005bd92b  50                   push eax
// 005bd92c  e89f270500           call 0x6100d0
// 005bd931  83c408               add esp, 8
// 005bd934  85c0                 test eax, eax
// 005bd936  7504                 jne 0x5bd93c
// 005bd938  83c41c               add esp, 0x1c
// 005bd93b  c3                   ret 
// 005bd93c  dd00                 fld qword ptr [eax]
// 005bd93e  dd5c2404             fstp qword ptr [esp + 4]
// 005bd942  dd442404             fld qword ptr [esp + 4]
// 005bd946  db1c24               fistp dword ptr [esp]
// 005bd949  8b0424               mov eax, dword ptr [esp]
// 005bd94c  83c41c               add esp, 0x1c
// 005bd94f  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_tointeger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
