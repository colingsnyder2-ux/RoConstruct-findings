// roc 2009-06 006f0b00  unit: seg_006f0000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0b00
//
// 006f0b00  83ec08               sub esp, 8
// 006f0b03  53                   push ebx
// 006f0b04  55                   push ebp
// 006f0b05  56                   push esi
// 006f0b06  8bf0                 mov esi, eax
// 006f0b08  e8b3fbffff           call 0x6f06c0
// 006f0b0d  8bd8                 mov ebx, eax
// 006f0b0f  8d4301               lea eax, [ebx + 1]
// 006f0b12  3dffffff3f           cmp eax, 0x3fffffff
// 006f0b17  7719                 ja 0x6f0b32
// 006f0b19  8b16                 mov edx, dword ptr [esi]
// 006f0b1b  8d0c9d00000000       lea ecx, [ebx*4]
// 006f0b22  51                   push ecx
// 006f0b23  6a00                 push 0
// 006f0b25  6a00                 push 0
// 006f0b27  52                   push edx
// 006f0b28  e833ccffff           call 0x6ed760
// 006f0b2d  83c410               add esp, 0x10
// 006f0b30  eb0b                 jmp 0x6f0b3d
// 006f0b32  8b06                 mov eax, dword ptr [esi]
// 006f0b34  50                   push eax
// 006f0b35  e806ccffff           call 0x6ed740
// 006f0b3a  83c404               add esp, 4
// 006f0b3d  8d0c9d00000000       lea ecx, [ebx*4]
// 006f0b44  51                   push ecx
// 006f0b45  894714               mov dword ptr [edi + 0x14], eax
// 006f0b48  895f30               mov dword ptr [edi + 0x30], ebx
// 006f0b4b  8b5604               mov edx, dword ptr [esi + 4]
// 006f0b4e  50                   push eax
// 006f0b4f  52                   push edx
// 006f0b50  e8fbc5ffff           call 0x6ed150
// 006f0b55  83c40c               add esp, 0xc
// 006f0b58  85c0                 test eax, eax
// 006f0b5a  7423                 je 0x6f0b7f
// 006f0b5c  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f0b5f  8b0e                 mov ecx, dword ptr [esi]
// 006f0b61  6840e08e00           push 0x8ee040
// 006f0b66  50                   push eax
// 006f0b67  6824e08e00           push 0x8ee024
// 006f0b6c  51                   push ecx
// 006f0b6d  e82e85fdff           call 0x6c90a0
// 006f0b72  8b16                 mov edx, dword ptr [esi]
// 006f0b74  6a03                 push 3
// 006f0b76  52                   push edx
// 006f0b77  e86427fdff           call 0x6c32e0
// 006f0b7c  83c418               add esp, 0x18
// 006f0b7f  e83cfbffff           call 0x6f06c0
// 006f0b84  8bd8                 mov ebx, eax
// 006f0b86  8d4301               lea eax, [ebx + 1]
// 006f0b89  3d55555515           cmp eax, 0x15555555
// 006f0b8e  7719                 ja 0x6f0ba9
// 006f0b90  8b16                 mov edx, dword ptr [esi]
// 006f0b92  8d0c5b               lea ecx, [ebx + ebx*2]
// 006f0b95  03c9                 add ecx, ecx
// 006f0b97  03c9                 add ecx, ecx
// 006f0b99  51                   push ecx
// 006f0b9a  6a00                 push 0
// 006f0b9c  6a00                 push 0
// 006f0b9e  52                   push edx
// 006f0b9f  e8bccbffff           call 0x6ed760
// 006f0ba4  83c410               add esp, 0x10
// 006f0ba7  eb0b                 jmp 0x6f0bb4
// 006f0ba9  8b06                 mov eax, dword ptr [esi]
// 006f0bab  50                   push eax
// 006f0bac  e88fcbffff           call 0x6ed740
// 006f0bb1  83c404               add esp, 4
// 006f0bb4  894718               mov dword ptr [edi + 0x18], eax
// 006f0bb7  895f38               mov dword ptr [edi + 0x38], ebx
// 006f0bba  85db                 test ebx, ebx
// 006f0bbc  0f8e23010000         jle 0x6f0ce5
// 006f0bc2  33c0                 xor eax, eax
// 006f0bc4  8bcb                 mov ecx, ebx
// 006f0bc6  eb08                 jmp 0x6f0bd0
// 006f0bc8  8da42400000000       lea esp, [esp]
// 006f0bcf  90                   nop 
// 006f0bd0  8b5718               mov edx, dword ptr [edi + 0x18]
// 006f0bd3  c7041000000000       mov dword ptr [eax + edx], 0
// 006f0bda  83c00c               add eax, 0xc
// 006f0bdd  83e901               sub ecx, 1
// 006f0be0  75ee                 jne 0x6f0bd0
// 006f0be2  85db                 test ebx, ebx
// 006f0be4  0f8efb000000         jle 0x6f0ce5
// 006f0bea  33ed                 xor ebp, ebp
// 006f0bec  8d642400             lea esp, [esp]
// 006f0bf0  e83bfbffff           call 0x6f0730
// 006f0bf5  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006f0bf8  6a04                 push 4
// 006f0bfa  8d542410             lea edx, [esp + 0x10]
// 006f0bfe  890429               mov dword ptr [ecx + ebp], eax
// 006f0c01  8b4604               mov eax, dword ptr [esi + 4]
// 006f0c04  52                   push edx
// 006f0c05  50                   push eax
// 006f0c06  e845c5ffff           call 0x6ed150
// 006f0c0b  83c40c               add esp, 0xc
// 006f0c0e  85c0                 test eax, eax
// 006f0c10  7423                 je 0x6f0c35
// 006f0c12  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006f0c15  8b16                 mov edx, dword ptr [esi]
// 006f0c17  6840e08e00           push 0x8ee040
// 006f0c1c  51                   push ecx
// 006f0c1d  6824e08e00           push 0x8ee024
// 006f0c22  52                   push edx
// 006f0c23  e87884fdff           call 0x6c90a0
// 006f0c28  8b06                 mov eax, dword ptr [esi]
// 006f0c2a  6a03                 push 3
// 006f0c2c  50                   push eax
// 006f0c2d  e8ae26fdff           call 0x6c32e0
// 006f0c32  83c418               add esp, 0x18
// 006f0c35  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006f0c3a  7d23                 jge 0x6f0c5f
// 006f0c3c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006f0c3f  8b16                 mov edx, dword ptr [esi]
// 006f0c41  6850e08e00           push 0x8ee050
// 006f0c46  51                   push ecx
// 006f0c47  6824e08e00           push 0x8ee024
// 006f0c4c  52                   push edx
// 006f0c4d  e84e84fdff           call 0x6c90a0
// 006f0c52  8b06                 mov eax, dword ptr [esi]
// 006f0c54  6a03                 push 3
// 006f0c56  50                   push eax
// 006f0c57  e88426fdff           call 0x6c32e0
// 006f0c5c  83c418               add esp, 0x18
// 006f0c5f  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006f0c62  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006f0c66  6a04                 push 4
// 006f0c68  8d442414             lea eax, [esp + 0x14]
// 006f0c6c  89542904             mov dword ptr [ecx + ebp + 4], edx
// 006f0c70  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f0c73  50                   push eax
// 006f0c74  51                   push ecx
// 006f0c75  e8d6c4ffff           call 0x6ed150
// 006f0c7a  83c40c               add esp, 0xc
// 006f0c7d  85c0                 test eax, eax
// 006f0c7f  7423                 je 0x6f0ca4
// 006f0c81  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0c84  8b06                 mov eax, dword ptr [esi]
// 006f0c86  6840e08e00           push 0x8ee040
// 006f0c8b  52                   push edx
// 006f0c8c  6824e08e00           push 0x8ee024
// 006f0c91  50                   push eax
// 006f0c92  e80984fdff           call 0x6c90a0
// 006f0c97  8b0e                 mov ecx, dword ptr [esi]
// 006f0c99  6a03                 push 3
// 006f0c9b  51                   push ecx
// 006f0c9c  e83f26fdff           call 0x6c32e0
// 006f0ca1  83c418               add esp, 0x18
// 006f0ca4  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f0ca9  7d23                 jge 0x6f0cce
// 006f0cab  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0cae  8b06                 mov eax, dword ptr [esi]
// 006f0cb0  6850e08e00           push 0x8ee050
// 006f0cb5  52                   push edx
// 006f0cb6  6824e08e00           push 0x8ee024
// 006f0cbb  50                   push eax
// 006f0cbc  e8df83fdff           call 0x6c90a0
// 006f0cc1  8b0e                 mov ecx, dword ptr [esi]
// 006f0cc3  6a03                 push 3
// 006f0cc5  51                   push ecx
// 006f0cc6  e81526fdff           call 0x6c32e0
// 006f0ccb  83c418               add esp, 0x18
// 006f0cce  8b5718               mov edx, dword ptr [edi + 0x18]
// 006f0cd1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f0cd5  89442a08             mov dword ptr [edx + ebp + 8], eax
// 006f0cd9  83c50c               add ebp, 0xc
// 006f0cdc  83eb01               sub ebx, 1
// 006f0cdf  0f850bffffff         jne 0x6f0bf0
// 006f0ce5  8b5604               mov edx, dword ptr [esi + 4]
// 006f0ce8  6a04                 push 4
// 006f0cea  8d4c2414             lea ecx, [esp + 0x14]
// 006f0cee  51                   push ecx
// 006f0cef  52                   push edx
// 006f0cf0  e85bc4ffff           call 0x6ed150
// 006f0cf5  83c40c               add esp, 0xc
// 006f0cf8  85c0                 test eax, eax
// 006f0cfa  7423                 je 0x6f0d1f
// 006f0cfc  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f0cff  8b0e                 mov ecx, dword ptr [esi]
// 006f0d01  6840e08e00           push 0x8ee040
// 006f0d06  50                   push eax
// 006f0d07  6824e08e00           push 0x8ee024
// 006f0d0c  51                   push ecx
// 006f0d0d  e88e83fdff           call 0x6c90a0
// 006f0d12  8b16                 mov edx, dword ptr [esi]
// 006f0d14  6a03                 push 3
// 006f0d16  52                   push edx
// 006f0d17  e8c425fdff           call 0x6c32e0
// 006f0d1c  83c418               add esp, 0x18
// 006f0d1f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006f0d23  85db                 test ebx, ebx
// 006f0d25  7d27                 jge 0x6f0d4e
// 006f0d27  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f0d2a  8b0e                 mov ecx, dword ptr [esi]
// 006f0d2c  6850e08e00           push 0x8ee050
// 006f0d31  50                   push eax
// 006f0d32  6824e08e00           push 0x8ee024
// 006f0d37  51                   push ecx
// 006f0d38  e86383fdff           call 0x6c90a0
// 006f0d3d  8b16                 mov edx, dword ptr [esi]
// 006f0d3f  6a03                 push 3
// 006f0d41  52                   push edx
// 006f0d42  e89925fdff           call 0x6c32e0
// 006f0d47  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006f0d4b  83c418               add esp, 0x18
// 006f0d4e  8d4301               lea eax, [ebx + 1]
// 006f0d51  3dffffff3f           cmp eax, 0x3fffffff
// 006f0d56  7719                 ja 0x6f0d71
// 006f0d58  8b16                 mov edx, dword ptr [esi]
// 006f0d5a  8d0c9d00000000       lea ecx, [ebx*4]
// 006f0d61  51                   push ecx
// 006f0d62  6a00                 push 0
// 006f0d64  6a00                 push 0
// 006f0d66  52                   push edx
// 006f0d67  e8f4c9ffff           call 0x6ed760
// 006f0d6c  83c410               add esp, 0x10
// 006f0d6f  eb0b                 jmp 0x6f0d7c
// 006f0d71  8b06                 mov eax, dword ptr [esi]
// 006f0d73  50                   push eax
// 006f0d74  e8c7c9ffff           call 0x6ed740
// 006f0d79  83c404               add esp, 4
// 006f0d7c  89471c               mov dword ptr [edi + 0x1c], eax
// 006f0d7f  33c0                 xor eax, eax
// 006f0d81  895f24               mov dword ptr [edi + 0x24], ebx
// 006f0d84  85db                 test ebx, ebx
// 006f0d86  7e17                 jle 0x6f0d9f
// 006f0d88  eb06                 jmp 0x6f0d90
// 006f0d8a  8d9b00000000         lea ebx, [ebx]
// 006f0d90  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 006f0d93  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 006f0d9a  40                   inc eax
// 006f0d9b  3bc3                 cmp eax, ebx
// 006f0d9d  7cf1                 jl 0x6f0d90
// 006f0d9f  33ed                 xor ebp, ebp
// 006f0da1  85db                 test ebx, ebx
// 006f0da3  7e10                 jle 0x6f0db5
// 006f0da5  e886f9ffff           call 0x6f0730
// 006f0daa  8b571c               mov edx, dword ptr [edi + 0x1c]
// 006f0dad  8904aa               mov dword ptr [edx + ebp*4], eax
// 006f0db0  45                   inc ebp
// 006f0db1  3beb                 cmp ebp, ebx
// 006f0db3  7cf0                 jl 0x6f0da5
// 006f0db5  5e                   pop esi
// 006f0db6  5d                   pop ebp
// 006f0db7  5b                   pop ebx
// 006f0db8  83c408               add esp, 8
// 006f0dbb  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
