// from server: 100% by auto
// roc 2007-08 0051e260  unit: seg_00510000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e260
//
// 0051e260  8b442404             mov eax, dword ptr [esp + 4]
// 0051e264  56                   push esi
// 0051e265  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051e269  8d4c30ff             lea ecx, [eax + esi - 1]
// 0051e26d  8bc1                 mov eax, ecx
// 0051e26f  99                   cdq 
// 0051e270  f7fe                 idiv esi
// 0051e272  8bc1                 mov eax, ecx
// 0051e274  5e                   pop esi
// 0051e275  2bc2                 sub eax, edx
// 0051e277  c3                   ret 
// library jpeg-6b/jutils.c (function _jround_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
