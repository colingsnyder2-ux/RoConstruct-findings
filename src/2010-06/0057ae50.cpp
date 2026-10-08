// from server: 100% by auto
// roc 2010-06 0057ae50  unit: seg_00570000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ae50
//
// 0057ae50  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057ae53  8b10                 mov edx, dword ptr [eax]
// 0057ae55  8bcb                 mov ecx, ebx
// 0057ae57  c1f908               sar ecx, 8
// 0057ae5a  880a                 mov byte ptr [edx], cl
// 0057ae5c  ff00                 inc dword ptr [eax]
// 0057ae5e  834004ff             add dword ptr [eax + 4], -1
// 0057ae62  7520                 jne 0x57ae84
// 0057ae64  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057ae67  56                   push esi
// 0057ae68  ffd0                 call eax
// 0057ae6a  83c404               add esp, 4
// 0057ae6d  84c0                 test al, al
// 0057ae6f  7513                 jne 0x57ae84
// 0057ae71  8b0e                 mov ecx, dword ptr [esi]
// 0057ae73  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057ae7a  8b16                 mov edx, dword ptr [esi]
// 0057ae7c  8b02                 mov eax, dword ptr [edx]
// 0057ae7e  56                   push esi
// 0057ae7f  ffd0                 call eax
// 0057ae81  83c404               add esp, 4
// 0057ae84  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057ae87  8b08                 mov ecx, dword ptr [eax]
// 0057ae89  8819                 mov byte ptr [ecx], bl
// 0057ae8b  ff00                 inc dword ptr [eax]
// 0057ae8d  834004ff             add dword ptr [eax + 4], -1
// 0057ae91  751e                 jne 0x57aeb1
// 0057ae93  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057ae96  56                   push esi
// 0057ae97  ffd2                 call edx
// 0057ae99  83c404               add esp, 4
// 0057ae9c  84c0                 test al, al
// 0057ae9e  7511                 jne 0x57aeb1
// 0057aea0  8b06                 mov eax, dword ptr [esi]
// 0057aea2  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0057aea9  8b0e                 mov ecx, dword ptr [esi]
// 0057aeab  8b11                 mov edx, dword ptr [ecx]
// 0057aead  56                   push esi
// 0057aeae  ffd2                 call edx
// 0057aeb0  59                   pop ecx
// 0057aeb1  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_2bytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
