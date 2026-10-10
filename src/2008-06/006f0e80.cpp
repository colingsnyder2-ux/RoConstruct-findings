// roc 2008-06 006f0e80  unit: CXTPPopupBar  size: 1209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0e80
//
// 006f0e80  83ec48               sub esp, 0x48
// 006f0e83  53                   push ebx
// 006f0e84  8b1d6c2d8000         mov ebx, dword ptr [0x802d6c]
// 006f0e8a  56                   push esi
// 006f0e8b  57                   push edi
// 006f0e8c  8bf1                 mov esi, ecx
// 006f0e8e  8dbe8c010000         lea edi, [esi + 0x18c]
// 006f0e94  57                   push edi
// 006f0e95  ffd3                 call ebx
// 006f0e97  85c0                 test eax, eax
// 006f0e99  741a                 je 0x6f0eb5
// 006f0e9b  8d8684010000         lea eax, [esi + 0x184]
// 006f0ea1  50                   push eax
// 006f0ea2  8d4c2418             lea ecx, [esp + 0x18]
// 006f0ea6  51                   push ecx
// 006f0ea7  e8d481ffff           call 0x6e9080
// 006f0eac  8bc8                 mov ecx, eax
// 006f0eae  e8dd7cffff           call 0x6e8b90
// 006f0eb3  eb12                 jmp 0x6f0ec7
// 006f0eb5  8d542444             lea edx, [esp + 0x44]
// 006f0eb9  57                   push edi
// 006f0eba  52                   push edx
// 006f0ebb  e8c081ffff           call 0x6e9080
// 006f0ec0  8bc8                 mov ecx, eax
// 006f0ec2  e8197dffff           call 0x6e8be0
// 006f0ec7  8b08                 mov ecx, dword ptr [eax]
// 006f0ec9  894c2424             mov dword ptr [esp + 0x24], ecx
// 006f0ecd  8b5004               mov edx, dword ptr [eax + 4]
// 006f0ed0  89542428             mov dword ptr [esp + 0x28], edx
// 006f0ed4  8b4808               mov ecx, dword ptr [eax + 8]
// 006f0ed7  894c242c             mov dword ptr [esp + 0x2c], ecx
// 006f0edb  8b500c               mov edx, dword ptr [eax + 0xc]
// 006f0ede  57                   push edi
// 006f0edf  89542434             mov dword ptr [esp + 0x34], edx
// 006f0ee3  ffd3                 call ebx
// 006f0ee5  85c0                 test eax, eax
// 006f0ee7  741a                 je 0x6f0f03
// 006f0ee9  8d8684010000         lea eax, [esi + 0x184]
// 006f0eef  50                   push eax
// 006f0ef0  8d4c2448             lea ecx, [esp + 0x48]
// 006f0ef4  51                   push ecx
// 006f0ef5  e88681ffff           call 0x6e9080
// 006f0efa  8bc8                 mov ecx, eax
// 006f0efc  e8bf7bffff           call 0x6e8ac0
// 006f0f01  eb12                 jmp 0x6f0f15
// 006f0f03  8d542414             lea edx, [esp + 0x14]
// 006f0f07  57                   push edi
// 006f0f08  52                   push edx
// 006f0f09  e87281ffff           call 0x6e9080
// 006f0f0e  8bc8                 mov ecx, eax
// 006f0f10  e8fb7bffff           call 0x6e8b10
// 006f0f15  8b08                 mov ecx, dword ptr [eax]
// 006f0f17  894c2434             mov dword ptr [esp + 0x34], ecx
// 006f0f1b  8b5004               mov edx, dword ptr [eax + 4]
// 006f0f1e  89542438             mov dword ptr [esp + 0x38], edx
// 006f0f22  8b4808               mov ecx, dword ptr [eax + 8]
// 006f0f25  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006f0f29  8b500c               mov edx, dword ptr [eax + 0xc]
// 006f0f2c  57                   push edi
// 006f0f2d  89542444             mov dword ptr [esp + 0x44], edx
// 006f0f31  ffd3                 call ebx
// 006f0f33  85c0                 test eax, eax
// 006f0f35  7458                 je 0x6f0f8f
// 006f0f37  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 006f0f3d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006f0f43  8b1d2c2d8000         mov ebx, dword ptr [0x802d2c]
// 006f0f49  50                   push eax
// 006f0f4a  51                   push ecx
// 006f0f4b  8d54243c             lea edx, [esp + 0x3c]
// 006f0f4f  52                   push edx
// 006f0f50  ffd3                 call ebx
// 006f0f52  85c0                 test eax, eax
// 006f0f54  7439                 je 0x6f0f8f
// 006f0f56  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 006f0f5c  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006f0f62  50                   push eax
// 006f0f63  51                   push ecx
// 006f0f64  8d54242c             lea edx, [esp + 0x2c]
// 006f0f68  52                   push edx
// 006f0f69  ffd3                 call ebx
// 006f0f6b  85c0                 test eax, eax
// 006f0f6d  7520                 jne 0x6f0f8f
// 006f0f6f  8b442434             mov eax, dword ptr [esp + 0x34]
// 006f0f73  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006f0f77  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006f0f7b  89442424             mov dword ptr [esp + 0x24], eax
// 006f0f7f  8b442440             mov eax, dword ptr [esp + 0x40]
// 006f0f83  894c2428             mov dword ptr [esp + 0x28], ecx
// 006f0f87  8954242c             mov dword ptr [esp + 0x2c], edx
// 006f0f8b  89442430             mov dword ptr [esp + 0x30], eax
// 006f0f8f  8b470c               mov eax, dword ptr [edi + 0xc]
// 006f0f92  034704               add eax, dword ptr [edi + 4]
// 006f0f95  836c243005           sub dword ptr [esp + 0x30], 5
// 006f0f9a  99                   cdq 
// 006f0f9b  2bc2                 sub eax, edx
// 006f0f9d  55                   push ebp
// 006f0f9e  8bd8                 mov ebx, eax
// 006f0fa0  33ed                 xor ebp, ebp
// 006f0fa2  8bce                 mov ecx, esi
// 006f0fa4  d1fb                 sar ebx, 1
// 006f0fa6  896c2414             mov dword ptr [esp + 0x14], ebp
// 006f0faa  e8613efcff           call 0x6b4e10
// 006f0faf  3bc5                 cmp eax, ebp
// 006f0fb1  740b                 je 0x6f0fbe
// 006f0fb3  8b4874               mov ecx, dword ptr [eax + 0x74]
// 006f0fb6  39a988000000         cmp dword ptr [ecx + 0x88], ebp
// 006f0fbc  750c                 jne 0x6f0fca
// 006f0fbe  896c2410             mov dword ptr [esp + 0x10], ebp
// 006f0fc2  39ae6c010000         cmp dword ptr [esi + 0x16c], ebp
// 006f0fc8  7408                 je 0x6f0fd2
// 006f0fca  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006f0fd2  8b570c               mov edx, dword ptr [edi + 0xc]
// 006f0fd5  2b5704               sub edx, dword ptr [edi + 4]
// 006f0fd8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f0fdc  7545                 jne 0x6f1023
// 006f0fde  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 006f0fe4  3bc1                 cmp eax, ecx
// 006f0fe6  7e3b                 jle 0x6f1023
// 006f0fe8  2b442464             sub eax, dword ptr [esp + 0x64]
// 006f0fec  898688010000         mov dword ptr [esi + 0x188], eax
// 006f0ff2  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 006f0ff6  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 006f0ffc  83f803               cmp eax, 3
// 006f0fff  0f85f6010000         jne 0x6f11fb
// 006f1005  8b4f08               mov ecx, dword ptr [edi + 8]
// 006f1008  2b0f                 sub ecx, dword ptr [edi]
// 006f100a  0f84eb010000         je 0x6f11fb
// 006f1010  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 006f1016  2bd3                 sub edx, ebx
// 006f1018  899684010000         mov dword ptr [esi + 0x184], edx
// 006f101e  e903020000           jmp 0x6f1226
// 006f1023  8bae88010000         mov ebp, dword ptr [esi + 0x188]
// 006f1029  8b542464             mov edx, dword ptr [esp + 0x64]
// 006f102d  8d042a               lea eax, [edx + ebp]
// 006f1030  3bc1                 cmp eax, ecx
// 006f1032  7ebe                 jle 0x6f0ff2
// 006f1034  8b470c               mov eax, dword ptr [edi + 0xc]
// 006f1037  2b4704               sub eax, dword ptr [edi + 4]
// 006f103a  751c                 jne 0x6f1058
// 006f103c  8bc1                 mov eax, ecx
// 006f103e  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 006f1042  99                   cdq 
// 006f1043  2bc2                 sub eax, edx
// 006f1045  d1f8                 sar eax, 1
// 006f1047  3be8                 cmp ebp, eax
// 006f1049  8bc1                 mov eax, ecx
// 006f104b  7c02                 jl 0x6f104f
// 006f104d  8bc5                 mov eax, ebp
// 006f104f  2b442464             sub eax, dword ptr [esp + 0x64]
// 006f1053  e91b010000           jmp 0x6f1173
// 006f1058  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 006f105e  89442418             mov dword ptr [esp + 0x18], eax
// 006f1062  a802                 test al, 2
// 006f1064  0f8405010000         je 0x6f116f
// 006f106a  8bae90010000         mov ebp, dword ptr [esi + 0x190]
// 006f1070  8bc5                 mov eax, ebp
// 006f1072  2b442464             sub eax, dword ptr [esp + 0x64]
// 006f1076  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 006f107a  898688010000         mov dword ptr [esi + 0x188], eax
// 006f1080  0f8df3000000         jge 0x6f1179
// 006f1086  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f108b  0f84a5000000         je 0x6f1136
// 006f1091  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f1095  83e0fd               and eax, 0xfffffffd
// 006f1098  89869c010000         mov dword ptr [esi + 0x19c], eax
// 006f109e  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 006f10a4  85c0                 test eax, eax
// 006f10a6  746b                 je 0x6f1113
// 006f10a8  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 006f10af  7515                 jne 0x6f10c6
// 006f10b1  8b16                 mov edx, dword ptr [esi]
// 006f10b3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006f10b9  8bce                 mov ecx, esi
// 006f10bb  ffd0                 call eax
// 006f10bd  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 006f10c4  7549                 jne 0x6f110f
// 006f10c6  8d4c2448             lea ecx, [esp + 0x48]
// 006f10ca  51                   push ecx
// 006f10cb  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 006f10d1  e83a16fbff           call 0x6a2710
// 006f10d6  8b10                 mov edx, dword ptr [eax]
// 006f10d8  8917                 mov dword ptr [edi], edx
// 006f10da  8b4804               mov ecx, dword ptr [eax + 4]
// 006f10dd  894f04               mov dword ptr [edi + 4], ecx
// 006f10e0  8b5008               mov edx, dword ptr [eax + 8]
// 006f10e3  895708               mov dword ptr [edi + 8], edx
// 006f10e6  8b400c               mov eax, dword ptr [eax + 0xc]
// 006f10e9  8b16                 mov edx, dword ptr [esi]
// 006f10eb  6a01                 push 1
// 006f10ed  89470c               mov dword ptr [edi + 0xc], eax
// 006f10f0  8b820c020000         mov eax, dword ptr [edx + 0x20c]
// 006f10f6  57                   push edi
// 006f10f7  8bce                 mov ecx, esi
// 006f10f9  ffd0                 call eax
// 006f10fb  8b16                 mov edx, dword ptr [esi]
// 006f10fd  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006f1103  57                   push edi
// 006f1104  8bce                 mov ecx, esi
// 006f1106  ffd0                 call eax
// 006f1108  8bc8                 mov ecx, eax
// 006f110a  e823fbfaff           call 0x6a0c32
// 006f110f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f1113  8bd1                 mov edx, ecx
// 006f1115  2b542464             sub edx, dword ptr [esp + 0x64]
// 006f1119  f6869c01000001       test byte ptr [esi + 0x19c], 1
// 006f1120  899688010000         mov dword ptr [esi + 0x188], edx
// 006f1126  7551                 jne 0x6f1179
// 006f1128  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 006f112e  898684010000         mov dword ptr [esi + 0x184], eax
// 006f1134  eb43                 jmp 0x6f1179
// 006f1136  8bc1                 mov eax, ecx
// 006f1138  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 006f113c  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006f1144  99                   cdq 
// 006f1145  2bc2                 sub eax, edx
// 006f1147  d1f8                 sar eax, 1
// 006f1149  3bd8                 cmp ebx, eax
// 006f114b  7e0c                 jle 0x6f1159
// 006f114d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006f1151  2be8                 sub ebp, eax
// 006f1153  896c2464             mov dword ptr [esp + 0x64], ebp
// 006f1157  eb1a                 jmp 0x6f1173
// 006f1159  8b9698010000         mov edx, dword ptr [esi + 0x198]
// 006f115f  8bc1                 mov eax, ecx
// 006f1161  2bc2                 sub eax, edx
// 006f1163  899688010000         mov dword ptr [esi + 0x188], edx
// 006f1169  89442464             mov dword ptr [esp + 0x64], eax
// 006f116d  eb0a                 jmp 0x6f1179
// 006f116f  8bc1                 mov eax, ecx
// 006f1171  2bc2                 sub eax, edx
// 006f1173  898688010000         mov dword ptr [esi + 0x188], eax
// 006f1179  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006f117d  399688010000         cmp dword ptr [esi + 0x188], edx
// 006f1183  7d06                 jge 0x6f118b
// 006f1185  899688010000         mov dword ptr [esi + 0x188], edx
// 006f118b  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 006f1191  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 006f1195  03d8                 add ebx, eax
// 006f1197  3bd9                 cmp ebx, ecx
// 006f1199  0f8e53feffff         jle 0x6f0ff2
// 006f119f  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f11a4  7513                 jne 0x6f11b9
// 006f11a6  2bc8                 sub ecx, eax
// 006f11a8  894c2464             mov dword ptr [esp + 0x64], ecx
// 006f11ac  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006f11b4  e939feffff           jmp 0x6f0ff2
// 006f11b9  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 006f11c0  0f852cfeffff         jne 0x6f0ff2
// 006f11c6  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 006f11cd  0f851ffeffff         jne 0x6f0ff2
// 006f11d3  8b06                 mov eax, dword ptr [esi]
// 006f11d5  2bca                 sub ecx, edx
// 006f11d7  8b90d0010000         mov edx, dword ptr [eax + 0x1d0]
// 006f11dd  6a00                 push 0
// 006f11df  51                   push ecx
// 006f11e0  8d4c2420             lea ecx, [esp + 0x20]
// 006f11e4  51                   push ecx
// 006f11e5  8bce                 mov ecx, esi
// 006f11e7  ffd2                 call edx
// 006f11e9  8b18                 mov ebx, dword ptr [eax]
// 006f11eb  895c2460             mov dword ptr [esp + 0x60], ebx
// 006f11ef  8b4004               mov eax, dword ptr [eax + 4]
// 006f11f2  89442464             mov dword ptr [esp + 0x64], eax
// 006f11f6  e9fbfdffff           jmp 0x6f0ff6
// 006f11fb  8bc8                 mov ecx, eax
// 006f11fd  83e101               and ecx, 1
// 006f1200  7413                 je 0x6f1215
// 006f1202  8b5708               mov edx, dword ptr [edi + 8]
// 006f1205  2b17                 sub edx, dword ptr [edi]
// 006f1207  740c                 je 0x6f1215
// 006f1209  8b0f                 mov ecx, dword ptr [edi]
// 006f120b  2bcb                 sub ecx, ebx
// 006f120d  898e84010000         mov dword ptr [esi + 0x184], ecx
// 006f1213  eb11                 jmp 0x6f1226
// 006f1215  85c9                 test ecx, ecx
// 006f1217  740d                 je 0x6f1226
// 006f1219  8b5708               mov edx, dword ptr [edi + 8]
// 006f121c  2b17                 sub edx, dword ptr [edi]
// 006f121e  7506                 jne 0x6f1226
// 006f1220  299e84010000         sub dword ptr [esi + 0x184], ebx
// 006f1226  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006f122c  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f1230  8d2c19               lea ebp, [ecx + ebx]
// 006f1233  3bea                 cmp ebp, edx
// 006f1235  7e55                 jle 0x6f128c
// 006f1237  8b6f08               mov ebp, dword ptr [edi + 8]
// 006f123a  2b2f                 sub ebp, dword ptr [edi]
// 006f123c  750e                 jne 0x6f124c
// 006f123e  3bca                 cmp ecx, edx
// 006f1240  7e0a                 jle 0x6f124c
// 006f1242  2bcb                 sub ecx, ebx
// 006f1244  898e84010000         mov dword ptr [esi + 0x184], ecx
// 006f124a  eb2c                 jmp 0x6f1278
// 006f124c  8b4f08               mov ecx, dword ptr [edi + 8]
// 006f124f  2b0f                 sub ecx, dword ptr [edi]
// 006f1251  750a                 jne 0x6f125d
// 006f1253  2bd3                 sub edx, ebx
// 006f1255  899684010000         mov dword ptr [esi + 0x184], edx
// 006f125b  eb1b                 jmp 0x6f1278
// 006f125d  a802                 test al, 2
// 006f125f  7404                 je 0x6f1265
// 006f1261  8bfa                 mov edi, edx
// 006f1263  eb02                 jmp 0x6f1267
// 006f1265  8b3f                 mov edi, dword ptr [edi]
// 006f1267  2bfb                 sub edi, ebx
// 006f1269  83c801               or eax, 1
// 006f126c  89be84010000         mov dword ptr [esi + 0x184], edi
// 006f1272  89869c010000         mov dword ptr [esi + 0x19c], eax
// 006f1278  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f127c  398684010000         cmp dword ptr [esi + 0x184], eax
// 006f1282  7d3e                 jge 0x6f12c2
// 006f1284  898684010000         mov dword ptr [esi + 0x184], eax
// 006f128a  eb36                 jmp 0x6f12c2
// 006f128c  8b542428             mov edx, dword ptr [esp + 0x28]
// 006f1290  3bca                 cmp ecx, edx
// 006f1292  7d2e                 jge 0x6f12c2
// 006f1294  8b4f08               mov ecx, dword ptr [edi + 8]
// 006f1297  2b0f                 sub ecx, dword ptr [edi]
// 006f1299  7414                 je 0x6f12af
// 006f129b  8bca                 mov ecx, edx
// 006f129d  a802                 test al, 2
// 006f129f  7506                 jne 0x6f12a7
// 006f12a1  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 006f12a7  898e84010000         mov dword ptr [esi + 0x184], ecx
// 006f12ad  eb0a                 jmp 0x6f12b9
// 006f12af  a801                 test al, 1
// 006f12b1  740f                 je 0x6f12c2
// 006f12b3  899684010000         mov dword ptr [esi + 0x184], edx
// 006f12b9  83e0fe               and eax, 0xfffffffe
// 006f12bc  89869c010000         mov dword ptr [esi + 0x19c], eax
// 006f12c2  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f12c7  5d                   pop ebp
// 006f12c8  7419                 je 0x6f12e3
// 006f12ca  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 006f12d1  7510                 jne 0x6f12e3
// 006f12d3  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 006f12da  7507                 jne 0x6f12e3
// 006f12dc  b801000000           mov eax, 1
// 006f12e1  eb02                 jmp 0x6f12e5
// 006f12e3  33c0                 xor eax, eax
// 006f12e5  898618020000         mov dword ptr [esi + 0x218], eax
// 006f12eb  85c0                 test eax, eax
// 006f12ed  741e                 je 0x6f130d
// 006f12ef  6a00                 push 0
// 006f12f1  6a00                 push 0
// 006f12f3  8d542464             lea edx, [esp + 0x64]
// 006f12f7  52                   push edx
// 006f12f8  8bce                 mov ecx, esi
// 006f12fa  c7861c02000000000000 mov dword ptr [esi + 0x21c], 0
// 006f1304  e887e0ffff           call 0x6ef390
// 006f1309  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 006f130d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006f1313  8b442458             mov eax, dword ptr [esp + 0x58]
// 006f1317  8bb688010000         mov esi, dword ptr [esi + 0x188]
// 006f131d  8908                 mov dword ptr [eax], ecx
// 006f131f  03cb                 add ecx, ebx
// 006f1321  894808               mov dword ptr [eax + 8], ecx
// 006f1324  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006f1328  897004               mov dword ptr [eax + 4], esi
// 006f132b  03f1                 add esi, ecx
// 006f132d  5f                   pop edi
// 006f132e  89700c               mov dword ptr [eax + 0xc], esi
// 006f1331  5e                   pop esi
// 006f1332  5b                   pop ebx
// 006f1333  83c448               add esp, 0x48
// 006f1336  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?CalculatePopupRect@CXTPPopupBar@@MAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
