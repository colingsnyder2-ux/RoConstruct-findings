// from server: 100% by auto
// roc 2012-06 00655a20  unit: seg_00650000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655a20
//
// 00655a20  53                   push ebx
// 00655a21  55                   push ebp
// 00655a22  56                   push esi
// 00655a23  57                   push edi
// 00655a24  8bf0                 mov esi, eax
// 00655a26  68ee000000           push 0xee
// 00655a2b  e890f6ffff           call 0x6550c0
// 00655a30  83c404               add esp, 4
// 00655a33  bb0e000000           mov ebx, 0xe
// 00655a38  e8f3f6ffff           call 0x655130
// 00655a3d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655a40  8b08                 mov ecx, dword ptr [eax]
// 00655a42  c60141               mov byte ptr [ecx], 0x41
// 00655a45  ff00                 inc dword ptr [eax]
// 00655a47  83cfff               or edi, 0xffffffff
// 00655a4a  017804               add dword ptr [eax + 4], edi
// 00655a4d  8d6b0a               lea ebp, [ebx + 0xa]
// 00655a50  751c                 jne 0x655a6e
// 00655a52  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655a55  56                   push esi
// 00655a56  ffd2                 call edx
// 00655a58  83c404               add esp, 4
// 00655a5b  84c0                 test al, al
// 00655a5d  750f                 jne 0x655a6e
// 00655a5f  8b06                 mov eax, dword ptr [esi]
// 00655a61  896814               mov dword ptr [eax + 0x14], ebp
// 00655a64  8b0e                 mov ecx, dword ptr [esi]
// 00655a66  8b11                 mov edx, dword ptr [ecx]
// 00655a68  56                   push esi
// 00655a69  ffd2                 call edx
// 00655a6b  83c404               add esp, 4
// 00655a6e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655a71  8b08                 mov ecx, dword ptr [eax]
// 00655a73  c60164               mov byte ptr [ecx], 0x64
// 00655a76  ff00                 inc dword ptr [eax]
// 00655a78  017804               add dword ptr [eax + 4], edi
// 00655a7b  751c                 jne 0x655a99
// 00655a7d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655a80  56                   push esi
// 00655a81  ffd2                 call edx
// 00655a83  83c404               add esp, 4
// 00655a86  84c0                 test al, al
// 00655a88  750f                 jne 0x655a99
// 00655a8a  8b06                 mov eax, dword ptr [esi]
// 00655a8c  896814               mov dword ptr [eax + 0x14], ebp
// 00655a8f  8b0e                 mov ecx, dword ptr [esi]
// 00655a91  8b11                 mov edx, dword ptr [ecx]
// 00655a93  56                   push esi
// 00655a94  ffd2                 call edx
// 00655a96  83c404               add esp, 4
// 00655a99  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655a9c  8b08                 mov ecx, dword ptr [eax]
// 00655a9e  c6016f               mov byte ptr [ecx], 0x6f
// 00655aa1  ff00                 inc dword ptr [eax]
// 00655aa3  017804               add dword ptr [eax + 4], edi
// 00655aa6  751c                 jne 0x655ac4
// 00655aa8  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655aab  56                   push esi
// 00655aac  ffd2                 call edx
// 00655aae  83c404               add esp, 4
// 00655ab1  84c0                 test al, al
// 00655ab3  750f                 jne 0x655ac4
// 00655ab5  8b06                 mov eax, dword ptr [esi]
// 00655ab7  896814               mov dword ptr [eax + 0x14], ebp
// 00655aba  8b0e                 mov ecx, dword ptr [esi]
// 00655abc  8b11                 mov edx, dword ptr [ecx]
// 00655abe  56                   push esi
// 00655abf  ffd2                 call edx
// 00655ac1  83c404               add esp, 4
// 00655ac4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655ac7  8b08                 mov ecx, dword ptr [eax]
// 00655ac9  c60162               mov byte ptr [ecx], 0x62
// 00655acc  ff00                 inc dword ptr [eax]
// 00655ace  017804               add dword ptr [eax + 4], edi
// 00655ad1  751c                 jne 0x655aef
// 00655ad3  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655ad6  56                   push esi
// 00655ad7  ffd2                 call edx
// 00655ad9  83c404               add esp, 4
// 00655adc  84c0                 test al, al
// 00655ade  750f                 jne 0x655aef
// 00655ae0  8b06                 mov eax, dword ptr [esi]
// 00655ae2  896814               mov dword ptr [eax + 0x14], ebp
// 00655ae5  8b0e                 mov ecx, dword ptr [esi]
// 00655ae7  8b11                 mov edx, dword ptr [ecx]
// 00655ae9  56                   push esi
// 00655aea  ffd2                 call edx
// 00655aec  83c404               add esp, 4
// 00655aef  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655af2  8b08                 mov ecx, dword ptr [eax]
// 00655af4  c60165               mov byte ptr [ecx], 0x65
// 00655af7  ff00                 inc dword ptr [eax]
// 00655af9  017804               add dword ptr [eax + 4], edi
// 00655afc  751c                 jne 0x655b1a
// 00655afe  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655b01  56                   push esi
// 00655b02  ffd2                 call edx
// 00655b04  83c404               add esp, 4
// 00655b07  84c0                 test al, al
// 00655b09  750f                 jne 0x655b1a
// 00655b0b  8b06                 mov eax, dword ptr [esi]
// 00655b0d  896814               mov dword ptr [eax + 0x14], ebp
// 00655b10  8b0e                 mov ecx, dword ptr [esi]
// 00655b12  8b11                 mov edx, dword ptr [ecx]
// 00655b14  56                   push esi
// 00655b15  ffd2                 call edx
// 00655b17  83c404               add esp, 4
// 00655b1a  bb64000000           mov ebx, 0x64
// 00655b1f  e80cf6ffff           call 0x655130
// 00655b24  33db                 xor ebx, ebx
// 00655b26  e805f6ffff           call 0x655130
// 00655b2b  e800f6ffff           call 0x655130
// 00655b30  8b4640               mov eax, dword ptr [esi + 0x40]
// 00655b33  83e803               sub eax, 3
// 00655b36  7413                 je 0x655b4b
// 00655b38  83e802               sub eax, 2
// 00655b3b  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655b3e  8b08                 mov ecx, dword ptr [eax]
// 00655b40  7404                 je 0x655b46
// 00655b42  8819                 mov byte ptr [ecx], bl
// 00655b44  eb0d                 jmp 0x655b53
// 00655b46  c60102               mov byte ptr [ecx], 2
// 00655b49  eb08                 jmp 0x655b53
// 00655b4b  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655b4e  8b08                 mov ecx, dword ptr [eax]
// 00655b50  c60101               mov byte ptr [ecx], 1
// 00655b53  ff00                 inc dword ptr [eax]
// 00655b55  017804               add dword ptr [eax + 4], edi
// 00655b58  751c                 jne 0x655b76
// 00655b5a  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655b5d  56                   push esi
// 00655b5e  ffd2                 call edx
// 00655b60  83c404               add esp, 4
// 00655b63  84c0                 test al, al
// 00655b65  750f                 jne 0x655b76
// 00655b67  8b06                 mov eax, dword ptr [esi]
// 00655b69  896814               mov dword ptr [eax + 0x14], ebp
// 00655b6c  8b0e                 mov ecx, dword ptr [esi]
// 00655b6e  8b11                 mov edx, dword ptr [ecx]
// 00655b70  56                   push esi
// 00655b71  ffd2                 call edx
// 00655b73  83c404               add esp, 4
// 00655b76  5f                   pop edi
// 00655b77  5e                   pop esi
// 00655b78  5d                   pop ebp
// 00655b79  5b                   pop ebx
// 00655b7a  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_adobe_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
