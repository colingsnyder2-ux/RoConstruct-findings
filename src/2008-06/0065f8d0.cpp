// roc 2008-06 0065f8d0  unit: seg_00650000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f8d0
//
// 0065f8d0  8b442408             mov eax, dword ptr [esp + 8]
// 0065f8d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065f8d8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0065f8dc  894810               mov dword ptr [eax + 0x10], ecx
// 0065f8df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065f8e3  895008               mov dword ptr [eax + 8], edx
// 0065f8e6  89480c               mov dword ptr [eax + 0xc], ecx
// 0065f8e9  c70000000000         mov dword ptr [eax], 0
// 0065f8ef  c7400400000000       mov dword ptr [eax + 4], 0
// 0065f8f6  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
