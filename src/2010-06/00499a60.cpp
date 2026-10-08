// from server: 100% by auto
// roc 2010-06 00499a60  unit: G3D::Shader  size: 685 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00499a60
//
// 00499a60  6aff                 push -1
// 00499a62  68346f9800           push 0x986f34
// 00499a67  64a100000000         mov eax, dword ptr fs:[0]
// 00499a6d  50                   push eax
// 00499a6e  64892500000000       mov dword ptr fs:[0], esp
// 00499a75  83ec58               sub esp, 0x58
// 00499a78  53                   push ebx
// 00499a79  55                   push ebp
// 00499a7a  56                   push esi
// 00499a7b  57                   push edi
// 00499a7c  8bf9                 mov edi, ecx
// 00499a7e  33ed                 xor ebp, ebp
// 00499a80  6a01                 push 1
// 00499a82  8db790010000         lea esi, [edi + 0x190]
// 00499a88  55                   push ebp
// 00499a89  8bce                 mov ecx, esi
// 00499a8b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00499a8f  e8bcf0ffff           call 0x498b50
// 00499a94  68408b0000           push 0x8b40
// 00499a99  ff15b83ac000         call dword ptr [0xc03ab8]
// 00499a9f  8944242c             mov dword ptr [esp + 0x2c], eax
// 00499aa3  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00499aa9  50                   push eax
// 00499aaa  ff15d83ac000         call dword ptr [0xc03ad8]
// 00499ab0  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00499ab6  8d4c241c             lea ecx, [esp + 0x1c]
// 00499aba  51                   push ecx
// 00499abb  68878b0000           push 0x8b87
// 00499ac0  50                   push eax
// 00499ac1  ff15183bc000         call dword ptr [0xc03b18]
// 00499ac7  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00499acd  8d542424             lea edx, [esp + 0x24]
// 00499ad1  52                   push edx
// 00499ad2  68868b0000           push 0x8b86
// 00499ad7  50                   push eax
// 00499ad8  ff15183bc000         call dword ptr [0xc03b18]
// 00499ade  6a01                 push 1
// 00499ae0  55                   push ebp
// 00499ae1  8bce                 mov ecx, esi
// 00499ae3  e868f0ffff           call 0x498b50
// 00499ae8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00499aec  50                   push eax
// 00499aed  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 00499af3  83c404               add esp, 4
// 00499af6  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00499afa  8bd8                 mov ebx, eax
// 00499afc  896c2418             mov dword ptr [esp + 0x18], ebp
// 00499b00  0f8edf010000         jle 0x499ce5
// 00499b06  eb08                 jmp 0x499b10
// 00499b08  8da42400000000       lea esp, [esp]
// 00499b0f  90                   nop 
// 00499b10  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00499b16  53                   push ebx
// 00499b17  8d4c2424             lea ecx, [esp + 0x24]
// 00499b1b  51                   push ecx
// 00499b1c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00499b20  8d542430             lea edx, [esp + 0x30]
// 00499b24  52                   push edx
// 00499b25  8b542424             mov edx, dword ptr [esp + 0x24]
// 00499b29  6a00                 push 0
// 00499b2b  51                   push ecx
// 00499b2c  52                   push edx
// 00499b2d  50                   push eax
// 00499b2e  ff151c3bc000         call dword ptr [0xc03b1c]
// 00499b34  8b4604               mov eax, dword ptr [esi + 4]
// 00499b37  6a00                 push 0
// 00499b39  40                   inc eax
// 00499b3a  50                   push eax
// 00499b3b  8bce                 mov ecx, esi
// 00499b3d  e80ef0ffff           call 0x498b50
// 00499b42  8b4604               mov eax, dword ptr [esi + 4]
// 00499b45  8b16                 mov edx, dword ptr [esi]
// 00499b47  8d0c40               lea ecx, [eax + eax*2]
// 00499b4a  c1e104               shl ecx, 4
// 00499b4d  53                   push ebx
// 00499b4e  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 00499b52  ff151ca49e00         call dword ptr [0x9ea41c]
// 00499b58  8b4604               mov eax, dword ptr [esi + 4]
// 00499b5b  8b8f14010000         mov ecx, dword ptr [edi + 0x114]
// 00499b61  8b16                 mov edx, dword ptr [esi]
// 00499b63  8d0440               lea eax, [eax + eax*2]
// 00499b66  53                   push ebx
// 00499b67  c1e004               shl eax, 4
// 00499b6a  51                   push ecx
// 00499b6b  8d6c10d0             lea ebp, [eax + edx - 0x30]
// 00499b6f  ff15103bc000         call dword ptr [0xc03b10]
// 00499b75  894504               mov dword ptr [ebp + 4], eax
// 00499b78  8b4604               mov eax, dword ptr [esi + 4]
// 00499b7b  8b0e                 mov ecx, dword ptr [esi]
// 00499b7d  8d0440               lea eax, [eax + eax*2]
// 00499b80  c1e004               shl eax, 4
// 00499b83  83cdff               or ebp, 0xffffffff
// 00499b86  396c08d4             cmp dword ptr [eax + ecx - 0x2c], ebp
// 00499b8a  7460                 je 0x499bec
// 00499b8c  8bc3                 mov eax, ebx
// 00499b8e  8d5001               lea edx, [eax + 1]
// 00499b91  8a08                 mov cl, byte ptr [eax]
// 00499b93  40                   inc eax
// 00499b94  84c9                 test cl, cl
// 00499b96  75f9                 jne 0x499b91
// 00499b98  2bc2                 sub eax, edx
// 00499b9a  83f803               cmp eax, 3
// 00499b9d  7646                 jbe 0x499be5
// 00499b9f  68d874a100           push 0xa174d8
// 00499ba4  8d4c2434             lea ecx, [esp + 0x34]
// 00499ba8  ff1510a49e00         call dword ptr [0x9ea410]
// 00499bae  834c241401           or dword ptr [esp + 0x14], 1
// 00499bb3  53                   push ebx
// 00499bb4  8d4c2450             lea ecx, [esp + 0x50]
// 00499bb8  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00499bc0  ff1510a49e00         call dword ptr [0x9ea410]
// 00499bc6  834c241402           or dword ptr [esp + 0x14], 2
// 00499bcb  8d542430             lea edx, [esp + 0x30]
// 00499bcf  52                   push edx
// 00499bd0  50                   push eax
// 00499bd1  c744247801000000     mov dword ptr [esp + 0x78], 1
// 00499bd9  e802d90b00           call 0x5574e0
// 00499bde  83c408               add esp, 8
// 00499be1  84c0                 test al, al
// 00499be3  7507                 jne 0x499bec
// 00499be5  c644241300           mov byte ptr [esp + 0x13], 0
// 00499bea  eb05                 jmp 0x499bf1
// 00499bec  c644241301           mov byte ptr [esp + 0x13], 1
// 00499bf1  f644241402           test byte ptr [esp + 0x14], 2
// 00499bf6  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00499bfe  740f                 je 0x499c0f
// 00499c00  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 00499c05  8d4c244c             lea ecx, [esp + 0x4c]
// 00499c09  ff1500a49e00         call dword ptr [0x9ea400]
// 00499c0f  f644241401           test byte ptr [esp + 0x14], 1
// 00499c14  896c2470             mov dword ptr [esp + 0x70], ebp
// 00499c18  740f                 je 0x499c29
// 00499c1a  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 00499c1f  8d4c2430             lea ecx, [esp + 0x30]
// 00499c23  ff1500a49e00         call dword ptr [0x9ea400]
// 00499c29  8b4604               mov eax, dword ptr [esi + 4]
// 00499c2c  8b16                 mov edx, dword ptr [esi]
// 00499c2e  8d0c40               lea ecx, [eax + eax*2]
// 00499c31  8a442413             mov al, byte ptr [esp + 0x13]
// 00499c35  c1e104               shl ecx, 4
// 00499c38  884411d0             mov byte ptr [ecx + edx - 0x30], al
// 00499c3c  84c0                 test al, al
// 00499c3e  0f858e000000         jne 0x499cd2
// 00499c44  8b4604               mov eax, dword ptr [esi + 4]
// 00499c47  8b0e                 mov ecx, dword ptr [esi]
// 00499c49  8b542428             mov edx, dword ptr [esp + 0x28]
// 00499c4d  8d0440               lea eax, [eax + eax*2]
// 00499c50  c1e004               shl eax, 4
// 00499c53  895408f8             mov dword ptr [eax + ecx - 8], edx
// 00499c57  8b4604               mov eax, dword ptr [esi + 4]
// 00499c5a  8b0e                 mov ecx, dword ptr [esi]
// 00499c5c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00499c60  8d0440               lea eax, [eax + eax*2]
// 00499c63  c1e004               shl eax, 4
// 00499c66  895408f4             mov dword ptr [eax + ecx - 0xc], edx
// 00499c6a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00499c6e  3d5d8b0000           cmp eax, 0x8b5d
// 00499c73  7431                 je 0x499ca6
// 00499c75  3d5e8b0000           cmp eax, 0x8b5e
// 00499c7a  742a                 je 0x499ca6
// 00499c7c  3d638b0000           cmp eax, 0x8b63
// 00499c81  7423                 je 0x499ca6
// 00499c83  3d5f8b0000           cmp eax, 0x8b5f
// 00499c88  741c                 je 0x499ca6
// 00499c8a  3d608b0000           cmp eax, 0x8b60
// 00499c8f  7415                 je 0x499ca6
// 00499c91  3d618b0000           cmp eax, 0x8b61
// 00499c96  740e                 je 0x499ca6
// 00499c98  3d628b0000           cmp eax, 0x8b62
// 00499c9d  7407                 je 0x499ca6
// 00499c9f  3d648b0000           cmp eax, 0x8b64
// 00499ca4  751d                 jne 0x499cc3
// 00499ca6  ff878c010000         inc dword ptr [edi + 0x18c]
// 00499cac  8b4604               mov eax, dword ptr [esi + 4]
// 00499caf  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 00499cb5  8b16                 mov edx, dword ptr [esi]
// 00499cb7  8d0440               lea eax, [eax + eax*2]
// 00499cba  c1e004               shl eax, 4
// 00499cbd  894c10fc             mov dword ptr [eax + edx - 4], ecx
// 00499cc1  eb0f                 jmp 0x499cd2
// 00499cc3  8b4604               mov eax, dword ptr [esi + 4]
// 00499cc6  8b0e                 mov ecx, dword ptr [esi]
// 00499cc8  8d0440               lea eax, [eax + eax*2]
// 00499ccb  c1e004               shl eax, 4
// 00499cce  896c08fc             mov dword ptr [eax + ecx - 4], ebp
// 00499cd2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00499cd6  40                   inc eax
// 00499cd7  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00499cdb  89442418             mov dword ptr [esp + 0x18], eax
// 00499cdf  0f8c2bfeffff         jl 0x499b10
// 00499ce5  53                   push ebx
// 00499ce6  ff1508aa9e00         call dword ptr [0x9eaa08]
// 00499cec  8b542430             mov edx, dword ptr [esp + 0x30]
// 00499cf0  83c404               add esp, 4
// 00499cf3  52                   push edx
// 00499cf4  ff15d83ac000         call dword ptr [0xc03ad8]
// 00499cfa  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00499cfe  5f                   pop edi
// 00499cff  5e                   pop esi
// 00499d00  5d                   pop ebp
// 00499d01  5b                   pop ebx
// 00499d02  64890d00000000       mov dword ptr fs:[0], ecx
// 00499d09  83c464               add esp, 0x64
// 00499d0c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?computeUniformArray@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
