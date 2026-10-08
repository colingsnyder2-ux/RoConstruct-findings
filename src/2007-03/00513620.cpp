// roc 2007-03 00513620  unit: seg_00510000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513620
//
// 00513620  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00513624  85c9                 test ecx, ecx
// 00513626  7f0e                 jg 0x513636
// 00513628  b888130000           mov eax, 0x1388
// 0051362d  99                   cdq 
// 0051362e  b901000000           mov ecx, 1
// 00513633  f7f9                 idiv ecx
// 00513635  c3                   ret 
// 00513636  83f964               cmp ecx, 0x64
// 00513639  7e0f                 jle 0x51364a
// 0051363b  b964000000           mov ecx, 0x64
// 00513640  b864000000           mov eax, 0x64
// 00513645  2bc1                 sub eax, ecx
// 00513647  03c0                 add eax, eax
// 00513649  c3                   ret 
// 0051364a  83f932               cmp ecx, 0x32
// 0051364d  7df1                 jge 0x513640
// 0051364f  b888130000           mov eax, 0x1388
// 00513654  99                   cdq 
// 00513655  f7f9                 idiv ecx
// 00513657  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_quality_scaling)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
