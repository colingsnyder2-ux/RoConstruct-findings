// roc 2009-12 00800930  unit: CXTPPaintManager  size: 1809 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00800930
//
// 00800930  6aff                 push -1
// 00800932  6800939500           push 0x959300
// 00800937  64a100000000         mov eax, dword ptr fs:[0]
// 0080093d  50                   push eax
// 0080093e  83ec4c               sub esp, 0x4c
// 00800941  53                   push ebx
// 00800942  55                   push ebp
// 00800943  56                   push esi
// 00800944  57                   push edi
// 00800945  a10052b600           mov eax, dword ptr [0xb65200]
// 0080094a  33c4                 xor eax, esp
// 0080094c  50                   push eax
// 0080094d  8d442460             lea eax, [esp + 0x60]
// 00800951  64a300000000         mov dword ptr fs:[0], eax
// 00800957  8bf9                 mov edi, ecx
// 00800959  8b442478             mov eax, dword ptr [esp + 0x78]
// 0080095d  85c0                 test eax, eax
// 0080095f  0f85a8030000         jne 0x800d0d
// 00800965  39842484000000       cmp dword ptr [esp + 0x84], eax
// 0080096c  0f8588000000         jne 0x8009fa
// 00800972  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00800979  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00800980  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00800986  8b01                 mov eax, dword ptr [ecx]
// 00800988  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080098b  83fa02               cmp edx, 2
// 0080098e  743a                 je 0x8009ca
// 00800990  83fa03               cmp edx, 3
// 00800993  7435                 je 0x8009ca
// 00800995  83fa05               cmp edx, 5
// 00800998  7430                 je 0x8009ca
// 0080099a  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 0080099e  8b2b                 mov ebp, dword ptr [ebx]
// 008009a0  8d50f3               lea edx, [eax - 0xd]
// 008009a3  8d78fe               lea edi, [eax - 2]
// 008009a6  83ec10               sub esp, 0x10
// 008009a9  8bc4                 mov eax, esp
// 008009ab  8910                 mov dword ptr [eax], edx
// 008009ad  be02000000           mov esi, 2
// 008009b2  897004               mov dword ptr [eax + 4], esi
// 008009b5  83c1fe               add ecx, -2
// 008009b8  897808               mov dword ptr [eax + 8], edi
// 008009bb  89480c               mov dword ptr [eax + 0xc], ecx
// 008009be  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 008009c1  8bcb                 mov ecx, ebx
// 008009c3  ffd0                 call eax
// 008009c5  e9e3010000           jmp 0x800bad
// 008009ca  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 008009ce  8b2b                 mov ebp, dword ptr [ebx]
// 008009d0  8d78fe               lea edi, [eax - 2]
// 008009d3  83ec10               sub esp, 0x10
// 008009d6  8bc4                 mov eax, esp
// 008009d8  8d71f3               lea esi, [ecx - 0xd]
// 008009db  ba02000000           mov edx, 2
// 008009e0  8910                 mov dword ptr [eax], edx
// 008009e2  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 008009e5  83c1fe               add ecx, -2
// 008009e8  897004               mov dword ptr [eax + 4], esi
// 008009eb  897808               mov dword ptr [eax + 8], edi
// 008009ee  89480c               mov dword ptr [eax + 0xc], ecx
// 008009f1  8bcb                 mov ecx, ebx
// 008009f3  ffd2                 call edx
// 008009f5  e9b3010000           jmp 0x800bad
// 008009fa  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 008009fe  8b07                 mov eax, dword ptr [edi]
// 00800a00  8b742474             mov esi, dword ptr [esp + 0x74]
// 00800a04  8b5078               mov edx, dword ptr [eax + 0x78]
// 00800a07  55                   push ebp
// 00800a08  56                   push esi
// 00800a09  ffd2                 call edx
// 00800a0b  8b07                 mov eax, dword ptr [edi]
// 00800a0d  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00800a10  55                   push ebp
// 00800a11  8bcf                 mov ecx, edi
// 00800a13  ffd2                 call edx
// 00800a15  8bbdc0000000         mov edi, dword ptr [ebp + 0xc0]
// 00800a1b  8b9dc4000000         mov ebx, dword ptr [ebp + 0xc4]
// 00800a21  8bc8                 mov ecx, eax
// 00800a23  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00800a2a  8b10                 mov edx, dword ptr [eax]
// 00800a2c  8b85c8000000         mov eax, dword ptr [ebp + 0xc8]
// 00800a32  8badcc000000         mov ebp, dword ptr [ebp + 0xcc]
// 00800a38  8954247c             mov dword ptr [esp + 0x7c], edx
// 00800a3c  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00800a43  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00800a49  894c2474             mov dword ptr [esp + 0x74], ecx
// 00800a4d  8944242c             mov dword ptr [esp + 0x2c], eax
// 00800a51  83fa02               cmp edx, 2
// 00800a54  0f847a010000         je 0x800bd4
// 00800a5a  83fa03               cmp edx, 3
// 00800a5d  0f8471010000         je 0x800bd4
// 00800a63  83fa05               cmp edx, 5
// 00800a66  0f8468010000         je 0x800bd4
// 00800a6c  2bc7                 sub eax, edi
// 00800a6e  99                   cdq 
// 00800a6f  2bc2                 sub eax, edx
// 00800a71  51                   push ecx
// 00800a72  8d55fb               lea edx, [ebp - 5]
// 00800a75  d1f8                 sar eax, 1
// 00800a77  03c7                 add eax, edi
// 00800a79  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 00800a80  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00800a87  51                   push ecx
// 00800a88  8d55f9               lea edx, [ebp - 7]
// 00800a8b  50                   push eax
// 00800a8c  8d6802               lea ebp, [eax + 2]
// 00800a8f  52                   push edx
// 00800a90  896c2424             mov dword ptr [esp + 0x24], ebp
// 00800a94  8d68fe               lea ebp, [eax - 2]
// 00800a97  8b442424             mov eax, dword ptr [esp + 0x24]
// 00800a9b  50                   push eax
// 00800a9c  52                   push edx
// 00800a9d  55                   push ebp
// 00800a9e  56                   push esi
// 00800a9f  e8ecdbffff           call 0x7fe690
// 00800aa4  83c420               add esp, 0x20
// 00800aa7  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00800aac  0f84fb000000         je 0x800bad
// 00800ab2  85f6                 test esi, esi
// 00800ab4  7504                 jne 0x800aba
// 00800ab6  33c0                 xor eax, eax
// 00800ab8  eb03                 jmp 0x800abd
// 00800aba  8b4604               mov eax, dword ptr [esi + 4]
// 00800abd  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00800ac1  51                   push ecx
// 00800ac2  50                   push eax
// 00800ac3  8d4c242c             lea ecx, [esp + 0x2c]
// 00800ac7  e834ac0400           call 0x84b700
// 00800acc  8d6b04               lea ebp, [ebx + 4]
// 00800acf  55                   push ebp
// 00800ad0  8d4702               lea eax, [edi + 2]
// 00800ad3  50                   push eax
// 00800ad4  8d54241c             lea edx, [esp + 0x1c]
// 00800ad8  52                   push edx
// 00800ad9  8bce                 mov ecx, esi
// 00800adb  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00800ae3  e85a3cffff           call 0x7f4742
// 00800ae8  8d4306               lea eax, [ebx + 6]
// 00800aeb  50                   push eax
// 00800aec  89842480000000       mov dword ptr [esp + 0x80], eax
// 00800af3  8d4704               lea eax, [edi + 4]
// 00800af6  50                   push eax
// 00800af7  8bce                 mov ecx, esi
// 00800af9  e83e3cffff           call 0x7f473c
// 00800afe  83c309               add ebx, 9
// 00800b01  53                   push ebx
// 00800b02  8d4f01               lea ecx, [edi + 1]
// 00800b05  51                   push ecx
// 00800b06  8bce                 mov ecx, esi
// 00800b08  e82f3cffff           call 0x7f473c
// 00800b0d  55                   push ebp
// 00800b0e  8d5703               lea edx, [edi + 3]
// 00800b11  52                   push edx
// 00800b12  8d44241c             lea eax, [esp + 0x1c]
// 00800b16  50                   push eax
// 00800b17  8bce                 mov ecx, esi
// 00800b19  e8243cffff           call 0x7f4742
// 00800b1e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00800b22  51                   push ecx
// 00800b23  8d4705               lea eax, [edi + 5]
// 00800b26  50                   push eax
// 00800b27  8bce                 mov ecx, esi
// 00800b29  e80e3cffff           call 0x7f473c
// 00800b2e  53                   push ebx
// 00800b2f  8d4702               lea eax, [edi + 2]
// 00800b32  50                   push eax
// 00800b33  8bce                 mov ecx, esi
// 00800b35  e8023cffff           call 0x7f473c
// 00800b3a  8d4706               lea eax, [edi + 6]
// 00800b3d  55                   push ebp
// 00800b3e  50                   push eax
// 00800b3f  8d54241c             lea edx, [esp + 0x1c]
// 00800b43  52                   push edx
// 00800b44  8bce                 mov ecx, esi
// 00800b46  89842480000000       mov dword ptr [esp + 0x80], eax
// 00800b4d  e8f03bffff           call 0x7f4742
// 00800b52  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00800b56  50                   push eax
// 00800b57  8d4f08               lea ecx, [edi + 8]
// 00800b5a  51                   push ecx
// 00800b5b  8bce                 mov ecx, esi
// 00800b5d  e8da3bffff           call 0x7f473c
// 00800b62  53                   push ebx
// 00800b63  8d4705               lea eax, [edi + 5]
// 00800b66  50                   push eax
// 00800b67  8bce                 mov ecx, esi
// 00800b69  e8ce3bffff           call 0x7f473c
// 00800b6e  55                   push ebp
// 00800b6f  8d5707               lea edx, [edi + 7]
// 00800b72  52                   push edx
// 00800b73  8d44241c             lea eax, [esp + 0x1c]
// 00800b77  50                   push eax
// 00800b78  8bce                 mov ecx, esi
// 00800b7a  e8c33bffff           call 0x7f4742
// 00800b7f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00800b83  51                   push ecx
// 00800b84  83c709               add edi, 9
// 00800b87  57                   push edi
// 00800b88  8bce                 mov ecx, esi
// 00800b8a  e8ad3bffff           call 0x7f473c
// 00800b8f  8b542474             mov edx, dword ptr [esp + 0x74]
// 00800b93  53                   push ebx
// 00800b94  52                   push edx
// 00800b95  8bce                 mov ecx, esi
// 00800b97  e8a03bffff           call 0x7f473c
// 00800b9c  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00800ba4  8d4c2424             lea ecx, [esp + 0x24]
// 00800ba8  e8e3ab0400           call 0x84b790
// 00800bad  8b442470             mov eax, dword ptr [esp + 0x70]
// 00800bb1  c7400400000000       mov dword ptr [eax + 4], 0
// 00800bb8  c70000000000         mov dword ptr [eax], 0
// 00800bbe  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00800bc2  64890d00000000       mov dword ptr fs:[0], ecx
// 00800bc9  59                   pop ecx
// 00800bca  5f                   pop edi
// 00800bcb  5e                   pop esi
// 00800bcc  5d                   pop ebp
// 00800bcd  5b                   pop ebx
// 00800bce  83c458               add esp, 0x58
// 00800bd1  c21c00               ret 0x1c
// 00800bd4  51                   push ecx
// 00800bd5  8d6b05               lea ebp, [ebx + 5]
// 00800bd8  55                   push ebp
// 00800bd9  83c704               add edi, 4
// 00800bdc  57                   push edi
// 00800bdd  8d4d02               lea ecx, [ebp + 2]
// 00800be0  51                   push ecx
// 00800be1  8d4702               lea eax, [edi + 2]
// 00800be4  50                   push eax
// 00800be5  8d55fe               lea edx, [ebp - 2]
// 00800be8  52                   push edx
// 00800be9  50                   push eax
// 00800bea  56                   push esi
// 00800beb  e8a0daffff           call 0x7fe690
// 00800bf0  83c420               add esp, 0x20
// 00800bf3  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00800bf8  74b3                 je 0x800bad
// 00800bfa  85f6                 test esi, esi
// 00800bfc  7504                 jne 0x800c02
// 00800bfe  33c0                 xor eax, eax
// 00800c00  eb03                 jmp 0x800c05
// 00800c02  8b4604               mov eax, dword ptr [esi + 4]
// 00800c05  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00800c09  51                   push ecx
// 00800c0a  50                   push eax
// 00800c0b  8d4c2440             lea ecx, [esp + 0x40]
// 00800c0f  e8ecaa0400           call 0x84b700
// 00800c14  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00800c18  8d4302               lea eax, [ebx + 2]
// 00800c1b  50                   push eax
// 00800c1c  83c7f8               add edi, -8
// 00800c1f  57                   push edi
// 00800c20  8d54241c             lea edx, [esp + 0x1c]
// 00800c24  52                   push edx
// 00800c25  8bce                 mov ecx, esi
// 00800c27  c744247401000000     mov dword ptr [esp + 0x74], 1
// 00800c2f  e80e3bffff           call 0x7f4742
// 00800c34  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00800c38  8d4b04               lea ecx, [ebx + 4]
// 00800c3b  83c0fa               add eax, -6
// 00800c3e  51                   push ecx
// 00800c3f  50                   push eax
// 00800c40  8bce                 mov ecx, esi
// 00800c42  8944247c             mov dword ptr [esp + 0x7c], eax
// 00800c46  e8f13affff           call 0x7f473c
// 00800c4b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00800c4f  8d5301               lea edx, [ebx + 1]
// 00800c52  83c0fd               add eax, -3
// 00800c55  52                   push edx
// 00800c56  50                   push eax
// 00800c57  8bce                 mov ecx, esi
// 00800c59  89842490000000       mov dword ptr [esp + 0x90], eax
// 00800c60  e8d73affff           call 0x7f473c
// 00800c65  8d4303               lea eax, [ebx + 3]
// 00800c68  50                   push eax
// 00800c69  57                   push edi
// 00800c6a  8d4c241c             lea ecx, [esp + 0x1c]
// 00800c6e  51                   push ecx
// 00800c6f  8bce                 mov ecx, esi
// 00800c71  e8cc3affff           call 0x7f4742
// 00800c76  8b542474             mov edx, dword ptr [esp + 0x74]
// 00800c7a  55                   push ebp
// 00800c7b  52                   push edx
// 00800c7c  8bce                 mov ecx, esi
// 00800c7e  e8b93affff           call 0x7f473c
// 00800c83  8d4302               lea eax, [ebx + 2]
// 00800c86  50                   push eax
// 00800c87  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00800c8e  50                   push eax
// 00800c8f  8bce                 mov ecx, esi
// 00800c91  e8a63affff           call 0x7f473c
// 00800c96  8d4306               lea eax, [ebx + 6]
// 00800c99  50                   push eax
// 00800c9a  57                   push edi
// 00800c9b  8d4c241c             lea ecx, [esp + 0x1c]
// 00800c9f  51                   push ecx
// 00800ca0  8bce                 mov ecx, esi
// 00800ca2  89842488000000       mov dword ptr [esp + 0x88], eax
// 00800ca9  e8943affff           call 0x7f4742
// 00800cae  8b442474             mov eax, dword ptr [esp + 0x74]
// 00800cb2  8d5308               lea edx, [ebx + 8]
// 00800cb5  52                   push edx
// 00800cb6  50                   push eax
// 00800cb7  8bce                 mov ecx, esi
// 00800cb9  e87e3affff           call 0x7f473c
// 00800cbe  55                   push ebp
// 00800cbf  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00800cc6  55                   push ebp
// 00800cc7  8bce                 mov ecx, esi
// 00800cc9  e86e3affff           call 0x7f473c
// 00800cce  8d4b07               lea ecx, [ebx + 7]
// 00800cd1  51                   push ecx
// 00800cd2  57                   push edi
// 00800cd3  8d54241c             lea edx, [esp + 0x1c]
// 00800cd7  52                   push edx
// 00800cd8  8bce                 mov ecx, esi
// 00800cda  e8633affff           call 0x7f4742
// 00800cdf  8b442474             mov eax, dword ptr [esp + 0x74]
// 00800ce3  83c309               add ebx, 9
// 00800ce6  53                   push ebx
// 00800ce7  50                   push eax
// 00800ce8  8bce                 mov ecx, esi
// 00800cea  e84d3affff           call 0x7f473c
// 00800cef  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00800cf3  51                   push ecx
// 00800cf4  55                   push ebp
// 00800cf5  8bce                 mov ecx, esi
// 00800cf7  e8403affff           call 0x7f473c
// 00800cfc  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00800d04  8d4c2438             lea ecx, [esp + 0x38]
// 00800d08  e99bfeffff           jmp 0x800ba8
// 00800d0d  83f803               cmp eax, 3
// 00800d10  0f85b6000000         jne 0x800dcc
// 00800d16  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00800d1a  8b17                 mov edx, dword ptr [edi]
// 00800d1c  8b442474             mov eax, dword ptr [esp + 0x74]
// 00800d20  8b5278               mov edx, dword ptr [edx + 0x78]
// 00800d23  56                   push esi
// 00800d24  50                   push eax
// 00800d25  ffd2                 call edx
// 00800d27  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00800d2d  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00800d33  8b17                 mov edx, dword ptr [edi]
// 00800d35  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00800d3b  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00800d41  8944242c             mov dword ptr [esp + 0x2c], eax
// 00800d45  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00800d48  894c2430             mov dword ptr [esp + 0x30], ecx
// 00800d4c  56                   push esi
// 00800d4d  8bcf                 mov ecx, edi
// 00800d4f  ffd0                 call eax
// 00800d51  8b16                 mov edx, dword ptr [esi]
// 00800d53  8944247c             mov dword ptr [esp + 0x7c], eax
// 00800d57  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00800d5a  8bce                 mov ecx, esi
// 00800d5c  ffd0                 call eax
// 00800d5e  85c0                 test eax, eax
// 00800d60  7525                 jne 0x800d87
// 00800d62  8b16                 mov edx, dword ptr [esi]
// 00800d64  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00800d6a  8bce                 mov ecx, esi
// 00800d6c  ffd0                 call eax
// 00800d6e  85c0                 test eax, eax
// 00800d70  7515                 jne 0x800d87
// 00800d72  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00800d75  83f8ff               cmp eax, -1
// 00800d78  7509                 jne 0x800d83
// 00800d7a  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00800d7d  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00800d81  eb04                 jmp 0x800d87
// 00800d83  8944247c             mov dword ptr [esp + 0x7c], eax
// 00800d87  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00800d8b  2bc3                 sub eax, ebx
// 00800d8d  99                   cdq 
// 00800d8e  2bc2                 sub eax, edx
// 00800d90  8bc8                 mov ecx, eax
// 00800d92  8b442430             mov eax, dword ptr [esp + 0x30]
// 00800d96  2bc5                 sub eax, ebp
// 00800d98  99                   cdq 
// 00800d99  2bc2                 sub eax, edx
// 00800d9b  d1f9                 sar ecx, 1
// 00800d9d  03cb                 add ecx, ebx
// 00800d9f  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00800da3  d1f8                 sar eax, 1
// 00800da5  53                   push ebx
// 00800da6  03c5                 add eax, ebp
// 00800da8  8d5001               lea edx, [eax + 1]
// 00800dab  52                   push edx
// 00800dac  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00800db0  51                   push ecx
// 00800db1  83c0fe               add eax, -2
// 00800db4  50                   push eax
// 00800db5  8d7103               lea esi, [ecx + 3]
// 00800db8  56                   push esi
// 00800db9  50                   push eax
// 00800dba  8d79fd               lea edi, [ecx - 3]
// 00800dbd  57                   push edi
// 00800dbe  52                   push edx
// 00800dbf  e8ccd8ffff           call 0x7fe690
// 00800dc4  83c420               add esp, 0x20
// 00800dc7  e9e1fdffff           jmp 0x800bad
// 00800dcc  83f802               cmp eax, 2
// 00800dcf  0f851f010000         jne 0x800ef4
// 00800dd5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00800ddd  c744241498019b00     mov dword ptr [esp + 0x14], 0x9b0198
// 00800de5  8b742474             mov esi, dword ptr [esp + 0x74]
// 00800de9  89442468             mov dword ptr [esp + 0x68], eax
// 00800ded  8b4608               mov eax, dword ptr [esi + 8]
// 00800df0  6a58                 push 0x58
// 00800df2  50                   push eax
// 00800df3  ff1564b19800         call dword ptr [0x98b164]
// 00800df9  6a00                 push 0
// 00800dfb  68ac2a9f00           push 0x9f2aac
// 00800e00  50                   push eax
// 00800e01  6a60                 push 0x60
// 00800e03  6a50                 push 0x50
// 00800e05  ff15a0b29800         call dword ptr [0x98b2a0]
// 00800e0b  50                   push eax
// 00800e0c  8d4c2420             lea ecx, [esp + 0x20]
// 00800e10  e88d561200           call 0x9264a2
// 00800e15  8b16                 mov edx, dword ptr [esi]
// 00800e17  8b5230               mov edx, dword ptr [edx + 0x30]
// 00800e1a  8d442414             lea eax, [esp + 0x14]
// 00800e1e  50                   push eax
// 00800e1f  8bce                 mov ecx, esi
// 00800e21  ffd2                 call edx
// 00800e23  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00800e27  89442474             mov dword ptr [esp + 0x74], eax
// 00800e2b  8b07                 mov eax, dword ptr [edi]
// 00800e2d  8b5078               mov edx, dword ptr [eax + 0x78]
// 00800e30  53                   push ebx
// 00800e31  56                   push esi
// 00800e32  8bcf                 mov ecx, edi
// 00800e34  ffd2                 call edx
// 00800e36  8b03                 mov eax, dword ptr [ebx]
// 00800e38  8b5078               mov edx, dword ptr [eax + 0x78]
// 00800e3b  8bcb                 mov ecx, ebx
// 00800e3d  ffd2                 call edx
// 00800e3f  85c0                 test eax, eax
// 00800e41  7532                 jne 0x800e75
// 00800e43  8b03                 mov eax, dword ptr [ebx]
// 00800e45  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00800e48  8bcb                 mov ecx, ebx
// 00800e4a  ffd2                 call edx
// 00800e4c  85c0                 test eax, eax
// 00800e4e  7525                 jne 0x800e75
// 00800e50  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00800e53  83f8ff               cmp eax, -1
// 00800e56  750f                 jne 0x800e67
// 00800e58  8b7f58               mov edi, dword ptr [edi + 0x58]
// 00800e5b  8b06                 mov eax, dword ptr [esi]
// 00800e5d  8b5038               mov edx, dword ptr [eax + 0x38]
// 00800e60  57                   push edi
// 00800e61  8bce                 mov ecx, esi
// 00800e63  ffd2                 call edx
// 00800e65  eb22                 jmp 0x800e89
// 00800e67  8bf8                 mov edi, eax
// 00800e69  8b06                 mov eax, dword ptr [esi]
// 00800e6b  8b5038               mov edx, dword ptr [eax + 0x38]
// 00800e6e  57                   push edi
// 00800e6f  8bce                 mov ecx, esi
// 00800e71  ffd2                 call edx
// 00800e73  eb14                 jmp 0x800e89
// 00800e75  8b07                 mov eax, dword ptr [edi]
// 00800e77  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00800e7a  8b2e                 mov ebp, dword ptr [esi]
// 00800e7c  53                   push ebx
// 00800e7d  8bcf                 mov ecx, edi
// 00800e7f  ffd2                 call edx
// 00800e81  50                   push eax
// 00800e82  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00800e85  8bce                 mov ecx, esi
// 00800e87  ffd0                 call eax
// 00800e89  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 00800e8f  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 00800e95  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 00800e9b  6a25                 push 0x25
// 00800e9d  89442430             mov dword ptr [esp + 0x30], eax
// 00800ea1  8d442428             lea eax, [esp + 0x28]
// 00800ea5  894c2428             mov dword ptr [esp + 0x28], ecx
// 00800ea9  8b8bcc000000         mov ecx, dword ptr [ebx + 0xcc]
// 00800eaf  50                   push eax
// 00800eb0  89542430             mov dword ptr [esp + 0x30], edx
// 00800eb4  8b16                 mov edx, dword ptr [esi]
// 00800eb6  8b5270               mov edx, dword ptr [edx + 0x70]
// 00800eb9  6a01                 push 1
// 00800ebb  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00800ebf  68309d9e00           push 0x9e9d30
// 00800ec4  8bce                 mov ecx, esi
// 00800ec6  ffd2                 call edx
// 00800ec8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00800ecc  8b06                 mov eax, dword ptr [esi]
// 00800ece  8b5030               mov edx, dword ptr [eax + 0x30]
// 00800ed1  51                   push ecx
// 00800ed2  8bce                 mov ecx, esi
// 00800ed4  ffd2                 call edx
// 00800ed6  8d4c2414             lea ecx, [esp + 0x14]
// 00800eda  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00800ee2  c744241498019b00     mov dword ptr [esp + 0x14], 0x9b0198
// 00800eea  e841e3c0ff           call 0x40f230
// 00800eef  e9b9fcffff           jmp 0x800bad
// 00800ef4  83f801               cmp eax, 1
// 00800ef7  0f85b0fcffff         jne 0x800bad
// 00800efd  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00800f05  0f8426010000         je 0x801031
// 00800f0b  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00800f0f  8b07                 mov eax, dword ptr [edi]
// 00800f11  8b742474             mov esi, dword ptr [esp + 0x74]
// 00800f15  8b5078               mov edx, dword ptr [eax + 0x78]
// 00800f18  53                   push ebx
// 00800f19  56                   push esi
// 00800f1a  ffd2                 call edx
// 00800f1c  8d442424             lea eax, [esp + 0x24]
// 00800f20  50                   push eax
// 00800f21  8bcb                 mov ecx, ebx
// 00800f23  e8884cffff           call 0x7f5bb0
// 00800f28  8d4c2414             lea ecx, [esp + 0x14]
// 00800f2c  51                   push ecx
// 00800f2d  8d4c2428             lea ecx, [esp + 0x28]
// 00800f31  e8cabac1ff           call 0x41ca00
// 00800f36  8b18                 mov ebx, dword ptr [eax]
// 00800f38  85f6                 test esi, esi
// 00800f3a  7504                 jne 0x800f40
// 00800f3c  33c0                 xor eax, eax
// 00800f3e  eb03                 jmp 0x800f43
// 00800f40  8b4604               mov eax, dword ptr [esi + 4]
// 00800f43  6a00                 push 0
// 00800f45  50                   push eax
// 00800f46  8d4c2454             lea ecx, [esp + 0x54]
// 00800f4a  e8b1a70400           call 0x84b700
// 00800f4f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00800f53  8d4702               lea eax, [edi + 2]
// 00800f56  50                   push eax
// 00800f57  8d6bfe               lea ebp, [ebx - 2]
// 00800f5a  55                   push ebp
// 00800f5b  8d54241c             lea edx, [esp + 0x1c]
// 00800f5f  52                   push edx
// 00800f60  8bce                 mov ecx, esi
// 00800f62  c744247403000000     mov dword ptr [esp + 0x74], 3
// 00800f6a  e8d337ffff           call 0x7f4742
// 00800f6f  8d4704               lea eax, [edi + 4]
// 00800f72  50                   push eax
// 00800f73  53                   push ebx
// 00800f74  8bce                 mov ecx, esi
// 00800f76  e8c137ffff           call 0x7f473c
// 00800f7b  8d4f01               lea ecx, [edi + 1]
// 00800f7e  8d4303               lea eax, [ebx + 3]
// 00800f81  51                   push ecx
// 00800f82  50                   push eax
// 00800f83  8bce                 mov ecx, esi
// 00800f85  89842484000000       mov dword ptr [esp + 0x84], eax
// 00800f8c  e8ab37ffff           call 0x7f473c
// 00800f91  8d5703               lea edx, [edi + 3]
// 00800f94  52                   push edx
// 00800f95  55                   push ebp
// 00800f96  8d44241c             lea eax, [esp + 0x1c]
// 00800f9a  50                   push eax
// 00800f9b  8bce                 mov ecx, esi
// 00800f9d  e8a037ffff           call 0x7f4742
// 00800fa2  8d4705               lea eax, [edi + 5]
// 00800fa5  50                   push eax
// 00800fa6  53                   push ebx
// 00800fa7  8bce                 mov ecx, esi
// 00800fa9  e88e37ffff           call 0x7f473c
// 00800fae  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00800fb2  8d4702               lea eax, [edi + 2]
// 00800fb5  50                   push eax
// 00800fb6  51                   push ecx
// 00800fb7  8bce                 mov ecx, esi
// 00800fb9  e87e37ffff           call 0x7f473c
// 00800fbe  8d4706               lea eax, [edi + 6]
// 00800fc1  50                   push eax
// 00800fc2  55                   push ebp
// 00800fc3  8d54241c             lea edx, [esp + 0x1c]
// 00800fc7  52                   push edx
// 00800fc8  8bce                 mov ecx, esi
// 00800fca  89842480000000       mov dword ptr [esp + 0x80], eax
// 00800fd1  e86c37ffff           call 0x7f4742
// 00800fd6  8d4708               lea eax, [edi + 8]
// 00800fd9  50                   push eax
// 00800fda  53                   push ebx
// 00800fdb  8bce                 mov ecx, esi
// 00800fdd  e85a37ffff           call 0x7f473c
// 00800fe2  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00800fe6  8d4705               lea eax, [edi + 5]
// 00800fe9  50                   push eax
// 00800fea  51                   push ecx
// 00800feb  8bce                 mov ecx, esi
// 00800fed  e84a37ffff           call 0x7f473c
// 00800ff2  8d5707               lea edx, [edi + 7]
// 00800ff5  52                   push edx
// 00800ff6  55                   push ebp
// 00800ff7  8d442424             lea eax, [esp + 0x24]
// 00800ffb  50                   push eax
// 00800ffc  8bce                 mov ecx, esi
// 00800ffe  e83f37ffff           call 0x7f4742
// 00801003  83c709               add edi, 9
// 00801006  57                   push edi
// 00801007  53                   push ebx
// 00801008  8bce                 mov ecx, esi
// 0080100a  e82d37ffff           call 0x7f473c
// 0080100f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00801013  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00801017  51                   push ecx
// 00801018  52                   push edx
// 00801019  8bce                 mov ecx, esi
// 0080101b  e81c37ffff           call 0x7f473c
// 00801020  8d4c244c             lea ecx, [esp + 0x4c]
// 00801024  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0080102c  e85fa70400           call 0x84b790
// 00801031  8b442470             mov eax, dword ptr [esp + 0x70]
// 00801035  c740040c000000       mov dword ptr [eax + 4], 0xc
// 0080103c  e977fbffff           jmp 0x800bb8
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp