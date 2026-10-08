// roc 2009-12 00619c20  unit: seg_00610000  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00619c20
//
// 00619c20  53                   push ebx
// 00619c21  55                   push ebp
// 00619c22  56                   push esi
// 00619c23  57                   push edi
// 00619c24  8bf0                 mov esi, eax
// 00619c26  68e0000000           push 0xe0
// 00619c2b  e890f8ffff           call 0x6194c0
// 00619c30  83c404               add esp, 4
// 00619c33  bb10000000           mov ebx, 0x10
// 00619c38  e8f3f8ffff           call 0x619530
// 00619c3d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619c40  8b08                 mov ecx, dword ptr [eax]
// 00619c42  c6014a               mov byte ptr [ecx], 0x4a
// 00619c45  ff00                 inc dword ptr [eax]
// 00619c47  83cfff               or edi, 0xffffffff
// 00619c4a  017804               add dword ptr [eax + 4], edi
// 00619c4d  8d6b08               lea ebp, [ebx + 8]
// 00619c50  751c                 jne 0x619c6e
// 00619c52  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619c55  56                   push esi
// 00619c56  ffd2                 call edx
// 00619c58  83c404               add esp, 4
// 00619c5b  84c0                 test al, al
// 00619c5d  750f                 jne 0x619c6e
// 00619c5f  8b06                 mov eax, dword ptr [esi]
// 00619c61  896814               mov dword ptr [eax + 0x14], ebp
// 00619c64  8b0e                 mov ecx, dword ptr [esi]
// 00619c66  8b11                 mov edx, dword ptr [ecx]
// 00619c68  56                   push esi
// 00619c69  ffd2                 call edx
// 00619c6b  83c404               add esp, 4
// 00619c6e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619c71  8b08                 mov ecx, dword ptr [eax]
// 00619c73  c60146               mov byte ptr [ecx], 0x46
// 00619c76  ff00                 inc dword ptr [eax]
// 00619c78  017804               add dword ptr [eax + 4], edi
// 00619c7b  751c                 jne 0x619c99
// 00619c7d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619c80  56                   push esi
// 00619c81  ffd2                 call edx
// 00619c83  83c404               add esp, 4
// 00619c86  84c0                 test al, al
// 00619c88  750f                 jne 0x619c99
// 00619c8a  8b06                 mov eax, dword ptr [esi]
// 00619c8c  896814               mov dword ptr [eax + 0x14], ebp
// 00619c8f  8b0e                 mov ecx, dword ptr [esi]
// 00619c91  8b11                 mov edx, dword ptr [ecx]
// 00619c93  56                   push esi
// 00619c94  ffd2                 call edx
// 00619c96  83c404               add esp, 4
// 00619c99  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619c9c  8b08                 mov ecx, dword ptr [eax]
// 00619c9e  c60149               mov byte ptr [ecx], 0x49
// 00619ca1  ff00                 inc dword ptr [eax]
// 00619ca3  017804               add dword ptr [eax + 4], edi
// 00619ca6  751c                 jne 0x619cc4
// 00619ca8  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619cab  56                   push esi
// 00619cac  ffd2                 call edx
// 00619cae  83c404               add esp, 4
// 00619cb1  84c0                 test al, al
// 00619cb3  750f                 jne 0x619cc4
// 00619cb5  8b06                 mov eax, dword ptr [esi]
// 00619cb7  896814               mov dword ptr [eax + 0x14], ebp
// 00619cba  8b0e                 mov ecx, dword ptr [esi]
// 00619cbc  8b11                 mov edx, dword ptr [ecx]
// 00619cbe  56                   push esi
// 00619cbf  ffd2                 call edx
// 00619cc1  83c404               add esp, 4
// 00619cc4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619cc7  8b08                 mov ecx, dword ptr [eax]
// 00619cc9  c60146               mov byte ptr [ecx], 0x46
// 00619ccc  ff00                 inc dword ptr [eax]
// 00619cce  017804               add dword ptr [eax + 4], edi
// 00619cd1  751c                 jne 0x619cef
// 00619cd3  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619cd6  56                   push esi
// 00619cd7  ffd2                 call edx
// 00619cd9  83c404               add esp, 4
// 00619cdc  84c0                 test al, al
// 00619cde  750f                 jne 0x619cef
// 00619ce0  8b06                 mov eax, dword ptr [esi]
// 00619ce2  896814               mov dword ptr [eax + 0x14], ebp
// 00619ce5  8b0e                 mov ecx, dword ptr [esi]
// 00619ce7  8b11                 mov edx, dword ptr [ecx]
// 00619ce9  56                   push esi
// 00619cea  ffd2                 call edx
// 00619cec  83c404               add esp, 4
// 00619cef  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619cf2  8b08                 mov ecx, dword ptr [eax]
// 00619cf4  c60100               mov byte ptr [ecx], 0
// 00619cf7  ff00                 inc dword ptr [eax]
// 00619cf9  017804               add dword ptr [eax + 4], edi
// 00619cfc  751c                 jne 0x619d1a
// 00619cfe  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619d01  56                   push esi
// 00619d02  ffd2                 call edx
// 00619d04  83c404               add esp, 4
// 00619d07  84c0                 test al, al
// 00619d09  750f                 jne 0x619d1a
// 00619d0b  8b06                 mov eax, dword ptr [esi]
// 00619d0d  896814               mov dword ptr [eax + 0x14], ebp
// 00619d10  8b0e                 mov ecx, dword ptr [esi]
// 00619d12  8b11                 mov edx, dword ptr [ecx]
// 00619d14  56                   push esi
// 00619d15  ffd2                 call edx
// 00619d17  83c404               add esp, 4
// 00619d1a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619d1d  8a96c5000000         mov dl, byte ptr [esi + 0xc5]
// 00619d23  8b08                 mov ecx, dword ptr [eax]
// 00619d25  8811                 mov byte ptr [ecx], dl
// 00619d27  ff00                 inc dword ptr [eax]
// 00619d29  017804               add dword ptr [eax + 4], edi
// 00619d2c  751c                 jne 0x619d4a
// 00619d2e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619d31  56                   push esi
// 00619d32  ffd0                 call eax
// 00619d34  83c404               add esp, 4
// 00619d37  84c0                 test al, al
// 00619d39  750f                 jne 0x619d4a
// 00619d3b  8b0e                 mov ecx, dword ptr [esi]
// 00619d3d  896914               mov dword ptr [ecx + 0x14], ebp
// 00619d40  8b16                 mov edx, dword ptr [esi]
// 00619d42  8b02                 mov eax, dword ptr [edx]
// 00619d44  56                   push esi
// 00619d45  ffd0                 call eax
// 00619d47  83c404               add esp, 4
// 00619d4a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619d4d  8a96c6000000         mov dl, byte ptr [esi + 0xc6]
// 00619d53  8b08                 mov ecx, dword ptr [eax]
// 00619d55  8811                 mov byte ptr [ecx], dl
// 00619d57  ff00                 inc dword ptr [eax]
// 00619d59  017804               add dword ptr [eax + 4], edi
// 00619d5c  751c                 jne 0x619d7a
// 00619d5e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619d61  56                   push esi
// 00619d62  ffd0                 call eax
// 00619d64  83c404               add esp, 4
// 00619d67  84c0                 test al, al
// 00619d69  750f                 jne 0x619d7a
// 00619d6b  8b0e                 mov ecx, dword ptr [esi]
// 00619d6d  896914               mov dword ptr [ecx + 0x14], ebp
// 00619d70  8b16                 mov edx, dword ptr [esi]
// 00619d72  8b02                 mov eax, dword ptr [edx]
// 00619d74  56                   push esi
// 00619d75  ffd0                 call eax
// 00619d77  83c404               add esp, 4
// 00619d7a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619d7d  8a96c7000000         mov dl, byte ptr [esi + 0xc7]
// 00619d83  8b08                 mov ecx, dword ptr [eax]
// 00619d85  8811                 mov byte ptr [ecx], dl
// 00619d87  ff00                 inc dword ptr [eax]
// 00619d89  017804               add dword ptr [eax + 4], edi
// 00619d8c  751c                 jne 0x619daa
// 00619d8e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619d91  56                   push esi
// 00619d92  ffd0                 call eax
// 00619d94  83c404               add esp, 4
// 00619d97  84c0                 test al, al
// 00619d99  750f                 jne 0x619daa
// 00619d9b  8b0e                 mov ecx, dword ptr [esi]
// 00619d9d  896914               mov dword ptr [ecx + 0x14], ebp
// 00619da0  8b16                 mov edx, dword ptr [esi]
// 00619da2  8b02                 mov eax, dword ptr [edx]
// 00619da4  56                   push esi
// 00619da5  ffd0                 call eax
// 00619da7  83c404               add esp, 4
// 00619daa  0fb79ec8000000       movzx ebx, word ptr [esi + 0xc8]
// 00619db1  e87af7ffff           call 0x619530
// 00619db6  0fb79eca000000       movzx ebx, word ptr [esi + 0xca]
// 00619dbd  e86ef7ffff           call 0x619530
// 00619dc2  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619dc5  8b08                 mov ecx, dword ptr [eax]
// 00619dc7  c60100               mov byte ptr [ecx], 0
// 00619dca  ff00                 inc dword ptr [eax]
// 00619dcc  017804               add dword ptr [eax + 4], edi
// 00619dcf  751c                 jne 0x619ded
// 00619dd1  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619dd4  56                   push esi
// 00619dd5  ffd2                 call edx
// 00619dd7  83c404               add esp, 4
// 00619dda  84c0                 test al, al
// 00619ddc  750f                 jne 0x619ded
// 00619dde  8b06                 mov eax, dword ptr [esi]
// 00619de0  896814               mov dword ptr [eax + 0x14], ebp
// 00619de3  8b0e                 mov ecx, dword ptr [esi]
// 00619de5  8b11                 mov edx, dword ptr [ecx]
// 00619de7  56                   push esi
// 00619de8  ffd2                 call edx
// 00619dea  83c404               add esp, 4
// 00619ded  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619df0  8b08                 mov ecx, dword ptr [eax]
// 00619df2  c60100               mov byte ptr [ecx], 0
// 00619df5  ff00                 inc dword ptr [eax]
// 00619df7  017804               add dword ptr [eax + 4], edi
// 00619dfa  751c                 jne 0x619e18
// 00619dfc  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619dff  56                   push esi
// 00619e00  ffd2                 call edx
// 00619e02  83c404               add esp, 4
// 00619e05  84c0                 test al, al
// 00619e07  750f                 jne 0x619e18
// 00619e09  8b06                 mov eax, dword ptr [esi]
// 00619e0b  896814               mov dword ptr [eax + 0x14], ebp
// 00619e0e  8b0e                 mov ecx, dword ptr [esi]
// 00619e10  8b11                 mov edx, dword ptr [ecx]
// 00619e12  56                   push esi
// 00619e13  ffd2                 call edx
// 00619e15  83c404               add esp, 4
// 00619e18  5f                   pop edi
// 00619e19  5e                   pop esi
// 00619e1a  5d                   pop ebp
// 00619e1b  5b                   pop ebx
// 00619e1c  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_jfif_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
