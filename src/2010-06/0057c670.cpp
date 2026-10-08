// from server: 100% by auto
// roc 2010-06 0057c670  unit: seg_00570000  size: 1291 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057c670
//
// 0057c670  83ec18               sub esp, 0x18
// 0057c673  53                   push ebx
// 0057c674  55                   push ebp
// 0057c675  0fb76a02             movzx ebp, word ptr [edx + 2]
// 0057c679  56                   push esi
// 0057c67a  33f6                 xor esi, esi
// 0057c67c  57                   push edi
// 0057c67d  8bd9                 mov ebx, ecx
// 0057c67f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0057c687  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057c68b  8d4e07               lea ecx, [esi + 7]
// 0057c68e  8d7e04               lea edi, [esi + 4]
// 0057c691  85ed                 test ebp, ebp
// 0057c693  7508                 jne 0x57c69d
// 0057c695  b98a000000           mov ecx, 0x8a
// 0057c69a  8d7d03               lea edi, [ebp + 3]
// 0057c69d  85db                 test ebx, ebx
// 0057c69f  0f8cce040000         jl 0x57cb73
// 0057c6a5  83c206               add edx, 6
// 0057c6a8  43                   inc ebx
// 0057c6a9  89542418             mov dword ptr [esp + 0x18], edx
// 0057c6ad  895c2420             mov dword ptr [esp + 0x20], ebx
// 0057c6b1  bd01000000           mov ebp, 1
// 0057c6b6  eb08                 jmp 0x57c6c0
// 0057c6b8  8da42400000000       lea esp, [esp]
// 0057c6bf  90                   nop 
// 0057c6c0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057c6c4  0fb71b               movzx ebx, word ptr [ebx]
// 0057c6c7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057c6cb  03f5                 add esi, ebp
// 0057c6cd  3bf1                 cmp esi, ecx
// 0057c6cf  89542424             mov dword ptr [esp + 0x24], edx
// 0057c6d3  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057c6d7  89742410             mov dword ptr [esp + 0x10], esi
// 0057c6db  7d08                 jge 0x57c6e5
// 0057c6dd  3bd3                 cmp edx, ebx
// 0057c6df  0f847f040000         je 0x57cb64
// 0057c6e5  3bf7                 cmp esi, edi
// 0057c6e7  0f8da2000000         jge 0x57c78f
// 0057c6ed  8d4900               lea ecx, [ecx]
// 0057c6f0  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 0057c6f8  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057c6fe  bb10000000           mov ebx, 0x10
// 0057c703  2bdf                 sub ebx, edi
// 0057c705  3bcb                 cmp ecx, ebx
// 0057c707  7e5b                 jle 0x57c764
// 0057c709  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 0057c711  8bd6                 mov edx, esi
// 0057c713  d3e2                 shl edx, cl
// 0057c715  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c718  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057c71f  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057c726  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057c729  881c11               mov byte ptr [ecx + edx], bl
// 0057c72c  016814               add dword ptr [eax + 0x14], ebp
// 0057c72f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057c732  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057c739  8b5008               mov edx, dword ptr [eax + 8]
// 0057c73c  881c11               mov byte ptr [ecx + edx], bl
// 0057c73f  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057c745  016814               add dword ptr [eax + 0x14], ebp
// 0057c748  b110                 mov cl, 0x10
// 0057c74a  2aca                 sub cl, dl
// 0057c74c  66d3ee               shr si, cl
// 0057c74f  8d4c3af0             lea ecx, [edx + edi - 0x10]
// 0057c753  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057c757  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057c75e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c762  eb14                 jmp 0x57c778
// 0057c764  668b9c907c0a0000     mov bx, word ptr [eax + edx*4 + 0xa7c]
// 0057c76c  66d3e3               shl bx, cl
// 0057c76f  660998b8160000       or word ptr [eax + 0x16b8], bx
// 0057c776  03cf                 add ecx, edi
// 0057c778  2bf5                 sub esi, ebp
// 0057c77a  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057c780  89742410             mov dword ptr [esp + 0x10], esi
// 0057c784  0f8566ffffff         jne 0x57c6f0
// 0057c78a  e9a7030000           jmp 0x57cb36
// 0057c78f  85d2                 test edx, edx
// 0057c791  0f84a5010000         je 0x57c93c
// 0057c797  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0057c79b  0f849c000000         je 0x57c83d
// 0057c7a1  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 0057c7a9  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057c7af  bb10000000           mov ebx, 0x10
// 0057c7b4  2bdf                 sub ebx, edi
// 0057c7b6  3bcb                 cmp ecx, ebx
// 0057c7b8  897c241c             mov dword ptr [esp + 0x1c], edi
// 0057c7bc  7e5b                 jle 0x57c819
// 0057c7be  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 0057c7c6  8bfe                 mov edi, esi
// 0057c7c8  d3e7                 shl edi, cl
// 0057c7ca  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c7cd  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c7d4  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057c7db  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c7de  881c39               mov byte ptr [ecx + edi], bl
// 0057c7e1  016814               add dword ptr [eax + 0x14], ebp
// 0057c7e4  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057c7eb  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c7ee  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c7f1  881c0f               mov byte ptr [edi + ecx], bl
// 0057c7f4  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057c7fa  016814               add dword ptr [eax + 0x14], ebp
// 0057c7fd  b110                 mov cl, 0x10
// 0057c7ff  2acb                 sub cl, bl
// 0057c801  66d3ee               shr si, cl
// 0057c804  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057c808  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0057c80c  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057c813  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c817  eb18                 jmp 0x57c831
// 0057c819  668bbc907c0a0000     mov di, word ptr [eax + edx*4 + 0xa7c]
// 0057c821  66d3e7               shl di, cl
// 0057c824  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c82b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057c82f  03cf                 add ecx, edi
// 0057c831  2bf5                 sub esi, ebp
// 0057c833  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057c839  89742410             mov dword ptr [esp + 0x10], esi
// 0057c83d  0fb7b8be0a0000       movzx edi, word ptr [eax + 0xabe]
// 0057c844  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057c84a  bb10000000           mov ebx, 0x10
// 0057c84f  2bdf                 sub ebx, edi
// 0057c851  3bcb                 cmp ecx, ebx
// 0057c853  897c241c             mov dword ptr [esp + 0x1c], edi
// 0057c857  7e5a                 jle 0x57c8b3
// 0057c859  0fb7b0bc0a0000       movzx esi, word ptr [eax + 0xabc]
// 0057c860  8bfe                 mov edi, esi
// 0057c862  d3e7                 shl edi, cl
// 0057c864  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c867  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c86e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057c875  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c878  881c39               mov byte ptr [ecx + edi], bl
// 0057c87b  016814               add dword ptr [eax + 0x14], ebp
// 0057c87e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057c885  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c888  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c88b  881c0f               mov byte ptr [edi + ecx], bl
// 0057c88e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057c894  016814               add dword ptr [eax + 0x14], ebp
// 0057c897  b110                 mov cl, 0x10
// 0057c899  2acb                 sub cl, bl
// 0057c89b  66d3ee               shr si, cl
// 0057c89e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057c8a2  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0057c8a6  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057c8ad  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c8b1  eb17                 jmp 0x57c8ca
// 0057c8b3  668bb8bc0a0000       mov di, word ptr [eax + 0xabc]
// 0057c8ba  66d3e7               shl di, cl
// 0057c8bd  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c8c4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057c8c8  03cf                 add ecx, edi
// 0057c8ca  83c6fd               add esi, -3
// 0057c8cd  83f90e               cmp ecx, 0xe
// 0057c8d0  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057c8d6  7e53                 jle 0x57c92b
// 0057c8d8  8bfe                 mov edi, esi
// 0057c8da  d3e7                 shl edi, cl
// 0057c8dc  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c8df  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c8e6  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057c8ed  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c8f0  881c39               mov byte ptr [ecx + edi], bl
// 0057c8f3  016814               add dword ptr [eax + 0x14], ebp
// 0057c8f6  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057c8fd  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c900  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c903  881c0f               mov byte ptr [edi + ecx], bl
// 0057c906  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057c90c  016814               add dword ptr [eax + 0x14], ebp
// 0057c90f  b110                 mov cl, 0x10
// 0057c911  2acb                 sub cl, bl
// 0057c913  66d3ee               shr si, cl
// 0057c916  83c3f2               add ebx, -0xe
// 0057c919  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0057c91f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057c926  e90b020000           jmp 0x57cb36
// 0057c92b  d3e6                 shl esi, cl
// 0057c92d  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0057c934  83c102               add ecx, 2
// 0057c937  e9f4010000           jmp 0x57cb30
// 0057c93c  83fe0a               cmp esi, 0xa
// 0057c93f  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057c945  bb10000000           mov ebx, 0x10
// 0057c94a  0f8ff4000000         jg 0x57ca44
// 0057c950  0fb7b8c20a0000       movzx edi, word ptr [eax + 0xac2]
// 0057c957  2bdf                 sub ebx, edi
// 0057c959  3bcb                 cmp ecx, ebx
// 0057c95b  897c241c             mov dword ptr [esp + 0x1c], edi
// 0057c95f  7e5a                 jle 0x57c9bb
// 0057c961  0fb7b0c00a0000       movzx esi, word ptr [eax + 0xac0]
// 0057c968  8bfe                 mov edi, esi
// 0057c96a  d3e7                 shl edi, cl
// 0057c96c  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c96f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c976  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057c97d  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c980  881c39               mov byte ptr [ecx + edi], bl
// 0057c983  016814               add dword ptr [eax + 0x14], ebp
// 0057c986  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057c98d  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c990  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c993  881c0f               mov byte ptr [edi + ecx], bl
// 0057c996  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057c99c  016814               add dword ptr [eax + 0x14], ebp
// 0057c99f  b110                 mov cl, 0x10
// 0057c9a1  2acb                 sub cl, bl
// 0057c9a3  66d3ee               shr si, cl
// 0057c9a6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057c9aa  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0057c9ae  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057c9b5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c9b9  eb17                 jmp 0x57c9d2
// 0057c9bb  668bb8c00a0000       mov di, word ptr [eax + 0xac0]
// 0057c9c2  66d3e7               shl di, cl
// 0057c9c5  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c9cc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057c9d0  03cf                 add ecx, edi
// 0057c9d2  83c6fd               add esi, -3
// 0057c9d5  83f90d               cmp ecx, 0xd
// 0057c9d8  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057c9de  7e53                 jle 0x57ca33
// 0057c9e0  8bfe                 mov edi, esi
// 0057c9e2  d3e7                 shl edi, cl
// 0057c9e4  8b4808               mov ecx, dword ptr [eax + 8]
// 0057c9e7  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057c9ee  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057c9f5  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c9f8  881c39               mov byte ptr [ecx + edi], bl
// 0057c9fb  016814               add dword ptr [eax + 0x14], ebp
// 0057c9fe  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057ca05  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057ca08  8b4808               mov ecx, dword ptr [eax + 8]
// 0057ca0b  881c0f               mov byte ptr [edi + ecx], bl
// 0057ca0e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057ca14  016814               add dword ptr [eax + 0x14], ebp
// 0057ca17  b110                 mov cl, 0x10
// 0057ca19  2acb                 sub cl, bl
// 0057ca1b  66d3ee               shr si, cl
// 0057ca1e  83c3f3               add ebx, -0xd
// 0057ca21  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0057ca27  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057ca2e  e903010000           jmp 0x57cb36
// 0057ca33  d3e6                 shl esi, cl
// 0057ca35  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0057ca3c  83c103               add ecx, 3
// 0057ca3f  e9ec000000           jmp 0x57cb30
// 0057ca44  0fb7b8c60a0000       movzx edi, word ptr [eax + 0xac6]
// 0057ca4b  2bdf                 sub ebx, edi
// 0057ca4d  3bcb                 cmp ecx, ebx
// 0057ca4f  897c241c             mov dword ptr [esp + 0x1c], edi
// 0057ca53  7e5a                 jle 0x57caaf
// 0057ca55  0fb7b0c40a0000       movzx esi, word ptr [eax + 0xac4]
// 0057ca5c  8bfe                 mov edi, esi
// 0057ca5e  d3e7                 shl edi, cl
// 0057ca60  8b4808               mov ecx, dword ptr [eax + 8]
// 0057ca63  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057ca6a  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057ca71  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057ca74  881c39               mov byte ptr [ecx + edi], bl
// 0057ca77  016814               add dword ptr [eax + 0x14], ebp
// 0057ca7a  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057ca81  8b4808               mov ecx, dword ptr [eax + 8]
// 0057ca84  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057ca87  881c0f               mov byte ptr [edi + ecx], bl
// 0057ca8a  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057ca90  016814               add dword ptr [eax + 0x14], ebp
// 0057ca93  b110                 mov cl, 0x10
// 0057ca95  2acb                 sub cl, bl
// 0057ca97  66d3ee               shr si, cl
// 0057ca9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057ca9e  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0057caa2  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057caa9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057caad  eb17                 jmp 0x57cac6
// 0057caaf  668bb8c40a0000       mov di, word ptr [eax + 0xac4]
// 0057cab6  66d3e7               shl di, cl
// 0057cab9  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057cac0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057cac4  03cf                 add ecx, edi
// 0057cac6  83c6f5               add esi, -0xb
// 0057cac9  83f909               cmp ecx, 9
// 0057cacc  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057cad2  7e50                 jle 0x57cb24
// 0057cad4  8bfe                 mov edi, esi
// 0057cad6  d3e7                 shl edi, cl
// 0057cad8  8b4808               mov ecx, dword ptr [eax + 8]
// 0057cadb  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057cae2  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057cae9  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057caec  881c39               mov byte ptr [ecx + edi], bl
// 0057caef  016814               add dword ptr [eax + 0x14], ebp
// 0057caf2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057caf9  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057cafc  8b4808               mov ecx, dword ptr [eax + 8]
// 0057caff  881c0f               mov byte ptr [edi + ecx], bl
// 0057cb02  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057cb08  016814               add dword ptr [eax + 0x14], ebp
// 0057cb0b  b110                 mov cl, 0x10
// 0057cb0d  2acb                 sub cl, bl
// 0057cb0f  66d3ee               shr si, cl
// 0057cb12  83c3f7               add ebx, -9
// 0057cb15  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0057cb1b  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057cb22  eb12                 jmp 0x57cb36
// 0057cb24  d3e6                 shl esi, cl
// 0057cb26  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0057cb2d  83c107               add ecx, 7
// 0057cb30  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057cb36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057cb3a  33f6                 xor esi, esi
// 0057cb3c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057cb40  85c9                 test ecx, ecx
// 0057cb42  750a                 jne 0x57cb4e
// 0057cb44  b98a000000           mov ecx, 0x8a
// 0057cb49  8d7e03               lea edi, [esi + 3]
// 0057cb4c  eb16                 jmp 0x57cb64
// 0057cb4e  3bd1                 cmp edx, ecx
// 0057cb50  750a                 jne 0x57cb5c
// 0057cb52  b906000000           mov ecx, 6
// 0057cb57  8d79fd               lea edi, [ecx - 3]
// 0057cb5a  eb08                 jmp 0x57cb64
// 0057cb5c  b907000000           mov ecx, 7
// 0057cb61  8d79fd               lea edi, [ecx - 3]
// 0057cb64  8344241804           add dword ptr [esp + 0x18], 4
// 0057cb69  296c2420             sub dword ptr [esp + 0x20], ebp
// 0057cb6d  0f854dfbffff         jne 0x57c6c0
// 0057cb73  5f                   pop edi
// 0057cb74  5e                   pop esi
// 0057cb75  5d                   pop ebp
// 0057cb76  5b                   pop ebx
// 0057cb77  83c418               add esp, 0x18
// 0057cb7a  c3                   ret 
// library zlib-1.2.3/trees.c (function _send_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
