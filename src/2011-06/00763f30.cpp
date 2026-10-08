// from server: 100% by auto
// roc 2011-06 00763f30  unit: seg_00760000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763f30
//
// 00763f30  83ec08               sub esp, 8
// 00763f33  8b442410             mov eax, dword ptr [esp + 0x10]
// 00763f37  8b542418             mov edx, dword ptr [esp + 0x18]
// 00763f3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00763f3f  52                   push edx
// 00763f40  89442404             mov dword ptr [esp + 4], eax
// 00763f44  8d442404             lea eax, [esp + 4]
// 00763f48  50                   push eax
// 00763f49  894c240c             mov dword ptr [esp + 0xc], ecx
// 00763f4d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00763f51  68103f7600           push 0x763f10
// 00763f56  51                   push ecx
// 00763f57  e8f4f1ffff           call 0x763150
// 00763f5c  83c418               add esp, 0x18
// 00763f5f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
