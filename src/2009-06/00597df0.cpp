// from server: 100% by auto
// roc 2009-06 00597df0  unit: seg_00590000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597df0
//
// 00597df0  53                   push ebx
// 00597df1  55                   push ebp
// 00597df2  56                   push esi
// 00597df3  57                   push edi
// 00597df4  8bf0                 mov esi, eax
// 00597df6  68ee000000           push 0xee
// 00597dfb  e890f6ffff           call 0x597490
// 00597e00  83c404               add esp, 4
// 00597e03  bb0e000000           mov ebx, 0xe
// 00597e08  e8f3f6ffff           call 0x597500
// 00597e0d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597e10  8b08                 mov ecx, dword ptr [eax]
// 00597e12  c60141               mov byte ptr [ecx], 0x41
// 00597e15  ff00                 inc dword ptr [eax]
// 00597e17  83cfff               or edi, 0xffffffff
// 00597e1a  017804               add dword ptr [eax + 4], edi
// 00597e1d  8d6b0a               lea ebp, [ebx + 0xa]
// 00597e20  751c                 jne 0x597e3e
// 00597e22  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597e25  56                   push esi
// 00597e26  ffd2                 call edx
// 00597e28  83c404               add esp, 4
// 00597e2b  84c0                 test al, al
// 00597e2d  750f                 jne 0x597e3e
// 00597e2f  8b06                 mov eax, dword ptr [esi]
// 00597e31  896814               mov dword ptr [eax + 0x14], ebp
// 00597e34  8b0e                 mov ecx, dword ptr [esi]
// 00597e36  8b11                 mov edx, dword ptr [ecx]
// 00597e38  56                   push esi
// 00597e39  ffd2                 call edx
// 00597e3b  83c404               add esp, 4
// 00597e3e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597e41  8b08                 mov ecx, dword ptr [eax]
// 00597e43  c60164               mov byte ptr [ecx], 0x64
// 00597e46  ff00                 inc dword ptr [eax]
// 00597e48  017804               add dword ptr [eax + 4], edi
// 00597e4b  751c                 jne 0x597e69
// 00597e4d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597e50  56                   push esi
// 00597e51  ffd2                 call edx
// 00597e53  83c404               add esp, 4
// 00597e56  84c0                 test al, al
// 00597e58  750f                 jne 0x597e69
// 00597e5a  8b06                 mov eax, dword ptr [esi]
// 00597e5c  896814               mov dword ptr [eax + 0x14], ebp
// 00597e5f  8b0e                 mov ecx, dword ptr [esi]
// 00597e61  8b11                 mov edx, dword ptr [ecx]
// 00597e63  56                   push esi
// 00597e64  ffd2                 call edx
// 00597e66  83c404               add esp, 4
// 00597e69  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597e6c  8b08                 mov ecx, dword ptr [eax]
// 00597e6e  c6016f               mov byte ptr [ecx], 0x6f
// 00597e71  ff00                 inc dword ptr [eax]
// 00597e73  017804               add dword ptr [eax + 4], edi
// 00597e76  751c                 jne 0x597e94
// 00597e78  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597e7b  56                   push esi
// 00597e7c  ffd2                 call edx
// 00597e7e  83c404               add esp, 4
// 00597e81  84c0                 test al, al
// 00597e83  750f                 jne 0x597e94
// 00597e85  8b06                 mov eax, dword ptr [esi]
// 00597e87  896814               mov dword ptr [eax + 0x14], ebp
// 00597e8a  8b0e                 mov ecx, dword ptr [esi]
// 00597e8c  8b11                 mov edx, dword ptr [ecx]
// 00597e8e  56                   push esi
// 00597e8f  ffd2                 call edx
// 00597e91  83c404               add esp, 4
// 00597e94  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597e97  8b08                 mov ecx, dword ptr [eax]
// 00597e99  c60162               mov byte ptr [ecx], 0x62
// 00597e9c  ff00                 inc dword ptr [eax]
// 00597e9e  017804               add dword ptr [eax + 4], edi
// 00597ea1  751c                 jne 0x597ebf
// 00597ea3  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597ea6  56                   push esi
// 00597ea7  ffd2                 call edx
// 00597ea9  83c404               add esp, 4
// 00597eac  84c0                 test al, al
// 00597eae  750f                 jne 0x597ebf
// 00597eb0  8b06                 mov eax, dword ptr [esi]
// 00597eb2  896814               mov dword ptr [eax + 0x14], ebp
// 00597eb5  8b0e                 mov ecx, dword ptr [esi]
// 00597eb7  8b11                 mov edx, dword ptr [ecx]
// 00597eb9  56                   push esi
// 00597eba  ffd2                 call edx
// 00597ebc  83c404               add esp, 4
// 00597ebf  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597ec2  8b08                 mov ecx, dword ptr [eax]
// 00597ec4  c60165               mov byte ptr [ecx], 0x65
// 00597ec7  ff00                 inc dword ptr [eax]
// 00597ec9  017804               add dword ptr [eax + 4], edi
// 00597ecc  751c                 jne 0x597eea
// 00597ece  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597ed1  56                   push esi
// 00597ed2  ffd2                 call edx
// 00597ed4  83c404               add esp, 4
// 00597ed7  84c0                 test al, al
// 00597ed9  750f                 jne 0x597eea
// 00597edb  8b06                 mov eax, dword ptr [esi]
// 00597edd  896814               mov dword ptr [eax + 0x14], ebp
// 00597ee0  8b0e                 mov ecx, dword ptr [esi]
// 00597ee2  8b11                 mov edx, dword ptr [ecx]
// 00597ee4  56                   push esi
// 00597ee5  ffd2                 call edx
// 00597ee7  83c404               add esp, 4
// 00597eea  bb64000000           mov ebx, 0x64
// 00597eef  e80cf6ffff           call 0x597500
// 00597ef4  33db                 xor ebx, ebx
// 00597ef6  e805f6ffff           call 0x597500
// 00597efb  e800f6ffff           call 0x597500
// 00597f00  8b4640               mov eax, dword ptr [esi + 0x40]
// 00597f03  83e803               sub eax, 3
// 00597f06  7413                 je 0x597f1b
// 00597f08  83e802               sub eax, 2
// 00597f0b  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597f0e  8b08                 mov ecx, dword ptr [eax]
// 00597f10  7404                 je 0x597f16
// 00597f12  8819                 mov byte ptr [ecx], bl
// 00597f14  eb0d                 jmp 0x597f23
// 00597f16  c60102               mov byte ptr [ecx], 2
// 00597f19  eb08                 jmp 0x597f23
// 00597f1b  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597f1e  8b08                 mov ecx, dword ptr [eax]
// 00597f20  c60101               mov byte ptr [ecx], 1
// 00597f23  ff00                 inc dword ptr [eax]
// 00597f25  017804               add dword ptr [eax + 4], edi
// 00597f28  751c                 jne 0x597f46
// 00597f2a  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597f2d  56                   push esi
// 00597f2e  ffd2                 call edx
// 00597f30  83c404               add esp, 4
// 00597f33  84c0                 test al, al
// 00597f35  750f                 jne 0x597f46
// 00597f37  8b06                 mov eax, dword ptr [esi]
// 00597f39  896814               mov dword ptr [eax + 0x14], ebp
// 00597f3c  8b0e                 mov ecx, dword ptr [esi]
// 00597f3e  8b11                 mov edx, dword ptr [ecx]
// 00597f40  56                   push esi
// 00597f41  ffd2                 call edx
// 00597f43  83c404               add esp, 4
// 00597f46  5f                   pop edi
// 00597f47  5e                   pop esi
// 00597f48  5d                   pop ebp
// 00597f49  5b                   pop ebx
// 00597f4a  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_adobe_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
