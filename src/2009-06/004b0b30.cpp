// from server: 100% by auto
// roc 2009-06 004b0b30  unit: G3D::Shader  size: 685 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b0b30
//
// 004b0b30  6aff                 push -1
// 004b0b32  68d4818500           push 0x8581d4
// 004b0b37  64a100000000         mov eax, dword ptr fs:[0]
// 004b0b3d  50                   push eax
// 004b0b3e  64892500000000       mov dword ptr fs:[0], esp
// 004b0b45  83ec58               sub esp, 0x58
// 004b0b48  53                   push ebx
// 004b0b49  55                   push ebp
// 004b0b4a  56                   push esi
// 004b0b4b  57                   push edi
// 004b0b4c  8bf9                 mov edi, ecx
// 004b0b4e  33ed                 xor ebp, ebp
// 004b0b50  6a01                 push 1
// 004b0b52  8db790010000         lea esi, [edi + 0x190]
// 004b0b58  55                   push ebp
// 004b0b59  8bce                 mov ecx, esi
// 004b0b5b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004b0b5f  e83cf0ffff           call 0x4afba0
// 004b0b64  68408b0000           push 0x8b40
// 004b0b69  ff1578d2a300         call dword ptr [0xa3d278]
// 004b0b6f  8944242c             mov dword ptr [esp + 0x2c], eax
// 004b0b73  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004b0b79  50                   push eax
// 004b0b7a  ff1598d2a300         call dword ptr [0xa3d298]
// 004b0b80  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004b0b86  8d4c241c             lea ecx, [esp + 0x1c]
// 004b0b8a  51                   push ecx
// 004b0b8b  68878b0000           push 0x8b87
// 004b0b90  50                   push eax
// 004b0b91  ff15d8d2a300         call dword ptr [0xa3d2d8]
// 004b0b97  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004b0b9d  8d542424             lea edx, [esp + 0x24]
// 004b0ba1  52                   push edx
// 004b0ba2  68868b0000           push 0x8b86
// 004b0ba7  50                   push eax
// 004b0ba8  ff15d8d2a300         call dword ptr [0xa3d2d8]
// 004b0bae  6a01                 push 1
// 004b0bb0  55                   push ebp
// 004b0bb1  8bce                 mov ecx, esi
// 004b0bb3  e8e8efffff           call 0x4afba0
// 004b0bb8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b0bbc  50                   push eax
// 004b0bbd  ff1594e98900         call dword ptr [0x89e994]
// 004b0bc3  83c404               add esp, 4
// 004b0bc6  396c2424             cmp dword ptr [esp + 0x24], ebp
// 004b0bca  8bd8                 mov ebx, eax
// 004b0bcc  896c2418             mov dword ptr [esp + 0x18], ebp
// 004b0bd0  0f8edf010000         jle 0x4b0db5
// 004b0bd6  eb08                 jmp 0x4b0be0
// 004b0bd8  8da42400000000       lea esp, [esp]
// 004b0bdf  90                   nop 
// 004b0be0  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004b0be6  53                   push ebx
// 004b0be7  8d4c2424             lea ecx, [esp + 0x24]
// 004b0beb  51                   push ecx
// 004b0bec  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004b0bf0  8d542430             lea edx, [esp + 0x30]
// 004b0bf4  52                   push edx
// 004b0bf5  8b542424             mov edx, dword ptr [esp + 0x24]
// 004b0bf9  6a00                 push 0
// 004b0bfb  51                   push ecx
// 004b0bfc  52                   push edx
// 004b0bfd  50                   push eax
// 004b0bfe  ff15dcd2a300         call dword ptr [0xa3d2dc]
// 004b0c04  8b4604               mov eax, dword ptr [esi + 4]
// 004b0c07  6a00                 push 0
// 004b0c09  40                   inc eax
// 004b0c0a  50                   push eax
// 004b0c0b  8bce                 mov ecx, esi
// 004b0c0d  e88eefffff           call 0x4afba0
// 004b0c12  8b4604               mov eax, dword ptr [esi + 4]
// 004b0c15  8b16                 mov edx, dword ptr [esi]
// 004b0c17  8d0c40               lea ecx, [eax + eax*2]
// 004b0c1a  c1e104               shl ecx, 4
// 004b0c1d  53                   push ebx
// 004b0c1e  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 004b0c22  ff15a8e48900         call dword ptr [0x89e4a8]
// 004b0c28  8b4604               mov eax, dword ptr [esi + 4]
// 004b0c2b  8b8f14010000         mov ecx, dword ptr [edi + 0x114]
// 004b0c31  8b16                 mov edx, dword ptr [esi]
// 004b0c33  8d0440               lea eax, [eax + eax*2]
// 004b0c36  53                   push ebx
// 004b0c37  c1e004               shl eax, 4
// 004b0c3a  51                   push ecx
// 004b0c3b  8d6c10d0             lea ebp, [eax + edx - 0x30]
// 004b0c3f  ff15d0d2a300         call dword ptr [0xa3d2d0]
// 004b0c45  894504               mov dword ptr [ebp + 4], eax
// 004b0c48  8b4604               mov eax, dword ptr [esi + 4]
// 004b0c4b  8b0e                 mov ecx, dword ptr [esi]
// 004b0c4d  8d0440               lea eax, [eax + eax*2]
// 004b0c50  c1e004               shl eax, 4
// 004b0c53  83cdff               or ebp, 0xffffffff
// 004b0c56  396c08d4             cmp dword ptr [eax + ecx - 0x2c], ebp
// 004b0c5a  7460                 je 0x4b0cbc
// 004b0c5c  8bc3                 mov eax, ebx
// 004b0c5e  8d5001               lea edx, [eax + 1]
// 004b0c61  8a08                 mov cl, byte ptr [eax]
// 004b0c63  40                   inc eax
// 004b0c64  84c9                 test cl, cl
// 004b0c66  75f9                 jne 0x4b0c61
// 004b0c68  2bc2                 sub eax, edx
// 004b0c6a  83f803               cmp eax, 3
// 004b0c6d  7646                 jbe 0x4b0cb5
// 004b0c6f  68303f8c00           push 0x8c3f30
// 004b0c74  8d4c2434             lea ecx, [esp + 0x34]
// 004b0c78  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b0c7e  834c241401           or dword ptr [esp + 0x14], 1
// 004b0c83  53                   push ebx
// 004b0c84  8d4c2450             lea ecx, [esp + 0x50]
// 004b0c88  c744247400000000     mov dword ptr [esp + 0x74], 0
// 004b0c90  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b0c96  834c241402           or dword ptr [esp + 0x14], 2
// 004b0c9b  8d542430             lea edx, [esp + 0x30]
// 004b0c9f  52                   push edx
// 004b0ca0  50                   push eax
// 004b0ca1  c744247801000000     mov dword ptr [esp + 0x78], 1
// 004b0ca9  e832380c00           call 0x5744e0
// 004b0cae  83c408               add esp, 8
// 004b0cb1  84c0                 test al, al
// 004b0cb3  7507                 jne 0x4b0cbc
// 004b0cb5  c644241300           mov byte ptr [esp + 0x13], 0
// 004b0cba  eb05                 jmp 0x4b0cc1
// 004b0cbc  c644241301           mov byte ptr [esp + 0x13], 1
// 004b0cc1  f644241402           test byte ptr [esp + 0x14], 2
// 004b0cc6  c744247000000000     mov dword ptr [esp + 0x70], 0
// 004b0cce  740f                 je 0x4b0cdf
// 004b0cd0  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 004b0cd5  8d4c244c             lea ecx, [esp + 0x4c]
// 004b0cd9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b0cdf  f644241401           test byte ptr [esp + 0x14], 1
// 004b0ce4  896c2470             mov dword ptr [esp + 0x70], ebp
// 004b0ce8  740f                 je 0x4b0cf9
// 004b0cea  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 004b0cef  8d4c2430             lea ecx, [esp + 0x30]
// 004b0cf3  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b0cf9  8b4604               mov eax, dword ptr [esi + 4]
// 004b0cfc  8b16                 mov edx, dword ptr [esi]
// 004b0cfe  8d0c40               lea ecx, [eax + eax*2]
// 004b0d01  8a442413             mov al, byte ptr [esp + 0x13]
// 004b0d05  c1e104               shl ecx, 4
// 004b0d08  884411d0             mov byte ptr [ecx + edx - 0x30], al
// 004b0d0c  84c0                 test al, al
// 004b0d0e  0f858e000000         jne 0x4b0da2
// 004b0d14  8b4604               mov eax, dword ptr [esi + 4]
// 004b0d17  8b0e                 mov ecx, dword ptr [esi]
// 004b0d19  8b542428             mov edx, dword ptr [esp + 0x28]
// 004b0d1d  8d0440               lea eax, [eax + eax*2]
// 004b0d20  c1e004               shl eax, 4
// 004b0d23  895408f8             mov dword ptr [eax + ecx - 8], edx
// 004b0d27  8b4604               mov eax, dword ptr [esi + 4]
// 004b0d2a  8b0e                 mov ecx, dword ptr [esi]
// 004b0d2c  8b542420             mov edx, dword ptr [esp + 0x20]
// 004b0d30  8d0440               lea eax, [eax + eax*2]
// 004b0d33  c1e004               shl eax, 4
// 004b0d36  895408f4             mov dword ptr [eax + ecx - 0xc], edx
// 004b0d3a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b0d3e  3d5d8b0000           cmp eax, 0x8b5d
// 004b0d43  7431                 je 0x4b0d76
// 004b0d45  3d5e8b0000           cmp eax, 0x8b5e
// 004b0d4a  742a                 je 0x4b0d76
// 004b0d4c  3d638b0000           cmp eax, 0x8b63
// 004b0d51  7423                 je 0x4b0d76
// 004b0d53  3d5f8b0000           cmp eax, 0x8b5f
// 004b0d58  741c                 je 0x4b0d76
// 004b0d5a  3d608b0000           cmp eax, 0x8b60
// 004b0d5f  7415                 je 0x4b0d76
// 004b0d61  3d618b0000           cmp eax, 0x8b61
// 004b0d66  740e                 je 0x4b0d76
// 004b0d68  3d628b0000           cmp eax, 0x8b62
// 004b0d6d  7407                 je 0x4b0d76
// 004b0d6f  3d648b0000           cmp eax, 0x8b64
// 004b0d74  751d                 jne 0x4b0d93
// 004b0d76  ff878c010000         inc dword ptr [edi + 0x18c]
// 004b0d7c  8b4604               mov eax, dword ptr [esi + 4]
// 004b0d7f  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 004b0d85  8b16                 mov edx, dword ptr [esi]
// 004b0d87  8d0440               lea eax, [eax + eax*2]
// 004b0d8a  c1e004               shl eax, 4
// 004b0d8d  894c10fc             mov dword ptr [eax + edx - 4], ecx
// 004b0d91  eb0f                 jmp 0x4b0da2
// 004b0d93  8b4604               mov eax, dword ptr [esi + 4]
// 004b0d96  8b0e                 mov ecx, dword ptr [esi]
// 004b0d98  8d0440               lea eax, [eax + eax*2]
// 004b0d9b  c1e004               shl eax, 4
// 004b0d9e  896c08fc             mov dword ptr [eax + ecx - 4], ebp
// 004b0da2  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b0da6  40                   inc eax
// 004b0da7  3b442424             cmp eax, dword ptr [esp + 0x24]
// 004b0dab  89442418             mov dword ptr [esp + 0x18], eax
// 004b0daf  0f8c2bfeffff         jl 0x4b0be0
// 004b0db5  53                   push ebx
// 004b0db6  ff15cce98900         call dword ptr [0x89e9cc]
// 004b0dbc  8b542430             mov edx, dword ptr [esp + 0x30]
// 004b0dc0  83c404               add esp, 4
// 004b0dc3  52                   push edx
// 004b0dc4  ff1598d2a300         call dword ptr [0xa3d298]
// 004b0dca  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004b0dce  5f                   pop edi
// 004b0dcf  5e                   pop esi
// 004b0dd0  5d                   pop ebp
// 004b0dd1  5b                   pop ebx
// 004b0dd2  64890d00000000       mov dword ptr fs:[0], ecx
// 004b0dd9  83c464               add esp, 0x64
// 004b0ddc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?computeUniformArray@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
