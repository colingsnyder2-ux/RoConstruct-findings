// roc 2008-06 00663a60  unit: RBX::FilterStairs  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663a60
//
// 00663a60  83ec08               sub esp, 8
// 00663a63  53                   push ebx
// 00663a64  55                   push ebp
// 00663a65  56                   push esi
// 00663a66  8bf0                 mov esi, eax
// 00663a68  e8b3fbffff           call 0x663620
// 00663a6d  8bd8                 mov ebx, eax
// 00663a6f  8d4301               lea eax, [ebx + 1]
// 00663a72  3dffffff3f           cmp eax, 0x3fffffff
// 00663a77  7719                 ja 0x663a92
// 00663a79  8b16                 mov edx, dword ptr [esi]
// 00663a7b  8d0c9d00000000       lea ecx, [ebx*4]
// 00663a82  51                   push ecx
// 00663a83  6a00                 push 0
// 00663a85  6a00                 push 0
// 00663a87  52                   push edx
// 00663a88  e863ccffff           call 0x6606f0
// 00663a8d  83c410               add esp, 0x10
// 00663a90  eb0b                 jmp 0x663a9d
// 00663a92  8b06                 mov eax, dword ptr [esi]
// 00663a94  50                   push eax
// 00663a95  e836ccffff           call 0x6606d0
// 00663a9a  83c404               add esp, 4
// 00663a9d  8d0c9d00000000       lea ecx, [ebx*4]
// 00663aa4  51                   push ecx
// 00663aa5  894714               mov dword ptr [edi + 0x14], eax
// 00663aa8  895f30               mov dword ptr [edi + 0x30], ebx
// 00663aab  8b5604               mov edx, dword ptr [esi + 4]
// 00663aae  50                   push eax
// 00663aaf  52                   push edx
// 00663ab0  e84bbeffff           call 0x65f900
// 00663ab5  83c40c               add esp, 0xc
// 00663ab8  85c0                 test eax, eax
// 00663aba  7423                 je 0x663adf
// 00663abc  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663abf  8b0e                 mov ecx, dword ptr [esi]
// 00663ac1  6830c78400           push 0x84c730
// 00663ac6  50                   push eax
// 00663ac7  6814c78400           push 0x84c714
// 00663acc  51                   push ecx
// 00663acd  e8eeeffbff           call 0x622ac0
// 00663ad2  8b16                 mov edx, dword ptr [esi]
// 00663ad4  6a03                 push 3
// 00663ad6  52                   push edx
// 00663ad7  e874e5fbff           call 0x622050
// 00663adc  83c418               add esp, 0x18
// 00663adf  e83cfbffff           call 0x663620
// 00663ae4  8bd8                 mov ebx, eax
// 00663ae6  8d4301               lea eax, [ebx + 1]
// 00663ae9  3d55555515           cmp eax, 0x15555555
// 00663aee  7719                 ja 0x663b09
// 00663af0  8b16                 mov edx, dword ptr [esi]
// 00663af2  8d0c5b               lea ecx, [ebx + ebx*2]
// 00663af5  03c9                 add ecx, ecx
// 00663af7  03c9                 add ecx, ecx
// 00663af9  51                   push ecx
// 00663afa  6a00                 push 0
// 00663afc  6a00                 push 0
// 00663afe  52                   push edx
// 00663aff  e8eccbffff           call 0x6606f0
// 00663b04  83c410               add esp, 0x10
// 00663b07  eb0b                 jmp 0x663b14
// 00663b09  8b06                 mov eax, dword ptr [esi]
// 00663b0b  50                   push eax
// 00663b0c  e8bfcbffff           call 0x6606d0
// 00663b11  83c404               add esp, 4
// 00663b14  894718               mov dword ptr [edi + 0x18], eax
// 00663b17  895f38               mov dword ptr [edi + 0x38], ebx
// 00663b1a  85db                 test ebx, ebx
// 00663b1c  0f8e23010000         jle 0x663c45
// 00663b22  33c0                 xor eax, eax
// 00663b24  8bcb                 mov ecx, ebx
// 00663b26  eb08                 jmp 0x663b30
// 00663b28  8da42400000000       lea esp, [esp]
// 00663b2f  90                   nop 
// 00663b30  8b5718               mov edx, dword ptr [edi + 0x18]
// 00663b33  c7041000000000       mov dword ptr [eax + edx], 0
// 00663b3a  83c00c               add eax, 0xc
// 00663b3d  83e901               sub ecx, 1
// 00663b40  75ee                 jne 0x663b30
// 00663b42  85db                 test ebx, ebx
// 00663b44  0f8efb000000         jle 0x663c45
// 00663b4a  33ed                 xor ebp, ebp
// 00663b4c  8d642400             lea esp, [esp]
// 00663b50  e83bfbffff           call 0x663690
// 00663b55  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00663b58  6a04                 push 4
// 00663b5a  8d542410             lea edx, [esp + 0x10]
// 00663b5e  890429               mov dword ptr [ecx + ebp], eax
// 00663b61  8b4604               mov eax, dword ptr [esi + 4]
// 00663b64  52                   push edx
// 00663b65  50                   push eax
// 00663b66  e895bdffff           call 0x65f900
// 00663b6b  83c40c               add esp, 0xc
// 00663b6e  85c0                 test eax, eax
// 00663b70  7423                 je 0x663b95
// 00663b72  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00663b75  8b16                 mov edx, dword ptr [esi]
// 00663b77  6830c78400           push 0x84c730
// 00663b7c  51                   push ecx
// 00663b7d  6814c78400           push 0x84c714
// 00663b82  52                   push edx
// 00663b83  e838effbff           call 0x622ac0
// 00663b88  8b06                 mov eax, dword ptr [esi]
// 00663b8a  6a03                 push 3
// 00663b8c  50                   push eax
// 00663b8d  e8bee4fbff           call 0x622050
// 00663b92  83c418               add esp, 0x18
// 00663b95  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00663b9a  7d23                 jge 0x663bbf
// 00663b9c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00663b9f  8b16                 mov edx, dword ptr [esi]
// 00663ba1  6840c78400           push 0x84c740
// 00663ba6  51                   push ecx
// 00663ba7  6814c78400           push 0x84c714
// 00663bac  52                   push edx
// 00663bad  e80eeffbff           call 0x622ac0
// 00663bb2  8b06                 mov eax, dword ptr [esi]
// 00663bb4  6a03                 push 3
// 00663bb6  50                   push eax
// 00663bb7  e894e4fbff           call 0x622050
// 00663bbc  83c418               add esp, 0x18
// 00663bbf  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00663bc2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00663bc6  6a04                 push 4
// 00663bc8  8d442414             lea eax, [esp + 0x14]
// 00663bcc  89542904             mov dword ptr [ecx + ebp + 4], edx
// 00663bd0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00663bd3  50                   push eax
// 00663bd4  51                   push ecx
// 00663bd5  e826bdffff           call 0x65f900
// 00663bda  83c40c               add esp, 0xc
// 00663bdd  85c0                 test eax, eax
// 00663bdf  7423                 je 0x663c04
// 00663be1  8b560c               mov edx, dword ptr [esi + 0xc]
// 00663be4  8b06                 mov eax, dword ptr [esi]
// 00663be6  6830c78400           push 0x84c730
// 00663beb  52                   push edx
// 00663bec  6814c78400           push 0x84c714
// 00663bf1  50                   push eax
// 00663bf2  e8c9eefbff           call 0x622ac0
// 00663bf7  8b0e                 mov ecx, dword ptr [esi]
// 00663bf9  6a03                 push 3
// 00663bfb  51                   push ecx
// 00663bfc  e84fe4fbff           call 0x622050
// 00663c01  83c418               add esp, 0x18
// 00663c04  837c241000           cmp dword ptr [esp + 0x10], 0
// 00663c09  7d23                 jge 0x663c2e
// 00663c0b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00663c0e  8b06                 mov eax, dword ptr [esi]
// 00663c10  6840c78400           push 0x84c740
// 00663c15  52                   push edx
// 00663c16  6814c78400           push 0x84c714
// 00663c1b  50                   push eax
// 00663c1c  e89feefbff           call 0x622ac0
// 00663c21  8b0e                 mov ecx, dword ptr [esi]
// 00663c23  6a03                 push 3
// 00663c25  51                   push ecx
// 00663c26  e825e4fbff           call 0x622050
// 00663c2b  83c418               add esp, 0x18
// 00663c2e  8b5718               mov edx, dword ptr [edi + 0x18]
// 00663c31  8b442410             mov eax, dword ptr [esp + 0x10]
// 00663c35  89442a08             mov dword ptr [edx + ebp + 8], eax
// 00663c39  83c50c               add ebp, 0xc
// 00663c3c  83eb01               sub ebx, 1
// 00663c3f  0f850bffffff         jne 0x663b50
// 00663c45  8b5604               mov edx, dword ptr [esi + 4]
// 00663c48  6a04                 push 4
// 00663c4a  8d4c2414             lea ecx, [esp + 0x14]
// 00663c4e  51                   push ecx
// 00663c4f  52                   push edx
// 00663c50  e8abbcffff           call 0x65f900
// 00663c55  83c40c               add esp, 0xc
// 00663c58  85c0                 test eax, eax
// 00663c5a  7423                 je 0x663c7f
// 00663c5c  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663c5f  8b0e                 mov ecx, dword ptr [esi]
// 00663c61  6830c78400           push 0x84c730
// 00663c66  50                   push eax
// 00663c67  6814c78400           push 0x84c714
// 00663c6c  51                   push ecx
// 00663c6d  e84eeefbff           call 0x622ac0
// 00663c72  8b16                 mov edx, dword ptr [esi]
// 00663c74  6a03                 push 3
// 00663c76  52                   push edx
// 00663c77  e8d4e3fbff           call 0x622050
// 00663c7c  83c418               add esp, 0x18
// 00663c7f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00663c83  85db                 test ebx, ebx
// 00663c85  7d27                 jge 0x663cae
// 00663c87  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663c8a  8b0e                 mov ecx, dword ptr [esi]
// 00663c8c  6840c78400           push 0x84c740
// 00663c91  50                   push eax
// 00663c92  6814c78400           push 0x84c714
// 00663c97  51                   push ecx
// 00663c98  e823eefbff           call 0x622ac0
// 00663c9d  8b16                 mov edx, dword ptr [esi]
// 00663c9f  6a03                 push 3
// 00663ca1  52                   push edx
// 00663ca2  e8a9e3fbff           call 0x622050
// 00663ca7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00663cab  83c418               add esp, 0x18
// 00663cae  8d4301               lea eax, [ebx + 1]
// 00663cb1  3dffffff3f           cmp eax, 0x3fffffff
// 00663cb6  7719                 ja 0x663cd1
// 00663cb8  8b16                 mov edx, dword ptr [esi]
// 00663cba  8d0c9d00000000       lea ecx, [ebx*4]
// 00663cc1  51                   push ecx
// 00663cc2  6a00                 push 0
// 00663cc4  6a00                 push 0
// 00663cc6  52                   push edx
// 00663cc7  e824caffff           call 0x6606f0
// 00663ccc  83c410               add esp, 0x10
// 00663ccf  eb0b                 jmp 0x663cdc
// 00663cd1  8b06                 mov eax, dword ptr [esi]
// 00663cd3  50                   push eax
// 00663cd4  e8f7c9ffff           call 0x6606d0
// 00663cd9  83c404               add esp, 4
// 00663cdc  89471c               mov dword ptr [edi + 0x1c], eax
// 00663cdf  33c0                 xor eax, eax
// 00663ce1  895f24               mov dword ptr [edi + 0x24], ebx
// 00663ce4  85db                 test ebx, ebx
// 00663ce6  7e17                 jle 0x663cff
// 00663ce8  eb06                 jmp 0x663cf0
// 00663cea  8d9b00000000         lea ebx, [ebx]
// 00663cf0  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00663cf3  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 00663cfa  40                   inc eax
// 00663cfb  3bc3                 cmp eax, ebx
// 00663cfd  7cf1                 jl 0x663cf0
// 00663cff  33ed                 xor ebp, ebp
// 00663d01  85db                 test ebx, ebx
// 00663d03  7e10                 jle 0x663d15
// 00663d05  e886f9ffff           call 0x663690
// 00663d0a  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00663d0d  8904aa               mov dword ptr [edx + ebp*4], eax
// 00663d10  45                   inc ebp
// 00663d11  3beb                 cmp ebp, ebx
// 00663d13  7cf0                 jl 0x663d05
// 00663d15  5e                   pop esi
// 00663d16  5d                   pop ebp
// 00663d17  5b                   pop ebx
// 00663d18  83c408               add esp, 8
// 00663d1b  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
