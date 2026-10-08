// from server: 100% by auto
// roc 2008-06 00530100  unit: seg_00530000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530100
//
// 00530100  8a542408             mov dl, byte ptr [esp + 8]
// 00530104  56                   push esi
// 00530105  8b742408             mov esi, dword ptr [esp + 8]
// 00530109  8b4618               mov eax, dword ptr [esi + 0x18]
// 0053010c  8b08                 mov ecx, dword ptr [eax]
// 0053010e  8811                 mov byte ptr [ecx], dl
// 00530110  ff00                 inc dword ptr [eax]
// 00530112  834004ff             add dword ptr [eax + 4], -1
// 00530116  7520                 jne 0x530138
// 00530118  8b400c               mov eax, dword ptr [eax + 0xc]
// 0053011b  56                   push esi
// 0053011c  ffd0                 call eax
// 0053011e  83c404               add esp, 4
// 00530121  84c0                 test al, al
// 00530123  7513                 jne 0x530138
// 00530125  8b0e                 mov ecx, dword ptr [esi]
// 00530127  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0053012e  8b16                 mov edx, dword ptr [esi]
// 00530130  8b02                 mov eax, dword ptr [edx]
// 00530132  56                   push esi
// 00530133  ffd0                 call eax
// 00530135  83c404               add esp, 4
// 00530138  5e                   pop esi
// 00530139  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_marker_byte)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
