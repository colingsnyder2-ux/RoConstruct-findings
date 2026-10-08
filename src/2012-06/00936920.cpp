// from server: 100% by auto
// roc 2012-06 00936920  unit: seg_00930000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936920
//
// 00936920  8b442408             mov eax, dword ptr [esp + 8]
// 00936924  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00936928  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0093692c  894810               mov dword ptr [eax + 0x10], ecx
// 0093692f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00936933  895008               mov dword ptr [eax + 8], edx
// 00936936  89480c               mov dword ptr [eax + 0xc], ecx
// 00936939  c70000000000         mov dword ptr [eax], 0
// 0093693f  c7400400000000       mov dword ptr [eax + 4], 0
// 00936946  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
