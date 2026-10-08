// from server: 100% by auto
// roc 2009-06 00589e20  unit: seg_00580000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589e20
//
// 00589e20  8b442404             mov eax, dword ptr [esp + 4]
// 00589e24  56                   push esi
// 00589e25  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00589e29  8d4c30ff             lea ecx, [eax + esi - 1]
// 00589e2d  8bc1                 mov eax, ecx
// 00589e2f  99                   cdq 
// 00589e30  f7fe                 idiv esi
// 00589e32  8bc1                 mov eax, ecx
// 00589e34  5e                   pop esi
// 00589e35  2bc2                 sub eax, edx
// 00589e37  c3                   ret 
// library jpeg-6b/jutils.c (function _jround_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
