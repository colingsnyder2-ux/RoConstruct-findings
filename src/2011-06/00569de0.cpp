// roc 2011-06 00569de0  unit: seg_00560000  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569de0
//
// 00569de0  53                   push ebx
// 00569de1  55                   push ebp
// 00569de2  56                   push esi
// 00569de3  57                   push edi
// 00569de4  8bf1                 mov esi, ecx
// 00569de6  50                   push eax
// 00569de7  e8c4fbffff           call 0x5699b0
// 00569dec  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00569def  83c404               add esp, 4
// 00569df2  8d5c4008             lea ebx, [eax + eax*2 + 8]
// 00569df6  e825fcffff           call 0x569a20
// 00569dfb  b8ffff0000           mov eax, 0xffff
// 00569e00  394620               cmp dword ptr [esi + 0x20], eax
// 00569e03  7f05                 jg 0x569e0a
// 00569e05  39461c               cmp dword ptr [esi + 0x1c], eax
// 00569e08  7e18                 jle 0x569e22
// 00569e0a  8b0e                 mov ecx, dword ptr [esi]
// 00569e0c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00569e13  8b16                 mov edx, dword ptr [esi]
// 00569e15  894218               mov dword ptr [edx + 0x18], eax
// 00569e18  8b06                 mov eax, dword ptr [esi]
// 00569e1a  8b08                 mov ecx, dword ptr [eax]
// 00569e1c  56                   push esi
// 00569e1d  ffd1                 call ecx
// 00569e1f  83c404               add esp, 4
// 00569e22  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569e25  8a4e38               mov cl, byte ptr [esi + 0x38]
// 00569e28  8b10                 mov edx, dword ptr [eax]
// 00569e2a  880a                 mov byte ptr [edx], cl
// 00569e2c  ff00                 inc dword ptr [eax]
// 00569e2e  83cdff               or ebp, 0xffffffff
// 00569e31  016804               add dword ptr [eax + 4], ebp
// 00569e34  7520                 jne 0x569e56
// 00569e36  8b500c               mov edx, dword ptr [eax + 0xc]
// 00569e39  56                   push esi
// 00569e3a  ffd2                 call edx
// 00569e3c  83c404               add esp, 4
// 00569e3f  84c0                 test al, al
// 00569e41  7513                 jne 0x569e56
// 00569e43  8b06                 mov eax, dword ptr [esi]
// 00569e45  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00569e4c  8b0e                 mov ecx, dword ptr [esi]
// 00569e4e  8b11                 mov edx, dword ptr [ecx]
// 00569e50  56                   push esi
// 00569e51  ffd2                 call edx
// 00569e53  83c404               add esp, 4
// 00569e56  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00569e59  e8c2fbffff           call 0x569a20
// 00569e5e  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00569e61  e8bafbffff           call 0x569a20
// 00569e66  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569e69  8a563c               mov dl, byte ptr [esi + 0x3c]
// 00569e6c  8b08                 mov ecx, dword ptr [eax]
// 00569e6e  8811                 mov byte ptr [ecx], dl
// 00569e70  ff00                 inc dword ptr [eax]
// 00569e72  016804               add dword ptr [eax + 4], ebp
// 00569e75  7520                 jne 0x569e97
// 00569e77  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569e7a  56                   push esi
// 00569e7b  ffd0                 call eax
// 00569e7d  83c404               add esp, 4
// 00569e80  84c0                 test al, al
// 00569e82  7513                 jne 0x569e97
// 00569e84  8b0e                 mov ecx, dword ptr [esi]
// 00569e86  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569e8d  8b16                 mov edx, dword ptr [esi]
// 00569e8f  8b02                 mov eax, dword ptr [edx]
// 00569e91  56                   push esi
// 00569e92  ffd0                 call eax
// 00569e94  83c404               add esp, 4
// 00569e97  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00569e9a  33db                 xor ebx, ebx
// 00569e9c  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 00569e9f  0f8ea5000000         jle 0x569f4a
// 00569ea5  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569ea8  8a17                 mov dl, byte ptr [edi]
// 00569eaa  8b08                 mov ecx, dword ptr [eax]
// 00569eac  8811                 mov byte ptr [ecx], dl
// 00569eae  ff00                 inc dword ptr [eax]
// 00569eb0  016804               add dword ptr [eax + 4], ebp
// 00569eb3  7520                 jne 0x569ed5
// 00569eb5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569eb8  56                   push esi
// 00569eb9  ffd0                 call eax
// 00569ebb  83c404               add esp, 4
// 00569ebe  84c0                 test al, al
// 00569ec0  7513                 jne 0x569ed5
// 00569ec2  8b0e                 mov ecx, dword ptr [esi]
// 00569ec4  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569ecb  8b16                 mov edx, dword ptr [esi]
// 00569ecd  8b02                 mov eax, dword ptr [edx]
// 00569ecf  56                   push esi
// 00569ed0  ffd0                 call eax
// 00569ed2  83c404               add esp, 4
// 00569ed5  8a4f08               mov cl, byte ptr [edi + 8]
// 00569ed8  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569edb  8b10                 mov edx, dword ptr [eax]
// 00569edd  c0e104               shl cl, 4
// 00569ee0  024f0c               add cl, byte ptr [edi + 0xc]
// 00569ee3  880a                 mov byte ptr [edx], cl
// 00569ee5  ff00                 inc dword ptr [eax]
// 00569ee7  016804               add dword ptr [eax + 4], ebp
// 00569eea  7520                 jne 0x569f0c
// 00569eec  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569eef  56                   push esi
// 00569ef0  ffd0                 call eax
// 00569ef2  83c404               add esp, 4
// 00569ef5  84c0                 test al, al
// 00569ef7  7513                 jne 0x569f0c
// 00569ef9  8b0e                 mov ecx, dword ptr [esi]
// 00569efb  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569f02  8b16                 mov edx, dword ptr [esi]
// 00569f04  8b02                 mov eax, dword ptr [edx]
// 00569f06  56                   push esi
// 00569f07  ffd0                 call eax
// 00569f09  83c404               add esp, 4
// 00569f0c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569f0f  8a5710               mov dl, byte ptr [edi + 0x10]
// 00569f12  8b08                 mov ecx, dword ptr [eax]
// 00569f14  8811                 mov byte ptr [ecx], dl
// 00569f16  ff00                 inc dword ptr [eax]
// 00569f18  016804               add dword ptr [eax + 4], ebp
// 00569f1b  7520                 jne 0x569f3d
// 00569f1d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569f20  56                   push esi
// 00569f21  ffd0                 call eax
// 00569f23  83c404               add esp, 4
// 00569f26  84c0                 test al, al
// 00569f28  7513                 jne 0x569f3d
// 00569f2a  8b0e                 mov ecx, dword ptr [esi]
// 00569f2c  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569f33  8b16                 mov edx, dword ptr [esi]
// 00569f35  8b02                 mov eax, dword ptr [edx]
// 00569f37  56                   push esi
// 00569f38  ffd0                 call eax
// 00569f3a  83c404               add esp, 4
// 00569f3d  43                   inc ebx
// 00569f3e  83c754               add edi, 0x54
// 00569f41  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 00569f44  0f8c5bffffff         jl 0x569ea5
// 00569f4a  5f                   pop edi
// 00569f4b  5e                   pop esi
// 00569f4c  5d                   pop ebp
// 00569f4d  5b                   pop ebx
// 00569f4e  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
