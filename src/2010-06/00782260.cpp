// from server: 100% by auto
// roc 2010-06 00782260  unit: seg_00780000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782260
//
// 00782260  8b442404             mov eax, dword ptr [esp + 4]
// 00782264  c7001b4c7561         mov dword ptr [eax], 0x61754c1b
// 0078226a  c6400451             mov byte ptr [eax + 4], 0x51
// 0078226e  83c004               add eax, 4
// 00782271  c6400100             mov byte ptr [eax + 1], 0
// 00782275  40                   inc eax
// 00782276  c6400101             mov byte ptr [eax + 1], 1
// 0078227a  40                   inc eax
// 0078227b  c6400104             mov byte ptr [eax + 1], 4
// 0078227f  40                   inc eax
// 00782280  40                   inc eax
// 00782281  c60004               mov byte ptr [eax], 4
// 00782284  40                   inc eax
// 00782285  c60004               mov byte ptr [eax], 4
// 00782288  40                   inc eax
// 00782289  c60008               mov byte ptr [eax], 8
// 0078228c  c6400100             mov byte ptr [eax + 1], 0
// 00782290  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
