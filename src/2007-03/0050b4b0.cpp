// roc 2007-03 0050b4b0  unit: seg_00500000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b4b0
//
// 0050b4b0  8b442408             mov eax, dword ptr [esp + 8]
// 0050b4b4  85c0                 test eax, eax
// 0050b4b6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050b4ba  56                   push esi
// 0050b4bb  8b31                 mov esi, dword ptr [ecx]
// 0050b4bd  7d1b                 jge 0x50b4da
// 0050b4bf  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0050b4c3  7406                 je 0x50b4cb
// 0050b4c5  837e6803             cmp dword ptr [esi + 0x68], 3
// 0050b4c9  7c09                 jl 0x50b4d4
// 0050b4cb  8b4608               mov eax, dword ptr [esi + 8]
// 0050b4ce  51                   push ecx
// 0050b4cf  ffd0                 call eax
// 0050b4d1  83c404               add esp, 4
// 0050b4d4  83466c01             add dword ptr [esi + 0x6c], 1
// 0050b4d8  5e                   pop esi
// 0050b4d9  c3                   ret 
// 0050b4da  394668               cmp dword ptr [esi + 0x68], eax
// 0050b4dd  7c09                 jl 0x50b4e8
// 0050b4df  51                   push ecx
// 0050b4e0  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050b4e3  ffd1                 call ecx
// 0050b4e5  83c404               add esp, 4
// 0050b4e8  5e                   pop esi
// 0050b4e9  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c
