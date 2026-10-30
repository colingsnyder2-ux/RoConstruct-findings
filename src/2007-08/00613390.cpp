// from server: 100% by auto
// roc 2007-08 00613390  unit: seg_00610000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613390
//
// 00613390  8b442408             mov eax, dword ptr [esp + 8]
// 00613394  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00613398  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0061339c  894810               mov dword ptr [eax + 0x10], ecx
// 0061339f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006133a3  895008               mov dword ptr [eax + 8], edx
// 006133a6  89480c               mov dword ptr [eax + 0xc], ecx
// 006133a9  c70000000000         mov dword ptr [eax], 0
// 006133af  c7400400000000       mov dword ptr [eax + 4], 0
// 006133b6  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
