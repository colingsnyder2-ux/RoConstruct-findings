// roc 2007-08 004c0d50  unit: RakPeer  size: 1284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c0d50
//
// 004c0d50  81eca0000000         sub esp, 0xa0
// 004c0d56  56                   push esi
// 004c0d57  57                   push edi
// 004c0d58  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 004c0d5f  33f6                 xor esi, esi
// 004c0d61  0fb78658eb7900       movzx eax, word ptr [esi + 0x79eb58]
// 004c0d68  8d4c2438             lea ecx, [esp + 0x38]
// 004c0d6c  51                   push ecx
// 004c0d6d  8bd1                 mov edx, ecx
// 004c0d6f  8944243c             mov dword ptr [esp + 0x3c], eax
// 004c0d73  33c0                 xor eax, eax
// 004c0d75  52                   push edx
// 004c0d76  57                   push edi
// 004c0d77  89442448             mov dword ptr [esp + 0x48], eax
// 004c0d7b  8944244c             mov dword ptr [esp + 0x4c], eax
// 004c0d7f  89442450             mov dword ptr [esp + 0x50], eax
// 004c0d83  83c602               add esi, 2
// 004c0d86  e875b4ffff           call 0x4bc200
// 004c0d8b  83c40c               add esp, 0xc
// 004c0d8e  33c0                 xor eax, eax
// 004c0d90  837c843800           cmp dword ptr [esp + eax*4 + 0x38], 0
// 004c0d95  7513                 jne 0x4c0daa
// 004c0d97  83c001               add eax, 1
// 004c0d9a  83f804               cmp eax, 4
// 004c0d9d  72f1                 jb 0x4c0d90
// 004c0d9f  5f                   pop edi
// 004c0da0  32c0                 xor al, al
// 004c0da2  5e                   pop esi
// 004c0da3  81c4a0000000         add esp, 0xa0
// 004c0da9  c3                   ret 
// 004c0daa  83c602               add esi, 2
// 004c0dad  81fe00020000         cmp esi, 0x200
// 004c0db3  72ac                 jb 0x4c0d61
// 004c0db5  8b07                 mov eax, dword ptr [edi]
// 004c0db7  8b4f04               mov ecx, dword ptr [edi + 4]
// 004c0dba  8b5708               mov edx, dword ptr [edi + 8]
// 004c0dbd  89442408             mov dword ptr [esp + 8], eax
// 004c0dc1  8b470c               mov eax, dword ptr [edi + 0xc]
// 004c0dc4  894c240c             mov dword ptr [esp + 0xc], ecx
// 004c0dc8  89542410             mov dword ptr [esp + 0x10], edx
// 004c0dcc  89442414             mov dword ptr [esp + 0x14], eax
// 004c0dd0  33c9                 xor ecx, ecx
// 004c0dd2  8b448c08             mov eax, dword ptr [esp + ecx*4 + 8]
// 004c0dd6  85c0                 test eax, eax
// 004c0dd8  8d50ff               lea edx, [eax - 1]
// 004c0ddb  89548c08             mov dword ptr [esp + ecx*4 + 8], edx
// 004c0ddf  7508                 jne 0x4c0de9
// 004c0de1  83c101               add ecx, 1
// 004c0de4  83f904               cmp ecx, 4
// 004c0de7  72e9                 jb 0x4c0dd2
// 004c0de9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c0ded  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c0df1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c0df5  53                   push ebx
// 004c0df6  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c0dfa  55                   push ebp
// 004c0dfb  33ed                 xor ebp, ebp
// 004c0dfd  f6c301               test bl, 1
// 004c0e00  895c2430             mov dword ptr [esp + 0x30], ebx
// 004c0e04  89742434             mov dword ptr [esp + 0x34], esi
// 004c0e08  89542438             mov dword ptr [esp + 0x38], edx
// 004c0e0c  897c243c             mov dword ptr [esp + 0x3c], edi
// 004c0e10  7535                 jne 0x4c0e47
// 004c0e12  8bc7                 mov eax, edi
// 004c0e14  c1e01f               shl eax, 0x1f
// 004c0e17  8bca                 mov ecx, edx
// 004c0e19  d1ea                 shr edx, 1
// 004c0e1b  0bd0                 or edx, eax
// 004c0e1d  8bc6                 mov eax, esi
// 004c0e1f  c1e01f               shl eax, 0x1f
// 004c0e22  d1eb                 shr ebx, 1
// 004c0e24  c1e11f               shl ecx, 0x1f
// 004c0e27  d1ee                 shr esi, 1
// 004c0e29  0bd8                 or ebx, eax
// 004c0e2b  d1ef                 shr edi, 1
// 004c0e2d  0bf1                 or esi, ecx
// 004c0e2f  83c501               add ebp, 1
// 004c0e32  f6c301               test bl, 1
// 004c0e35  74db                 je 0x4c0e12
// 004c0e37  895c2430             mov dword ptr [esp + 0x30], ebx
// 004c0e3b  89742434             mov dword ptr [esp + 0x34], esi
// 004c0e3f  89542438             mov dword ptr [esp + 0x38], edx
// 004c0e43  897c243c             mov dword ptr [esp + 0x3c], edi
// 004c0e47  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 004c0e4e  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004c0e51  8b5308               mov edx, dword ptr [ebx + 8]
// 004c0e54  33c0                 xor eax, eax
// 004c0e56  89442454             mov dword ptr [esp + 0x54], eax
// 004c0e5a  89442458             mov dword ptr [esp + 0x58], eax
// 004c0e5e  8944245c             mov dword ptr [esp + 0x5c], eax
// 004c0e62  8b03                 mov eax, dword ptr [ebx]
// 004c0e64  89442460             mov dword ptr [esp + 0x60], eax
// 004c0e68  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004c0e6b  8944246c             mov dword ptr [esp + 0x6c], eax
// 004c0e6f  33c0                 xor eax, eax
// 004c0e71  398424b8000000       cmp dword ptr [esp + 0xb8], eax
// 004c0e78  c744245001000000     mov dword ptr [esp + 0x50], 1
// 004c0e80  894c2464             mov dword ptr [esp + 0x64], ecx
// 004c0e84  89542468             mov dword ptr [esp + 0x68], edx
// 004c0e88  89442470             mov dword ptr [esp + 0x70], eax
// 004c0e8c  89442474             mov dword ptr [esp + 0x74], eax
// 004c0e90  89442478             mov dword ptr [esp + 0x78], eax
// 004c0e94  8944247c             mov dword ptr [esp + 0x7c], eax
// 004c0e98  0f849c030000         je 0x4c123a
// 004c0e9e  8bff                 mov edi, edi
// 004c0ea0  83ac24b800000001     sub dword ptr [esp + 0xb8], 1
// 004c0ea8  33f6                 xor esi, esi
// 004c0eaa  8d9b00000000         lea ebx, [ebx]
// 004c0eb0  e88b940000           call 0x4ca340
// 004c0eb5  8984b480000000       mov dword ptr [esp + esi*4 + 0x80], eax
// 004c0ebc  83c601               add esi, 1
// 004c0ebf  83fe04               cmp esi, 4
// 004c0ec2  7cec                 jl 0x4c0eb0
// 004c0ec4  8d8c2480000000       lea ecx, [esp + 0x80]
// 004c0ecb  51                   push ecx
// 004c0ecc  8d542414             lea edx, [esp + 0x14]
// 004c0ed0  52                   push edx
// 004c0ed1  8bc1                 mov eax, ecx
// 004c0ed3  50                   push eax
// 004c0ed4  e827b3ffff           call 0x4bc200
// 004c0ed9  8d4c242c             lea ecx, [esp + 0x2c]
// 004c0edd  51                   push ecx
// 004c0ede  53                   push ebx
// 004c0edf  8d542444             lea edx, [esp + 0x44]
// 004c0ee3  52                   push edx
// 004c0ee4  8d842498000000       lea eax, [esp + 0x98]
// 004c0eeb  50                   push eax
// 004c0eec  e8cfd1ffff           call 0x4be0c0
// 004c0ef1  83c41c               add esp, 0x1c
// 004c0ef4  b810000000           mov eax, 0x10
// 004c0ef9  8d4c2450             lea ecx, [esp + 0x50]
// 004c0efd  8d542420             lea edx, [esp + 0x20]
// 004c0f01  8b32                 mov esi, dword ptr [edx]
// 004c0f03  3b31                 cmp esi, dword ptr [ecx]
// 004c0f05  7512                 jne 0x4c0f19
// 004c0f07  83e804               sub eax, 4
// 004c0f0a  83c104               add ecx, 4
// 004c0f0d  83c204               add edx, 4
// 004c0f10  83f804               cmp eax, 4
// 004c0f13  73ec                 jae 0x4c0f01
// 004c0f15  85c0                 test eax, eax
// 004c0f17  745d                 je 0x4c0f76
// 004c0f19  0fb632               movzx esi, byte ptr [edx]
// 004c0f1c  0fb639               movzx edi, byte ptr [ecx]
// 004c0f1f  2bf7                 sub esi, edi
// 004c0f21  7545                 jne 0x4c0f68
// 004c0f23  83e801               sub eax, 1
// 004c0f26  83c101               add ecx, 1
// 004c0f29  83c201               add edx, 1
// 004c0f2c  85c0                 test eax, eax
// 004c0f2e  7446                 je 0x4c0f76
// 004c0f30  0fb632               movzx esi, byte ptr [edx]
// 004c0f33  0fb639               movzx edi, byte ptr [ecx]
// 004c0f36  2bf7                 sub esi, edi
// 004c0f38  752e                 jne 0x4c0f68
// 004c0f3a  83e801               sub eax, 1
// 004c0f3d  83c101               add ecx, 1
// 004c0f40  83c201               add edx, 1
// 004c0f43  85c0                 test eax, eax
// 004c0f45  742f                 je 0x4c0f76
// 004c0f47  0fb632               movzx esi, byte ptr [edx]
// 004c0f4a  0fb639               movzx edi, byte ptr [ecx]
// 004c0f4d  2bf7                 sub esi, edi
// 004c0f4f  7517                 jne 0x4c0f68
// 004c0f51  83e801               sub eax, 1
// 004c0f54  83c101               add ecx, 1
// 004c0f57  83c201               add edx, 1
// 004c0f5a  85c0                 test eax, eax
// 004c0f5c  7418                 je 0x4c0f76
// 004c0f5e  0fb632               movzx esi, byte ptr [edx]
// 004c0f61  0fb609               movzx ecx, byte ptr [ecx]
// 004c0f64  2bf1                 sub esi, ecx
// 004c0f66  740e                 je 0x4c0f76
// 004c0f68  85f6                 test esi, esi
// 004c0f6a  b801000000           mov eax, 1
// 004c0f6f  7f07                 jg 0x4c0f78
// 004c0f71  83c8ff               or eax, 0xffffffff
// 004c0f74  eb02                 jmp 0x4c0f78
// 004c0f76  33c0                 xor eax, eax
// 004c0f78  85c0                 test eax, eax
// 004c0f7a  0f84ac020000         je 0x4c122c
// 004c0f80  b810000000           mov eax, 0x10
// 004c0f85  8d4c2410             lea ecx, [esp + 0x10]
// 004c0f89  8d542420             lea edx, [esp + 0x20]
// 004c0f8d  8d4900               lea ecx, [ecx]
// 004c0f90  8b32                 mov esi, dword ptr [edx]
// 004c0f92  3b31                 cmp esi, dword ptr [ecx]
// 004c0f94  7512                 jne 0x4c0fa8
// 004c0f96  83e804               sub eax, 4
// 004c0f99  83c104               add ecx, 4
// 004c0f9c  83c204               add edx, 4
// 004c0f9f  83f804               cmp eax, 4
// 004c0fa2  73ec                 jae 0x4c0f90
// 004c0fa4  85c0                 test eax, eax
// 004c0fa6  745d                 je 0x4c1005
// 004c0fa8  0fb632               movzx esi, byte ptr [edx]
// 004c0fab  0fb639               movzx edi, byte ptr [ecx]
// 004c0fae  2bf7                 sub esi, edi
// 004c0fb0  7545                 jne 0x4c0ff7
// 004c0fb2  83e801               sub eax, 1
// 004c0fb5  83c101               add ecx, 1
// 004c0fb8  83c201               add edx, 1
// 004c0fbb  85c0                 test eax, eax
// 004c0fbd  7446                 je 0x4c1005
// 004c0fbf  0fb632               movzx esi, byte ptr [edx]
// 004c0fc2  0fb639               movzx edi, byte ptr [ecx]
// 004c0fc5  2bf7                 sub esi, edi
// 004c0fc7  752e                 jne 0x4c0ff7
// 004c0fc9  83e801               sub eax, 1
// 004c0fcc  83c101               add ecx, 1
// 004c0fcf  83c201               add edx, 1
// 004c0fd2  85c0                 test eax, eax
// 004c0fd4  742f                 je 0x4c1005
// 004c0fd6  0fb632               movzx esi, byte ptr [edx]
// 004c0fd9  0fb639               movzx edi, byte ptr [ecx]
// 004c0fdc  2bf7                 sub esi, edi
// 004c0fde  7517                 jne 0x4c0ff7
// 004c0fe0  83e801               sub eax, 1
// 004c0fe3  83c101               add ecx, 1
// 004c0fe6  83c201               add edx, 1
// 004c0fe9  85c0                 test eax, eax
// 004c0feb  7418                 je 0x4c1005
// 004c0fed  0fb632               movzx esi, byte ptr [edx]
// 004c0ff0  0fb611               movzx edx, byte ptr [ecx]
// 004c0ff3  2bf2                 sub esi, edx
// 004c0ff5  740e                 je 0x4c1005
// 004c0ff7  85f6                 test esi, esi
// 004c0ff9  b801000000           mov eax, 1
// 004c0ffe  7f07                 jg 0x4c1007
// 004c1000  83c8ff               or eax, 0xffffffff
// 004c1003  eb02                 jmp 0x4c1007
// 004c1005  33c0                 xor eax, eax
// 004c1007  85c0                 test eax, eax
// 004c1009  0f841d020000         je 0x4c122c
// 004c100f  83fd01               cmp ebp, 1
// 004c1012  8bfd                 mov edi, ebp
// 004c1014  0f868a010000         jbe 0x4c11a4
// 004c101a  8d9b00000000         lea ebx, [ebx]
// 004c1020  83ef01               sub edi, 1
// 004c1023  b810000000           mov eax, 0x10
// 004c1028  8d4c2410             lea ecx, [esp + 0x10]
// 004c102c  8d542420             lea edx, [esp + 0x20]
// 004c1030  8b32                 mov esi, dword ptr [edx]
// 004c1032  3b31                 cmp esi, dword ptr [ecx]
// 004c1034  7512                 jne 0x4c1048
// 004c1036  83e804               sub eax, 4
// 004c1039  83c104               add ecx, 4
// 004c103c  83c204               add edx, 4
// 004c103f  83f804               cmp eax, 4
// 004c1042  73ec                 jae 0x4c1030
// 004c1044  85c0                 test eax, eax
// 004c1046  745d                 je 0x4c10a5
// 004c1048  0fb632               movzx esi, byte ptr [edx]
// 004c104b  0fb619               movzx ebx, byte ptr [ecx]
// 004c104e  2bf3                 sub esi, ebx
// 004c1050  7545                 jne 0x4c1097
// 004c1052  83e801               sub eax, 1
// 004c1055  83c101               add ecx, 1
// 004c1058  83c201               add edx, 1
// 004c105b  85c0                 test eax, eax
// 004c105d  7446                 je 0x4c10a5
// 004c105f  0fb632               movzx esi, byte ptr [edx]
// 004c1062  0fb619               movzx ebx, byte ptr [ecx]
// 004c1065  2bf3                 sub esi, ebx
// 004c1067  752e                 jne 0x4c1097
// 004c1069  83e801               sub eax, 1
// 004c106c  83c101               add ecx, 1
// 004c106f  83c201               add edx, 1
// 004c1072  85c0                 test eax, eax
// 004c1074  742f                 je 0x4c10a5
// 004c1076  0fb632               movzx esi, byte ptr [edx]
// 004c1079  0fb619               movzx ebx, byte ptr [ecx]
// 004c107c  2bf3                 sub esi, ebx
// 004c107e  7517                 jne 0x4c1097
// 004c1080  83e801               sub eax, 1
// 004c1083  83c101               add ecx, 1
// 004c1086  83c201               add edx, 1
// 004c1089  85c0                 test eax, eax
// 004c108b  7418                 je 0x4c10a5
// 004c108d  0fb632               movzx esi, byte ptr [edx]
// 004c1090  0fb601               movzx eax, byte ptr [ecx]
// 004c1093  2bf0                 sub esi, eax
// 004c1095  740e                 je 0x4c10a5
// 004c1097  85f6                 test esi, esi
// 004c1099  b801000000           mov eax, 1
// 004c109e  7f07                 jg 0x4c10a7
// 004c10a0  83c8ff               or eax, 0xffffffff
// 004c10a3  eb02                 jmp 0x4c10a7
// 004c10a5  33c0                 xor eax, eax
// 004c10a7  85c0                 test eax, eax
// 004c10a9  0f84ee000000         je 0x4c119d
// 004c10af  8d8c2490000000       lea ecx, [esp + 0x90]
// 004c10b6  51                   push ecx
// 004c10b7  8d542424             lea edx, [esp + 0x24]
// 004c10bb  52                   push edx
// 004c10bc  8bc2                 mov eax, edx
// 004c10be  50                   push eax
// 004c10bf  e80c9dffff           call 0x4badd0
// 004c10c4  8d8c249c000000       lea ecx, [esp + 0x9c]
// 004c10cb  51                   push ecx
// 004c10cc  8d542470             lea edx, [esp + 0x70]
// 004c10d0  52                   push edx
// 004c10d1  8bc1                 mov eax, ecx
// 004c10d3  50                   push eax
// 004c10d4  e897a2ffff           call 0x4bb370
// 004c10d9  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 004c10e0  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004c10e7  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 004c10ee  894c2438             mov dword ptr [esp + 0x38], ecx
// 004c10f2  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 004c10f9  8954243c             mov dword ptr [esp + 0x3c], edx
// 004c10fd  89442440             mov dword ptr [esp + 0x40], eax
// 004c1101  894c2444             mov dword ptr [esp + 0x44], ecx
// 004c1105  83c418               add esp, 0x18
// 004c1108  b810000000           mov eax, 0x10
// 004c110d  8d4c2450             lea ecx, [esp + 0x50]
// 004c1111  8d542420             lea edx, [esp + 0x20]
// 004c1115  8b32                 mov esi, dword ptr [edx]
// 004c1117  3b31                 cmp esi, dword ptr [ecx]
// 004c1119  7512                 jne 0x4c112d
// 004c111b  83e804               sub eax, 4
// 004c111e  83c104               add ecx, 4
// 004c1121  83c204               add edx, 4
// 004c1124  83f804               cmp eax, 4
// 004c1127  73ec                 jae 0x4c1115
// 004c1129  85c0                 test eax, eax
// 004c112b  745d                 je 0x4c118a
// 004c112d  0fb632               movzx esi, byte ptr [edx]
// 004c1130  0fb619               movzx ebx, byte ptr [ecx]
// 004c1133  2bf3                 sub esi, ebx
// 004c1135  7545                 jne 0x4c117c
// 004c1137  83e801               sub eax, 1
// 004c113a  83c101               add ecx, 1
// 004c113d  83c201               add edx, 1
// 004c1140  85c0                 test eax, eax
// 004c1142  7446                 je 0x4c118a
// 004c1144  0fb632               movzx esi, byte ptr [edx]
// 004c1147  0fb619               movzx ebx, byte ptr [ecx]
// 004c114a  2bf3                 sub esi, ebx
// 004c114c  752e                 jne 0x4c117c
// 004c114e  83e801               sub eax, 1
// 004c1151  83c101               add ecx, 1
// 004c1154  83c201               add edx, 1
// 004c1157  85c0                 test eax, eax
// 004c1159  742f                 je 0x4c118a
// 004c115b  0fb632               movzx esi, byte ptr [edx]
// 004c115e  0fb619               movzx ebx, byte ptr [ecx]
// 004c1161  2bf3                 sub esi, ebx
// 004c1163  7517                 jne 0x4c117c
// 004c1165  83e801               sub eax, 1
// 004c1168  83c101               add ecx, 1
// 004c116b  83c201               add edx, 1
// 004c116e  85c0                 test eax, eax
// 004c1170  7418                 je 0x4c118a
// 004c1172  0fb632               movzx esi, byte ptr [edx]
// 004c1175  0fb611               movzx edx, byte ptr [ecx]
// 004c1178  2bf2                 sub esi, edx
// 004c117a  740e                 je 0x4c118a
// 004c117c  85f6                 test esi, esi
// 004c117e  b801000000           mov eax, 1
// 004c1183  7f07                 jg 0x4c118c
// 004c1185  83c8ff               or eax, 0xffffffff
// 004c1188  eb02                 jmp 0x4c118c
// 004c118a  33c0                 xor eax, eax
// 004c118c  85c0                 test eax, eax
// 004c118e  0f84b3000000         je 0x4c1247
// 004c1194  83ff01               cmp edi, 1
// 004c1197  0f8783feffff         ja 0x4c1020
// 004c119d  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 004c11a4  b810000000           mov eax, 0x10
// 004c11a9  8d4c2410             lea ecx, [esp + 0x10]
// 004c11ad  8d542420             lea edx, [esp + 0x20]
// 004c11b1  8b32                 mov esi, dword ptr [edx]
// 004c11b3  3b31                 cmp esi, dword ptr [ecx]
// 004c11b5  7512                 jne 0x4c11c9
// 004c11b7  83e804               sub eax, 4
// 004c11ba  83c104               add ecx, 4
// 004c11bd  83c204               add edx, 4
// 004c11c0  83f804               cmp eax, 4
// 004c11c3  73ec                 jae 0x4c11b1
// 004c11c5  85c0                 test eax, eax
// 004c11c7  745d                 je 0x4c1226
// 004c11c9  0fb632               movzx esi, byte ptr [edx]
// 004c11cc  0fb639               movzx edi, byte ptr [ecx]
// 004c11cf  2bf7                 sub esi, edi
// 004c11d1  7545                 jne 0x4c1218
// 004c11d3  83e801               sub eax, 1
// 004c11d6  83c101               add ecx, 1
// 004c11d9  83c201               add edx, 1
// 004c11dc  85c0                 test eax, eax
// 004c11de  7446                 je 0x4c1226
// 004c11e0  0fb632               movzx esi, byte ptr [edx]
// 004c11e3  0fb639               movzx edi, byte ptr [ecx]
// 004c11e6  2bf7                 sub esi, edi
// 004c11e8  752e                 jne 0x4c1218
// 004c11ea  83e801               sub eax, 1
// 004c11ed  83c101               add ecx, 1
// 004c11f0  83c201               add edx, 1
// 004c11f3  85c0                 test eax, eax
// 004c11f5  742f                 je 0x4c1226
// 004c11f7  0fb632               movzx esi, byte ptr [edx]
// 004c11fa  0fb639               movzx edi, byte ptr [ecx]
// 004c11fd  2bf7                 sub esi, edi
// 004c11ff  7517                 jne 0x4c1218
// 004c1201  83e801               sub eax, 1
// 004c1204  83c101               add ecx, 1
// 004c1207  83c201               add edx, 1
// 004c120a  85c0                 test eax, eax
// 004c120c  7418                 je 0x4c1226
// 004c120e  0fb632               movzx esi, byte ptr [edx]
// 004c1211  0fb601               movzx eax, byte ptr [ecx]
// 004c1214  2bf0                 sub esi, eax
// 004c1216  740e                 je 0x4c1226
// 004c1218  85f6                 test esi, esi
// 004c121a  b801000000           mov eax, 1
// 004c121f  7f07                 jg 0x4c1228
// 004c1221  83c8ff               or eax, 0xffffffff
// 004c1224  eb02                 jmp 0x4c1228
// 004c1226  33c0                 xor eax, eax
// 004c1228  85c0                 test eax, eax
// 004c122a  751b                 jne 0x4c1247
// 004c122c  83bc24b800000000     cmp dword ptr [esp + 0xb8], 0
// 004c1234  0f8566fcffff         jne 0x4c0ea0
// 004c123a  5d                   pop ebp
// 004c123b  5b                   pop ebx
// 004c123c  5f                   pop edi
// 004c123d  b001                 mov al, 1
// 004c123f  5e                   pop esi
// 004c1240  81c4a0000000         add esp, 0xa0
// 004c1246  c3                   ret 
// 004c1247  5d                   pop ebp
// 004c1248  5b                   pop ebx
// 004c1249  5f                   pop edi
// 004c124a  32c0                 xor al, al
// 004c124c  5e                   pop esi
// 004c124d  81c4a0000000         add esp, 0xa0
// 004c1253  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$RabinMillerPrimalityTest@$$BY03I@big@@YA_NAAY03II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
