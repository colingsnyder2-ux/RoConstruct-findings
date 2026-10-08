// from server: 100% by auto
// roc 2009-06 006b8d40  unit: RBX::UniversalTool  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8d40
//
// 006b8d40  8b442404             mov eax, dword ptr [esp + 4]
// 006b8d44  668b4834             mov cx, word ptr [eax + 0x34]
// 006b8d48  8b542408             mov edx, dword ptr [esp + 8]
// 006b8d4c  66894a34             mov word ptr [edx + 0x34], cx
// 006b8d50  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setlevel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
