// roc 2011-06 00569a20  unit: seg_00560000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569a20
//
// 00569a20  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569a23  8b10                 mov edx, dword ptr [eax]
// 00569a25  8bcb                 mov ecx, ebx
// 00569a27  c1f908               sar ecx, 8
// 00569a2a  880a                 mov byte ptr [edx], cl
// 00569a2c  ff00                 inc dword ptr [eax]
// 00569a2e  834004ff             add dword ptr [eax + 4], -1
// 00569a32  7520                 jne 0x569a54
// 00569a34  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569a37  56                   push esi
// 00569a38  ffd0                 call eax
// 00569a3a  83c404               add esp, 4
// 00569a3d  84c0                 test al, al
// 00569a3f  7513                 jne 0x569a54
// 00569a41  8b0e                 mov ecx, dword ptr [esi]
// 00569a43  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569a4a  8b16                 mov edx, dword ptr [esi]
// 00569a4c  8b02                 mov eax, dword ptr [edx]
// 00569a4e  56                   push esi
// 00569a4f  ffd0                 call eax
// 00569a51  83c404               add esp, 4
// 00569a54  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569a57  8b08                 mov ecx, dword ptr [eax]
// 00569a59  8819                 mov byte ptr [ecx], bl
// 00569a5b  ff00                 inc dword ptr [eax]
// 00569a5d  834004ff             add dword ptr [eax + 4], -1
// 00569a61  751e                 jne 0x569a81
// 00569a63  8b500c               mov edx, dword ptr [eax + 0xc]
// 00569a66  56                   push esi
// 00569a67  ffd2                 call edx
// 00569a69  83c404               add esp, 4
// 00569a6c  84c0                 test al, al
// 00569a6e  7511                 jne 0x569a81
// 00569a70  8b06                 mov eax, dword ptr [esi]
// 00569a72  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00569a79  8b0e                 mov ecx, dword ptr [esi]
// 00569a7b  8b11                 mov edx, dword ptr [ecx]
// 00569a7d  56                   push esi
// 00569a7e  ffd2                 call edx
// 00569a80  59                   pop ecx
// 00569a81  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_2bytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
