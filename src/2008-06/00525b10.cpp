// roc 2008-06 00525b10  unit: seg_00520000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525b10
//
// 00525b10  8b442404             mov eax, dword ptr [esp + 4]
// 00525b14  56                   push esi
// 00525b15  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00525b19  8d4c30ff             lea ecx, [eax + esi - 1]
// 00525b1d  8bc1                 mov eax, ecx
// 00525b1f  99                   cdq 
// 00525b20  f7fe                 idiv esi
// 00525b22  8bc1                 mov eax, ecx
// 00525b24  5e                   pop esi
// 00525b25  2bc2                 sub eax, edx
// 00525b27  c3                   ret 
// library jpeg-6b/jutils.c (function _jround_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
