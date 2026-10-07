// roc 2011-06 007de730  unit: seg_007d0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007de730
//
// 007de730  8b442404             mov eax, dword ptr [esp + 4]
// 007de734  c7001b4c7561         mov dword ptr [eax], 0x61754c1b
// 007de73a  c6400451             mov byte ptr [eax + 4], 0x51
// 007de73e  83c004               add eax, 4
// 007de741  c6400100             mov byte ptr [eax + 1], 0
// 007de745  40                   inc eax
// 007de746  c6400101             mov byte ptr [eax + 1], 1
// 007de74a  40                   inc eax
// 007de74b  c6400104             mov byte ptr [eax + 1], 4
// 007de74f  40                   inc eax
// 007de750  40                   inc eax
// 007de751  c60004               mov byte ptr [eax], 4
// 007de754  40                   inc eax
// 007de755  c60004               mov byte ptr [eax], 4
// 007de758  40                   inc eax
// 007de759  c60008               mov byte ptr [eax], 8
// 007de75c  c6400100             mov byte ptr [eax + 1], 0
// 007de760  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
