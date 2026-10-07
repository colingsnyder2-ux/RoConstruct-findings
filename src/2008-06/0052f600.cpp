// roc 2008-06 0052f600  unit: seg_00520000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052f600
//
// 0052f600  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f603  8b08                 mov ecx, dword ptr [eax]
// 0052f605  c601ff               mov byte ptr [ecx], 0xff
// 0052f608  ff00                 inc dword ptr [eax]
// 0052f60a  834004ff             add dword ptr [eax + 4], -1
// 0052f60e  7520                 jne 0x52f630
// 0052f610  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052f613  56                   push esi
// 0052f614  ffd2                 call edx
// 0052f616  83c404               add esp, 4
// 0052f619  84c0                 test al, al
// 0052f61b  7513                 jne 0x52f630
// 0052f61d  8b06                 mov eax, dword ptr [esi]
// 0052f61f  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0052f626  8b0e                 mov ecx, dword ptr [esi]
// 0052f628  8b11                 mov edx, dword ptr [ecx]
// 0052f62a  56                   push esi
// 0052f62b  ffd2                 call edx
// 0052f62d  83c404               add esp, 4
// 0052f630  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f633  8b08                 mov ecx, dword ptr [eax]
// 0052f635  8a542404             mov dl, byte ptr [esp + 4]
// 0052f639  8811                 mov byte ptr [ecx], dl
// 0052f63b  ff00                 inc dword ptr [eax]
// 0052f63d  834004ff             add dword ptr [eax + 4], -1
// 0052f641  7520                 jne 0x52f663
// 0052f643  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f646  56                   push esi
// 0052f647  ffd0                 call eax
// 0052f649  83c404               add esp, 4
// 0052f64c  84c0                 test al, al
// 0052f64e  7513                 jne 0x52f663
// 0052f650  8b0e                 mov ecx, dword ptr [esi]
// 0052f652  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052f659  8b16                 mov edx, dword ptr [esi]
// 0052f65b  8b02                 mov eax, dword ptr [edx]
// 0052f65d  89742404             mov dword ptr [esp + 4], esi
// 0052f661  ffe0                 jmp eax
// 0052f663  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
