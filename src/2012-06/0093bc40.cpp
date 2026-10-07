// roc 2012-06 0093bc40  unit: seg_00930000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093bc40
//
// 0093bc40  8b442404             mov eax, dword ptr [esp + 4]
// 0093bc44  c7001b4c7561         mov dword ptr [eax], 0x61754c1b
// 0093bc4a  c6400451             mov byte ptr [eax + 4], 0x51
// 0093bc4e  83c004               add eax, 4
// 0093bc51  c6400100             mov byte ptr [eax + 1], 0
// 0093bc55  40                   inc eax
// 0093bc56  c6400101             mov byte ptr [eax + 1], 1
// 0093bc5a  40                   inc eax
// 0093bc5b  c6400104             mov byte ptr [eax + 1], 4
// 0093bc5f  40                   inc eax
// 0093bc60  40                   inc eax
// 0093bc61  c60004               mov byte ptr [eax], 4
// 0093bc64  40                   inc eax
// 0093bc65  c60004               mov byte ptr [eax], 4
// 0093bc68  40                   inc eax
// 0093bc69  c60008               mov byte ptr [eax], 8
// 0093bc6c  c6400100             mov byte ptr [eax + 1], 0
// 0093bc70  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
