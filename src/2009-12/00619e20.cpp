// roc 2009-12 00619e20  unit: seg_00610000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00619e20
//
// 00619e20  53                   push ebx
// 00619e21  55                   push ebp
// 00619e22  56                   push esi
// 00619e23  57                   push edi
// 00619e24  8bf0                 mov esi, eax
// 00619e26  68ee000000           push 0xee
// 00619e2b  e890f6ffff           call 0x6194c0
// 00619e30  83c404               add esp, 4
// 00619e33  bb0e000000           mov ebx, 0xe
// 00619e38  e8f3f6ffff           call 0x619530
// 00619e3d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619e40  8b08                 mov ecx, dword ptr [eax]
// 00619e42  c60141               mov byte ptr [ecx], 0x41
// 00619e45  ff00                 inc dword ptr [eax]
// 00619e47  83cfff               or edi, 0xffffffff
// 00619e4a  017804               add dword ptr [eax + 4], edi
// 00619e4d  8d6b0a               lea ebp, [ebx + 0xa]
// 00619e50  751c                 jne 0x619e6e
// 00619e52  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619e55  56                   push esi
// 00619e56  ffd2                 call edx
// 00619e58  83c404               add esp, 4
// 00619e5b  84c0                 test al, al
// 00619e5d  750f                 jne 0x619e6e
// 00619e5f  8b06                 mov eax, dword ptr [esi]
// 00619e61  896814               mov dword ptr [eax + 0x14], ebp
// 00619e64  8b0e                 mov ecx, dword ptr [esi]
// 00619e66  8b11                 mov edx, dword ptr [ecx]
// 00619e68  56                   push esi
// 00619e69  ffd2                 call edx
// 00619e6b  83c404               add esp, 4
// 00619e6e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619e71  8b08                 mov ecx, dword ptr [eax]
// 00619e73  c60164               mov byte ptr [ecx], 0x64
// 00619e76  ff00                 inc dword ptr [eax]
// 00619e78  017804               add dword ptr [eax + 4], edi
// 00619e7b  751c                 jne 0x619e99
// 00619e7d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619e80  56                   push esi
// 00619e81  ffd2                 call edx
// 00619e83  83c404               add esp, 4
// 00619e86  84c0                 test al, al
// 00619e88  750f                 jne 0x619e99
// 00619e8a  8b06                 mov eax, dword ptr [esi]
// 00619e8c  896814               mov dword ptr [eax + 0x14], ebp
// 00619e8f  8b0e                 mov ecx, dword ptr [esi]
// 00619e91  8b11                 mov edx, dword ptr [ecx]
// 00619e93  56                   push esi
// 00619e94  ffd2                 call edx
// 00619e96  83c404               add esp, 4
// 00619e99  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619e9c  8b08                 mov ecx, dword ptr [eax]
// 00619e9e  c6016f               mov byte ptr [ecx], 0x6f
// 00619ea1  ff00                 inc dword ptr [eax]
// 00619ea3  017804               add dword ptr [eax + 4], edi
// 00619ea6  751c                 jne 0x619ec4
// 00619ea8  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619eab  56                   push esi
// 00619eac  ffd2                 call edx
// 00619eae  83c404               add esp, 4
// 00619eb1  84c0                 test al, al
// 00619eb3  750f                 jne 0x619ec4
// 00619eb5  8b06                 mov eax, dword ptr [esi]
// 00619eb7  896814               mov dword ptr [eax + 0x14], ebp
// 00619eba  8b0e                 mov ecx, dword ptr [esi]
// 00619ebc  8b11                 mov edx, dword ptr [ecx]
// 00619ebe  56                   push esi
// 00619ebf  ffd2                 call edx
// 00619ec1  83c404               add esp, 4
// 00619ec4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619ec7  8b08                 mov ecx, dword ptr [eax]
// 00619ec9  c60162               mov byte ptr [ecx], 0x62
// 00619ecc  ff00                 inc dword ptr [eax]
// 00619ece  017804               add dword ptr [eax + 4], edi
// 00619ed1  751c                 jne 0x619eef
// 00619ed3  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619ed6  56                   push esi
// 00619ed7  ffd2                 call edx
// 00619ed9  83c404               add esp, 4
// 00619edc  84c0                 test al, al
// 00619ede  750f                 jne 0x619eef
// 00619ee0  8b06                 mov eax, dword ptr [esi]
// 00619ee2  896814               mov dword ptr [eax + 0x14], ebp
// 00619ee5  8b0e                 mov ecx, dword ptr [esi]
// 00619ee7  8b11                 mov edx, dword ptr [ecx]
// 00619ee9  56                   push esi
// 00619eea  ffd2                 call edx
// 00619eec  83c404               add esp, 4
// 00619eef  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619ef2  8b08                 mov ecx, dword ptr [eax]
// 00619ef4  c60165               mov byte ptr [ecx], 0x65
// 00619ef7  ff00                 inc dword ptr [eax]
// 00619ef9  017804               add dword ptr [eax + 4], edi
// 00619efc  751c                 jne 0x619f1a
// 00619efe  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619f01  56                   push esi
// 00619f02  ffd2                 call edx
// 00619f04  83c404               add esp, 4
// 00619f07  84c0                 test al, al
// 00619f09  750f                 jne 0x619f1a
// 00619f0b  8b06                 mov eax, dword ptr [esi]
// 00619f0d  896814               mov dword ptr [eax + 0x14], ebp
// 00619f10  8b0e                 mov ecx, dword ptr [esi]
// 00619f12  8b11                 mov edx, dword ptr [ecx]
// 00619f14  56                   push esi
// 00619f15  ffd2                 call edx
// 00619f17  83c404               add esp, 4
// 00619f1a  bb64000000           mov ebx, 0x64
// 00619f1f  e80cf6ffff           call 0x619530
// 00619f24  33db                 xor ebx, ebx
// 00619f26  e805f6ffff           call 0x619530
// 00619f2b  e800f6ffff           call 0x619530
// 00619f30  8b4640               mov eax, dword ptr [esi + 0x40]
// 00619f33  83e803               sub eax, 3
// 00619f36  7413                 je 0x619f4b
// 00619f38  83e802               sub eax, 2
// 00619f3b  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619f3e  8b08                 mov ecx, dword ptr [eax]
// 00619f40  7404                 je 0x619f46
// 00619f42  8819                 mov byte ptr [ecx], bl
// 00619f44  eb0d                 jmp 0x619f53
// 00619f46  c60102               mov byte ptr [ecx], 2
// 00619f49  eb08                 jmp 0x619f53
// 00619f4b  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619f4e  8b08                 mov ecx, dword ptr [eax]
// 00619f50  c60101               mov byte ptr [ecx], 1
// 00619f53  ff00                 inc dword ptr [eax]
// 00619f55  017804               add dword ptr [eax + 4], edi
// 00619f58  751c                 jne 0x619f76
// 00619f5a  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619f5d  56                   push esi
// 00619f5e  ffd2                 call edx
// 00619f60  83c404               add esp, 4
// 00619f63  84c0                 test al, al
// 00619f65  750f                 jne 0x619f76
// 00619f67  8b06                 mov eax, dword ptr [esi]
// 00619f69  896814               mov dword ptr [eax + 0x14], ebp
// 00619f6c  8b0e                 mov ecx, dword ptr [esi]
// 00619f6e  8b11                 mov edx, dword ptr [ecx]
// 00619f70  56                   push esi
// 00619f71  ffd2                 call edx
// 00619f73  83c404               add esp, 4
// 00619f76  5f                   pop edi
// 00619f77  5e                   pop esi
// 00619f78  5d                   pop ebp
// 00619f79  5b                   pop ebx
// 00619f7a  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_adobe_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
