// from server: 100% by auto
// roc 2007-08 00515ca0  unit: seg_00510000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515ca0
//
// 00515ca0  8b442408             mov eax, dword ptr [esp + 8]
// 00515ca4  85c0                 test eax, eax
// 00515ca6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00515caa  56                   push esi
// 00515cab  8b31                 mov esi, dword ptr [ecx]
// 00515cad  7d1b                 jge 0x515cca
// 00515caf  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 00515cb3  7406                 je 0x515cbb
// 00515cb5  837e6803             cmp dword ptr [esi + 0x68], 3
// 00515cb9  7c09                 jl 0x515cc4
// 00515cbb  8b4608               mov eax, dword ptr [esi + 8]
// 00515cbe  51                   push ecx
// 00515cbf  ffd0                 call eax
// 00515cc1  83c404               add esp, 4
// 00515cc4  83466c01             add dword ptr [esi + 0x6c], 1
// 00515cc8  5e                   pop esi
// 00515cc9  c3                   ret 
// 00515cca  394668               cmp dword ptr [esi + 0x68], eax
// 00515ccd  7c09                 jl 0x515cd8
// 00515ccf  51                   push ecx
// 00515cd0  8b4e08               mov ecx, dword ptr [esi + 8]
// 00515cd3  ffd1                 call ecx
// 00515cd5  83c404               add esp, 4
// 00515cd8  5e                   pop esi
// 00515cd9  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
