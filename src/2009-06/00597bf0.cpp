// roc 2009-06 00597bf0  unit: seg_00590000  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597bf0
//
// 00597bf0  53                   push ebx
// 00597bf1  55                   push ebp
// 00597bf2  56                   push esi
// 00597bf3  57                   push edi
// 00597bf4  8bf0                 mov esi, eax
// 00597bf6  68e0000000           push 0xe0
// 00597bfb  e890f8ffff           call 0x597490
// 00597c00  83c404               add esp, 4
// 00597c03  bb10000000           mov ebx, 0x10
// 00597c08  e8f3f8ffff           call 0x597500
// 00597c0d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597c10  8b08                 mov ecx, dword ptr [eax]
// 00597c12  c6014a               mov byte ptr [ecx], 0x4a
// 00597c15  ff00                 inc dword ptr [eax]
// 00597c17  83cfff               or edi, 0xffffffff
// 00597c1a  017804               add dword ptr [eax + 4], edi
// 00597c1d  8d6b08               lea ebp, [ebx + 8]
// 00597c20  751c                 jne 0x597c3e
// 00597c22  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597c25  56                   push esi
// 00597c26  ffd2                 call edx
// 00597c28  83c404               add esp, 4
// 00597c2b  84c0                 test al, al
// 00597c2d  750f                 jne 0x597c3e
// 00597c2f  8b06                 mov eax, dword ptr [esi]
// 00597c31  896814               mov dword ptr [eax + 0x14], ebp
// 00597c34  8b0e                 mov ecx, dword ptr [esi]
// 00597c36  8b11                 mov edx, dword ptr [ecx]
// 00597c38  56                   push esi
// 00597c39  ffd2                 call edx
// 00597c3b  83c404               add esp, 4
// 00597c3e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597c41  8b08                 mov ecx, dword ptr [eax]
// 00597c43  c60146               mov byte ptr [ecx], 0x46
// 00597c46  ff00                 inc dword ptr [eax]
// 00597c48  017804               add dword ptr [eax + 4], edi
// 00597c4b  751c                 jne 0x597c69
// 00597c4d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597c50  56                   push esi
// 00597c51  ffd2                 call edx
// 00597c53  83c404               add esp, 4
// 00597c56  84c0                 test al, al
// 00597c58  750f                 jne 0x597c69
// 00597c5a  8b06                 mov eax, dword ptr [esi]
// 00597c5c  896814               mov dword ptr [eax + 0x14], ebp
// 00597c5f  8b0e                 mov ecx, dword ptr [esi]
// 00597c61  8b11                 mov edx, dword ptr [ecx]
// 00597c63  56                   push esi
// 00597c64  ffd2                 call edx
// 00597c66  83c404               add esp, 4
// 00597c69  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597c6c  8b08                 mov ecx, dword ptr [eax]
// 00597c6e  c60149               mov byte ptr [ecx], 0x49
// 00597c71  ff00                 inc dword ptr [eax]
// 00597c73  017804               add dword ptr [eax + 4], edi
// 00597c76  751c                 jne 0x597c94
// 00597c78  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597c7b  56                   push esi
// 00597c7c  ffd2                 call edx
// 00597c7e  83c404               add esp, 4
// 00597c81  84c0                 test al, al
// 00597c83  750f                 jne 0x597c94
// 00597c85  8b06                 mov eax, dword ptr [esi]
// 00597c87  896814               mov dword ptr [eax + 0x14], ebp
// 00597c8a  8b0e                 mov ecx, dword ptr [esi]
// 00597c8c  8b11                 mov edx, dword ptr [ecx]
// 00597c8e  56                   push esi
// 00597c8f  ffd2                 call edx
// 00597c91  83c404               add esp, 4
// 00597c94  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597c97  8b08                 mov ecx, dword ptr [eax]
// 00597c99  c60146               mov byte ptr [ecx], 0x46
// 00597c9c  ff00                 inc dword ptr [eax]
// 00597c9e  017804               add dword ptr [eax + 4], edi
// 00597ca1  751c                 jne 0x597cbf
// 00597ca3  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597ca6  56                   push esi
// 00597ca7  ffd2                 call edx
// 00597ca9  83c404               add esp, 4
// 00597cac  84c0                 test al, al
// 00597cae  750f                 jne 0x597cbf
// 00597cb0  8b06                 mov eax, dword ptr [esi]
// 00597cb2  896814               mov dword ptr [eax + 0x14], ebp
// 00597cb5  8b0e                 mov ecx, dword ptr [esi]
// 00597cb7  8b11                 mov edx, dword ptr [ecx]
// 00597cb9  56                   push esi
// 00597cba  ffd2                 call edx
// 00597cbc  83c404               add esp, 4
// 00597cbf  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597cc2  8b08                 mov ecx, dword ptr [eax]
// 00597cc4  c60100               mov byte ptr [ecx], 0
// 00597cc7  ff00                 inc dword ptr [eax]
// 00597cc9  017804               add dword ptr [eax + 4], edi
// 00597ccc  751c                 jne 0x597cea
// 00597cce  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597cd1  56                   push esi
// 00597cd2  ffd2                 call edx
// 00597cd4  83c404               add esp, 4
// 00597cd7  84c0                 test al, al
// 00597cd9  750f                 jne 0x597cea
// 00597cdb  8b06                 mov eax, dword ptr [esi]
// 00597cdd  896814               mov dword ptr [eax + 0x14], ebp
// 00597ce0  8b0e                 mov ecx, dword ptr [esi]
// 00597ce2  8b11                 mov edx, dword ptr [ecx]
// 00597ce4  56                   push esi
// 00597ce5  ffd2                 call edx
// 00597ce7  83c404               add esp, 4
// 00597cea  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597ced  8a96c5000000         mov dl, byte ptr [esi + 0xc5]
// 00597cf3  8b08                 mov ecx, dword ptr [eax]
// 00597cf5  8811                 mov byte ptr [ecx], dl
// 00597cf7  ff00                 inc dword ptr [eax]
// 00597cf9  017804               add dword ptr [eax + 4], edi
// 00597cfc  751c                 jne 0x597d1a
// 00597cfe  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597d01  56                   push esi
// 00597d02  ffd0                 call eax
// 00597d04  83c404               add esp, 4
// 00597d07  84c0                 test al, al
// 00597d09  750f                 jne 0x597d1a
// 00597d0b  8b0e                 mov ecx, dword ptr [esi]
// 00597d0d  896914               mov dword ptr [ecx + 0x14], ebp
// 00597d10  8b16                 mov edx, dword ptr [esi]
// 00597d12  8b02                 mov eax, dword ptr [edx]
// 00597d14  56                   push esi
// 00597d15  ffd0                 call eax
// 00597d17  83c404               add esp, 4
// 00597d1a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597d1d  8a96c6000000         mov dl, byte ptr [esi + 0xc6]
// 00597d23  8b08                 mov ecx, dword ptr [eax]
// 00597d25  8811                 mov byte ptr [ecx], dl
// 00597d27  ff00                 inc dword ptr [eax]
// 00597d29  017804               add dword ptr [eax + 4], edi
// 00597d2c  751c                 jne 0x597d4a
// 00597d2e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597d31  56                   push esi
// 00597d32  ffd0                 call eax
// 00597d34  83c404               add esp, 4
// 00597d37  84c0                 test al, al
// 00597d39  750f                 jne 0x597d4a
// 00597d3b  8b0e                 mov ecx, dword ptr [esi]
// 00597d3d  896914               mov dword ptr [ecx + 0x14], ebp
// 00597d40  8b16                 mov edx, dword ptr [esi]
// 00597d42  8b02                 mov eax, dword ptr [edx]
// 00597d44  56                   push esi
// 00597d45  ffd0                 call eax
// 00597d47  83c404               add esp, 4
// 00597d4a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597d4d  8a96c7000000         mov dl, byte ptr [esi + 0xc7]
// 00597d53  8b08                 mov ecx, dword ptr [eax]
// 00597d55  8811                 mov byte ptr [ecx], dl
// 00597d57  ff00                 inc dword ptr [eax]
// 00597d59  017804               add dword ptr [eax + 4], edi
// 00597d5c  751c                 jne 0x597d7a
// 00597d5e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597d61  56                   push esi
// 00597d62  ffd0                 call eax
// 00597d64  83c404               add esp, 4
// 00597d67  84c0                 test al, al
// 00597d69  750f                 jne 0x597d7a
// 00597d6b  8b0e                 mov ecx, dword ptr [esi]
// 00597d6d  896914               mov dword ptr [ecx + 0x14], ebp
// 00597d70  8b16                 mov edx, dword ptr [esi]
// 00597d72  8b02                 mov eax, dword ptr [edx]
// 00597d74  56                   push esi
// 00597d75  ffd0                 call eax
// 00597d77  83c404               add esp, 4
// 00597d7a  0fb79ec8000000       movzx ebx, word ptr [esi + 0xc8]
// 00597d81  e87af7ffff           call 0x597500
// 00597d86  0fb79eca000000       movzx ebx, word ptr [esi + 0xca]
// 00597d8d  e86ef7ffff           call 0x597500
// 00597d92  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597d95  8b08                 mov ecx, dword ptr [eax]
// 00597d97  c60100               mov byte ptr [ecx], 0
// 00597d9a  ff00                 inc dword ptr [eax]
// 00597d9c  017804               add dword ptr [eax + 4], edi
// 00597d9f  751c                 jne 0x597dbd
// 00597da1  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597da4  56                   push esi
// 00597da5  ffd2                 call edx
// 00597da7  83c404               add esp, 4
// 00597daa  84c0                 test al, al
// 00597dac  750f                 jne 0x597dbd
// 00597dae  8b06                 mov eax, dword ptr [esi]
// 00597db0  896814               mov dword ptr [eax + 0x14], ebp
// 00597db3  8b0e                 mov ecx, dword ptr [esi]
// 00597db5  8b11                 mov edx, dword ptr [ecx]
// 00597db7  56                   push esi
// 00597db8  ffd2                 call edx
// 00597dba  83c404               add esp, 4
// 00597dbd  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597dc0  8b08                 mov ecx, dword ptr [eax]
// 00597dc2  c60100               mov byte ptr [ecx], 0
// 00597dc5  ff00                 inc dword ptr [eax]
// 00597dc7  017804               add dword ptr [eax + 4], edi
// 00597dca  751c                 jne 0x597de8
// 00597dcc  8b500c               mov edx, dword ptr [eax + 0xc]
// 00597dcf  56                   push esi
// 00597dd0  ffd2                 call edx
// 00597dd2  83c404               add esp, 4
// 00597dd5  84c0                 test al, al
// 00597dd7  750f                 jne 0x597de8
// 00597dd9  8b06                 mov eax, dword ptr [esi]
// 00597ddb  896814               mov dword ptr [eax + 0x14], ebp
// 00597dde  8b0e                 mov ecx, dword ptr [esi]
// 00597de0  8b11                 mov edx, dword ptr [ecx]
// 00597de2  56                   push esi
// 00597de3  ffd2                 call edx
// 00597de5  83c404               add esp, 4
// 00597de8  5f                   pop edi
// 00597de9  5e                   pop esi
// 00597dea  5d                   pop ebp
// 00597deb  5b                   pop ebx
// 00597dec  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_jfif_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
