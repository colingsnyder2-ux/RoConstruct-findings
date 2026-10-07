// roc 2010-06 0056d350  unit: seg_00560000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d350
//
// 0056d350  8b442404             mov eax, dword ptr [esp + 4]
// 0056d354  56                   push esi
// 0056d355  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056d359  8d4c30ff             lea ecx, [eax + esi - 1]
// 0056d35d  8bc1                 mov eax, ecx
// 0056d35f  99                   cdq 
// 0056d360  f7fe                 idiv esi
// 0056d362  8bc1                 mov eax, ecx
// 0056d364  5e                   pop esi
// 0056d365  2bc2                 sub eax, edx
// 0056d367  c3                   ret 
// library jpeg-6b/jutils.c (function _jround_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
