// from server: 100% by auto
// roc 2012-06 006550c0  unit: seg_00650000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006550c0
//
// 006550c0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006550c3  8b08                 mov ecx, dword ptr [eax]
// 006550c5  c601ff               mov byte ptr [ecx], 0xff
// 006550c8  ff00                 inc dword ptr [eax]
// 006550ca  834004ff             add dword ptr [eax + 4], -1
// 006550ce  7520                 jne 0x6550f0
// 006550d0  8b500c               mov edx, dword ptr [eax + 0xc]
// 006550d3  56                   push esi
// 006550d4  ffd2                 call edx
// 006550d6  83c404               add esp, 4
// 006550d9  84c0                 test al, al
// 006550db  7513                 jne 0x6550f0
// 006550dd  8b06                 mov eax, dword ptr [esi]
// 006550df  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 006550e6  8b0e                 mov ecx, dword ptr [esi]
// 006550e8  8b11                 mov edx, dword ptr [ecx]
// 006550ea  56                   push esi
// 006550eb  ffd2                 call edx
// 006550ed  83c404               add esp, 4
// 006550f0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006550f3  8b08                 mov ecx, dword ptr [eax]
// 006550f5  8a542404             mov dl, byte ptr [esp + 4]
// 006550f9  8811                 mov byte ptr [ecx], dl
// 006550fb  ff00                 inc dword ptr [eax]
// 006550fd  834004ff             add dword ptr [eax + 4], -1
// 00655101  7520                 jne 0x655123
// 00655103  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655106  56                   push esi
// 00655107  ffd0                 call eax
// 00655109  83c404               add esp, 4
// 0065510c  84c0                 test al, al
// 0065510e  7513                 jne 0x655123
// 00655110  8b0e                 mov ecx, dword ptr [esi]
// 00655112  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00655119  8b16                 mov edx, dword ptr [esi]
// 0065511b  8b02                 mov eax, dword ptr [edx]
// 0065511d  89742404             mov dword ptr [esp + 4], esi
// 00655121  ffe0                 jmp eax
// 00655123  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
