// roc 2007-03 0051e140  unit: seg_00510000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e140
//
// 0051e140  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051e143  8b08                 mov ecx, dword ptr [eax]
// 0051e145  8a542404             mov dl, byte ptr [esp + 4]
// 0051e149  8811                 mov byte ptr [ecx], dl
// 0051e14b  830001               add dword ptr [eax], 1
// 0051e14e  834004ff             add dword ptr [eax + 4], -1
// 0051e152  7520                 jne 0x51e174
// 0051e154  8b400c               mov eax, dword ptr [eax + 0xc]
// 0051e157  56                   push esi
// 0051e158  ffd0                 call eax
// 0051e15a  83c404               add esp, 4
// 0051e15d  84c0                 test al, al
// 0051e15f  7513                 jne 0x51e174
// 0051e161  8b0e                 mov ecx, dword ptr [esi]
// 0051e163  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0051e16a  8b16                 mov edx, dword ptr [esi]
// 0051e16c  8b02                 mov eax, dword ptr [edx]
// 0051e16e  89742404             mov dword ptr [esp + 4], esi
// 0051e172  ffe0                 jmp eax
// 0051e174  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_byte)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
