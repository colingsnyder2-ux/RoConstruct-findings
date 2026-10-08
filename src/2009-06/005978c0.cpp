// from server: 100% by auto
// roc 2009-06 005978c0  unit: seg_00590000  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005978c0
//
// 005978c0  53                   push ebx
// 005978c1  55                   push ebp
// 005978c2  56                   push esi
// 005978c3  57                   push edi
// 005978c4  8bf1                 mov esi, ecx
// 005978c6  50                   push eax
// 005978c7  e8c4fbffff           call 0x597490
// 005978cc  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005978cf  83c404               add esp, 4
// 005978d2  8d5c4008             lea ebx, [eax + eax*2 + 8]
// 005978d6  e825fcffff           call 0x597500
// 005978db  b8ffff0000           mov eax, 0xffff
// 005978e0  394620               cmp dword ptr [esi + 0x20], eax
// 005978e3  7f05                 jg 0x5978ea
// 005978e5  39461c               cmp dword ptr [esi + 0x1c], eax
// 005978e8  7e18                 jle 0x597902
// 005978ea  8b0e                 mov ecx, dword ptr [esi]
// 005978ec  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 005978f3  8b16                 mov edx, dword ptr [esi]
// 005978f5  894218               mov dword ptr [edx + 0x18], eax
// 005978f8  8b06                 mov eax, dword ptr [esi]
// 005978fa  8b08                 mov ecx, dword ptr [eax]
// 005978fc  56                   push esi
// 005978fd  ffd1                 call ecx
// 005978ff  83c404               add esp, 4
// 00597902  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597905  8a4e38               mov cl, byte ptr [esi + 0x38]
// 00597908  8b10                 mov edx, dword ptr [eax]
// 0059790a  880a                 mov byte ptr [edx], cl
// 0059790c  ff00                 inc dword ptr [eax]
// 0059790e  83cdff               or ebp, 0xffffffff
// 00597911  016804               add dword ptr [eax + 4], ebp
// 00597914  7520                 jne 0x597936
// 00597916  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597919  56                   push esi
// 0059791a  ffd2                 call edx
// 0059791c  83c404               add esp, 4
// 0059791f  84c0                 test al, al
// 00597921  7513                 jne 0x597936
// 00597923  8b06                 mov eax, dword ptr [esi]
// 00597925  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0059792c  8b0e                 mov ecx, dword ptr [esi]
// 0059792e  8b11                 mov edx, dword ptr [ecx]
// 00597930  56                   push esi
// 00597931  ffd2                 call edx
// 00597933  83c404               add esp, 4
// 00597936  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00597939  e8c2fbffff           call 0x597500
// 0059793e  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00597941  e8bafbffff           call 0x597500
// 00597946  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597949  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0059794c  8b08                 mov ecx, dword ptr [eax]
// 0059794e  8811                 mov byte ptr [ecx], dl
// 00597950  ff00                 inc dword ptr [eax]
// 00597952  016804               add dword ptr [eax + 4], ebp
// 00597955  7520                 jne 0x597977
// 00597957  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059795a  56                   push esi
// 0059795b  ffd0                 call eax
// 0059795d  83c404               add esp, 4
// 00597960  84c0                 test al, al
// 00597962  7513                 jne 0x597977
// 00597964  8b0e                 mov ecx, dword ptr [esi]
// 00597966  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0059796d  8b16                 mov edx, dword ptr [esi]
// 0059796f  8b02                 mov eax, dword ptr [edx]
// 00597971  56                   push esi
// 00597972  ffd0                 call eax
// 00597974  83c404               add esp, 4
// 00597977  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0059797a  33db                 xor ebx, ebx
// 0059797c  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0059797f  0f8ea5000000         jle 0x597a2a
// 00597985  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597988  8a17                 mov dl, byte ptr [edi]
// 0059798a  8b08                 mov ecx, dword ptr [eax]
// 0059798c  8811                 mov byte ptr [ecx], dl
// 0059798e  ff00                 inc dword ptr [eax]
// 00597990  016804               add dword ptr [eax + 4], ebp
// 00597993  7520                 jne 0x5979b5
// 00597995  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597998  56                   push esi
// 00597999  ffd0                 call eax
// 0059799b  83c404               add esp, 4
// 0059799e  84c0                 test al, al
// 005979a0  7513                 jne 0x5979b5
// 005979a2  8b0e                 mov ecx, dword ptr [esi]
// 005979a4  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 005979ab  8b16                 mov edx, dword ptr [esi]
// 005979ad  8b02                 mov eax, dword ptr [edx]
// 005979af  56                   push esi
// 005979b0  ffd0                 call eax
// 005979b2  83c404               add esp, 4
// 005979b5  8a4f08               mov cl, byte ptr [edi + 8]
// 005979b8  8b4618               mov eax, dword ptr [esi + 0x18]
// 005979bb  8b10                 mov edx, dword ptr [eax]
// 005979bd  c0e104               shl cl, 4
// 005979c0  024f0c               add cl, byte ptr [edi + 0xc]
// 005979c3  880a                 mov byte ptr [edx], cl
// 005979c5  ff00                 inc dword ptr [eax]
// 005979c7  016804               add dword ptr [eax + 4], ebp
// 005979ca  7520                 jne 0x5979ec
// 005979cc  8b400c               mov eax, dword ptr [eax + 0xc]
// 005979cf  56                   push esi
// 005979d0  ffd0                 call eax
// 005979d2  83c404               add esp, 4
// 005979d5  84c0                 test al, al
// 005979d7  7513                 jne 0x5979ec
// 005979d9  8b0e                 mov ecx, dword ptr [esi]
// 005979db  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 005979e2  8b16                 mov edx, dword ptr [esi]
// 005979e4  8b02                 mov eax, dword ptr [edx]
// 005979e6  56                   push esi
// 005979e7  ffd0                 call eax
// 005979e9  83c404               add esp, 4
// 005979ec  8b4618               mov eax, dword ptr [esi + 0x18]
// 005979ef  8a5710               mov dl, byte ptr [edi + 0x10]
// 005979f2  8b08                 mov ecx, dword ptr [eax]
// 005979f4  8811                 mov byte ptr [ecx], dl
// 005979f6  ff00                 inc dword ptr [eax]
// 005979f8  016804               add dword ptr [eax + 4], ebp
// 005979fb  7520                 jne 0x597a1d
// 005979fd  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597a00  56                   push esi
// 00597a01  ffd0                 call eax
// 00597a03  83c404               add esp, 4
// 00597a06  84c0                 test al, al
// 00597a08  7513                 jne 0x597a1d
// 00597a0a  8b0e                 mov ecx, dword ptr [esi]
// 00597a0c  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00597a13  8b16                 mov edx, dword ptr [esi]
// 00597a15  8b02                 mov eax, dword ptr [edx]
// 00597a17  56                   push esi
// 00597a18  ffd0                 call eax
// 00597a1a  83c404               add esp, 4
// 00597a1d  43                   inc ebx
// 00597a1e  83c754               add edi, 0x54
// 00597a21  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 00597a24  0f8c5bffffff         jl 0x597985
// 00597a2a  5f                   pop edi
// 00597a2b  5e                   pop esi
// 00597a2c  5d                   pop ebp
// 00597a2d  5b                   pop ebx
// 00597a2e  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
