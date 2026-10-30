// from server: 100% by auto
// roc 2009-06 00597f90  unit: seg_00590000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597f90
//
// 00597f90  8a542408             mov dl, byte ptr [esp + 8]
// 00597f94  56                   push esi
// 00597f95  8b742408             mov esi, dword ptr [esp + 8]
// 00597f99  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597f9c  8b08                 mov ecx, dword ptr [eax]
// 00597f9e  8811                 mov byte ptr [ecx], dl
// 00597fa0  ff00                 inc dword ptr [eax]
// 00597fa2  834004ff             add dword ptr [eax + 4], -1
// 00597fa6  7520                 jne 0x597fc8
// 00597fa8  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597fab  56                   push esi
// 00597fac  ffd0                 call eax
// 00597fae  83c404               add esp, 4
// 00597fb1  84c0                 test al, al
// 00597fb3  7513                 jne 0x597fc8
// 00597fb5  8b0e                 mov ecx, dword ptr [esi]
// 00597fb7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00597fbe  8b16                 mov edx, dword ptr [esi]
// 00597fc0  8b02                 mov eax, dword ptr [edx]
// 00597fc2  56                   push esi
// 00597fc3  ffd0                 call eax
// 00597fc5  83c404               add esp, 4
// 00597fc8  5e                   pop esi
// 00597fc9  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
