// roc 2011-06 005699b0  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005699b0
//
// 005699b0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005699b3  8b08                 mov ecx, dword ptr [eax]
// 005699b5  c601ff               mov byte ptr [ecx], 0xff
// 005699b8  ff00                 inc dword ptr [eax]
// 005699ba  834004ff             add dword ptr [eax + 4], -1
// 005699be  7520                 jne 0x5699e0
// 005699c0  8b500c               mov edx, dword ptr [eax + 0xc]
// 005699c3  56                   push esi
// 005699c4  ffd2                 call edx
// 005699c6  83c404               add esp, 4
// 005699c9  84c0                 test al, al
// 005699cb  7513                 jne 0x5699e0
// 005699cd  8b06                 mov eax, dword ptr [esi]
// 005699cf  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 005699d6  8b0e                 mov ecx, dword ptr [esi]
// 005699d8  8b11                 mov edx, dword ptr [ecx]
// 005699da  56                   push esi
// 005699db  ffd2                 call edx
// 005699dd  83c404               add esp, 4
// 005699e0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005699e3  8b08                 mov ecx, dword ptr [eax]
// 005699e5  8a542404             mov dl, byte ptr [esp + 4]
// 005699e9  8811                 mov byte ptr [ecx], dl
// 005699eb  ff00                 inc dword ptr [eax]
// 005699ed  834004ff             add dword ptr [eax + 4], -1
// 005699f1  7520                 jne 0x569a13
// 005699f3  8b400c               mov eax, dword ptr [eax + 0xc]
// 005699f6  56                   push esi
// 005699f7  ffd0                 call eax
// 005699f9  83c404               add esp, 4
// 005699fc  84c0                 test al, al
// 005699fe  7513                 jne 0x569a13
// 00569a00  8b0e                 mov ecx, dword ptr [esi]
// 00569a02  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569a09  8b16                 mov edx, dword ptr [esi]
// 00569a0b  8b02                 mov eax, dword ptr [edx]
// 00569a0d  89742404             mov dword ptr [esp + 4], esi
// 00569a11  ffe0                 jmp eax
// 00569a13  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
