// from server: 100% by auto
// roc 2009-06 006f0860  unit: seg_006f0000  size: 668 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0860
//
// 006f0860  83ec10               sub esp, 0x10
// 006f0863  53                   push ebx
// 006f0864  55                   push ebp
// 006f0865  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006f0869  56                   push esi
// 006f086a  57                   push edi
// 006f086b  8bf0                 mov esi, eax
// 006f086d  e84efeffff           call 0x6f06c0
// 006f0872  8bf8                 mov edi, eax
// 006f0874  8d4701               lea eax, [edi + 1]
// 006f0877  3dffffff0f           cmp eax, 0xfffffff
// 006f087c  7717                 ja 0x6f0895
// 006f087e  8b16                 mov edx, dword ptr [esi]
// 006f0880  8bcf                 mov ecx, edi
// 006f0882  c1e104               shl ecx, 4
// 006f0885  51                   push ecx
// 006f0886  6a00                 push 0
// 006f0888  6a00                 push 0
// 006f088a  52                   push edx
// 006f088b  e8d0ceffff           call 0x6ed760
// 006f0890  83c410               add esp, 0x10
// 006f0893  eb0b                 jmp 0x6f08a0
// 006f0895  8b06                 mov eax, dword ptr [esi]
// 006f0897  50                   push eax
// 006f0898  e8a3ceffff           call 0x6ed740
// 006f089d  83c404               add esp, 4
// 006f08a0  33db                 xor ebx, ebx
// 006f08a2  3bfb                 cmp edi, ebx
// 006f08a4  894508               mov dword ptr [ebp + 8], eax
// 006f08a7  897d28               mov dword ptr [ebp + 0x28], edi
// 006f08aa  0f8e58010000         jle 0x6f0a08
// 006f08b0  33c0                 xor eax, eax
// 006f08b2  8bcf                 mov ecx, edi
// 006f08b4  8b5508               mov edx, dword ptr [ebp + 8]
// 006f08b7  895c1008             mov dword ptr [eax + edx + 8], ebx
// 006f08bb  83c010               add eax, 0x10
// 006f08be  83e901               sub ecx, 1
// 006f08c1  75f1                 jne 0x6f08b4
// 006f08c3  3bfb                 cmp edi, ebx
// 006f08c5  0f8e3d010000         jle 0x6f0a08
// 006f08cb  897c2414             mov dword ptr [esp + 0x14], edi
// 006f08cf  90                   nop 
// 006f08d0  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f08d3  8b7d08               mov edi, dword ptr [ebp + 8]
// 006f08d6  6a01                 push 1
// 006f08d8  8d442428             lea eax, [esp + 0x28]
// 006f08dc  50                   push eax
// 006f08dd  51                   push ecx
// 006f08de  03fb                 add edi, ebx
// 006f08e0  e86bc8ffff           call 0x6ed150
// 006f08e5  83c40c               add esp, 0xc
// 006f08e8  85c0                 test eax, eax
// 006f08ea  7423                 je 0x6f090f
// 006f08ec  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f08ef  8b06                 mov eax, dword ptr [esi]
// 006f08f1  6840e08e00           push 0x8ee040
// 006f08f6  52                   push edx
// 006f08f7  6824e08e00           push 0x8ee024
// 006f08fc  50                   push eax
// 006f08fd  e89e87fdff           call 0x6c90a0
// 006f0902  8b0e                 mov ecx, dword ptr [esi]
// 006f0904  6a03                 push 3
// 006f0906  51                   push ecx
// 006f0907  e8d429fdff           call 0x6c32e0
// 006f090c  83c418               add esp, 0x18
// 006f090f  0fbe442424           movsx eax, byte ptr [esp + 0x24]
// 006f0914  83f804               cmp eax, 4
// 006f0917  0f87ba000000         ja 0x6f09d7
// 006f091d  ff2485e80a6f00       jmp dword ptr [eax*4 + 0x6f0ae8]
// 006f0924  c7470800000000       mov dword ptr [edi + 8], 0
// 006f092b  e9ca000000           jmp 0x6f09fa
// 006f0930  8b4604               mov eax, dword ptr [esi + 4]
// 006f0933  6a01                 push 1
// 006f0935  8d542417             lea edx, [esp + 0x17]
// 006f0939  52                   push edx
// 006f093a  50                   push eax
// 006f093b  e810c8ffff           call 0x6ed150
// 006f0940  83c40c               add esp, 0xc
// 006f0943  85c0                 test eax, eax
// 006f0945  7423                 je 0x6f096a
// 006f0947  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006f094a  8b16                 mov edx, dword ptr [esi]
// 006f094c  6840e08e00           push 0x8ee040
// 006f0951  51                   push ecx
// 006f0952  6824e08e00           push 0x8ee024
// 006f0957  52                   push edx
// 006f0958  e84387fdff           call 0x6c90a0
// 006f095d  8b06                 mov eax, dword ptr [esi]
// 006f095f  6a03                 push 3
// 006f0961  50                   push eax
// 006f0962  e87929fdff           call 0x6c32e0
// 006f0967  83c418               add esp, 0x18
// 006f096a  33c9                 xor ecx, ecx
// 006f096c  384c2413             cmp byte ptr [esp + 0x13], cl
// 006f0970  c7470801000000       mov dword ptr [edi + 8], 1
// 006f0977  0f95c1               setne cl
// 006f097a  890f                 mov dword ptr [edi], ecx
// 006f097c  eb7c                 jmp 0x6f09fa
// 006f097e  8b4604               mov eax, dword ptr [esi + 4]
// 006f0981  6a08                 push 8
// 006f0983  8d54241c             lea edx, [esp + 0x1c]
// 006f0987  52                   push edx
// 006f0988  50                   push eax
// 006f0989  e8c2c7ffff           call 0x6ed150
// 006f098e  83c40c               add esp, 0xc
// 006f0991  85c0                 test eax, eax
// 006f0993  7423                 je 0x6f09b8
// 006f0995  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006f0998  8b16                 mov edx, dword ptr [esi]
// 006f099a  6840e08e00           push 0x8ee040
// 006f099f  51                   push ecx
// 006f09a0  6824e08e00           push 0x8ee024
// 006f09a5  52                   push edx
// 006f09a6  e8f586fdff           call 0x6c90a0
// 006f09ab  8b06                 mov eax, dword ptr [esi]
// 006f09ad  6a03                 push 3
// 006f09af  50                   push eax
// 006f09b0  e82b29fdff           call 0x6c32e0
// 006f09b5  83c418               add esp, 0x18
// 006f09b8  dd442418             fld qword ptr [esp + 0x18]
// 006f09bc  c7470803000000       mov dword ptr [edi + 8], 3
// 006f09c3  dd1f                 fstp qword ptr [edi]
// 006f09c5  eb33                 jmp 0x6f09fa
// 006f09c7  e864fdffff           call 0x6f0730
// 006f09cc  8907                 mov dword ptr [edi], eax
// 006f09ce  c7470804000000       mov dword ptr [edi + 8], 4
// 006f09d5  eb23                 jmp 0x6f09fa
// 006f09d7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006f09da  8b16                 mov edx, dword ptr [esi]
// 006f09dc  685ce08e00           push 0x8ee05c
// 006f09e1  51                   push ecx
// 006f09e2  6824e08e00           push 0x8ee024
// 006f09e7  52                   push edx
// 006f09e8  e8b386fdff           call 0x6c90a0
// 006f09ed  8b06                 mov eax, dword ptr [esi]
// 006f09ef  6a03                 push 3
// 006f09f1  50                   push eax
// 006f09f2  e8e928fdff           call 0x6c32e0
// 006f09f7  83c418               add esp, 0x18
// 006f09fa  83c310               add ebx, 0x10
// 006f09fd  836c241401           sub dword ptr [esp + 0x14], 1
// 006f0a02  0f85c8feffff         jne 0x6f08d0
// 006f0a08  8b5604               mov edx, dword ptr [esi + 4]
// 006f0a0b  6a04                 push 4
// 006f0a0d  8d4c2428             lea ecx, [esp + 0x28]
// 006f0a11  51                   push ecx
// 006f0a12  52                   push edx
// 006f0a13  e838c7ffff           call 0x6ed150
// 006f0a18  83c40c               add esp, 0xc
// 006f0a1b  85c0                 test eax, eax
// 006f0a1d  7423                 je 0x6f0a42
// 006f0a1f  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f0a22  8b0e                 mov ecx, dword ptr [esi]
// 006f0a24  6840e08e00           push 0x8ee040
// 006f0a29  50                   push eax
// 006f0a2a  6824e08e00           push 0x8ee024
// 006f0a2f  51                   push ecx
// 006f0a30  e86b86fdff           call 0x6c90a0
// 006f0a35  8b16                 mov edx, dword ptr [esi]
// 006f0a37  6a03                 push 3
// 006f0a39  52                   push edx
// 006f0a3a  e8a128fdff           call 0x6c32e0
// 006f0a3f  83c418               add esp, 0x18
// 006f0a42  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006f0a46  85ff                 test edi, edi
// 006f0a48  7d27                 jge 0x6f0a71
// 006f0a4a  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f0a4d  8b0e                 mov ecx, dword ptr [esi]
// 006f0a4f  6850e08e00           push 0x8ee050
// 006f0a54  50                   push eax
// 006f0a55  6824e08e00           push 0x8ee024
// 006f0a5a  51                   push ecx
// 006f0a5b  e84086fdff           call 0x6c90a0
// 006f0a60  8b16                 mov edx, dword ptr [esi]
// 006f0a62  6a03                 push 3
// 006f0a64  52                   push edx
// 006f0a65  e87628fdff           call 0x6c32e0
// 006f0a6a  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006f0a6e  83c418               add esp, 0x18
// 006f0a71  8d4701               lea eax, [edi + 1]
// 006f0a74  3dffffff3f           cmp eax, 0x3fffffff
// 006f0a79  7719                 ja 0x6f0a94
// 006f0a7b  8b16                 mov edx, dword ptr [esi]
// 006f0a7d  8d0cbd00000000       lea ecx, [edi*4]
// 006f0a84  51                   push ecx
// 006f0a85  6a00                 push 0
// 006f0a87  6a00                 push 0
// 006f0a89  52                   push edx
// 006f0a8a  e8d1ccffff           call 0x6ed760
// 006f0a8f  83c410               add esp, 0x10
// 006f0a92  eb0b                 jmp 0x6f0a9f
// 006f0a94  8b06                 mov eax, dword ptr [esi]
// 006f0a96  50                   push eax
// 006f0a97  e8a4ccffff           call 0x6ed740
// 006f0a9c  83c404               add esp, 4
// 006f0a9f  894510               mov dword ptr [ebp + 0x10], eax
// 006f0aa2  33c0                 xor eax, eax
// 006f0aa4  897d34               mov dword ptr [ebp + 0x34], edi
// 006f0aa7  85ff                 test edi, edi
// 006f0aa9  7e14                 jle 0x6f0abf
// 006f0aab  eb03                 jmp 0x6f0ab0
// 006f0aad  8d4900               lea ecx, [ecx]
// 006f0ab0  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006f0ab3  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 006f0aba  40                   inc eax
// 006f0abb  3bc7                 cmp eax, edi
// 006f0abd  7cf1                 jl 0x6f0ab0
// 006f0abf  33db                 xor ebx, ebx
// 006f0ac1  85ff                 test edi, edi
// 006f0ac3  7e18                 jle 0x6f0add
// 006f0ac5  8b5520               mov edx, dword ptr [ebp + 0x20]
// 006f0ac8  52                   push edx
// 006f0ac9  56                   push esi
// 006f0aca  e8f1020000           call 0x6f0dc0
// 006f0acf  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006f0ad2  890499               mov dword ptr [ecx + ebx*4], eax
// 006f0ad5  43                   inc ebx
// 006f0ad6  83c408               add esp, 8
// 006f0ad9  3bdf                 cmp ebx, edi
// 006f0adb  7ce8                 jl 0x6f0ac5
// 006f0add  5f                   pop edi
// 006f0ade  5e                   pop esi
// 006f0adf  5d                   pop ebp
// 006f0ae0  5b                   pop ebx
// 006f0ae1  83c410               add esp, 0x10
// 006f0ae4  c3                   ret 
// 006f0ae5  8d4900               lea ecx, [ecx]
// 006f0ae8  2409                 and al, 9
// 006f0aea  6f                   outsd dx, dword ptr [esi]
// 006f0aeb  0030                 add byte ptr [eax], dh
// 006f0aed  096f00               or dword ptr [edi], ebp
// 006f0af0  d7                   xlatb 
// 006f0af1  096f00               or dword ptr [edi], ebp
// 006f0af4  7e09                 jle 0x6f0aff
// 006f0af6  6f                   outsd dx, dword ptr [esi]
// 006f0af7  00c7                 add bh, al
// 006f0af9  096f00               or dword ptr [edi], ebp
// library lua-5.1.4/lundump.c (function _LoadConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
