// roc 2010-06 0057b8e0  unit: seg_00570000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b8e0
//
// 0057b8e0  8a542408             mov dl, byte ptr [esp + 8]
// 0057b8e4  56                   push esi
// 0057b8e5  8b742408             mov esi, dword ptr [esp + 8]
// 0057b8e9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b8ec  8b08                 mov ecx, dword ptr [eax]
// 0057b8ee  8811                 mov byte ptr [ecx], dl
// 0057b8f0  ff00                 inc dword ptr [eax]
// 0057b8f2  834004ff             add dword ptr [eax + 4], -1
// 0057b8f6  7520                 jne 0x57b918
// 0057b8f8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b8fb  56                   push esi
// 0057b8fc  ffd0                 call eax
// 0057b8fe  83c404               add esp, 4
// 0057b901  84c0                 test al, al
// 0057b903  7513                 jne 0x57b918
// 0057b905  8b0e                 mov ecx, dword ptr [esi]
// 0057b907  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b90e  8b16                 mov edx, dword ptr [esi]
// 0057b910  8b02                 mov eax, dword ptr [edx]
// 0057b912  56                   push esi
// 0057b913  ffd0                 call eax
// 0057b915  83c404               add esp, 4
// 0057b918  5e                   pop esi
// 0057b919  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
