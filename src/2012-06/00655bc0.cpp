// from server: 100% by auto
// roc 2012-06 00655bc0  unit: seg_00650000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655bc0
//
// 00655bc0  8a542408             mov dl, byte ptr [esp + 8]
// 00655bc4  56                   push esi
// 00655bc5  8b742408             mov esi, dword ptr [esp + 8]
// 00655bc9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655bcc  8b08                 mov ecx, dword ptr [eax]
// 00655bce  8811                 mov byte ptr [ecx], dl
// 00655bd0  ff00                 inc dword ptr [eax]
// 00655bd2  834004ff             add dword ptr [eax + 4], -1
// 00655bd6  7520                 jne 0x655bf8
// 00655bd8  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655bdb  56                   push esi
// 00655bdc  ffd0                 call eax
// 00655bde  83c404               add esp, 4
// 00655be1  84c0                 test al, al
// 00655be3  7513                 jne 0x655bf8
// 00655be5  8b0e                 mov ecx, dword ptr [esi]
// 00655be7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00655bee  8b16                 mov edx, dword ptr [esi]
// 00655bf0  8b02                 mov eax, dword ptr [edx]
// 00655bf2  56                   push esi
// 00655bf3  ffd0                 call eax
// 00655bf5  83c404               add esp, 4
// 00655bf8  5e                   pop esi
// 00655bf9  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
