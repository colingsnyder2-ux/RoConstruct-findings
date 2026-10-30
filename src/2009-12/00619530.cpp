// roc 2009-12 00619530  unit: seg_00610000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00619530
//
// 00619530  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619533  8b10                 mov edx, dword ptr [eax]
// 00619535  8bcb                 mov ecx, ebx
// 00619537  c1f908               sar ecx, 8
// 0061953a  880a                 mov byte ptr [edx], cl
// 0061953c  ff00                 inc dword ptr [eax]
// 0061953e  834004ff             add dword ptr [eax + 4], -1
// 00619542  7520                 jne 0x619564
// 00619544  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619547  56                   push esi
// 00619548  ffd0                 call eax
// 0061954a  83c404               add esp, 4
// 0061954d  84c0                 test al, al
// 0061954f  7513                 jne 0x619564
// 00619551  8b0e                 mov ecx, dword ptr [esi]
// 00619553  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0061955a  8b16                 mov edx, dword ptr [esi]
// 0061955c  8b02                 mov eax, dword ptr [edx]
// 0061955e  56                   push esi
// 0061955f  ffd0                 call eax
// 00619561  83c404               add esp, 4
// 00619564  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619567  8b08                 mov ecx, dword ptr [eax]
// 00619569  8819                 mov byte ptr [ecx], bl
// 0061956b  ff00                 inc dword ptr [eax]
// 0061956d  834004ff             add dword ptr [eax + 4], -1
// 00619571  751e                 jne 0x619591
// 00619573  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619576  56                   push esi
// 00619577  ffd2                 call edx
// 00619579  83c404               add esp, 4
// 0061957c  84c0                 test al, al
// 0061957e  7511                 jne 0x619591
// 00619580  8b06                 mov eax, dword ptr [esi]
// 00619582  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00619589  8b0e                 mov ecx, dword ptr [esi]
// 0061958b  8b11                 mov edx, dword ptr [ecx]
// 0061958d  56                   push esi
// 0061958e  ffd2                 call edx
// 00619590  59                   pop ecx
// 00619591  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_2bytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
