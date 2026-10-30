// from server: 100% by auto
// roc 2011-06 007da800  unit: seg_007d0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da800
//
// 007da800  8b442408             mov eax, dword ptr [esp + 8]
// 007da804  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007da808  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007da80c  894810               mov dword ptr [eax + 0x10], ecx
// 007da80f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007da813  895008               mov dword ptr [eax + 8], edx
// 007da816  89480c               mov dword ptr [eax + 0xc], ecx
// 007da819  c70000000000         mov dword ptr [eax], 0
// 007da81f  c7400400000000       mov dword ptr [eax + 4], 0
// 007da826  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
