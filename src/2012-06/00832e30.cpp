// from server: 100% by auto
// roc 2012-06 00832e30  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832e30
//
// 00832e30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00832e34  83ec64               sub esp, 0x64
// 00832e37  56                   push esi
// 00832e38  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00832e3c  8d442404             lea eax, [esp + 4]
// 00832e40  50                   push eax
// 00832e41  51                   push ecx
// 00832e42  56                   push esi
// 00832e43  e818d50100           call 0x850360
// 00832e48  83c40c               add esp, 0xc
// 00832e4b  85c0                 test eax, eax
// 00832e4d  7434                 je 0x832e83
// 00832e4f  8d542404             lea edx, [esp + 4]
// 00832e53  52                   push edx
// 00832e54  682c0abd00           push 0xbd0a2c
// 00832e59  56                   push esi
// 00832e5a  e831e20100           call 0x851090
// 00832e5f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00832e63  83c40c               add esp, 0xc
// 00832e66  85c0                 test eax, eax
// 00832e68  7e19                 jle 0x832e83
// 00832e6a  50                   push eax
// 00832e6b  8d44242c             lea eax, [esp + 0x2c]
// 00832e6f  50                   push eax
// 00832e70  68240abd00           push 0xbd0a24
// 00832e75  56                   push esi
// 00832e76  e855f3ffff           call 0x8321d0
// 00832e7b  83c410               add esp, 0x10
// 00832e7e  5e                   pop esi
// 00832e7f  83c464               add esp, 0x64
// 00832e82  c3                   ret 
// 00832e83  6a00                 push 0
// 00832e85  68e83bb400           push 0xb43be8
// 00832e8a  56                   push esi
// 00832e8b  e860f2ffff           call 0x8320f0
// 00832e90  83c40c               add esp, 0xc
// 00832e93  5e                   pop esi
// 00832e94  83c464               add esp, 0x64
// 00832e97  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_where)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
