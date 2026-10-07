// roc 2007-08 00617230  unit: seg_00610000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617230
//
// 00617230  8b442404             mov eax, dword ptr [esp + 4]
// 00617234  c7001b4c7561         mov dword ptr [eax], 0x61754c1b
// 0061723a  c6400451             mov byte ptr [eax + 4], 0x51
// 0061723e  83c004               add eax, 4
// 00617241  c6400100             mov byte ptr [eax + 1], 0
// 00617245  83c001               add eax, 1
// 00617248  c6400101             mov byte ptr [eax + 1], 1
// 0061724c  83c001               add eax, 1
// 0061724f  c6400104             mov byte ptr [eax + 1], 4
// 00617253  83c001               add eax, 1
// 00617256  83c001               add eax, 1
// 00617259  c60004               mov byte ptr [eax], 4
// 0061725c  83c001               add eax, 1
// 0061725f  c60004               mov byte ptr [eax], 4
// 00617262  83c001               add eax, 1
// 00617265  c60008               mov byte ptr [eax], 8
// 00617268  c6400100             mov byte ptr [eax + 1], 0
// 0061726c  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_header)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
