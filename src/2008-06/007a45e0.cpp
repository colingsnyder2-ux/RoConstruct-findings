// from server: 100% by auto
// roc 2008-06 007a45e0  unit: CXTIconHandle  size: 1291 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a45e0
//
// 007a45e0  83ec18               sub esp, 0x18
// 007a45e3  53                   push ebx
// 007a45e4  55                   push ebp
// 007a45e5  0fb76a02             movzx ebp, word ptr [edx + 2]
// 007a45e9  56                   push esi
// 007a45ea  33f6                 xor esi, esi
// 007a45ec  57                   push edi
// 007a45ed  8bd9                 mov ebx, ecx
// 007a45ef  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007a45f7  896c2414             mov dword ptr [esp + 0x14], ebp
// 007a45fb  8d4e07               lea ecx, [esi + 7]
// 007a45fe  8d7e04               lea edi, [esi + 4]
// 007a4601  85ed                 test ebp, ebp
// 007a4603  7508                 jne 0x7a460d
// 007a4605  b98a000000           mov ecx, 0x8a
// 007a460a  8d7d03               lea edi, [ebp + 3]
// 007a460d  85db                 test ebx, ebx
// 007a460f  0f8cce040000         jl 0x7a4ae3
// 007a4615  83c206               add edx, 6
// 007a4618  43                   inc ebx
// 007a4619  89542418             mov dword ptr [esp + 0x18], edx
// 007a461d  895c2420             mov dword ptr [esp + 0x20], ebx
// 007a4621  bd01000000           mov ebp, 1
// 007a4626  eb08                 jmp 0x7a4630
// 007a4628  8da42400000000       lea esp, [esp]
// 007a462f  90                   nop 
// 007a4630  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007a4634  0fb71b               movzx ebx, word ptr [ebx]
// 007a4637  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a463b  03f5                 add esi, ebp
// 007a463d  3bf1                 cmp esi, ecx
// 007a463f  89542424             mov dword ptr [esp + 0x24], edx
// 007a4643  895c2414             mov dword ptr [esp + 0x14], ebx
// 007a4647  89742410             mov dword ptr [esp + 0x10], esi
// 007a464b  7d08                 jge 0x7a4655
// 007a464d  3bd3                 cmp edx, ebx
// 007a464f  0f847f040000         je 0x7a4ad4
// 007a4655  3bf7                 cmp esi, edi
// 007a4657  0f8da2000000         jge 0x7a46ff
// 007a465d  8d4900               lea ecx, [ecx]
// 007a4660  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 007a4668  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a466e  bb10000000           mov ebx, 0x10
// 007a4673  2bdf                 sub ebx, edi
// 007a4675  3bcb                 cmp ecx, ebx
// 007a4677  7e5b                 jle 0x7a46d4
// 007a4679  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 007a4681  8bd6                 mov edx, esi
// 007a4683  d3e2                 shl edx, cl
// 007a4685  8b4808               mov ecx, dword ptr [eax + 8]
// 007a4688  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a468f  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a4696  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a4699  881c11               mov byte ptr [ecx + edx], bl
// 007a469c  016814               add dword ptr [eax + 0x14], ebp
// 007a469f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a46a2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a46a9  8b5008               mov edx, dword ptr [eax + 8]
// 007a46ac  881c11               mov byte ptr [ecx + edx], bl
// 007a46af  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a46b5  016814               add dword ptr [eax + 0x14], ebp
// 007a46b8  b110                 mov cl, 0x10
// 007a46ba  2aca                 sub cl, dl
// 007a46bc  66d3ee               shr si, cl
// 007a46bf  8d4c3af0             lea ecx, [edx + edi - 0x10]
// 007a46c3  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a46c7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a46ce  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a46d2  eb14                 jmp 0x7a46e8
// 007a46d4  668b9c907c0a0000     mov bx, word ptr [eax + edx*4 + 0xa7c]
// 007a46dc  66d3e3               shl bx, cl
// 007a46df  660998b8160000       or word ptr [eax + 0x16b8], bx
// 007a46e6  03cf                 add ecx, edi
// 007a46e8  2bf5                 sub esi, ebp
// 007a46ea  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a46f0  89742410             mov dword ptr [esp + 0x10], esi
// 007a46f4  0f8566ffffff         jne 0x7a4660
// 007a46fa  e9a7030000           jmp 0x7a4aa6
// 007a46ff  85d2                 test edx, edx
// 007a4701  0f84a5010000         je 0x7a48ac
// 007a4707  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 007a470b  0f849c000000         je 0x7a47ad
// 007a4711  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 007a4719  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a471f  bb10000000           mov ebx, 0x10
// 007a4724  2bdf                 sub ebx, edi
// 007a4726  3bcb                 cmp ecx, ebx
// 007a4728  897c241c             mov dword ptr [esp + 0x1c], edi
// 007a472c  7e5b                 jle 0x7a4789
// 007a472e  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 007a4736  8bfe                 mov edi, esi
// 007a4738  d3e7                 shl edi, cl
// 007a473a  8b4808               mov ecx, dword ptr [eax + 8]
// 007a473d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a4744  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a474b  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a474e  881c39               mov byte ptr [ecx + edi], bl
// 007a4751  016814               add dword ptr [eax + 0x14], ebp
// 007a4754  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a475b  8b4808               mov ecx, dword ptr [eax + 8]
// 007a475e  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4761  881c0f               mov byte ptr [edi + ecx], bl
// 007a4764  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 007a476a  016814               add dword ptr [eax + 0x14], ebp
// 007a476d  b110                 mov cl, 0x10
// 007a476f  2acb                 sub cl, bl
// 007a4771  66d3ee               shr si, cl
// 007a4774  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a4778  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 007a477c  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4783  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a4787  eb18                 jmp 0x7a47a1
// 007a4789  668bbc907c0a0000     mov di, word ptr [eax + edx*4 + 0xa7c]
// 007a4791  66d3e7               shl di, cl
// 007a4794  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a479b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007a479f  03cf                 add ecx, edi
// 007a47a1  2bf5                 sub esi, ebp
// 007a47a3  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a47a9  89742410             mov dword ptr [esp + 0x10], esi
// 007a47ad  0fb7b8be0a0000       movzx edi, word ptr [eax + 0xabe]
// 007a47b4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a47ba  bb10000000           mov ebx, 0x10
// 007a47bf  2bdf                 sub ebx, edi
// 007a47c1  3bcb                 cmp ecx, ebx
// 007a47c3  897c241c             mov dword ptr [esp + 0x1c], edi
// 007a47c7  7e5a                 jle 0x7a4823
// 007a47c9  0fb7b0bc0a0000       movzx esi, word ptr [eax + 0xabc]
// 007a47d0  8bfe                 mov edi, esi
// 007a47d2  d3e7                 shl edi, cl
// 007a47d4  8b4808               mov ecx, dword ptr [eax + 8]
// 007a47d7  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a47de  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a47e5  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a47e8  881c39               mov byte ptr [ecx + edi], bl
// 007a47eb  016814               add dword ptr [eax + 0x14], ebp
// 007a47ee  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a47f5  8b4808               mov ecx, dword ptr [eax + 8]
// 007a47f8  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a47fb  881c0f               mov byte ptr [edi + ecx], bl
// 007a47fe  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 007a4804  016814               add dword ptr [eax + 0x14], ebp
// 007a4807  b110                 mov cl, 0x10
// 007a4809  2acb                 sub cl, bl
// 007a480b  66d3ee               shr si, cl
// 007a480e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a4812  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 007a4816  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a481d  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a4821  eb17                 jmp 0x7a483a
// 007a4823  668bb8bc0a0000       mov di, word ptr [eax + 0xabc]
// 007a482a  66d3e7               shl di, cl
// 007a482d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a4834  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007a4838  03cf                 add ecx, edi
// 007a483a  83c6fd               add esi, -3
// 007a483d  83f90e               cmp ecx, 0xe
// 007a4840  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a4846  7e53                 jle 0x7a489b
// 007a4848  8bfe                 mov edi, esi
// 007a484a  d3e7                 shl edi, cl
// 007a484c  8b4808               mov ecx, dword ptr [eax + 8]
// 007a484f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a4856  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a485d  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4860  881c39               mov byte ptr [ecx + edi], bl
// 007a4863  016814               add dword ptr [eax + 0x14], ebp
// 007a4866  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a486d  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4870  8b4808               mov ecx, dword ptr [eax + 8]
// 007a4873  881c0f               mov byte ptr [edi + ecx], bl
// 007a4876  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 007a487c  016814               add dword ptr [eax + 0x14], ebp
// 007a487f  b110                 mov cl, 0x10
// 007a4881  2acb                 sub cl, bl
// 007a4883  66d3ee               shr si, cl
// 007a4886  83c3f2               add ebx, -0xe
// 007a4889  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 007a488f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4896  e90b020000           jmp 0x7a4aa6
// 007a489b  d3e6                 shl esi, cl
// 007a489d  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 007a48a4  83c102               add ecx, 2
// 007a48a7  e9f4010000           jmp 0x7a4aa0
// 007a48ac  83fe0a               cmp esi, 0xa
// 007a48af  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a48b5  bb10000000           mov ebx, 0x10
// 007a48ba  0f8ff4000000         jg 0x7a49b4
// 007a48c0  0fb7b8c20a0000       movzx edi, word ptr [eax + 0xac2]
// 007a48c7  2bdf                 sub ebx, edi
// 007a48c9  3bcb                 cmp ecx, ebx
// 007a48cb  897c241c             mov dword ptr [esp + 0x1c], edi
// 007a48cf  7e5a                 jle 0x7a492b
// 007a48d1  0fb7b0c00a0000       movzx esi, word ptr [eax + 0xac0]
// 007a48d8  8bfe                 mov edi, esi
// 007a48da  d3e7                 shl edi, cl
// 007a48dc  8b4808               mov ecx, dword ptr [eax + 8]
// 007a48df  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a48e6  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a48ed  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a48f0  881c39               mov byte ptr [ecx + edi], bl
// 007a48f3  016814               add dword ptr [eax + 0x14], ebp
// 007a48f6  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a48fd  8b4808               mov ecx, dword ptr [eax + 8]
// 007a4900  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4903  881c0f               mov byte ptr [edi + ecx], bl
// 007a4906  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 007a490c  016814               add dword ptr [eax + 0x14], ebp
// 007a490f  b110                 mov cl, 0x10
// 007a4911  2acb                 sub cl, bl
// 007a4913  66d3ee               shr si, cl
// 007a4916  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a491a  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 007a491e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4925  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a4929  eb17                 jmp 0x7a4942
// 007a492b  668bb8c00a0000       mov di, word ptr [eax + 0xac0]
// 007a4932  66d3e7               shl di, cl
// 007a4935  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a493c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007a4940  03cf                 add ecx, edi
// 007a4942  83c6fd               add esi, -3
// 007a4945  83f90d               cmp ecx, 0xd
// 007a4948  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a494e  7e53                 jle 0x7a49a3
// 007a4950  8bfe                 mov edi, esi
// 007a4952  d3e7                 shl edi, cl
// 007a4954  8b4808               mov ecx, dword ptr [eax + 8]
// 007a4957  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a495e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a4965  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4968  881c39               mov byte ptr [ecx + edi], bl
// 007a496b  016814               add dword ptr [eax + 0x14], ebp
// 007a496e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a4975  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4978  8b4808               mov ecx, dword ptr [eax + 8]
// 007a497b  881c0f               mov byte ptr [edi + ecx], bl
// 007a497e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 007a4984  016814               add dword ptr [eax + 0x14], ebp
// 007a4987  b110                 mov cl, 0x10
// 007a4989  2acb                 sub cl, bl
// 007a498b  66d3ee               shr si, cl
// 007a498e  83c3f3               add ebx, -0xd
// 007a4991  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 007a4997  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a499e  e903010000           jmp 0x7a4aa6
// 007a49a3  d3e6                 shl esi, cl
// 007a49a5  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 007a49ac  83c103               add ecx, 3
// 007a49af  e9ec000000           jmp 0x7a4aa0
// 007a49b4  0fb7b8c60a0000       movzx edi, word ptr [eax + 0xac6]
// 007a49bb  2bdf                 sub ebx, edi
// 007a49bd  3bcb                 cmp ecx, ebx
// 007a49bf  897c241c             mov dword ptr [esp + 0x1c], edi
// 007a49c3  7e5a                 jle 0x7a4a1f
// 007a49c5  0fb7b0c40a0000       movzx esi, word ptr [eax + 0xac4]
// 007a49cc  8bfe                 mov edi, esi
// 007a49ce  d3e7                 shl edi, cl
// 007a49d0  8b4808               mov ecx, dword ptr [eax + 8]
// 007a49d3  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a49da  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a49e1  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a49e4  881c39               mov byte ptr [ecx + edi], bl
// 007a49e7  016814               add dword ptr [eax + 0x14], ebp
// 007a49ea  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a49f1  8b4808               mov ecx, dword ptr [eax + 8]
// 007a49f4  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a49f7  881c0f               mov byte ptr [edi + ecx], bl
// 007a49fa  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 007a4a00  016814               add dword ptr [eax + 0x14], ebp
// 007a4a03  b110                 mov cl, 0x10
// 007a4a05  2acb                 sub cl, bl
// 007a4a07  66d3ee               shr si, cl
// 007a4a0a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a4a0e  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 007a4a12  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4a19  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a4a1d  eb17                 jmp 0x7a4a36
// 007a4a1f  668bb8c40a0000       mov di, word ptr [eax + 0xac4]
// 007a4a26  66d3e7               shl di, cl
// 007a4a29  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a4a30  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007a4a34  03cf                 add ecx, edi
// 007a4a36  83c6f5               add esi, -0xb
// 007a4a39  83f909               cmp ecx, 9
// 007a4a3c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a4a42  7e50                 jle 0x7a4a94
// 007a4a44  8bfe                 mov edi, esi
// 007a4a46  d3e7                 shl edi, cl
// 007a4a48  8b4808               mov ecx, dword ptr [eax + 8]
// 007a4a4b  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 007a4a52  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a4a59  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4a5c  881c39               mov byte ptr [ecx + edi], bl
// 007a4a5f  016814               add dword ptr [eax + 0x14], ebp
// 007a4a62  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a4a69  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a4a6c  8b4808               mov ecx, dword ptr [eax + 8]
// 007a4a6f  881c0f               mov byte ptr [edi + ecx], bl
// 007a4a72  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 007a4a78  016814               add dword ptr [eax + 0x14], ebp
// 007a4a7b  b110                 mov cl, 0x10
// 007a4a7d  2acb                 sub cl, bl
// 007a4a7f  66d3ee               shr si, cl
// 007a4a82  83c3f7               add ebx, -9
// 007a4a85  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 007a4a8b  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a4a92  eb12                 jmp 0x7a4aa6
// 007a4a94  d3e6                 shl esi, cl
// 007a4a96  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 007a4a9d  83c107               add ecx, 7
// 007a4aa0  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a4aa6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a4aaa  33f6                 xor esi, esi
// 007a4aac  8954241c             mov dword ptr [esp + 0x1c], edx
// 007a4ab0  85c9                 test ecx, ecx
// 007a4ab2  750a                 jne 0x7a4abe
// 007a4ab4  b98a000000           mov ecx, 0x8a
// 007a4ab9  8d7e03               lea edi, [esi + 3]
// 007a4abc  eb16                 jmp 0x7a4ad4
// 007a4abe  3bd1                 cmp edx, ecx
// 007a4ac0  750a                 jne 0x7a4acc
// 007a4ac2  b906000000           mov ecx, 6
// 007a4ac7  8d79fd               lea edi, [ecx - 3]
// 007a4aca  eb08                 jmp 0x7a4ad4
// 007a4acc  b907000000           mov ecx, 7
// 007a4ad1  8d79fd               lea edi, [ecx - 3]
// 007a4ad4  8344241804           add dword ptr [esp + 0x18], 4
// 007a4ad9  296c2420             sub dword ptr [esp + 0x20], ebp
// 007a4add  0f854dfbffff         jne 0x7a4630
// 007a4ae3  5f                   pop edi
// 007a4ae4  5e                   pop esi
// 007a4ae5  5d                   pop ebp
// 007a4ae6  5b                   pop ebx
// 007a4ae7  83c418               add esp, 0x18
// 007a4aea  c3                   ret 
// library zlib-1.2.3/trees.c (function _send_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
