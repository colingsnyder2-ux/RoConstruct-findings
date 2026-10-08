// from server: 100% by auto
// roc 2009-06 006ed120  unit: seg_006e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed120
//
// 006ed120  8b442408             mov eax, dword ptr [esp + 8]
// 006ed124  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ed128  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ed12c  894810               mov dword ptr [eax + 0x10], ecx
// 006ed12f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ed133  895008               mov dword ptr [eax + 8], edx
// 006ed136  89480c               mov dword ptr [eax + 0xc], ecx
// 006ed139  c70000000000         mov dword ptr [eax], 0
// 006ed13f  c7400400000000       mov dword ptr [eax + 4], 0
// 006ed146  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
