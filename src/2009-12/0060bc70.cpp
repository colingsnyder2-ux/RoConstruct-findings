// roc 2009-12 0060bc70  unit: seg_00600000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bc70
//
// 0060bc70  8b442404             mov eax, dword ptr [esp + 4]
// 0060bc74  56                   push esi
// 0060bc75  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060bc79  8d4c30ff             lea ecx, [eax + esi - 1]
// 0060bc7d  8bc1                 mov eax, ecx
// 0060bc7f  99                   cdq 
// 0060bc80  f7fe                 idiv esi
// 0060bc82  8bc1                 mov eax, ecx
// 0060bc84  5e                   pop esi
// 0060bc85  2bc2                 sub eax, edx
// 0060bc87  c3                   ret 
// library jpeg-6b/jutils.c (function _jround_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
