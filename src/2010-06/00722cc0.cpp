// from server: 100% by auto
// roc 2010-06 00722cc0  unit: RBX::UniversalTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722cc0
//
// 00722cc0  83ec08               sub esp, 8
// 00722cc3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00722cc7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00722ccb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00722ccf  52                   push edx
// 00722cd0  89442404             mov dword ptr [esp + 4], eax
// 00722cd4  8d442404             lea eax, [esp + 4]
// 00722cd8  50                   push eax
// 00722cd9  894c240c             mov dword ptr [esp + 0xc], ecx
// 00722cdd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00722ce1  68a02c7200           push 0x722ca0
// 00722ce6  51                   push ecx
// 00722ce7  e854f0ffff           call 0x721d40
// 00722cec  83c418               add esp, 0x18
// 00722cef  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
