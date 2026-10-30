// from server: 100% by auto
// roc 2008-06 0052f670  unit: seg_00520000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052f670
//
// 0052f670  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f673  8b10                 mov edx, dword ptr [eax]
// 0052f675  8bcb                 mov ecx, ebx
// 0052f677  c1f908               sar ecx, 8
// 0052f67a  880a                 mov byte ptr [edx], cl
// 0052f67c  ff00                 inc dword ptr [eax]
// 0052f67e  834004ff             add dword ptr [eax + 4], -1
// 0052f682  7520                 jne 0x52f6a4
// 0052f684  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f687  56                   push esi
// 0052f688  ffd0                 call eax
// 0052f68a  83c404               add esp, 4
// 0052f68d  84c0                 test al, al
// 0052f68f  7513                 jne 0x52f6a4
// 0052f691  8b0e                 mov ecx, dword ptr [esi]
// 0052f693  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052f69a  8b16                 mov edx, dword ptr [esi]
// 0052f69c  8b02                 mov eax, dword ptr [edx]
// 0052f69e  56                   push esi
// 0052f69f  ffd0                 call eax
// 0052f6a1  83c404               add esp, 4
// 0052f6a4  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052f6a7  8b08                 mov ecx, dword ptr [eax]
// 0052f6a9  8819                 mov byte ptr [ecx], bl
// 0052f6ab  ff00                 inc dword ptr [eax]
// 0052f6ad  834004ff             add dword ptr [eax + 4], -1
// 0052f6b1  751e                 jne 0x52f6d1
// 0052f6b3  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052f6b6  56                   push esi
// 0052f6b7  ffd2                 call edx
// 0052f6b9  83c404               add esp, 4
// 0052f6bc  84c0                 test al, al
// 0052f6be  7511                 jne 0x52f6d1
// 0052f6c0  8b06                 mov eax, dword ptr [esi]
// 0052f6c2  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0052f6c9  8b0e                 mov ecx, dword ptr [esi]
// 0052f6cb  8b11                 mov edx, dword ptr [ecx]
// 0052f6cd  56                   push esi
// 0052f6ce  ffd2                 call edx
// 0052f6d0  59                   pop ecx
// 0052f6d1  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_2bytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
