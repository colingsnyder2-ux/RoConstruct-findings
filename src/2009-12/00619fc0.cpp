// roc 2009-12 00619fc0  unit: seg_00610000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00619fc0
//
// 00619fc0  8a542408             mov dl, byte ptr [esp + 8]
// 00619fc4  56                   push esi
// 00619fc5  8b742408             mov esi, dword ptr [esp + 8]
// 00619fc9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619fcc  8b08                 mov ecx, dword ptr [eax]
// 00619fce  8811                 mov byte ptr [ecx], dl
// 00619fd0  ff00                 inc dword ptr [eax]
// 00619fd2  834004ff             add dword ptr [eax + 4], -1
// 00619fd6  7520                 jne 0x619ff8
// 00619fd8  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619fdb  56                   push esi
// 00619fdc  ffd0                 call eax
// 00619fde  83c404               add esp, 4
// 00619fe1  84c0                 test al, al
// 00619fe3  7513                 jne 0x619ff8
// 00619fe5  8b0e                 mov ecx, dword ptr [esi]
// 00619fe7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00619fee  8b16                 mov edx, dword ptr [esi]
// 00619ff0  8b02                 mov eax, dword ptr [edx]
// 00619ff2  56                   push esi
// 00619ff3  ffd0                 call eax
// 00619ff5  83c404               add esp, 4
// 00619ff8  5e                   pop esi
// 00619ff9  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
