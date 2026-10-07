// roc 2009-06 006baa60  unit: RBX::UniversalTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006baa60
//
// 006baa60  83ec08               sub esp, 8
// 006baa63  8b442410             mov eax, dword ptr [esp + 0x10]
// 006baa67  8b542418             mov edx, dword ptr [esp + 0x18]
// 006baa6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006baa6f  52                   push edx
// 006baa70  89442404             mov dword ptr [esp + 4], eax
// 006baa74  8d442404             lea eax, [esp + 4]
// 006baa78  50                   push eax
// 006baa79  894c240c             mov dword ptr [esp + 0xc], ecx
// 006baa7d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006baa81  6840aa6b00           push 0x6baa40
// 006baa86  51                   push ecx
// 006baa87  e8e4f0ffff           call 0x6b9b70
// 006baa8c  83c418               add esp, 0x18
// 006baa8f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
