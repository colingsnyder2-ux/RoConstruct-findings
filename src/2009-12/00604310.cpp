// roc 2009-12 00604310  unit: seg_00600000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00604310
//
// 00604310  8b442408             mov eax, dword ptr [esp + 8]
// 00604314  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00604318  56                   push esi
// 00604319  8b31                 mov esi, dword ptr [ecx]
// 0060431b  85c0                 test eax, eax
// 0060431d  7d1a                 jge 0x604339
// 0060431f  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 00604323  7406                 je 0x60432b
// 00604325  837e6803             cmp dword ptr [esi + 0x68], 3
// 00604329  7c09                 jl 0x604334
// 0060432b  8b4608               mov eax, dword ptr [esi + 8]
// 0060432e  51                   push ecx
// 0060432f  ffd0                 call eax
// 00604331  83c404               add esp, 4
// 00604334  ff466c               inc dword ptr [esi + 0x6c]
// 00604337  5e                   pop esi
// 00604338  c3                   ret 
// 00604339  394668               cmp dword ptr [esi + 0x68], eax
// 0060433c  7c09                 jl 0x604347
// 0060433e  51                   push ecx
// 0060433f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00604342  ffd1                 call ecx
// 00604344  83c404               add esp, 4
// 00604347  5e                   pop esi
// 00604348  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
