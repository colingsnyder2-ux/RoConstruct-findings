// roc 2012-06 006534c0  unit: seg_00650000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006534c0
//
// 006534c0  8b442404             mov eax, dword ptr [esp + 4]
// 006534c4  56                   push esi
// 006534c5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006534c9  8d4c30ff             lea ecx, [eax + esi - 1]
// 006534cd  8bc1                 mov eax, ecx
// 006534cf  99                   cdq 
// 006534d0  f7fe                 idiv esi
// 006534d2  8bc1                 mov eax, ecx
// 006534d4  5e                   pop esi
// 006534d5  2bc2                 sub eax, edx
// 006534d7  c3                   ret 
// library jpeg-6b/jutils.c (function _jround_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
