// roc 2009-06 00597490  unit: seg_00590000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597490
//
// 00597490  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597493  8b08                 mov ecx, dword ptr [eax]
// 00597495  c601ff               mov byte ptr [ecx], 0xff
// 00597498  ff00                 inc dword ptr [eax]
// 0059749a  834004ff             add dword ptr [eax + 4], -1
// 0059749e  7520                 jne 0x5974c0
// 005974a0  8b500c               mov edx, dword ptr [eax + 0xc]
// 005974a3  56                   push esi
// 005974a4  ffd2                 call edx
// 005974a6  83c404               add esp, 4
// 005974a9  84c0                 test al, al
// 005974ab  7513                 jne 0x5974c0
// 005974ad  8b06                 mov eax, dword ptr [esi]
// 005974af  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 005974b6  8b0e                 mov ecx, dword ptr [esi]
// 005974b8  8b11                 mov edx, dword ptr [ecx]
// 005974ba  56                   push esi
// 005974bb  ffd2                 call edx
// 005974bd  83c404               add esp, 4
// 005974c0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005974c3  8b08                 mov ecx, dword ptr [eax]
// 005974c5  8a542404             mov dl, byte ptr [esp + 4]
// 005974c9  8811                 mov byte ptr [ecx], dl
// 005974cb  ff00                 inc dword ptr [eax]
// 005974cd  834004ff             add dword ptr [eax + 4], -1
// 005974d1  7520                 jne 0x5974f3
// 005974d3  8b400c               mov eax, dword ptr [eax + 0xc]
// 005974d6  56                   push esi
// 005974d7  ffd0                 call eax
// 005974d9  83c404               add esp, 4
// 005974dc  84c0                 test al, al
// 005974de  7513                 jne 0x5974f3
// 005974e0  8b0e                 mov ecx, dword ptr [esi]
// 005974e2  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 005974e9  8b16                 mov edx, dword ptr [esi]
// 005974eb  8b02                 mov eax, dword ptr [edx]
// 005974ed  89742404             mov dword ptr [esp + 4], esi
// 005974f1  ffe0                 jmp eax
// 005974f3  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
