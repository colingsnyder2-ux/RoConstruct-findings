// roc 2010-06 00781da0  unit: seg_00780000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781da0
//
// 00781da0  83ec08               sub esp, 8
// 00781da3  53                   push ebx
// 00781da4  55                   push ebp
// 00781da5  56                   push esi
// 00781da6  8bf0                 mov esi, eax
// 00781da8  e8b3fbffff           call 0x781960
// 00781dad  8bd8                 mov ebx, eax
// 00781daf  8d4301               lea eax, [ebx + 1]
// 00781db2  3dffffff3f           cmp eax, 0x3fffffff
// 00781db7  7719                 ja 0x781dd2
// 00781db9  8b16                 mov edx, dword ptr [esi]
// 00781dbb  8d0c9d00000000       lea ecx, [ebx*4]
// 00781dc2  51                   push ecx
// 00781dc3  6a00                 push 0
// 00781dc5  6a00                 push 0
// 00781dc7  52                   push edx
// 00781dc8  e833ccffff           call 0x77ea00
// 00781dcd  83c410               add esp, 0x10
// 00781dd0  eb0b                 jmp 0x781ddd
// 00781dd2  8b06                 mov eax, dword ptr [esi]
// 00781dd4  50                   push eax
// 00781dd5  e806ccffff           call 0x77e9e0
// 00781dda  83c404               add esp, 4
// 00781ddd  8d0c9d00000000       lea ecx, [ebx*4]
// 00781de4  51                   push ecx
// 00781de5  894714               mov dword ptr [edi + 0x14], eax
// 00781de8  895f30               mov dword ptr [edi + 0x30], ebx
// 00781deb  8b5604               mov edx, dword ptr [esi + 4]
// 00781dee  50                   push eax
// 00781def  52                   push edx
// 00781df0  e8fbc5ffff           call 0x77e3f0
// 00781df5  83c40c               add esp, 0xc
// 00781df8  85c0                 test eax, eax
// 00781dfa  7423                 je 0x781e1f
// 00781dfc  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781dff  8b0e                 mov ecx, dword ptr [esi]
// 00781e01  68c032a500           push 0xa532c0
// 00781e06  50                   push eax
// 00781e07  68a432a500           push 0xa532a4
// 00781e0c  51                   push ecx
// 00781e0d  e8ce0ffbff           call 0x732de0
// 00781e12  8b16                 mov edx, dword ptr [esi]
// 00781e14  6a03                 push 3
// 00781e16  52                   push edx
// 00781e17  e894e2faff           call 0x7300b0
// 00781e1c  83c418               add esp, 0x18
// 00781e1f  e83cfbffff           call 0x781960
// 00781e24  8bd8                 mov ebx, eax
// 00781e26  8d4301               lea eax, [ebx + 1]
// 00781e29  3d55555515           cmp eax, 0x15555555
// 00781e2e  7719                 ja 0x781e49
// 00781e30  8b16                 mov edx, dword ptr [esi]
// 00781e32  8d0c5b               lea ecx, [ebx + ebx*2]
// 00781e35  03c9                 add ecx, ecx
// 00781e37  03c9                 add ecx, ecx
// 00781e39  51                   push ecx
// 00781e3a  6a00                 push 0
// 00781e3c  6a00                 push 0
// 00781e3e  52                   push edx
// 00781e3f  e8bccbffff           call 0x77ea00
// 00781e44  83c410               add esp, 0x10
// 00781e47  eb0b                 jmp 0x781e54
// 00781e49  8b06                 mov eax, dword ptr [esi]
// 00781e4b  50                   push eax
// 00781e4c  e88fcbffff           call 0x77e9e0
// 00781e51  83c404               add esp, 4
// 00781e54  894718               mov dword ptr [edi + 0x18], eax
// 00781e57  895f38               mov dword ptr [edi + 0x38], ebx
// 00781e5a  85db                 test ebx, ebx
// 00781e5c  0f8e23010000         jle 0x781f85
// 00781e62  33c0                 xor eax, eax
// 00781e64  8bcb                 mov ecx, ebx
// 00781e66  eb08                 jmp 0x781e70
// 00781e68  8da42400000000       lea esp, [esp]
// 00781e6f  90                   nop 
// 00781e70  8b5718               mov edx, dword ptr [edi + 0x18]
// 00781e73  c7041000000000       mov dword ptr [eax + edx], 0
// 00781e7a  83c00c               add eax, 0xc
// 00781e7d  83e901               sub ecx, 1
// 00781e80  75ee                 jne 0x781e70
// 00781e82  85db                 test ebx, ebx
// 00781e84  0f8efb000000         jle 0x781f85
// 00781e8a  33ed                 xor ebp, ebp
// 00781e8c  8d642400             lea esp, [esp]
// 00781e90  e83bfbffff           call 0x7819d0
// 00781e95  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00781e98  6a04                 push 4
// 00781e9a  8d542410             lea edx, [esp + 0x10]
// 00781e9e  890429               mov dword ptr [ecx + ebp], eax
// 00781ea1  8b4604               mov eax, dword ptr [esi + 4]
// 00781ea4  52                   push edx
// 00781ea5  50                   push eax
// 00781ea6  e845c5ffff           call 0x77e3f0
// 00781eab  83c40c               add esp, 0xc
// 00781eae  85c0                 test eax, eax
// 00781eb0  7423                 je 0x781ed5
// 00781eb2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00781eb5  8b16                 mov edx, dword ptr [esi]
// 00781eb7  68c032a500           push 0xa532c0
// 00781ebc  51                   push ecx
// 00781ebd  68a432a500           push 0xa532a4
// 00781ec2  52                   push edx
// 00781ec3  e8180ffbff           call 0x732de0
// 00781ec8  8b06                 mov eax, dword ptr [esi]
// 00781eca  6a03                 push 3
// 00781ecc  50                   push eax
// 00781ecd  e8dee1faff           call 0x7300b0
// 00781ed2  83c418               add esp, 0x18
// 00781ed5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00781eda  7d23                 jge 0x781eff
// 00781edc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00781edf  8b16                 mov edx, dword ptr [esi]
// 00781ee1  68d032a500           push 0xa532d0
// 00781ee6  51                   push ecx
// 00781ee7  68a432a500           push 0xa532a4
// 00781eec  52                   push edx
// 00781eed  e8ee0efbff           call 0x732de0
// 00781ef2  8b06                 mov eax, dword ptr [esi]
// 00781ef4  6a03                 push 3
// 00781ef6  50                   push eax
// 00781ef7  e8b4e1faff           call 0x7300b0
// 00781efc  83c418               add esp, 0x18
// 00781eff  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00781f02  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00781f06  6a04                 push 4
// 00781f08  8d442414             lea eax, [esp + 0x14]
// 00781f0c  89542904             mov dword ptr [ecx + ebp + 4], edx
// 00781f10  8b4e04               mov ecx, dword ptr [esi + 4]
// 00781f13  50                   push eax
// 00781f14  51                   push ecx
// 00781f15  e8d6c4ffff           call 0x77e3f0
// 00781f1a  83c40c               add esp, 0xc
// 00781f1d  85c0                 test eax, eax
// 00781f1f  7423                 je 0x781f44
// 00781f21  8b560c               mov edx, dword ptr [esi + 0xc]
// 00781f24  8b06                 mov eax, dword ptr [esi]
// 00781f26  68c032a500           push 0xa532c0
// 00781f2b  52                   push edx
// 00781f2c  68a432a500           push 0xa532a4
// 00781f31  50                   push eax
// 00781f32  e8a90efbff           call 0x732de0
// 00781f37  8b0e                 mov ecx, dword ptr [esi]
// 00781f39  6a03                 push 3
// 00781f3b  51                   push ecx
// 00781f3c  e86fe1faff           call 0x7300b0
// 00781f41  83c418               add esp, 0x18
// 00781f44  837c241000           cmp dword ptr [esp + 0x10], 0
// 00781f49  7d23                 jge 0x781f6e
// 00781f4b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00781f4e  8b06                 mov eax, dword ptr [esi]
// 00781f50  68d032a500           push 0xa532d0
// 00781f55  52                   push edx
// 00781f56  68a432a500           push 0xa532a4
// 00781f5b  50                   push eax
// 00781f5c  e87f0efbff           call 0x732de0
// 00781f61  8b0e                 mov ecx, dword ptr [esi]
// 00781f63  6a03                 push 3
// 00781f65  51                   push ecx
// 00781f66  e845e1faff           call 0x7300b0
// 00781f6b  83c418               add esp, 0x18
// 00781f6e  8b5718               mov edx, dword ptr [edi + 0x18]
// 00781f71  8b442410             mov eax, dword ptr [esp + 0x10]
// 00781f75  89442a08             mov dword ptr [edx + ebp + 8], eax
// 00781f79  83c50c               add ebp, 0xc
// 00781f7c  83eb01               sub ebx, 1
// 00781f7f  0f850bffffff         jne 0x781e90
// 00781f85  8b5604               mov edx, dword ptr [esi + 4]
// 00781f88  6a04                 push 4
// 00781f8a  8d4c2414             lea ecx, [esp + 0x14]
// 00781f8e  51                   push ecx
// 00781f8f  52                   push edx
// 00781f90  e85bc4ffff           call 0x77e3f0
// 00781f95  83c40c               add esp, 0xc
// 00781f98  85c0                 test eax, eax
// 00781f9a  7423                 je 0x781fbf
// 00781f9c  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781f9f  8b0e                 mov ecx, dword ptr [esi]
// 00781fa1  68c032a500           push 0xa532c0
// 00781fa6  50                   push eax
// 00781fa7  68a432a500           push 0xa532a4
// 00781fac  51                   push ecx
// 00781fad  e82e0efbff           call 0x732de0
// 00781fb2  8b16                 mov edx, dword ptr [esi]
// 00781fb4  6a03                 push 3
// 00781fb6  52                   push edx
// 00781fb7  e8f4e0faff           call 0x7300b0
// 00781fbc  83c418               add esp, 0x18
// 00781fbf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00781fc3  85db                 test ebx, ebx
// 00781fc5  7d27                 jge 0x781fee
// 00781fc7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781fca  8b0e                 mov ecx, dword ptr [esi]
// 00781fcc  68d032a500           push 0xa532d0
// 00781fd1  50                   push eax
// 00781fd2  68a432a500           push 0xa532a4
// 00781fd7  51                   push ecx
// 00781fd8  e8030efbff           call 0x732de0
// 00781fdd  8b16                 mov edx, dword ptr [esi]
// 00781fdf  6a03                 push 3
// 00781fe1  52                   push edx
// 00781fe2  e8c9e0faff           call 0x7300b0
// 00781fe7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00781feb  83c418               add esp, 0x18
// 00781fee  8d4301               lea eax, [ebx + 1]
// 00781ff1  3dffffff3f           cmp eax, 0x3fffffff
// 00781ff6  7719                 ja 0x782011
// 00781ff8  8b16                 mov edx, dword ptr [esi]
// 00781ffa  8d0c9d00000000       lea ecx, [ebx*4]
// 00782001  51                   push ecx
// 00782002  6a00                 push 0
// 00782004  6a00                 push 0
// 00782006  52                   push edx
// 00782007  e8f4c9ffff           call 0x77ea00
// 0078200c  83c410               add esp, 0x10
// 0078200f  eb0b                 jmp 0x78201c
// 00782011  8b06                 mov eax, dword ptr [esi]
// 00782013  50                   push eax
// 00782014  e8c7c9ffff           call 0x77e9e0
// 00782019  83c404               add esp, 4
// 0078201c  89471c               mov dword ptr [edi + 0x1c], eax
// 0078201f  33c0                 xor eax, eax
// 00782021  895f24               mov dword ptr [edi + 0x24], ebx
// 00782024  85db                 test ebx, ebx
// 00782026  7e17                 jle 0x78203f
// 00782028  eb06                 jmp 0x782030
// 0078202a  8d9b00000000         lea ebx, [ebx]
// 00782030  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00782033  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 0078203a  40                   inc eax
// 0078203b  3bc3                 cmp eax, ebx
// 0078203d  7cf1                 jl 0x782030
// 0078203f  33ed                 xor ebp, ebp
// 00782041  85db                 test ebx, ebx
// 00782043  7e10                 jle 0x782055
// 00782045  e886f9ffff           call 0x7819d0
// 0078204a  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0078204d  8904aa               mov dword ptr [edx + ebp*4], eax
// 00782050  45                   inc ebp
// 00782051  3beb                 cmp ebp, ebx
// 00782053  7cf0                 jl 0x782045
// 00782055  5e                   pop esi
// 00782056  5d                   pop ebp
// 00782057  5b                   pop ebx
// 00782058  83c408               add esp, 8
// 0078205b  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
