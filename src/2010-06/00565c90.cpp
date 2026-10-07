// roc 2010-06 00565c90  unit: seg_00560000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565c90
//
// 00565c90  8b442408             mov eax, dword ptr [esp + 8]
// 00565c94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00565c98  56                   push esi
// 00565c99  8b31                 mov esi, dword ptr [ecx]
// 00565c9b  85c0                 test eax, eax
// 00565c9d  7d1a                 jge 0x565cb9
// 00565c9f  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 00565ca3  7406                 je 0x565cab
// 00565ca5  837e6803             cmp dword ptr [esi + 0x68], 3
// 00565ca9  7c09                 jl 0x565cb4
// 00565cab  8b4608               mov eax, dword ptr [esi + 8]
// 00565cae  51                   push ecx
// 00565caf  ffd0                 call eax
// 00565cb1  83c404               add esp, 4
// 00565cb4  ff466c               inc dword ptr [esi + 0x6c]
// 00565cb7  5e                   pop esi
// 00565cb8  c3                   ret 
// 00565cb9  394668               cmp dword ptr [esi + 0x68], eax
// 00565cbc  7c09                 jl 0x565cc7
// 00565cbe  51                   push ecx
// 00565cbf  8b4e08               mov ecx, dword ptr [esi + 8]
// 00565cc2  ffd1                 call ecx
// 00565cc4  83c404               add esp, 4
// 00565cc7  5e                   pop esi
// 00565cc8  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
