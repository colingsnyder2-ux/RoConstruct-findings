// roc 2010-06 00720f10  unit: RBX::UniversalTool  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720f10
//
// 00720f10  8b442404             mov eax, dword ptr [esp + 4]
// 00720f14  668b4834             mov cx, word ptr [eax + 0x34]
// 00720f18  8b542408             mov edx, dword ptr [esp + 8]
// 00720f1c  66894a34             mov word ptr [edx + 0x34], cx
// 00720f20  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setlevel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
