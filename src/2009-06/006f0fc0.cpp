// from server: 100% by auto
// roc 2009-06 006f0fc0  unit: seg_006f0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0fc0
//
// 006f0fc0  8b442404             mov eax, dword ptr [esp + 4]
// 006f0fc4  c7001b4c7561         mov dword ptr [eax], 0x61754c1b
// 006f0fca  c6400451             mov byte ptr [eax + 4], 0x51
// 006f0fce  83c004               add eax, 4
// 006f0fd1  c6400100             mov byte ptr [eax + 1], 0
// 006f0fd5  40                   inc eax
// 006f0fd6  c6400101             mov byte ptr [eax + 1], 1
// 006f0fda  40                   inc eax
// 006f0fdb  c6400104             mov byte ptr [eax + 1], 4
// 006f0fdf  40                   inc eax
// 006f0fe0  40                   inc eax
// 006f0fe1  c60004               mov byte ptr [eax], 4
// 006f0fe4  40                   inc eax
// 006f0fe5  c60004               mov byte ptr [eax], 4
// 006f0fe8  40                   inc eax
// 006f0fe9  c60008               mov byte ptr [eax], 8
// 006f0fec  c6400100             mov byte ptr [eax + 1], 0
// 006f0ff0  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
