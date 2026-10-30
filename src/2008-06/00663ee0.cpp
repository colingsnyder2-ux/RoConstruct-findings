// from server: 100% by auto
// roc 2008-06 00663ee0  unit: RBX::FilterStairs  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663ee0
//
// 00663ee0  8b442404             mov eax, dword ptr [esp + 4]
// 00663ee4  c7001b4c7561         mov dword ptr [eax], 0x61754c1b
// 00663eea  c6400451             mov byte ptr [eax + 4], 0x51
// 00663eee  83c004               add eax, 4
// 00663ef1  c6400100             mov byte ptr [eax + 1], 0
// 00663ef5  40                   inc eax
// 00663ef6  c6400101             mov byte ptr [eax + 1], 1
// 00663efa  40                   inc eax
// 00663efb  c6400104             mov byte ptr [eax + 1], 4
// 00663eff  40                   inc eax
// 00663f00  40                   inc eax
// 00663f01  c60004               mov byte ptr [eax], 4
// 00663f04  40                   inc eax
// 00663f05  c60004               mov byte ptr [eax], 4
// 00663f08  40                   inc eax
// 00663f09  c60008               mov byte ptr [eax], 8
// 00663f0c  c6400100             mov byte ptr [eax + 1], 0
// 00663f10  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
