// from server: 100% by auto
// roc 2010-06 00781b00  unit: seg_00780000  size: 668 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781b00
//
// 00781b00  83ec10               sub esp, 0x10
// 00781b03  53                   push ebx
// 00781b04  55                   push ebp
// 00781b05  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00781b09  56                   push esi
// 00781b0a  57                   push edi
// 00781b0b  8bf0                 mov esi, eax
// 00781b0d  e84efeffff           call 0x781960
// 00781b12  8bf8                 mov edi, eax
// 00781b14  8d4701               lea eax, [edi + 1]
// 00781b17  3dffffff0f           cmp eax, 0xfffffff
// 00781b1c  7717                 ja 0x781b35
// 00781b1e  8b16                 mov edx, dword ptr [esi]
// 00781b20  8bcf                 mov ecx, edi
// 00781b22  c1e104               shl ecx, 4
// 00781b25  51                   push ecx
// 00781b26  6a00                 push 0
// 00781b28  6a00                 push 0
// 00781b2a  52                   push edx
// 00781b2b  e8d0ceffff           call 0x77ea00
// 00781b30  83c410               add esp, 0x10
// 00781b33  eb0b                 jmp 0x781b40
// 00781b35  8b06                 mov eax, dword ptr [esi]
// 00781b37  50                   push eax
// 00781b38  e8a3ceffff           call 0x77e9e0
// 00781b3d  83c404               add esp, 4
// 00781b40  33db                 xor ebx, ebx
// 00781b42  3bfb                 cmp edi, ebx
// 00781b44  894508               mov dword ptr [ebp + 8], eax
// 00781b47  897d28               mov dword ptr [ebp + 0x28], edi
// 00781b4a  0f8e58010000         jle 0x781ca8
// 00781b50  33c0                 xor eax, eax
// 00781b52  8bcf                 mov ecx, edi
// 00781b54  8b5508               mov edx, dword ptr [ebp + 8]
// 00781b57  895c1008             mov dword ptr [eax + edx + 8], ebx
// 00781b5b  83c010               add eax, 0x10
// 00781b5e  83e901               sub ecx, 1
// 00781b61  75f1                 jne 0x781b54
// 00781b63  3bfb                 cmp edi, ebx
// 00781b65  0f8e3d010000         jle 0x781ca8
// 00781b6b  897c2414             mov dword ptr [esp + 0x14], edi
// 00781b6f  90                   nop 
// 00781b70  8b4e04               mov ecx, dword ptr [esi + 4]
// 00781b73  8b7d08               mov edi, dword ptr [ebp + 8]
// 00781b76  6a01                 push 1
// 00781b78  8d442428             lea eax, [esp + 0x28]
// 00781b7c  50                   push eax
// 00781b7d  51                   push ecx
// 00781b7e  03fb                 add edi, ebx
// 00781b80  e86bc8ffff           call 0x77e3f0
// 00781b85  83c40c               add esp, 0xc
// 00781b88  85c0                 test eax, eax
// 00781b8a  7423                 je 0x781baf
// 00781b8c  8b560c               mov edx, dword ptr [esi + 0xc]
// 00781b8f  8b06                 mov eax, dword ptr [esi]
// 00781b91  68c032a500           push 0xa532c0
// 00781b96  52                   push edx
// 00781b97  68a432a500           push 0xa532a4
// 00781b9c  50                   push eax
// 00781b9d  e83e12fbff           call 0x732de0
// 00781ba2  8b0e                 mov ecx, dword ptr [esi]
// 00781ba4  6a03                 push 3
// 00781ba6  51                   push ecx
// 00781ba7  e804e5faff           call 0x7300b0
// 00781bac  83c418               add esp, 0x18
// 00781baf  0fbe442424           movsx eax, byte ptr [esp + 0x24]
// 00781bb4  83f804               cmp eax, 4
// 00781bb7  0f87ba000000         ja 0x781c77
// 00781bbd  ff2485881d7800       jmp dword ptr [eax*4 + 0x781d88]
// 00781bc4  c7470800000000       mov dword ptr [edi + 8], 0
// 00781bcb  e9ca000000           jmp 0x781c9a
// 00781bd0  8b4604               mov eax, dword ptr [esi + 4]
// 00781bd3  6a01                 push 1
// 00781bd5  8d542417             lea edx, [esp + 0x17]
// 00781bd9  52                   push edx
// 00781bda  50                   push eax
// 00781bdb  e810c8ffff           call 0x77e3f0
// 00781be0  83c40c               add esp, 0xc
// 00781be3  85c0                 test eax, eax
// 00781be5  7423                 je 0x781c0a
// 00781be7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00781bea  8b16                 mov edx, dword ptr [esi]
// 00781bec  68c032a500           push 0xa532c0
// 00781bf1  51                   push ecx
// 00781bf2  68a432a500           push 0xa532a4
// 00781bf7  52                   push edx
// 00781bf8  e8e311fbff           call 0x732de0
// 00781bfd  8b06                 mov eax, dword ptr [esi]
// 00781bff  6a03                 push 3
// 00781c01  50                   push eax
// 00781c02  e8a9e4faff           call 0x7300b0
// 00781c07  83c418               add esp, 0x18
// 00781c0a  33c9                 xor ecx, ecx
// 00781c0c  384c2413             cmp byte ptr [esp + 0x13], cl
// 00781c10  c7470801000000       mov dword ptr [edi + 8], 1
// 00781c17  0f95c1               setne cl
// 00781c1a  890f                 mov dword ptr [edi], ecx
// 00781c1c  eb7c                 jmp 0x781c9a
// 00781c1e  8b4604               mov eax, dword ptr [esi + 4]
// 00781c21  6a08                 push 8
// 00781c23  8d54241c             lea edx, [esp + 0x1c]
// 00781c27  52                   push edx
// 00781c28  50                   push eax
// 00781c29  e8c2c7ffff           call 0x77e3f0
// 00781c2e  83c40c               add esp, 0xc
// 00781c31  85c0                 test eax, eax
// 00781c33  7423                 je 0x781c58
// 00781c35  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00781c38  8b16                 mov edx, dword ptr [esi]
// 00781c3a  68c032a500           push 0xa532c0
// 00781c3f  51                   push ecx
// 00781c40  68a432a500           push 0xa532a4
// 00781c45  52                   push edx
// 00781c46  e89511fbff           call 0x732de0
// 00781c4b  8b06                 mov eax, dword ptr [esi]
// 00781c4d  6a03                 push 3
// 00781c4f  50                   push eax
// 00781c50  e85be4faff           call 0x7300b0
// 00781c55  83c418               add esp, 0x18
// 00781c58  dd442418             fld qword ptr [esp + 0x18]
// 00781c5c  c7470803000000       mov dword ptr [edi + 8], 3
// 00781c63  dd1f                 fstp qword ptr [edi]
// 00781c65  eb33                 jmp 0x781c9a
// 00781c67  e864fdffff           call 0x7819d0
// 00781c6c  8907                 mov dword ptr [edi], eax
// 00781c6e  c7470804000000       mov dword ptr [edi + 8], 4
// 00781c75  eb23                 jmp 0x781c9a
// 00781c77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00781c7a  8b16                 mov edx, dword ptr [esi]
// 00781c7c  68dc32a500           push 0xa532dc
// 00781c81  51                   push ecx
// 00781c82  68a432a500           push 0xa532a4
// 00781c87  52                   push edx
// 00781c88  e85311fbff           call 0x732de0
// 00781c8d  8b06                 mov eax, dword ptr [esi]
// 00781c8f  6a03                 push 3
// 00781c91  50                   push eax
// 00781c92  e819e4faff           call 0x7300b0
// 00781c97  83c418               add esp, 0x18
// 00781c9a  83c310               add ebx, 0x10
// 00781c9d  836c241401           sub dword ptr [esp + 0x14], 1
// 00781ca2  0f85c8feffff         jne 0x781b70
// 00781ca8  8b5604               mov edx, dword ptr [esi + 4]
// 00781cab  6a04                 push 4
// 00781cad  8d4c2428             lea ecx, [esp + 0x28]
// 00781cb1  51                   push ecx
// 00781cb2  52                   push edx
// 00781cb3  e838c7ffff           call 0x77e3f0
// 00781cb8  83c40c               add esp, 0xc
// 00781cbb  85c0                 test eax, eax
// 00781cbd  7423                 je 0x781ce2
// 00781cbf  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781cc2  8b0e                 mov ecx, dword ptr [esi]
// 00781cc4  68c032a500           push 0xa532c0
// 00781cc9  50                   push eax
// 00781cca  68a432a500           push 0xa532a4
// 00781ccf  51                   push ecx
// 00781cd0  e80b11fbff           call 0x732de0
// 00781cd5  8b16                 mov edx, dword ptr [esi]
// 00781cd7  6a03                 push 3
// 00781cd9  52                   push edx
// 00781cda  e8d1e3faff           call 0x7300b0
// 00781cdf  83c418               add esp, 0x18
// 00781ce2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00781ce6  85ff                 test edi, edi
// 00781ce8  7d27                 jge 0x781d11
// 00781cea  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781ced  8b0e                 mov ecx, dword ptr [esi]
// 00781cef  68d032a500           push 0xa532d0
// 00781cf4  50                   push eax
// 00781cf5  68a432a500           push 0xa532a4
// 00781cfa  51                   push ecx
// 00781cfb  e8e010fbff           call 0x732de0
// 00781d00  8b16                 mov edx, dword ptr [esi]
// 00781d02  6a03                 push 3
// 00781d04  52                   push edx
// 00781d05  e8a6e3faff           call 0x7300b0
// 00781d0a  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00781d0e  83c418               add esp, 0x18
// 00781d11  8d4701               lea eax, [edi + 1]
// 00781d14  3dffffff3f           cmp eax, 0x3fffffff
// 00781d19  7719                 ja 0x781d34
// 00781d1b  8b16                 mov edx, dword ptr [esi]
// 00781d1d  8d0cbd00000000       lea ecx, [edi*4]
// 00781d24  51                   push ecx
// 00781d25  6a00                 push 0
// 00781d27  6a00                 push 0
// 00781d29  52                   push edx
// 00781d2a  e8d1ccffff           call 0x77ea00
// 00781d2f  83c410               add esp, 0x10
// 00781d32  eb0b                 jmp 0x781d3f
// 00781d34  8b06                 mov eax, dword ptr [esi]
// 00781d36  50                   push eax
// 00781d37  e8a4ccffff           call 0x77e9e0
// 00781d3c  83c404               add esp, 4
// 00781d3f  894510               mov dword ptr [ebp + 0x10], eax
// 00781d42  33c0                 xor eax, eax
// 00781d44  897d34               mov dword ptr [ebp + 0x34], edi
// 00781d47  85ff                 test edi, edi
// 00781d49  7e14                 jle 0x781d5f
// 00781d4b  eb03                 jmp 0x781d50
// 00781d4d  8d4900               lea ecx, [ecx]
// 00781d50  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00781d53  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 00781d5a  40                   inc eax
// 00781d5b  3bc7                 cmp eax, edi
// 00781d5d  7cf1                 jl 0x781d50
// 00781d5f  33db                 xor ebx, ebx
// 00781d61  85ff                 test edi, edi
// 00781d63  7e18                 jle 0x781d7d
// 00781d65  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00781d68  52                   push edx
// 00781d69  56                   push esi
// 00781d6a  e8f1020000           call 0x782060
// 00781d6f  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00781d72  890499               mov dword ptr [ecx + ebx*4], eax
// 00781d75  43                   inc ebx
// 00781d76  83c408               add esp, 8
// 00781d79  3bdf                 cmp ebx, edi
// 00781d7b  7ce8                 jl 0x781d65
// 00781d7d  5f                   pop edi
// 00781d7e  5e                   pop esi
// 00781d7f  5d                   pop ebp
// 00781d80  5b                   pop ebx
// 00781d81  83c410               add esp, 0x10
// 00781d84  c3                   ret 
// 00781d85  8d4900               lea ecx, [ecx]
// 00781d88  c41b                 les ebx, ptr [ebx]
// 00781d8a  7800                 js 0x781d8c
// 00781d8c  d01b                 rcr byte ptr [ebx], 1
// 00781d8e  7800                 js 0x781d90
// 00781d90  771c                 ja 0x781dae
// 00781d92  7800                 js 0x781d94
// 00781d94  1e                   push ds
// 00781d95  1c78                 sbb al, 0x78
// 00781d97  00671c               add byte ptr [edi + 0x1c], ah
// 00781d9a  7800                 js 0x781d9c
// library lua-5.1.4/lundump.c (function _LoadConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
