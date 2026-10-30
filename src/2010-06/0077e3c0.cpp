// from server: 100% by auto
// roc 2010-06 0077e3c0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e3c0
//
// 0077e3c0  8b442408             mov eax, dword ptr [esp + 8]
// 0077e3c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077e3c8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077e3cc  894810               mov dword ptr [eax + 0x10], ecx
// 0077e3cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077e3d3  895008               mov dword ptr [eax + 8], edx
// 0077e3d6  89480c               mov dword ptr [eax + 0xc], ecx
// 0077e3d9  c70000000000         mov dword ptr [eax], 0
// 0077e3df  c7400400000000       mov dword ptr [eax + 4], 0
// 0077e3e6  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
