// from server: 100% by auto
// roc 2008-06 0052fa30  unit: seg_00520000  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052fa30
//
// 0052fa30  53                   push ebx
// 0052fa31  55                   push ebp
// 0052fa32  56                   push esi
// 0052fa33  57                   push edi
// 0052fa34  8bf1                 mov esi, ecx
// 0052fa36  50                   push eax
// 0052fa37  e8c4fbffff           call 0x52f600
// 0052fa3c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0052fa3f  83c404               add esp, 4
// 0052fa42  8d5c4008             lea ebx, [eax + eax*2 + 8]
// 0052fa46  e825fcffff           call 0x52f670
// 0052fa4b  b8ffff0000           mov eax, 0xffff
// 0052fa50  394620               cmp dword ptr [esi + 0x20], eax
// 0052fa53  7f05                 jg 0x52fa5a
// 0052fa55  39461c               cmp dword ptr [esi + 0x1c], eax
// 0052fa58  7e18                 jle 0x52fa72
// 0052fa5a  8b0e                 mov ecx, dword ptr [esi]
// 0052fa5c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0052fa63  8b16                 mov edx, dword ptr [esi]
// 0052fa65  894218               mov dword ptr [edx + 0x18], eax
// 0052fa68  8b06                 mov eax, dword ptr [esi]
// 0052fa6a  8b08                 mov ecx, dword ptr [eax]
// 0052fa6c  56                   push esi
// 0052fa6d  ffd1                 call ecx
// 0052fa6f  83c404               add esp, 4
// 0052fa72  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fa75  8a4e38               mov cl, byte ptr [esi + 0x38]
// 0052fa78  8b10                 mov edx, dword ptr [eax]
// 0052fa7a  880a                 mov byte ptr [edx], cl
// 0052fa7c  ff00                 inc dword ptr [eax]
// 0052fa7e  83cdff               or ebp, 0xffffffff
// 0052fa81  016804               add dword ptr [eax + 4], ebp
// 0052fa84  7520                 jne 0x52faa6
// 0052fa86  8b500c               mov edx, dword ptr [eax + 0xc]
// 0052fa89  56                   push esi
// 0052fa8a  ffd2                 call edx
// 0052fa8c  83c404               add esp, 4
// 0052fa8f  84c0                 test al, al
// 0052fa91  7513                 jne 0x52faa6
// 0052fa93  8b06                 mov eax, dword ptr [esi]
// 0052fa95  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0052fa9c  8b0e                 mov ecx, dword ptr [esi]
// 0052fa9e  8b11                 mov edx, dword ptr [ecx]
// 0052faa0  56                   push esi
// 0052faa1  ffd2                 call edx
// 0052faa3  83c404               add esp, 4
// 0052faa6  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 0052faa9  e8c2fbffff           call 0x52f670
// 0052faae  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0052fab1  e8bafbffff           call 0x52f670
// 0052fab6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fab9  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0052fabc  8b08                 mov ecx, dword ptr [eax]
// 0052fabe  8811                 mov byte ptr [ecx], dl
// 0052fac0  ff00                 inc dword ptr [eax]
// 0052fac2  016804               add dword ptr [eax + 4], ebp
// 0052fac5  7520                 jne 0x52fae7
// 0052fac7  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052faca  56                   push esi
// 0052facb  ffd0                 call eax
// 0052facd  83c404               add esp, 4
// 0052fad0  84c0                 test al, al
// 0052fad2  7513                 jne 0x52fae7
// 0052fad4  8b0e                 mov ecx, dword ptr [esi]
// 0052fad6  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052fadd  8b16                 mov edx, dword ptr [esi]
// 0052fadf  8b02                 mov eax, dword ptr [edx]
// 0052fae1  56                   push esi
// 0052fae2  ffd0                 call eax
// 0052fae4  83c404               add esp, 4
// 0052fae7  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0052faea  33db                 xor ebx, ebx
// 0052faec  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0052faef  0f8ea5000000         jle 0x52fb9a
// 0052faf5  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052faf8  8a17                 mov dl, byte ptr [edi]
// 0052fafa  8b08                 mov ecx, dword ptr [eax]
// 0052fafc  8811                 mov byte ptr [ecx], dl
// 0052fafe  ff00                 inc dword ptr [eax]
// 0052fb00  016804               add dword ptr [eax + 4], ebp
// 0052fb03  7520                 jne 0x52fb25
// 0052fb05  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fb08  56                   push esi
// 0052fb09  ffd0                 call eax
// 0052fb0b  83c404               add esp, 4
// 0052fb0e  84c0                 test al, al
// 0052fb10  7513                 jne 0x52fb25
// 0052fb12  8b0e                 mov ecx, dword ptr [esi]
// 0052fb14  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052fb1b  8b16                 mov edx, dword ptr [esi]
// 0052fb1d  8b02                 mov eax, dword ptr [edx]
// 0052fb1f  56                   push esi
// 0052fb20  ffd0                 call eax
// 0052fb22  83c404               add esp, 4
// 0052fb25  8a4f08               mov cl, byte ptr [edi + 8]
// 0052fb28  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fb2b  8b10                 mov edx, dword ptr [eax]
// 0052fb2d  c0e104               shl cl, 4
// 0052fb30  024f0c               add cl, byte ptr [edi + 0xc]
// 0052fb33  880a                 mov byte ptr [edx], cl
// 0052fb35  ff00                 inc dword ptr [eax]
// 0052fb37  016804               add dword ptr [eax + 4], ebp
// 0052fb3a  7520                 jne 0x52fb5c
// 0052fb3c  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fb3f  56                   push esi
// 0052fb40  ffd0                 call eax
// 0052fb42  83c404               add esp, 4
// 0052fb45  84c0                 test al, al
// 0052fb47  7513                 jne 0x52fb5c
// 0052fb49  8b0e                 mov ecx, dword ptr [esi]
// 0052fb4b  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052fb52  8b16                 mov edx, dword ptr [esi]
// 0052fb54  8b02                 mov eax, dword ptr [edx]
// 0052fb56  56                   push esi
// 0052fb57  ffd0                 call eax
// 0052fb59  83c404               add esp, 4
// 0052fb5c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052fb5f  8a5710               mov dl, byte ptr [edi + 0x10]
// 0052fb62  8b08                 mov ecx, dword ptr [eax]
// 0052fb64  8811                 mov byte ptr [ecx], dl
// 0052fb66  ff00                 inc dword ptr [eax]
// 0052fb68  016804               add dword ptr [eax + 4], ebp
// 0052fb6b  7520                 jne 0x52fb8d
// 0052fb6d  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052fb70  56                   push esi
// 0052fb71  ffd0                 call eax
// 0052fb73  83c404               add esp, 4
// 0052fb76  84c0                 test al, al
// 0052fb78  7513                 jne 0x52fb8d
// 0052fb7a  8b0e                 mov ecx, dword ptr [esi]
// 0052fb7c  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0052fb83  8b16                 mov edx, dword ptr [esi]
// 0052fb85  8b02                 mov eax, dword ptr [edx]
// 0052fb87  56                   push esi
// 0052fb88  ffd0                 call eax
// 0052fb8a  83c404               add esp, 4
// 0052fb8d  43                   inc ebx
// 0052fb8e  83c754               add edi, 0x54
// 0052fb91  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0052fb94  0f8c5bffffff         jl 0x52faf5
// 0052fb9a  5f                   pop edi
// 0052fb9b  5e                   pop esi
// 0052fb9c  5d                   pop ebp
// 0052fb9d  5b                   pop ebx
// 0052fb9e  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
