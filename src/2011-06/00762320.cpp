// from server: 100% by auto
// roc 2011-06 00762320  unit: seg_00760000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00762320
//
// 00762320  8b442404             mov eax, dword ptr [esp + 4]
// 00762324  668b4834             mov cx, word ptr [eax + 0x34]
// 00762328  8b542408             mov edx, dword ptr [esp + 8]
// 0076232c  66894a34             mov word ptr [edx + 0x34], cx
// 00762330  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setlevel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
