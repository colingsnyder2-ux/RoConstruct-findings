// roc 2009-12 006198f0  unit: seg_00610000  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006198f0
//
// 006198f0  53                   push ebx
// 006198f1  55                   push ebp
// 006198f2  56                   push esi
// 006198f3  57                   push edi
// 006198f4  8bf1                 mov esi, ecx
// 006198f6  50                   push eax
// 006198f7  e8c4fbffff           call 0x6194c0
// 006198fc  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006198ff  83c404               add esp, 4
// 00619902  8d5c4008             lea ebx, [eax + eax*2 + 8]
// 00619906  e825fcffff           call 0x619530
// 0061990b  b8ffff0000           mov eax, 0xffff
// 00619910  394620               cmp dword ptr [esi + 0x20], eax
// 00619913  7f05                 jg 0x61991a
// 00619915  39461c               cmp dword ptr [esi + 0x1c], eax
// 00619918  7e18                 jle 0x619932
// 0061991a  8b0e                 mov ecx, dword ptr [esi]
// 0061991c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00619923  8b16                 mov edx, dword ptr [esi]
// 00619925  894218               mov dword ptr [edx + 0x18], eax
// 00619928  8b06                 mov eax, dword ptr [esi]
// 0061992a  8b08                 mov ecx, dword ptr [eax]
// 0061992c  56                   push esi
// 0061992d  ffd1                 call ecx
// 0061992f  83c404               add esp, 4
// 00619932  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619935  8a4e38               mov cl, byte ptr [esi + 0x38]
// 00619938  8b10                 mov edx, dword ptr [eax]
// 0061993a  880a                 mov byte ptr [edx], cl
// 0061993c  ff00                 inc dword ptr [eax]
// 0061993e  83cdff               or ebp, 0xffffffff
// 00619941  016804               add dword ptr [eax + 4], ebp
// 00619944  7520                 jne 0x619966
// 00619946  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619949  56                   push esi
// 0061994a  ffd2                 call edx
// 0061994c  83c404               add esp, 4
// 0061994f  84c0                 test al, al
// 00619951  7513                 jne 0x619966
// 00619953  8b06                 mov eax, dword ptr [esi]
// 00619955  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0061995c  8b0e                 mov ecx, dword ptr [esi]
// 0061995e  8b11                 mov edx, dword ptr [ecx]
// 00619960  56                   push esi
// 00619961  ffd2                 call edx
// 00619963  83c404               add esp, 4
// 00619966  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00619969  e8c2fbffff           call 0x619530
// 0061996e  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00619971  e8bafbffff           call 0x619530
// 00619976  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619979  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0061997c  8b08                 mov ecx, dword ptr [eax]
// 0061997e  8811                 mov byte ptr [ecx], dl
// 00619980  ff00                 inc dword ptr [eax]
// 00619982  016804               add dword ptr [eax + 4], ebp
// 00619985  7520                 jne 0x6199a7
// 00619987  8b400c               mov eax, dword ptr [eax + 0xc]
// 0061998a  56                   push esi
// 0061998b  ffd0                 call eax
// 0061998d  83c404               add esp, 4
// 00619990  84c0                 test al, al
// 00619992  7513                 jne 0x6199a7
// 00619994  8b0e                 mov ecx, dword ptr [esi]
// 00619996  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0061999d  8b16                 mov edx, dword ptr [esi]
// 0061999f  8b02                 mov eax, dword ptr [edx]
// 006199a1  56                   push esi
// 006199a2  ffd0                 call eax
// 006199a4  83c404               add esp, 4
// 006199a7  8b7e44               mov edi, dword ptr [esi + 0x44]
// 006199aa  33db                 xor ebx, ebx
// 006199ac  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 006199af  0f8ea5000000         jle 0x619a5a
// 006199b5  8b4618               mov eax, dword ptr [esi + 0x18]
// 006199b8  8a17                 mov dl, byte ptr [edi]
// 006199ba  8b08                 mov ecx, dword ptr [eax]
// 006199bc  8811                 mov byte ptr [ecx], dl
// 006199be  ff00                 inc dword ptr [eax]
// 006199c0  016804               add dword ptr [eax + 4], ebp
// 006199c3  7520                 jne 0x6199e5
// 006199c5  8b400c               mov eax, dword ptr [eax + 0xc]
// 006199c8  56                   push esi
// 006199c9  ffd0                 call eax
// 006199cb  83c404               add esp, 4
// 006199ce  84c0                 test al, al
// 006199d0  7513                 jne 0x6199e5
// 006199d2  8b0e                 mov ecx, dword ptr [esi]
// 006199d4  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 006199db  8b16                 mov edx, dword ptr [esi]
// 006199dd  8b02                 mov eax, dword ptr [edx]
// 006199df  56                   push esi
// 006199e0  ffd0                 call eax
// 006199e2  83c404               add esp, 4
// 006199e5  8a4f08               mov cl, byte ptr [edi + 8]
// 006199e8  8b4618               mov eax, dword ptr [esi + 0x18]
// 006199eb  8b10                 mov edx, dword ptr [eax]
// 006199ed  c0e104               shl cl, 4
// 006199f0  024f0c               add cl, byte ptr [edi + 0xc]
// 006199f3  880a                 mov byte ptr [edx], cl
// 006199f5  ff00                 inc dword ptr [eax]
// 006199f7  016804               add dword ptr [eax + 4], ebp
// 006199fa  7520                 jne 0x619a1c
// 006199fc  8b400c               mov eax, dword ptr [eax + 0xc]
// 006199ff  56                   push esi
// 00619a00  ffd0                 call eax
// 00619a02  83c404               add esp, 4
// 00619a05  84c0                 test al, al
// 00619a07  7513                 jne 0x619a1c
// 00619a09  8b0e                 mov ecx, dword ptr [esi]
// 00619a0b  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00619a12  8b16                 mov edx, dword ptr [esi]
// 00619a14  8b02                 mov eax, dword ptr [edx]
// 00619a16  56                   push esi
// 00619a17  ffd0                 call eax
// 00619a19  83c404               add esp, 4
// 00619a1c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619a1f  8a5710               mov dl, byte ptr [edi + 0x10]
// 00619a22  8b08                 mov ecx, dword ptr [eax]
// 00619a24  8811                 mov byte ptr [ecx], dl
// 00619a26  ff00                 inc dword ptr [eax]
// 00619a28  016804               add dword ptr [eax + 4], ebp
// 00619a2b  7520                 jne 0x619a4d
// 00619a2d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619a30  56                   push esi
// 00619a31  ffd0                 call eax
// 00619a33  83c404               add esp, 4
// 00619a36  84c0                 test al, al
// 00619a38  7513                 jne 0x619a4d
// 00619a3a  8b0e                 mov ecx, dword ptr [esi]
// 00619a3c  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00619a43  8b16                 mov edx, dword ptr [esi]
// 00619a45  8b02                 mov eax, dword ptr [edx]
// 00619a47  56                   push esi
// 00619a48  ffd0                 call eax
// 00619a4a  83c404               add esp, 4
// 00619a4d  43                   inc ebx
// 00619a4e  83c754               add edi, 0x54
// 00619a51  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 00619a54  0f8c5bffffff         jl 0x6199b5
// 00619a5a  5f                   pop edi
// 00619a5b  5e                   pop esi
// 00619a5c  5d                   pop ebp
// 00619a5d  5b                   pop ebx
// 00619a5e  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
