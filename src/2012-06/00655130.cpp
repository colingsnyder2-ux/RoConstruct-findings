// from server: 100% by auto
// roc 2012-06 00655130  unit: seg_00650000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655130
//
// 00655130  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655133  8b10                 mov edx, dword ptr [eax]
// 00655135  8bcb                 mov ecx, ebx
// 00655137  c1f908               sar ecx, 8
// 0065513a  880a                 mov byte ptr [edx], cl
// 0065513c  ff00                 inc dword ptr [eax]
// 0065513e  834004ff             add dword ptr [eax + 4], -1
// 00655142  7520                 jne 0x655164
// 00655144  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655147  56                   push esi
// 00655148  ffd0                 call eax
// 0065514a  83c404               add esp, 4
// 0065514d  84c0                 test al, al
// 0065514f  7513                 jne 0x655164
// 00655151  8b0e                 mov ecx, dword ptr [esi]
// 00655153  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0065515a  8b16                 mov edx, dword ptr [esi]
// 0065515c  8b02                 mov eax, dword ptr [edx]
// 0065515e  56                   push esi
// 0065515f  ffd0                 call eax
// 00655161  83c404               add esp, 4
// 00655164  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655167  8b08                 mov ecx, dword ptr [eax]
// 00655169  8819                 mov byte ptr [ecx], bl
// 0065516b  ff00                 inc dword ptr [eax]
// 0065516d  834004ff             add dword ptr [eax + 4], -1
// 00655171  751e                 jne 0x655191
// 00655173  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655176  56                   push esi
// 00655177  ffd2                 call edx
// 00655179  83c404               add esp, 4
// 0065517c  84c0                 test al, al
// 0065517e  7511                 jne 0x655191
// 00655180  8b06                 mov eax, dword ptr [esi]
// 00655182  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00655189  8b0e                 mov ecx, dword ptr [esi]
// 0065518b  8b11                 mov edx, dword ptr [ecx]
// 0065518d  56                   push esi
// 0065518e  ffd2                 call edx
// 00655190  59                   pop ecx
// 00655191  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_2bytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
