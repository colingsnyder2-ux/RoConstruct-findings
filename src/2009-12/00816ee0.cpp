// roc 2009-12 00816ee0  unit: CXTPCommandBarKeyboardTip  size: 1907 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816ee0
//
// 00816ee0  6aff                 push -1
// 00816ee2  68d3a69500           push 0x95a6d3
// 00816ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00816eed  50                   push eax
// 00816eee  83ec64               sub esp, 0x64
// 00816ef1  53                   push ebx
// 00816ef2  55                   push ebp
// 00816ef3  56                   push esi
// 00816ef4  57                   push edi
// 00816ef5  a10052b600           mov eax, dword ptr [0xb65200]
// 00816efa  33c4                 xor eax, esp
// 00816efc  50                   push eax
// 00816efd  8d442478             lea eax, [esp + 0x78]
// 00816f01  64a300000000         mov dword ptr fs:[0], eax
// 00816f07  8bd9                 mov ebx, ecx
// 00816f09  895c2414             mov dword ptr [esp + 0x14], ebx
// 00816f0d  e8beebffff           call 0x815ad0
// 00816f12  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00816f15  33ed                 xor ebp, ebp
// 00816f17  39a8c4000000         cmp dword ptr [eax + 0xc4], ebp
// 00816f1d  0f841a070000         je 0x81763d
// 00816f23  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 00816f2a  3bf5                 cmp esi, ebp
// 00816f2c  0f840b070000         je 0x81763d
// 00816f32  396e20               cmp dword ptr [esi + 0x20], ebp
// 00816f35  0f8402070000         je 0x81763d
// 00816f3b  8bcb                 mov ecx, ebx
// 00816f3d  e8ced7ffff           call 0x814710
// 00816f42  8bc8                 mov ecx, eax
// 00816f44  e817ae0400           call 0x861d60
// 00816f49  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00816f4c  51                   push ecx
// 00816f4d  ff15a4ca9800         call dword ptr [0x98caa4]
// 00816f53  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00816f5a  895344               mov dword ptr [ebx + 0x44], edx
// 00816f5d  897340               mov dword ptr [ebx + 0x40], esi
// 00816f60  896b48               mov dword ptr [ebx + 0x48], ebp
// 00816f63  8b06                 mov eax, dword ptr [esi]
// 00816f65  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 00816f6b  8bce                 mov ecx, esi
// 00816f6d  ffd2                 call edx
// 00816f6f  396b34               cmp dword ptr [ebx + 0x34], ebp
// 00816f72  7508                 jne 0x816f7c
// 00816f74  896b40               mov dword ptr [ebx + 0x40], ebp
// 00816f77  e9c1060000           jmp 0x81763d
// 00816f7c  8bcb                 mov ecx, ebx
// 00816f7e  e85dd7ffff           call 0x8146e0
// 00816f83  8bf8                 mov edi, eax
// 00816f85  56                   push esi
// 00816f86  8d4c2468             lea ecx, [esp + 0x68]
// 00816f8a  897c242c             mov dword ptr [esp + 0x2c], edi
// 00816f8e  e843d7fdff           call 0x7f46d6
// 00816f93  81c7bc000000         add edi, 0xbc
// 00816f99  57                   push edi
// 00816f9a  8d442468             lea eax, [esp + 0x68]
// 00816f9e  50                   push eax
// 00816f9f  8d4c245c             lea ecx, [esp + 0x5c]
// 00816fa3  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 00816faa  e8b1460300           call 0x84b660
// 00816faf  8b6b34               mov ebp, dword ptr [ebx + 0x34]
// 00816fb2  83c5ff               add ebp, -1
// 00816fb5  c684248000000001     mov byte ptr [esp + 0x80], 1
// 00816fbd  0f88f0000000         js 0x8170b3
// 00816fc3  85ed                 test ebp, ebp
// 00816fc5  0f8c86020000         jl 0x817251
// 00816fcb  3b6b34               cmp ebp, dword ptr [ebx + 0x34]
// 00816fce  0f8d7d020000         jge 0x817251
// 00816fd4  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00816fd7  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00816fda  8d04a9               lea eax, [ecx + ebp*4]
// 00816fdd  8d4e54               lea ecx, [esi + 0x54]
// 00816fe0  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00816fe7  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00816fed  33d2                 xor edx, edx
// 00816fef  84c0                 test al, al
// 00816ff1  0f94c2               sete dl
// 00816ff4  8bc2                 mov eax, edx
// 00816ff6  89467c               mov dword ptr [esi + 0x7c], eax
// 00816ff9  85c0                 test eax, eax
// 00816ffb  0f85a9000000         jne 0x8170aa
// 00817001  8d7e58               lea edi, [esi + 0x58]
// 00817004  8bcf                 mov ecx, edi
// 00817006  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0081700c  84c0                 test al, al
// 0081700e  7421                 je 0x817031
// 00817010  8b06                 mov eax, dword ptr [esi]
// 00817012  8b5068               mov edx, dword ptr [eax + 0x68]
// 00817015  8bce                 mov ecx, esi
// 00817017  ffd2                 call edx
// 00817019  8b06                 mov eax, dword ptr [esi]
// 0081701b  8b5004               mov edx, dword ptr [eax + 4]
// 0081701e  6a01                 push 1
// 00817020  8bce                 mov ecx, esi
// 00817022  ffd2                 call edx
// 00817024  6a01                 push 1
// 00817026  55                   push ebp
// 00817027  8d4b2c               lea ecx, [ebx + 0x2c]
// 0081702a  e851620100           call 0x82d280
// 0081702f  eb79                 jmp 0x8170aa
// 00817031  8bcf                 mov ecx, edi
// 00817033  ff1524d29800         call dword ptr [0x98d224]
// 00817039  6a00                 push 0
// 0081703b  6a26                 push 0x26
// 0081703d  8bcf                 mov ecx, edi
// 0081703f  ff1580d69800         call dword ptr [0x98d680]
// 00817045  8bd8                 mov ebx, eax
// 00817047  83fbff               cmp ebx, -1
// 0081704a  7420                 je 0x81706c
// 0081704c  8d4301               lea eax, [ebx + 1]
// 0081704f  50                   push eax
// 00817050  8bcf                 mov ecx, edi
// 00817052  ff1510d59800         call dword ptr [0x98d510]
// 00817058  3c26                 cmp al, 0x26
// 0081705a  7510                 jne 0x81706c
// 0081705c  83c302               add ebx, 2
// 0081705f  53                   push ebx
// 00817060  6a26                 push 0x26
// 00817062  8bcf                 mov ecx, edi
// 00817064  ff1580d69800         call dword ptr [0x98d680]
// 0081706a  8bd8                 mov ebx, eax
// 0081706c  83c65c               add esi, 0x5c
// 0081706f  8bce                 mov ecx, esi
// 00817071  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00817077  84c0                 test al, al
// 00817079  741d                 je 0x817098
// 0081707b  43                   inc ebx
// 0081707c  53                   push ebx
// 0081707d  8bcf                 mov ecx, edi
// 0081707f  ff15c4d79800         call dword ptr [0x98d7c4]
// 00817085  0fb6c8               movzx ecx, al
// 00817088  51                   push ecx
// 00817089  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00817090  ff15c0d79800         call dword ptr [0x98d7c0]
// 00817096  eb0e                 jmp 0x8170a6
// 00817098  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0081709f  56                   push esi
// 008170a0  ff1538d59800         call dword ptr [0x98d538]
// 008170a6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008170aa  83ed01               sub ebp, 1
// 008170ad  0f8910ffffff         jns 0x816fc3
// 008170b3  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 008170b6  33f6                 xor esi, esi
// 008170b8  897c2418             mov dword ptr [esp + 0x18], edi
// 008170bc  85ff                 test edi, edi
// 008170be  0f8e08030000         jle 0x8173cc
// 008170c4  85f6                 test esi, esi
// 008170c6  0f8c85010000         jl 0x817251
// 008170cc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008170d0  3b7034               cmp esi, dword ptr [eax + 0x34]
// 008170d3  0f8d78010000         jge 0x817251
// 008170d9  8b5030               mov edx, dword ptr [eax + 0x30]
// 008170dc  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 008170df  8d04b2               lea eax, [edx + esi*4]
// 008170e2  8d4754               lea eax, [edi + 0x54]
// 008170e5  50                   push eax
// 008170e6  8d4c2428             lea ecx, [esp + 0x28]
// 008170ea  ff1594de9800         call dword ptr [0x98de94]
// 008170f0  8d4c2440             lea ecx, [esp + 0x40]
// 008170f4  e887d6ffff           call 0x814780
// 008170f9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008170fd  57                   push edi
// 008170fe  51                   push ecx
// 008170ff  8d4c2448             lea ecx, [esp + 0x48]
// 00817103  c684248800000003     mov byte ptr [esp + 0x88], 3
// 0081710b  e8603b0500           call 0x86ac70
// 00817110  685c3f9f00           push 0x9f3f5c
// 00817115  8d8c2490000000       lea ecx, [esp + 0x90]
// 0081711c  ff15b8de9800         call dword ptr [0x98deb8]
// 00817122  46                   inc esi
// 00817123  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00817127  c684248000000004     mov byte ptr [esp + 0x80], 4
// 0081712f  8974243c             mov dword ptr [esp + 0x3c], esi
// 00817133  7d7d                 jge 0x8171b2
// 00817135  85f6                 test esi, esi
// 00817137  0f8c14010000         jl 0x817251
// 0081713d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00817141  3b7234               cmp esi, dword ptr [edx + 0x34]
// 00817144  0f8d07010000         jge 0x817251
// 0081714a  8bc2                 mov eax, edx
// 0081714c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0081714f  8b2cb1               mov ebp, dword ptr [ecx + esi*4]
// 00817152  8d04b1               lea eax, [ecx + esi*4]
// 00817155  6a00                 push 0
// 00817157  8d4c2428             lea ecx, [esp + 0x28]
// 0081715b  8d7d54               lea edi, [ebp + 0x54]
// 0081715e  ff1510d59800         call dword ptr [0x98d510]
// 00817164  6a00                 push 0
// 00817166  8bcf                 mov ecx, edi
// 00817168  8ad8                 mov bl, al
// 0081716a  ff1510d59800         call dword ptr [0x98d510]
// 00817170  3ac3                 cmp al, bl
// 00817172  7537                 jne 0x8171ab
// 00817174  8b542448             mov edx, dword ptr [esp + 0x48]
// 00817178  55                   push ebp
// 00817179  52                   push edx
// 0081717a  8d4c2448             lea ecx, [esp + 0x48]
// 0081717e  e8ed3a0500           call 0x86ac70
// 00817183  8bcf                 mov ecx, edi
// 00817185  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0081718b  83f802               cmp eax, 2
// 0081718e  751b                 jne 0x8171ab
// 00817190  6a01                 push 1
// 00817192  8bcf                 mov ecx, edi
// 00817194  ff1510d59800         call dword ptr [0x98d510]
// 0081719a  0fb6c0               movzx eax, al
// 0081719d  50                   push eax
// 0081719e  8d8c2490000000       lea ecx, [esp + 0x90]
// 008171a5  ff15bcd79800         call dword ptr [0x98d7bc]
// 008171ab  46                   inc esi
// 008171ac  3b742418             cmp esi, dword ptr [esp + 0x18]
// 008171b0  7c83                 jl 0x817135
// 008171b2  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 008171b6  83fb02               cmp ebx, 2
// 008171b9  0f8cc7010000         jl 0x817386
// 008171bf  33ff                 xor edi, edi
// 008171c1  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008171c9  897c2434             mov dword ptr [esp + 0x34], edi
// 008171cd  85db                 test ebx, ebx
// 008171cf  0f8eb1010000         jle 0x817386
// 008171d5  85ff                 test edi, edi
// 008171d7  7c78                 jl 0x817251
// 008171d9  3bfb                 cmp edi, ebx
// 008171db  7d74                 jge 0x817251
// 008171dd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008171e1  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 008171e4  8d6e54               lea ebp, [esi + 0x54]
// 008171e7  8bcd                 mov ecx, ebp
// 008171e9  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008171ef  83f801               cmp eax, 1
// 008171f2  0f8f81010000         jg 0x817379
// 008171f8  83c658               add esi, 0x58
// 008171fb  8bce                 mov ecx, esi
// 008171fd  33ff                 xor edi, edi
// 008171ff  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00817205  48                   dec eax
// 00817206  85c0                 test eax, eax
// 00817208  7e76                 jle 0x817280
// 0081720a  8d9b00000000         lea ebx, [ebx]
// 00817210  57                   push edi
// 00817211  8bce                 mov ecx, esi
// 00817213  ff1510d59800         call dword ptr [0x98d510]
// 00817219  3c20                 cmp al, 0x20
// 0081721b  7524                 jne 0x817241
// 0081721d  6a00                 push 0
// 0081721f  8d5701               lea edx, [edi + 1]
// 00817222  52                   push edx
// 00817223  8bce                 mov ecx, esi
// 00817225  ff1510d59800         call dword ptr [0x98d510]
// 0081722b  0fb6c0               movzx eax, al
// 0081722e  50                   push eax
// 0081722f  8d8c2494000000       lea ecx, [esp + 0x94]
// 00817236  ff1580d69800         call dword ptr [0x98d680]
// 0081723c  83f8ff               cmp eax, -1
// 0081723f  7415                 je 0x817256
// 00817241  8bce                 mov ecx, esi
// 00817243  47                   inc edi
// 00817244  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0081724a  48                   dec eax
// 0081724b  3bf8                 cmp edi, eax
// 0081724d  7cc1                 jl 0x817210
// 0081724f  eb2f                 jmp 0x817280
// 00817251  e8b6c8fdff           call 0x7f3b0c
// 00817256  47                   inc edi
// 00817257  57                   push edi
// 00817258  8bce                 mov ecx, esi
// 0081725a  ff1510d59800         call dword ptr [0x98d510]
// 00817260  8ad8                 mov bl, al
// 00817262  885c241c             mov byte ptr [esp + 0x1c], bl
// 00817266  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081726a  51                   push ecx
// 0081726b  8d8c2490000000       lea ecx, [esp + 0x90]
// 00817272  ff15bcd79800         call dword ptr [0x98d7bc]
// 00817278  84db                 test bl, bl
// 0081727a  0f85e4000000         jne 0x817364
// 00817280  6a00                 push 0
// 00817282  8bce                 mov ecx, esi
// 00817284  ff1510d59800         call dword ptr [0x98d510]
// 0081728a  33d2                 xor edx, edx
// 0081728c  3c26                 cmp al, 0x26
// 0081728e  0f94c2               sete dl
// 00817291  8bce                 mov ecx, esi
// 00817293  8bfa                 mov edi, edx
// 00817295  57                   push edi
// 00817296  ff1510d59800         call dword ptr [0x98d510]
// 0081729c  6a00                 push 0
// 0081729e  8bcd                 mov ecx, ebp
// 008172a0  8ad8                 mov bl, al
// 008172a2  ff1510d59800         call dword ptr [0x98d510]
// 008172a8  3ad8                 cmp bl, al
// 008172aa  7501                 jne 0x8172ad
// 008172ac  47                   inc edi
// 008172ad  8bce                 mov ecx, esi
// 008172af  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008172b5  3bf8                 cmp edi, eax
// 008172b7  7d5a                 jge 0x817313
// 008172b9  8da42400000000       lea esp, [esp]
// 008172c0  6a00                 push 0
// 008172c2  57                   push edi
// 008172c3  8bce                 mov ecx, esi
// 008172c5  ff1510d59800         call dword ptr [0x98d510]
// 008172cb  0fb6c0               movzx eax, al
// 008172ce  50                   push eax
// 008172cf  8d8c2494000000       lea ecx, [esp + 0x94]
// 008172d6  ff1580d69800         call dword ptr [0x98d680]
// 008172dc  8bce                 mov ecx, esi
// 008172de  83f8ff               cmp eax, -1
// 008172e1  740d                 je 0x8172f0
// 008172e3  47                   inc edi
// 008172e4  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008172ea  3bf8                 cmp edi, eax
// 008172ec  7cd2                 jl 0x8172c0
// 008172ee  eb23                 jmp 0x817313
// 008172f0  57                   push edi
// 008172f1  ff1510d59800         call dword ptr [0x98d510]
// 008172f7  8ad8                 mov bl, al
// 008172f9  885c241c             mov byte ptr [esp + 0x1c], bl
// 008172fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00817301  51                   push ecx
// 00817302  8d8c2490000000       lea ecx, [esp + 0x90]
// 00817309  ff15bcd79800         call dword ptr [0x98d7bc]
// 0081730f  84db                 test bl, bl
// 00817311  7551                 jne 0x817364
// 00817313  8d4c2420             lea ecx, [esp + 0x20]
// 00817317  ff1574de9800         call dword ptr [0x98de74]
// 0081731d  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00817321  56                   push esi
// 00817322  8d542424             lea edx, [esp + 0x24]
// 00817326  68583f9f00           push 0x9f3f58
// 0081732b  52                   push edx
// 0081732c  c684248c00000005     mov byte ptr [esp + 0x8c], 5
// 00817334  ff157cde9800         call dword ptr [0x98de7c]
// 0081733a  83c40c               add esp, 0xc
// 0081733d  6a00                 push 0
// 0081733f  8d4c2424             lea ecx, [esp + 0x24]
// 00817343  ff1510d59800         call dword ptr [0x98d510]
// 00817349  46                   inc esi
// 0081734a  8d4c2420             lea ecx, [esp + 0x20]
// 0081734e  8844241c             mov byte ptr [esp + 0x1c], al
// 00817352  8974242c             mov dword ptr [esp + 0x2c], esi
// 00817356  c684248000000004     mov byte ptr [esp + 0x80], 4
// 0081735e  ff15c0de9800         call dword ptr [0x98dec0]
// 00817364  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00817368  50                   push eax
// 00817369  8bcd                 mov ecx, ebp
// 0081736b  ff15bcd79800         call dword ptr [0x98d7bc]
// 00817371  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00817375  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00817379  47                   inc edi
// 0081737a  3bfb                 cmp edi, ebx
// 0081737c  897c2434             mov dword ptr [esp + 0x34], edi
// 00817380  0f8c4ffeffff         jl 0x8171d5
// 00817386  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0081738d  ff15c0de9800         call dword ptr [0x98dec0]
// 00817393  8d4c2440             lea ecx, [esp + 0x40]
// 00817397  c684248000000002     mov byte ptr [esp + 0x80], 2
// 0081739f  e8fcd3ffff           call 0x8147a0
// 008173a4  8d4c2424             lea ecx, [esp + 0x24]
// 008173a8  c684248000000001     mov byte ptr [esp + 0x80], 1
// 008173b0  ff15c0de9800         call dword ptr [0x98dec0]
// 008173b6  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008173ba  3b742418             cmp esi, dword ptr [esp + 0x18]
// 008173be  0f8c00fdffff         jl 0x8170c4
// 008173c4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008173c8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008173cc  8bcb                 mov ecx, ebx
// 008173ce  e8cdcfffff           call 0x8143a0
// 008173d3  8944243c             mov dword ptr [esp + 0x3c], eax
// 008173d7  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 008173e2  85ff                 test edi, edi
// 008173e4  0f8eed010000         jle 0x8175d7
// 008173ea  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008173f1  85c0                 test eax, eax
// 008173f3  0f8c58feffff         jl 0x817251
// 008173f9  3b4334               cmp eax, dword ptr [ebx + 0x34]
// 008173fc  0f8d4ffeffff         jge 0x817251
// 00817402  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00817405  8b3481               mov esi, dword ptr [ecx + eax*4]
// 00817408  837e7000             cmp dword ptr [esi + 0x70], 0
// 0081740c  8d0481               lea eax, [ecx + eax*4]
// 0081740f  0f84a1010000         je 0x8175b6
// 00817415  8d54242c             lea edx, [esp + 0x2c]
// 00817419  8d7e54               lea edi, [esi + 0x54]
// 0081741c  52                   push edx
// 0081741d  8bcf                 mov ecx, edi
// 0081741f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00817425  50                   push eax
// 00817426  8bcf                 mov ecx, edi
// 00817428  ff1580de9800         call dword ptr [0x98de80]
// 0081742e  50                   push eax
// 0081742f  8b442478             mov eax, dword ptr [esp + 0x78]
// 00817433  50                   push eax
// 00817434  ff156cb19800         call dword ptr [0x98b16c]
// 0081743a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081743e  83c002               add eax, 2
// 00817441  83f80f               cmp eax, 0xf
// 00817444  8be8                 mov ebp, eax
// 00817446  7f05                 jg 0x81744d
// 00817448  bd0f000000           mov ebp, 0xf
// 0081744d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00817451  83c006               add eax, 6
// 00817454  83f810               cmp eax, 0x10
// 00817457  8bd8                 mov ebx, eax
// 00817459  7f05                 jg 0x817460
// 0081745b  bb10000000           mov ebx, 0x10
// 00817460  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00817463  894c2434             mov dword ptr [esp + 0x34], ecx
// 00817467  8b5668               mov edx, dword ptr [esi + 0x68]
// 0081746a  89542438             mov dword ptr [esp + 0x38], edx
// 0081746e  8b4660               mov eax, dword ptr [esi + 0x60]
// 00817471  50                   push eax
// 00817472  e899cefdff           call 0x7f4310
// 00817477  50                   push eax
// 00817478  e8c1c7fdff           call 0x7f3c3e
// 0081747d  83c408               add esp, 8
// 00817480  85c0                 test eax, eax
// 00817482  7516                 jne 0x81749a
// 00817484  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0081748b  8b4220               mov eax, dword ptr [edx + 0x20]
// 0081748e  8d4c2434             lea ecx, [esp + 0x34]
// 00817492  51                   push ecx
// 00817493  50                   push eax
// 00817494  ff1554cc9800         call dword ptr [0x98cc54]
// 0081749a  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0081749d  f6c104               test cl, 4
// 008174a0  740b                 je 0x8174ad
// 008174a2  8bc5                 mov eax, ebp
// 008174a4  99                   cdq 
// 008174a5  2bc2                 sub eax, edx
// 008174a7  8bf8                 mov edi, eax
// 008174a9  d1ff                 sar edi, 1
// 008174ab  eb0e                 jmp 0x8174bb
// 008174ad  8bd1                 mov edx, ecx
// 008174af  80e208               and dl, 8
// 008174b2  0fb6fa               movzx edi, dl
// 008174b5  f7df                 neg edi
// 008174b7  1bff                 sbb edi, edi
// 008174b9  23fd                 and edi, ebp
// 008174bb  f6c101               test cl, 1
// 008174be  7409                 je 0x8174c9
// 008174c0  8bc3                 mov eax, ebx
// 008174c2  99                   cdq 
// 008174c3  2bc2                 sub eax, edx
// 008174c5  d1f8                 sar eax, 1
// 008174c7  eb12                 jmp 0x8174db
// 008174c9  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008174ce  7509                 jne 0x8174d9
// 008174d0  f6c102               test cl, 2
// 008174d3  7504                 jne 0x8174d9
// 008174d5  33c0                 xor eax, eax
// 008174d7  eb02                 jmp 0x8174db
// 008174d9  8bc3                 mov eax, ebx
// 008174db  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008174df  8b542434             mov edx, dword ptr [esp + 0x34]
// 008174e3  2bd0                 sub edx, eax
// 008174e5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008174e9  2bcf                 sub ecx, edi
// 008174eb  89542440             mov dword ptr [esp + 0x40], edx
// 008174ef  03d3                 add edx, ebx
// 008174f1  894c2444             mov dword ptr [esp + 0x44], ecx
// 008174f5  03cd                 add ecx, ebp
// 008174f7  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 008174fe  89542448             mov dword ptr [esp + 0x48], edx
// 00817502  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00817506  740d                 je 0x817515
// 00817508  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0081750c  7507                 jne 0x817515
// 0081750e  bb01000000           mov ebx, 1
// 00817513  eb02                 jmp 0x817517
// 00817515  33db                 xor ebx, ebx
// 00817517  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0081751e  8b3e                 mov edi, dword ptr [esi]
// 00817520  6a00                 push 0
// 00817522  6a00                 push 0
// 00817524  51                   push ecx
// 00817525  8d54244c             lea edx, [esp + 0x4c]
// 00817529  52                   push edx
// 0081752a  6800000080           push 0x80000000
// 0081752f  6a00                 push 0
// 00817531  6a00                 push 0
// 00817533  6a00                 push 0
// 00817535  6a00                 push 0
// 00817537  6800080000           push 0x800
// 0081753c  83c760               add edi, 0x60
// 0081753f  e8e2ccfdff           call 0x7f4226
// 00817544  8b17                 mov edx, dword ptr [edi]
// 00817546  50                   push eax
// 00817547  8bc3                 mov eax, ebx
// 00817549  f7d8                 neg eax
// 0081754b  1bc0                 sbb eax, eax
// 0081754d  2500000800           and eax, 0x80000
// 00817552  0d80000000           or eax, 0x80
// 00817557  50                   push eax
// 00817558  8bce                 mov ecx, esi
// 0081755a  ffd2                 call edx
// 0081755c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00817560  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00817564  8b542448             mov edx, dword ptr [esp + 0x48]
// 00817568  6810020000           push 0x210
// 0081756d  2bc8                 sub ecx, eax
// 0081756f  51                   push ecx
// 00817570  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00817574  2bd1                 sub edx, ecx
// 00817576  52                   push edx
// 00817577  50                   push eax
// 00817578  a180d79800           mov eax, dword ptr [0x98d780]
// 0081757d  51                   push ecx
// 0081757e  50                   push eax
// 0081757f  8bce                 mov ecx, esi
// 00817581  e8a6c6fdff           call 0x7f3c2c
// 00817586  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081758a  8b11                 mov edx, dword ptr [ecx]
// 0081758c  8b820c010000         mov eax, dword ptr [edx + 0x10c]
// 00817592  6a01                 push 1
// 00817594  56                   push esi
// 00817595  6a00                 push 0
// 00817597  ffd0                 call eax
// 00817599  85db                 test ebx, ebx
// 0081759b  7419                 je 0x8175b6
// 0081759d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008175a0  8b542428             mov edx, dword ptr [esp + 0x28]
// 008175a4  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 008175aa  6a02                 push 2
// 008175ac  6896000000           push 0x96
// 008175b1  6a00                 push 0
// 008175b3  51                   push ecx
// 008175b4  ffd0                 call eax
// 008175b6  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008175bd  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008175c1  40                   inc eax
// 008175c2  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008175c6  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 008175cd  0f8c1efeffff         jl 0x8173f1
// 008175d3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008175d7  33f6                 xor esi, esi
// 008175d9  85ff                 test edi, edi
// 008175db  7e3b                 jle 0x817618
// 008175dd  8d4900               lea ecx, [ecx]
// 008175e0  85f6                 test esi, esi
// 008175e2  0f8c69fcffff         jl 0x817251
// 008175e8  3b7334               cmp esi, dword ptr [ebx + 0x34]
// 008175eb  0f8d60fcffff         jge 0x817251
// 008175f1  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 008175f4  8d04b1               lea eax, [ecx + esi*4]
// 008175f7  8b08                 mov ecx, dword ptr [eax]
// 008175f9  83797000             cmp dword ptr [ecx + 0x70], 0
// 008175fd  7414                 je 0x817613
// 008175ff  6857020000           push 0x257
// 00817604  6a00                 push 0
// 00817606  6a00                 push 0
// 00817608  6a00                 push 0
// 0081760a  6a00                 push 0
// 0081760c  6a00                 push 0
// 0081760e  e819c6fdff           call 0x7f3c2c
// 00817613  46                   inc esi
// 00817614  3bf7                 cmp esi, edi
// 00817616  7cc8                 jl 0x8175e0
// 00817618  8d4c2454             lea ecx, [esp + 0x54]
// 0081761c  c684248000000000     mov byte ptr [esp + 0x80], 0
// 00817624  e8b7400300           call 0x84b6e0
// 00817629  8d4c2464             lea ecx, [esp + 0x64]
// 0081762d  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 00817638  e893d0fdff           call 0x7f46d0
// 0081763d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00817641  64890d00000000       mov dword ptr fs:[0], ecx
// 00817648  59                   pop ecx
// 00817649  5f                   pop edi
// 0081764a  5e                   pop esi
// 0081764b  5d                   pop ebp
// 0081764c  5b                   pop ebx
// 0081764d  83c470               add esp, 0x70
// 00817650  c20800               ret 8
// copied from an identical function in another client (function ?ShowKeyboardTips@CXTPCommandBars@@QAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp