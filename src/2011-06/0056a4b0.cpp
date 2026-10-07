// roc 2011-06 0056a4b0  unit: seg_00560000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a4b0
//
// 0056a4b0  8a542408             mov dl, byte ptr [esp + 8]
// 0056a4b4  56                   push esi
// 0056a4b5  8b742408             mov esi, dword ptr [esp + 8]
// 0056a4b9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a4bc  8b08                 mov ecx, dword ptr [eax]
// 0056a4be  8811                 mov byte ptr [ecx], dl
// 0056a4c0  ff00                 inc dword ptr [eax]
// 0056a4c2  834004ff             add dword ptr [eax + 4], -1
// 0056a4c6  7520                 jne 0x56a4e8
// 0056a4c8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a4cb  56                   push esi
// 0056a4cc  ffd0                 call eax
// 0056a4ce  83c404               add esp, 4
// 0056a4d1  84c0                 test al, al
// 0056a4d3  7513                 jne 0x56a4e8
// 0056a4d5  8b0e                 mov ecx, dword ptr [esi]
// 0056a4d7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0056a4de  8b16                 mov edx, dword ptr [esi]
// 0056a4e0  8b02                 mov eax, dword ptr [edx]
// 0056a4e2  56                   push esi
// 0056a4e3  ffd0                 call eax
// 0056a4e5  83c404               add esp, 4
// 0056a4e8  5e                   pop esi
// 0056a4e9  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
