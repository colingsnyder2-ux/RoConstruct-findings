// roc 2009-12 006194c0  unit: seg_00610000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006194c0
//
// 006194c0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006194c3  8b08                 mov ecx, dword ptr [eax]
// 006194c5  c601ff               mov byte ptr [ecx], 0xff
// 006194c8  ff00                 inc dword ptr [eax]
// 006194ca  834004ff             add dword ptr [eax + 4], -1
// 006194ce  7520                 jne 0x6194f0
// 006194d0  8b500c               mov edx, dword ptr [eax + 0xc]
// 006194d3  56                   push esi
// 006194d4  ffd2                 call edx
// 006194d6  83c404               add esp, 4
// 006194d9  84c0                 test al, al
// 006194db  7513                 jne 0x6194f0
// 006194dd  8b06                 mov eax, dword ptr [esi]
// 006194df  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 006194e6  8b0e                 mov ecx, dword ptr [esi]
// 006194e8  8b11                 mov edx, dword ptr [ecx]
// 006194ea  56                   push esi
// 006194eb  ffd2                 call edx
// 006194ed  83c404               add esp, 4
// 006194f0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006194f3  8b08                 mov ecx, dword ptr [eax]
// 006194f5  8a542404             mov dl, byte ptr [esp + 4]
// 006194f9  8811                 mov byte ptr [ecx], dl
// 006194fb  ff00                 inc dword ptr [eax]
// 006194fd  834004ff             add dword ptr [eax + 4], -1
// 00619501  7520                 jne 0x619523
// 00619503  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619506  56                   push esi
// 00619507  ffd0                 call eax
// 00619509  83c404               add esp, 4
// 0061950c  84c0                 test al, al
// 0061950e  7513                 jne 0x619523
// 00619510  8b0e                 mov ecx, dword ptr [esi]
// 00619512  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00619519  8b16                 mov edx, dword ptr [esi]
// 0061951b  8b02                 mov eax, dword ptr [edx]
// 0061951d  89742404             mov dword ptr [esp + 4], esi
// 00619521  ffe0                 jmp eax
// 00619523  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
