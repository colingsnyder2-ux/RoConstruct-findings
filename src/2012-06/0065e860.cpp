// roc 2012-06 0065e860  unit: seg_00650000  size: 1291 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065e860
//
// 0065e860  83ec18               sub esp, 0x18
// 0065e863  53                   push ebx
// 0065e864  55                   push ebp
// 0065e865  0fb76a02             movzx ebp, word ptr [edx + 2]
// 0065e869  56                   push esi
// 0065e86a  33f6                 xor esi, esi
// 0065e86c  57                   push edi
// 0065e86d  8bd9                 mov ebx, ecx
// 0065e86f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0065e877  896c2414             mov dword ptr [esp + 0x14], ebp
// 0065e87b  8d4e07               lea ecx, [esi + 7]
// 0065e87e  8d7e04               lea edi, [esi + 4]
// 0065e881  85ed                 test ebp, ebp
// 0065e883  7508                 jne 0x65e88d
// 0065e885  b98a000000           mov ecx, 0x8a
// 0065e88a  8d7d03               lea edi, [ebp + 3]
// 0065e88d  85db                 test ebx, ebx
// 0065e88f  0f8cce040000         jl 0x65ed63
// 0065e895  83c206               add edx, 6
// 0065e898  43                   inc ebx
// 0065e899  89542418             mov dword ptr [esp + 0x18], edx
// 0065e89d  895c2420             mov dword ptr [esp + 0x20], ebx
// 0065e8a1  bd01000000           mov ebp, 1
// 0065e8a6  eb08                 jmp 0x65e8b0
// 0065e8a8  8da42400000000       lea esp, [esp]
// 0065e8af  90                   nop 
// 0065e8b0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0065e8b4  0fb71b               movzx ebx, word ptr [ebx]
// 0065e8b7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065e8bb  03f5                 add esi, ebp
// 0065e8bd  3bf1                 cmp esi, ecx
// 0065e8bf  89542424             mov dword ptr [esp + 0x24], edx
// 0065e8c3  895c2414             mov dword ptr [esp + 0x14], ebx
// 0065e8c7  89742410             mov dword ptr [esp + 0x10], esi
// 0065e8cb  7d08                 jge 0x65e8d5
// 0065e8cd  3bd3                 cmp edx, ebx
// 0065e8cf  0f847f040000         je 0x65ed54
// 0065e8d5  3bf7                 cmp esi, edi
// 0065e8d7  0f8da2000000         jge 0x65e97f
// 0065e8dd  8d4900               lea ecx, [ecx]
// 0065e8e0  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 0065e8e8  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065e8ee  bb10000000           mov ebx, 0x10
// 0065e8f3  2bdf                 sub ebx, edi
// 0065e8f5  3bcb                 cmp ecx, ebx
// 0065e8f7  7e5b                 jle 0x65e954
// 0065e8f9  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 0065e901  8bd6                 mov edx, esi
// 0065e903  d3e2                 shl edx, cl
// 0065e905  8b4808               mov ecx, dword ptr [eax + 8]
// 0065e908  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065e90f  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065e916  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065e919  881c11               mov byte ptr [ecx + edx], bl
// 0065e91c  016814               add dword ptr [eax + 0x14], ebp
// 0065e91f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065e922  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065e929  8b5008               mov edx, dword ptr [eax + 8]
// 0065e92c  881c11               mov byte ptr [ecx + edx], bl
// 0065e92f  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065e935  016814               add dword ptr [eax + 0x14], ebp
// 0065e938  b110                 mov cl, 0x10
// 0065e93a  2aca                 sub cl, dl
// 0065e93c  66d3ee               shr si, cl
// 0065e93f  8d4c3af0             lea ecx, [edx + edi - 0x10]
// 0065e943  8b542424             mov edx, dword ptr [esp + 0x24]
// 0065e947  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065e94e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065e952  eb14                 jmp 0x65e968
// 0065e954  668b9c907c0a0000     mov bx, word ptr [eax + edx*4 + 0xa7c]
// 0065e95c  66d3e3               shl bx, cl
// 0065e95f  660998b8160000       or word ptr [eax + 0x16b8], bx
// 0065e966  03cf                 add ecx, edi
// 0065e968  2bf5                 sub esi, ebp
// 0065e96a  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065e970  89742410             mov dword ptr [esp + 0x10], esi
// 0065e974  0f8566ffffff         jne 0x65e8e0
// 0065e97a  e9a7030000           jmp 0x65ed26
// 0065e97f  85d2                 test edx, edx
// 0065e981  0f84a5010000         je 0x65eb2c
// 0065e987  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0065e98b  0f849c000000         je 0x65ea2d
// 0065e991  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 0065e999  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065e99f  bb10000000           mov ebx, 0x10
// 0065e9a4  2bdf                 sub ebx, edi
// 0065e9a6  3bcb                 cmp ecx, ebx
// 0065e9a8  897c241c             mov dword ptr [esp + 0x1c], edi
// 0065e9ac  7e5b                 jle 0x65ea09
// 0065e9ae  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 0065e9b6  8bfe                 mov edi, esi
// 0065e9b8  d3e7                 shl edi, cl
// 0065e9ba  8b4808               mov ecx, dword ptr [eax + 8]
// 0065e9bd  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065e9c4  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065e9cb  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065e9ce  881c39               mov byte ptr [ecx + edi], bl
// 0065e9d1  016814               add dword ptr [eax + 0x14], ebp
// 0065e9d4  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065e9db  8b4808               mov ecx, dword ptr [eax + 8]
// 0065e9de  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065e9e1  881c0f               mov byte ptr [edi + ecx], bl
// 0065e9e4  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0065e9ea  016814               add dword ptr [eax + 0x14], ebp
// 0065e9ed  b110                 mov cl, 0x10
// 0065e9ef  2acb                 sub cl, bl
// 0065e9f1  66d3ee               shr si, cl
// 0065e9f4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065e9f8  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0065e9fc  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ea03  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065ea07  eb18                 jmp 0x65ea21
// 0065ea09  668bbc907c0a0000     mov di, word ptr [eax + edx*4 + 0xa7c]
// 0065ea11  66d3e7               shl di, cl
// 0065ea14  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ea1b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065ea1f  03cf                 add ecx, edi
// 0065ea21  2bf5                 sub esi, ebp
// 0065ea23  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065ea29  89742410             mov dword ptr [esp + 0x10], esi
// 0065ea2d  0fb7b8be0a0000       movzx edi, word ptr [eax + 0xabe]
// 0065ea34  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065ea3a  bb10000000           mov ebx, 0x10
// 0065ea3f  2bdf                 sub ebx, edi
// 0065ea41  3bcb                 cmp ecx, ebx
// 0065ea43  897c241c             mov dword ptr [esp + 0x1c], edi
// 0065ea47  7e5a                 jle 0x65eaa3
// 0065ea49  0fb7b0bc0a0000       movzx esi, word ptr [eax + 0xabc]
// 0065ea50  8bfe                 mov edi, esi
// 0065ea52  d3e7                 shl edi, cl
// 0065ea54  8b4808               mov ecx, dword ptr [eax + 8]
// 0065ea57  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ea5e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065ea65  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ea68  881c39               mov byte ptr [ecx + edi], bl
// 0065ea6b  016814               add dword ptr [eax + 0x14], ebp
// 0065ea6e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065ea75  8b4808               mov ecx, dword ptr [eax + 8]
// 0065ea78  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ea7b  881c0f               mov byte ptr [edi + ecx], bl
// 0065ea7e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0065ea84  016814               add dword ptr [eax + 0x14], ebp
// 0065ea87  b110                 mov cl, 0x10
// 0065ea89  2acb                 sub cl, bl
// 0065ea8b  66d3ee               shr si, cl
// 0065ea8e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065ea92  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0065ea96  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ea9d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065eaa1  eb17                 jmp 0x65eaba
// 0065eaa3  668bb8bc0a0000       mov di, word ptr [eax + 0xabc]
// 0065eaaa  66d3e7               shl di, cl
// 0065eaad  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065eab4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065eab8  03cf                 add ecx, edi
// 0065eaba  83c6fd               add esi, -3
// 0065eabd  83f90e               cmp ecx, 0xe
// 0065eac0  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065eac6  7e53                 jle 0x65eb1b
// 0065eac8  8bfe                 mov edi, esi
// 0065eaca  d3e7                 shl edi, cl
// 0065eacc  8b4808               mov ecx, dword ptr [eax + 8]
// 0065eacf  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ead6  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065eadd  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065eae0  881c39               mov byte ptr [ecx + edi], bl
// 0065eae3  016814               add dword ptr [eax + 0x14], ebp
// 0065eae6  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065eaed  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065eaf0  8b4808               mov ecx, dword ptr [eax + 8]
// 0065eaf3  881c0f               mov byte ptr [edi + ecx], bl
// 0065eaf6  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0065eafc  016814               add dword ptr [eax + 0x14], ebp
// 0065eaff  b110                 mov cl, 0x10
// 0065eb01  2acb                 sub cl, bl
// 0065eb03  66d3ee               shr si, cl
// 0065eb06  83c3f2               add ebx, -0xe
// 0065eb09  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0065eb0f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065eb16  e90b020000           jmp 0x65ed26
// 0065eb1b  d3e6                 shl esi, cl
// 0065eb1d  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0065eb24  83c102               add ecx, 2
// 0065eb27  e9f4010000           jmp 0x65ed20
// 0065eb2c  83fe0a               cmp esi, 0xa
// 0065eb2f  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065eb35  bb10000000           mov ebx, 0x10
// 0065eb3a  0f8ff4000000         jg 0x65ec34
// 0065eb40  0fb7b8c20a0000       movzx edi, word ptr [eax + 0xac2]
// 0065eb47  2bdf                 sub ebx, edi
// 0065eb49  3bcb                 cmp ecx, ebx
// 0065eb4b  897c241c             mov dword ptr [esp + 0x1c], edi
// 0065eb4f  7e5a                 jle 0x65ebab
// 0065eb51  0fb7b0c00a0000       movzx esi, word ptr [eax + 0xac0]
// 0065eb58  8bfe                 mov edi, esi
// 0065eb5a  d3e7                 shl edi, cl
// 0065eb5c  8b4808               mov ecx, dword ptr [eax + 8]
// 0065eb5f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065eb66  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065eb6d  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065eb70  881c39               mov byte ptr [ecx + edi], bl
// 0065eb73  016814               add dword ptr [eax + 0x14], ebp
// 0065eb76  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065eb7d  8b4808               mov ecx, dword ptr [eax + 8]
// 0065eb80  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065eb83  881c0f               mov byte ptr [edi + ecx], bl
// 0065eb86  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0065eb8c  016814               add dword ptr [eax + 0x14], ebp
// 0065eb8f  b110                 mov cl, 0x10
// 0065eb91  2acb                 sub cl, bl
// 0065eb93  66d3ee               shr si, cl
// 0065eb96  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065eb9a  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0065eb9e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065eba5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065eba9  eb17                 jmp 0x65ebc2
// 0065ebab  668bb8c00a0000       mov di, word ptr [eax + 0xac0]
// 0065ebb2  66d3e7               shl di, cl
// 0065ebb5  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ebbc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065ebc0  03cf                 add ecx, edi
// 0065ebc2  83c6fd               add esi, -3
// 0065ebc5  83f90d               cmp ecx, 0xd
// 0065ebc8  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065ebce  7e53                 jle 0x65ec23
// 0065ebd0  8bfe                 mov edi, esi
// 0065ebd2  d3e7                 shl edi, cl
// 0065ebd4  8b4808               mov ecx, dword ptr [eax + 8]
// 0065ebd7  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ebde  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065ebe5  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ebe8  881c39               mov byte ptr [ecx + edi], bl
// 0065ebeb  016814               add dword ptr [eax + 0x14], ebp
// 0065ebee  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065ebf5  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ebf8  8b4808               mov ecx, dword ptr [eax + 8]
// 0065ebfb  881c0f               mov byte ptr [edi + ecx], bl
// 0065ebfe  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0065ec04  016814               add dword ptr [eax + 0x14], ebp
// 0065ec07  b110                 mov cl, 0x10
// 0065ec09  2acb                 sub cl, bl
// 0065ec0b  66d3ee               shr si, cl
// 0065ec0e  83c3f3               add ebx, -0xd
// 0065ec11  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0065ec17  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ec1e  e903010000           jmp 0x65ed26
// 0065ec23  d3e6                 shl esi, cl
// 0065ec25  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0065ec2c  83c103               add ecx, 3
// 0065ec2f  e9ec000000           jmp 0x65ed20
// 0065ec34  0fb7b8c60a0000       movzx edi, word ptr [eax + 0xac6]
// 0065ec3b  2bdf                 sub ebx, edi
// 0065ec3d  3bcb                 cmp ecx, ebx
// 0065ec3f  897c241c             mov dword ptr [esp + 0x1c], edi
// 0065ec43  7e5a                 jle 0x65ec9f
// 0065ec45  0fb7b0c40a0000       movzx esi, word ptr [eax + 0xac4]
// 0065ec4c  8bfe                 mov edi, esi
// 0065ec4e  d3e7                 shl edi, cl
// 0065ec50  8b4808               mov ecx, dword ptr [eax + 8]
// 0065ec53  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ec5a  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065ec61  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ec64  881c39               mov byte ptr [ecx + edi], bl
// 0065ec67  016814               add dword ptr [eax + 0x14], ebp
// 0065ec6a  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065ec71  8b4808               mov ecx, dword ptr [eax + 8]
// 0065ec74  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ec77  881c0f               mov byte ptr [edi + ecx], bl
// 0065ec7a  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0065ec80  016814               add dword ptr [eax + 0x14], ebp
// 0065ec83  b110                 mov cl, 0x10
// 0065ec85  2acb                 sub cl, bl
// 0065ec87  66d3ee               shr si, cl
// 0065ec8a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065ec8e  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0065ec92  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ec99  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065ec9d  eb17                 jmp 0x65ecb6
// 0065ec9f  668bb8c40a0000       mov di, word ptr [eax + 0xac4]
// 0065eca6  66d3e7               shl di, cl
// 0065eca9  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ecb0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0065ecb4  03cf                 add ecx, edi
// 0065ecb6  83c6f5               add esi, -0xb
// 0065ecb9  83f909               cmp ecx, 9
// 0065ecbc  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065ecc2  7e50                 jle 0x65ed14
// 0065ecc4  8bfe                 mov edi, esi
// 0065ecc6  d3e7                 shl edi, cl
// 0065ecc8  8b4808               mov ecx, dword ptr [eax + 8]
// 0065eccb  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0065ecd2  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065ecd9  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ecdc  881c39               mov byte ptr [ecx + edi], bl
// 0065ecdf  016814               add dword ptr [eax + 0x14], ebp
// 0065ece2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065ece9  8b7814               mov edi, dword ptr [eax + 0x14]
// 0065ecec  8b4808               mov ecx, dword ptr [eax + 8]
// 0065ecef  881c0f               mov byte ptr [edi + ecx], bl
// 0065ecf2  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0065ecf8  016814               add dword ptr [eax + 0x14], ebp
// 0065ecfb  b110                 mov cl, 0x10
// 0065ecfd  2acb                 sub cl, bl
// 0065ecff  66d3ee               shr si, cl
// 0065ed02  83c3f7               add ebx, -9
// 0065ed05  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0065ed0b  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065ed12  eb12                 jmp 0x65ed26
// 0065ed14  d3e6                 shl esi, cl
// 0065ed16  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0065ed1d  83c107               add ecx, 7
// 0065ed20  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065ed26  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065ed2a  33f6                 xor esi, esi
// 0065ed2c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0065ed30  85c9                 test ecx, ecx
// 0065ed32  750a                 jne 0x65ed3e
// 0065ed34  b98a000000           mov ecx, 0x8a
// 0065ed39  8d7e03               lea edi, [esi + 3]
// 0065ed3c  eb16                 jmp 0x65ed54
// 0065ed3e  3bd1                 cmp edx, ecx
// 0065ed40  750a                 jne 0x65ed4c
// 0065ed42  b906000000           mov ecx, 6
// 0065ed47  8d79fd               lea edi, [ecx - 3]
// 0065ed4a  eb08                 jmp 0x65ed54
// 0065ed4c  b907000000           mov ecx, 7
// 0065ed51  8d79fd               lea edi, [ecx - 3]
// 0065ed54  8344241804           add dword ptr [esp + 0x18], 4
// 0065ed59  296c2420             sub dword ptr [esp + 0x20], ebp
// 0065ed5d  0f854dfbffff         jne 0x65e8b0
// 0065ed63  5f                   pop edi
// 0065ed64  5e                   pop esi
// 0065ed65  5d                   pop ebp
// 0065ed66  5b                   pop ebx
// 0065ed67  83c418               add esp, 0x18
// 0065ed6a  c3                   ret 
// library zlib-1.2.3/trees.c (function _send_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
