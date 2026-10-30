// roc 2009-06 00726db0  unit: CXTPPaintManager  size: 3642 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00726db0
//
// 00726db0  6aff                 push -1
// 00726db2  6890508700           push 0x875090
// 00726db7  64a100000000         mov eax, dword ptr fs:[0]
// 00726dbd  50                   push eax
// 00726dbe  81ec98000000         sub esp, 0x98
// 00726dc4  53                   push ebx
// 00726dc5  55                   push ebp
// 00726dc6  56                   push esi
// 00726dc7  57                   push edi
// 00726dc8  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00726dcd  33c4                 xor eax, esp
// 00726dcf  50                   push eax
// 00726dd0  8d8424ac000000       lea eax, [esp + 0xac]
// 00726dd7  64a300000000         mov dword ptr fs:[0], eax
// 00726ddd  8bf1                 mov esi, ecx
// 00726ddf  8bbc24c4000000       mov edi, dword ptr [esp + 0xc4]
// 00726de6  8b9f00010000         mov ebx, dword ptr [edi + 0x100]
// 00726dec  8b2e                 mov ebp, dword ptr [esi]
// 00726dee  8bcf                 mov ecx, edi
// 00726df0  e88ba8d0ff           call 0x431680
// 00726df5  50                   push eax
// 00726df6  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 00726dfc  53                   push ebx
// 00726dfd  8bce                 mov ecx, esi
// 00726dff  ffd0                 call eax
// 00726e01  8bac24c0000000       mov ebp, dword ptr [esp + 0xc0]
// 00726e08  50                   push eax
// 00726e09  55                   push ebp
// 00726e0a  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00726e11  e84a9a0400           call 0x770860
// 00726e16  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 00726e1e  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 00726e29  742a                 je 0x726e55
// 00726e2b  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00726e31  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00726e37  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 00726e3d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00726e41  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00726e47  89542434             mov dword ptr [esp + 0x34], edx
// 00726e4b  89442438             mov dword ptr [esp + 0x38], eax
// 00726e4f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00726e53  eb27                 jmp 0x726e7c
// 00726e55  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00726e5c  e8cf950400           call 0x770430
// 00726e61  8b10                 mov edx, dword ptr [eax]
// 00726e63  8b4804               mov ecx, dword ptr [eax + 4]
// 00726e66  89542430             mov dword ptr [esp + 0x30], edx
// 00726e6a  8b5008               mov edx, dword ptr [eax + 8]
// 00726e6d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00726e70  894c2434             mov dword ptr [esp + 0x34], ecx
// 00726e74  89542438             mov dword ptr [esp + 0x38], edx
// 00726e78  8944243c             mov dword ptr [esp + 0x3c], eax
// 00726e7c  8d442430             lea eax, [esp + 0x30]
// 00726e80  8b08                 mov ecx, dword ptr [eax]
// 00726e82  8b5004               mov edx, dword ptr [eax + 4]
// 00726e85  894c2418             mov dword ptr [esp + 0x18], ecx
// 00726e89  8b4808               mov ecx, dword ptr [eax + 8]
// 00726e8c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00726e90  8b500c               mov edx, dword ptr [eax + 0xc]
// 00726e93  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 00726e99  894c2420             mov dword ptr [esp + 0x20], ecx
// 00726e9d  8bcf                 mov ecx, edi
// 00726e9f  89542424             mov dword ptr [esp + 0x24], edx
// 00726ea3  89442448             mov dword ptr [esp + 0x48], eax
// 00726ea7  e8c487ffff           call 0x71f670
// 00726eac  57                   push edi
// 00726ead  8d4c2434             lea ecx, [esp + 0x34]
// 00726eb1  8bd8                 mov ebx, eax
// 00726eb3  51                   push ecx
// 00726eb4  8bce                 mov ecx, esi
// 00726eb6  895c2454             mov dword ptr [esp + 0x54], ebx
// 00726eba  e861c1ffff           call 0x723020
// 00726ebf  8b17                 mov edx, dword ptr [edi]
// 00726ec1  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 00726ec7  8d442428             lea eax, [esp + 0x28]
// 00726ecb  50                   push eax
// 00726ecc  8bcf                 mov ecx, edi
// 00726ece  ffd2                 call edx
// 00726ed0  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 00726ed6  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00726edc  ba02000000           mov edx, 2
// 00726ee1  83f903               cmp ecx, 3
// 00726ee4  740c                 je 0x726ef2
// 00726ee6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00726eee  3bca                 cmp ecx, edx
// 00726ef0  7508                 jne 0x726efa
// 00726ef2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00726efa  85db                 test ebx, ebx
// 00726efc  7510                 jne 0x726f0e
// 00726efe  39542448             cmp dword ptr [esp + 0x48], edx
// 00726f02  7518                 jne 0x726f1c
// 00726f04  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00726f0c  eb63                 jmp 0x726f71
// 00726f0e  3bda                 cmp ebx, edx
// 00726f10  740a                 je 0x726f1c
// 00726f12  83fb03               cmp ebx, 3
// 00726f15  7405                 je 0x726f1c
// 00726f17  83fb04               cmp ebx, 4
// 00726f1a  75e8                 jne 0x726f04
// 00726f1c  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 00726f22  85c0                 test eax, eax
// 00726f24  752a                 jne 0x726f50
// 00726f26  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 00726f2c  85c0                 test eax, eax
// 00726f2e  7f20                 jg 0x726f50
// 00726f30  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00726f36  85c9                 test ecx, ecx
// 00726f38  740c                 je 0x726f46
// 00726f3a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00726f3d  85c0                 test eax, eax
// 00726f3f  7f0f                 jg 0x726f50
// 00726f41  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00726f44  eb06                 jmp 0x726f4c
// 00726f46  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 00726f4c  85c0                 test eax, eax
// 00726f4e  74b4                 je 0x726f04
// 00726f50  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00726f54  8b07                 mov eax, dword ptr [edi]
// 00726f56  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 00726f5c  51                   push ecx
// 00726f5d  8bcf                 mov ecx, edi
// 00726f5f  ffd2                 call edx
// 00726f61  89442460             mov dword ptr [esp + 0x60], eax
// 00726f65  c744244401000000     mov dword ptr [esp + 0x44], 1
// 00726f6d  85c0                 test eax, eax
// 00726f6f  7508                 jne 0x726f79
// 00726f71  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00726f79  8b07                 mov eax, dword ptr [edi]
// 00726f7b  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00726f81  8bcf                 mov ecx, edi
// 00726f83  ffd2                 call edx
// 00726f85  8944246c             mov dword ptr [esp + 0x6c], eax
// 00726f89  8b07                 mov eax, dword ptr [edi]
// 00726f8b  8b5078               mov edx, dword ptr [eax + 0x78]
// 00726f8e  8bcf                 mov ecx, edi
// 00726f90  ffd2                 call edx
// 00726f92  89442464             mov dword ptr [esp + 0x64], eax
// 00726f96  8b07                 mov eax, dword ptr [edi]
// 00726f98  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00726f9b  8bcf                 mov ecx, edi
// 00726f9d  ffd2                 call edx
// 00726f9f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00726fa3  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00726fa9  83f8ff               cmp eax, -1
// 00726fac  750f                 jne 0x726fbd
// 00726fae  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00726fb4  85c9                 test ecx, ecx
// 00726fb6  7405                 je 0x726fbd
// 00726fb8  e8e38effff           call 0x71fea0
// 00726fbd  8b9fa0000000         mov ebx, dword ptr [edi + 0xa0]
// 00726fc3  89442440             mov dword ptr [esp + 0x40], eax
// 00726fc7  83fbff               cmp ebx, -1
// 00726fca  750d                 jne 0x726fd9
// 00726fcc  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 00726fd2  85c0                 test eax, eax
// 00726fd4  7403                 je 0x726fd9
// 00726fd6  8b5838               mov ebx, dword ptr [eax + 0x38]
// 00726fd9  8b07                 mov eax, dword ptr [edi]
// 00726fdb  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00726fe1  8bcf                 mov ecx, edi
// 00726fe3  895c2468             mov dword ptr [esp + 0x68], ebx
// 00726fe7  ffd2                 call edx
// 00726fe9  837c244804           cmp dword ptr [esp + 0x48], 4
// 00726fee  89842494000000       mov dword ptr [esp + 0x94], eax
// 00726ff5  7511                 jne 0x727008
// 00726ff7  837c244004           cmp dword ptr [esp + 0x40], 4
// 00726ffc  7520                 jne 0x72701e
// 00726ffe  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00727006  eb16                 jmp 0x72701e
// 00727008  8b442448             mov eax, dword ptr [esp + 0x48]
// 0072700c  83f809               cmp eax, 9
// 0072700f  0f84fe080000         je 0x727913
// 00727015  83f80b               cmp eax, 0xb
// 00727018  0f84b5080000         je 0x7278d3
// 0072701e  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 00727025  85db                 test ebx, ebx
// 00727027  746c                 je 0x727095
// 00727029  837c244804           cmp dword ptr [esp + 0x48], 4
// 0072702e  741d                 je 0x72704d
// 00727030  8b07                 mov eax, dword ptr [edi]
// 00727032  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00727038  8bcf                 mov ecx, edi
// 0072703a  ffd2                 call edx
// 0072703c  85c0                 test eax, eax
// 0072703e  7538                 jne 0x727078
// 00727040  8b06                 mov eax, dword ptr [esi]
// 00727042  8b5078               mov edx, dword ptr [eax + 0x78]
// 00727045  57                   push edi
// 00727046  55                   push ebp
// 00727047  8bce                 mov ecx, esi
// 00727049  ffd2                 call edx
// 0072704b  eb2b                 jmp 0x727078
// 0072704d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00727051  8b16                 mov edx, dword ptr [esi]
// 00727053  8b5260               mov edx, dword ptr [edx + 0x60]
// 00727056  83ec10               sub esp, 0x10
// 00727059  8bc4                 mov eax, esp
// 0072705b  8908                 mov dword ptr [eax], ecx
// 0072705d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00727061  894804               mov dword ptr [eax + 4], ecx
// 00727064  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00727068  894808               mov dword ptr [eax + 8], ecx
// 0072706b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0072706f  57                   push edi
// 00727070  89480c               mov dword ptr [eax + 0xc], ecx
// 00727073  55                   push ebp
// 00727074  8bce                 mov ecx, esi
// 00727076  ffd2                 call edx
// 00727078  8b4500               mov eax, dword ptr [ebp]
// 0072707b  8b16                 mov edx, dword ptr [esi]
// 0072707d  89442474             mov dword ptr [esp + 0x74], eax
// 00727081  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00727084  57                   push edi
// 00727085  8bce                 mov ecx, esi
// 00727087  ffd0                 call eax
// 00727089  8b542474             mov edx, dword ptr [esp + 0x74]
// 0072708d  50                   push eax
// 0072708e  8b4238               mov eax, dword ptr [edx + 0x38]
// 00727091  8bcd                 mov ecx, ebp
// 00727093  ffd0                 call eax
// 00727095  837c244c04           cmp dword ptr [esp + 0x4c], 4
// 0072709a  0f8534020000         jne 0x7272d4
// 007270a0  8b17                 mov edx, dword ptr [edi]
// 007270a2  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007270a8  8bcf                 mov ecx, edi
// 007270aa  ffd0                 call eax
// 007270ac  8bd8                 mov ebx, eax
// 007270ae  f7db                 neg ebx
// 007270b0  1bdb                 sbb ebx, ebx
// 007270b2  8bce                 mov ecx, esi
// 007270b4  f7db                 neg ebx
// 007270b6  e845b8ffff           call 0x722900
// 007270bb  8bd0                 mov edx, eax
// 007270bd  e8bebfffff           call 0x723080
// 007270c2  8944246c             mov dword ptr [esp + 0x6c], eax
// 007270c6  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 007270cc  85c0                 test eax, eax
// 007270ce  7e05                 jle 0x7270d5
// 007270d0  8d0c40               lea ecx, [eax + eax*2]
// 007270d3  eb0c                 jmp 0x7270e1
// 007270d5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007270d9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007270dd  8d4c0107             lea ecx, [ecx + eax + 7]
// 007270e1  8d4412fd             lea eax, [edx + edx - 3]
// 007270e5  83f82a               cmp eax, 0x2a
// 007270e8  7d05                 jge 0x7270ef
// 007270ea  b82a000000           mov eax, 0x2a
// 007270ef  8b542414             mov edx, dword ptr [esp + 0x14]
// 007270f3  89442428             mov dword ptr [esp + 0x28], eax
// 007270f7  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007270fb  85d2                 test edx, edx
// 007270fd  7408                 je 0x727107
// 007270ff  894c2428             mov dword ptr [esp + 0x28], ecx
// 00727103  8944242c             mov dword ptr [esp + 0x2c], eax
// 00727107  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 0072710f  0f843a010000         je 0x72724f
// 00727115  837c244400           cmp dword ptr [esp + 0x44], 0
// 0072711a  0f84b5000000         je 0x7271d5
// 00727120  85d2                 test edx, edx
// 00727122  743a                 je 0x72715e
// 00727124  8d4c244c             lea ecx, [esp + 0x4c]
// 00727128  51                   push ecx
// 00727129  8d4c241c             lea ecx, [esp + 0x1c]
// 0072712d  e85e52cfff           call 0x41c390
// 00727132  8bc8                 mov ecx, eax
// 00727134  8b442434             mov eax, dword ptr [esp + 0x34]
// 00727138  99                   cdq 
// 00727139  2bc2                 sub eax, edx
// 0072713b  8bd0                 mov edx, eax
// 0072713d  8b4104               mov eax, dword ptr [ecx + 4]
// 00727140  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00727144  d1fa                 sar edx, 1
// 00727146  2bc2                 sub eax, edx
// 00727148  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0072714c  8d4c0a04             lea ecx, [edx + ecx + 4]
// 00727150  89442450             mov dword ptr [esp + 0x50], eax
// 00727154  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00727158  8d44244c             lea eax, [esp + 0x4c]
// 0072715c  eb38                 jmp 0x727196
// 0072715e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00727162  8d442474             lea eax, [esp + 0x74]
// 00727166  83c203               add edx, 3
// 00727169  50                   push eax
// 0072716a  8d4c241c             lea ecx, [esp + 0x1c]
// 0072716e  89542450             mov dword ptr [esp + 0x50], edx
// 00727172  e81952cfff           call 0x41c390
// 00727177  8bc8                 mov ecx, eax
// 00727179  8b442430             mov eax, dword ptr [esp + 0x30]
// 0072717d  8b09                 mov ecx, dword ptr [ecx]
// 0072717f  99                   cdq 
// 00727180  2bc2                 sub eax, edx
// 00727182  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00727186  d1f8                 sar eax, 1
// 00727188  2bc8                 sub ecx, eax
// 0072718a  894c2474             mov dword ptr [esp + 0x74], ecx
// 0072718e  89542478             mov dword ptr [esp + 0x78], edx
// 00727192  8d442474             lea eax, [esp + 0x74]
// 00727196  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0072719d  6a01                 push 1
// 0072719f  51                   push ecx
// 007271a0  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007271a4  51                   push ecx
// 007271a5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007271a9  51                   push ecx
// 007271aa  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007271ae  8b16                 mov edx, dword ptr [esi]
// 007271b0  51                   push ecx
// 007271b1  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007271b5  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 007271bb  51                   push ecx
// 007271bc  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007271c0  51                   push ecx
// 007271c1  33c9                 xor ecx, ecx
// 007271c3  51                   push ecx
// 007271c4  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007271c8  51                   push ecx
// 007271c9  8b4804               mov ecx, dword ptr [eax + 4]
// 007271cc  8b00                 mov eax, dword ptr [eax]
// 007271ce  51                   push ecx
// 007271cf  50                   push eax
// 007271d0  55                   push ebp
// 007271d1  8bce                 mov ecx, esi
// 007271d3  ffd2                 call edx
// 007271d5  837c241400           cmp dword ptr [esp + 0x14], 0
// 007271da  8b442418             mov eax, dword ptr [esp + 0x18]
// 007271de  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007271e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 007271e6  89442430             mov dword ptr [esp + 0x30], eax
// 007271ea  8b442424             mov eax, dword ptr [esp + 0x24]
// 007271ee  8944243c             mov dword ptr [esp + 0x3c], eax
// 007271f2  740c                 je 0x727200
// 007271f4  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007271f8  8b442418             mov eax, dword ptr [esp + 0x18]
// 007271fc  03d0                 add edx, eax
// 007271fe  eb0d                 jmp 0x72720d
// 00727200  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00727204  49                   dec ecx
// 00727205  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00727209  2b4c246c             sub ecx, dword ptr [esp + 0x6c]
// 0072720d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00727211  53                   push ebx
// 00727212  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00727216  50                   push eax
// 00727217  6a01                 push 1
// 00727219  83ec10               sub esp, 0x10
// 0072721c  8bc4                 mov eax, esp
// 0072721e  8918                 mov dword ptr [eax], ebx
// 00727220  894804               mov dword ptr [eax + 4], ecx
// 00727223  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00727227  57                   push edi
// 00727228  895008               mov dword ptr [eax + 8], edx
// 0072722b  55                   push ebp
// 0072722c  8d542454             lea edx, [esp + 0x54]
// 00727230  89480c               mov dword ptr [eax + 0xc], ecx
// 00727233  52                   push edx
// 00727234  8bce                 mov ecx, esi
// 00727236  e8c5cfffff           call 0x724200
// 0072723b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072723f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00727243  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00727247  52                   push edx
// 00727248  50                   push eax
// 00727249  51                   push ecx
// 0072724a  e93c090000           jmp 0x727b8b
// 0072724f  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00727256  e8d5910400           call 0x770430
// 0072725b  8b10                 mov edx, dword ptr [eax]
// 0072725d  53                   push ebx
// 0072725e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00727262  53                   push ebx
// 00727263  6a00                 push 0
// 00727265  83ec10               sub esp, 0x10
// 00727268  8bcc                 mov ecx, esp
// 0072726a  8911                 mov dword ptr [ecx], edx
// 0072726c  8b5004               mov edx, dword ptr [eax + 4]
// 0072726f  895104               mov dword ptr [ecx + 4], edx
// 00727272  8b5008               mov edx, dword ptr [eax + 8]
// 00727275  8b400c               mov eax, dword ptr [eax + 0xc]
// 00727278  895108               mov dword ptr [ecx + 8], edx
// 0072727b  57                   push edi
// 0072727c  89410c               mov dword ptr [ecx + 0xc], eax
// 0072727f  55                   push ebp
// 00727280  8d4c2454             lea ecx, [esp + 0x54]
// 00727284  51                   push ecx
// 00727285  8bce                 mov ecx, esi
// 00727287  e874cfffff           call 0x724200
// 0072728c  85db                 test ebx, ebx
// 0072728e  741f                 je 0x7272af
// 00727290  8b442434             mov eax, dword ptr [esp + 0x34]
// 00727294  83c006               add eax, 6
// 00727297  3944242c             cmp dword ptr [esp + 0x2c], eax
// 0072729b  7f23                 jg 0x7272c0
// 0072729d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007272a1  8bd3                 mov edx, ebx
// 007272a3  52                   push edx
// 007272a4  50                   push eax
// 007272a5  89442434             mov dword ptr [esp + 0x34], eax
// 007272a9  51                   push ecx
// 007272aa  e9dc080000           jmp 0x727b8b
// 007272af  8b442430             mov eax, dword ptr [esp + 0x30]
// 007272b3  83c005               add eax, 5
// 007272b6  39442428             cmp dword ptr [esp + 0x28], eax
// 007272ba  7f04                 jg 0x7272c0
// 007272bc  89442428             mov dword ptr [esp + 0x28], eax
// 007272c0  8b542414             mov edx, dword ptr [esp + 0x14]
// 007272c4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007272c8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007272cc  52                   push edx
// 007272cd  50                   push eax
// 007272ce  51                   push ecx
// 007272cf  e9b7080000           jmp 0x727b8b
// 007272d4  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007272da  e8e1320100           call 0x73a5c0
// 007272df  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007272e3  85c0                 test eax, eax
// 007272e5  0f84b5010000         je 0x7274a0
// 007272eb  85c9                 test ecx, ecx
// 007272ed  0f84ad010000         je 0x7274a0
// 007272f3  8bcf                 mov ecx, edi
// 007272f5  e886a3d0ff           call 0x431680
// 007272fa  85c0                 test eax, eax
// 007272fc  8d86f8000000         lea eax, [esi + 0xf8]
// 00727302  7506                 jne 0x72730a
// 00727304  8d86f0000000         lea eax, [esi + 0xf0]
// 0072730a  50                   push eax
// 0072730b  55                   push ebp
// 0072730c  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00727313  e848950400           call 0x770860
// 00727318  33db                 xor ebx, ebx
// 0072731a  837c244802           cmp dword ptr [esp + 0x48], 2
// 0072731f  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 00727327  0f94c3               sete bl
// 0072732a  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 00727332  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00727336  0f84c0000000         je 0x7273fc
// 0072733c  837c244804           cmp dword ptr [esp + 0x48], 4
// 00727341  750a                 jne 0x72734d
// 00727343  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00727349  29542420             sub dword ptr [esp + 0x20], edx
// 0072734d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00727351  8d442474             lea eax, [esp + 0x74]
// 00727355  50                   push eax
// 00727356  8d4c241c             lea ecx, [esp + 0x1c]
// 0072735a  83c304               add ebx, 4
// 0072735d  e82e50cfff           call 0x41c390
// 00727362  8bc8                 mov ecx, eax
// 00727364  8b442430             mov eax, dword ptr [esp + 0x30]
// 00727368  99                   cdq 
// 00727369  6a01                 push 1
// 0072736b  2bc2                 sub eax, edx
// 0072736d  8bd0                 mov edx, eax
// 0072736f  8b01                 mov eax, dword ptr [ecx]
// 00727371  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00727378  51                   push ecx
// 00727379  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0072737d  51                   push ecx
// 0072737e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00727382  51                   push ecx
// 00727383  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00727387  51                   push ecx
// 00727388  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0072738c  51                   push ecx
// 0072738d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00727391  51                   push ecx
// 00727392  33c9                 xor ecx, ecx
// 00727394  51                   push ecx
// 00727395  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00727399  51                   push ecx
// 0072739a  d1fa                 sar edx, 1
// 0072739c  2bc2                 sub eax, edx
// 0072739e  8b16                 mov edx, dword ptr [esi]
// 007273a0  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 007273a6  53                   push ebx
// 007273a7  50                   push eax
// 007273a8  55                   push ebp
// 007273a9  8bce                 mov ecx, esi
// 007273ab  ffd2                 call edx
// 007273ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007273b1  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007273b5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007273b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 007273bd  8d5c03fc             lea ebx, [ebx + eax - 4]
// 007273c1  89442434             mov dword ptr [esp + 0x34], eax
// 007273c5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007273c9  50                   push eax
// 007273ca  6a01                 push 1
// 007273cc  6a00                 push 0
// 007273ce  6a01                 push 1
// 007273d0  83ec10               sub esp, 0x10
// 007273d3  8bc4                 mov eax, esp
// 007273d5  8908                 mov dword ptr [eax], ecx
// 007273d7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007273db  895804               mov dword ptr [eax + 4], ebx
// 007273de  57                   push edi
// 007273df  895008               mov dword ptr [eax + 8], edx
// 007273e2  89480c               mov dword ptr [eax + 0xc], ecx
// 007273e5  55                   push ebp
// 007273e6  8d4c2458             lea ecx, [esp + 0x58]
// 007273ea  51                   push ecx
// 007273eb  8bce                 mov ecx, esi
// 007273ed  e8fed3ffff           call 0x7247f0
// 007273f2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007273f6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007273fa  eb74                 jmp 0x727470
// 007273fc  8d4c244c             lea ecx, [esp + 0x4c]
// 00727400  e82b900400           call 0x770430
// 00727405  8b10                 mov edx, dword ptr [eax]
// 00727407  53                   push ebx
// 00727408  6a01                 push 1
// 0072740a  6a00                 push 0
// 0072740c  6a00                 push 0
// 0072740e  83ec10               sub esp, 0x10
// 00727411  8bcc                 mov ecx, esp
// 00727413  8911                 mov dword ptr [ecx], edx
// 00727415  8b5004               mov edx, dword ptr [eax + 4]
// 00727418  895104               mov dword ptr [ecx + 4], edx
// 0072741b  8b5008               mov edx, dword ptr [eax + 8]
// 0072741e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00727421  895108               mov dword ptr [ecx + 8], edx
// 00727424  57                   push edi
// 00727425  89410c               mov dword ptr [ecx + 0xc], eax
// 00727428  55                   push ebp
// 00727429  8d4c2458             lea ecx, [esp + 0x58]
// 0072742d  51                   push ecx
// 0072742e  8bce                 mov ecx, esi
// 00727430  e8bbd3ffff           call 0x7247f0
// 00727435  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00727439  8b542430             mov edx, dword ptr [esp + 0x30]
// 0072743d  03442434             add eax, dword ptr [esp + 0x34]
// 00727441  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00727445  83c20a               add edx, 0xa
// 00727448  3bca                 cmp ecx, edx
// 0072744a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0072744e  7f06                 jg 0x727456
// 00727450  8bca                 mov ecx, edx
// 00727452  894c2428             mov dword ptr [esp + 0x28], ecx
// 00727456  83bffc00000004       cmp dword ptr [edi + 0xfc], 4
// 0072745d  7507                 jne 0x727466
// 0072745f  83c10b               add ecx, 0xb
// 00727462  894c2428             mov dword ptr [esp + 0x28], ecx
// 00727466  3bc8                 cmp ecx, eax
// 00727468  7f06                 jg 0x727470
// 0072746a  8bc8                 mov ecx, eax
// 0072746c  894c2428             mov dword ptr [esp + 0x28], ecx
// 00727470  8b542414             mov edx, dword ptr [esp + 0x14]
// 00727474  52                   push edx
// 00727475  50                   push eax
// 00727476  51                   push ecx
// 00727477  57                   push edi
// 00727478  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 0072747f  57                   push edi
// 00727480  8bce                 mov ecx, esi
// 00727482  e819bbffff           call 0x722fa0
// 00727487  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0072748e  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 00727496  e845940400           call 0x7708e0
// 0072749b  e9fb060000           jmp 0x727b9b
// 007274a0  85db                 test ebx, ebx
// 007274a2  0f849d010000         je 0x727645
// 007274a8  837c246000           cmp dword ptr [esp + 0x60], 0
// 007274ad  0f8492010000         je 0x727645
// 007274b3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007274b7  e8f4590200           call 0x74ceb0
// 007274bc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007274c0  8bd8                 mov ebx, eax
// 007274c2  0faf5c2430           imul ebx, dword ptr [esp + 0x30]
// 007274c7  e8540d0a00           call 0x7c8220
// 007274cc  8bc8                 mov ecx, eax
// 007274ce  8bc3                 mov eax, ebx
// 007274d0  99                   cdq 
// 007274d1  f7f9                 idiv ecx
// 007274d3  837c241400           cmp dword ptr [esp + 0x14], 0
// 007274d8  8d4c2418             lea ecx, [esp + 0x18]
// 007274dc  89442434             mov dword ptr [esp + 0x34], eax
// 007274e0  752d                 jne 0x72750f
// 007274e2  8d54244c             lea edx, [esp + 0x4c]
// 007274e6  52                   push edx
// 007274e7  e8a44ecfff           call 0x41c390
// 007274ec  8bc8                 mov ecx, eax
// 007274ee  8b442434             mov eax, dword ptr [esp + 0x34]
// 007274f2  99                   cdq 
// 007274f3  2bc2                 sub eax, edx
// 007274f5  8bd0                 mov edx, eax
// 007274f7  8b4104               mov eax, dword ptr [ecx + 4]
// 007274fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007274fe  d1fa                 sar edx, 1
// 00727500  2bc2                 sub eax, edx
// 00727502  8d5103               lea edx, [ecx + 3]
// 00727505  89542474             mov dword ptr [esp + 0x74], edx
// 00727509  89442478             mov dword ptr [esp + 0x78], eax
// 0072750d  eb2c                 jmp 0x72753b
// 0072750f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00727513  8d44244c             lea eax, [esp + 0x4c]
// 00727517  50                   push eax
// 00727518  83c303               add ebx, 3
// 0072751b  e8704ecfff           call 0x41c390
// 00727520  8bc8                 mov ecx, eax
// 00727522  8b442430             mov eax, dword ptr [esp + 0x30]
// 00727526  8b09                 mov ecx, dword ptr [ecx]
// 00727528  99                   cdq 
// 00727529  2bc2                 sub eax, edx
// 0072752b  d1f8                 sar eax, 1
// 0072752d  2bc8                 sub ecx, eax
// 0072752f  894c2474             mov dword ptr [esp + 0x74], ecx
// 00727533  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00727537  895c2478             mov dword ptr [esp + 0x78], ebx
// 0072753b  8d442474             lea eax, [esp + 0x74]
// 0072753f  8b10                 mov edx, dword ptr [eax]
// 00727541  8b4004               mov eax, dword ptr [eax + 4]
// 00727544  89442450             mov dword ptr [esp + 0x50], eax
// 00727548  8b442448             mov eax, dword ptr [esp + 0x48]
// 0072754c  8954244c             mov dword ptr [esp + 0x4c], edx
// 00727550  83f804               cmp eax, 4
// 00727553  750c                 jne 0x727561
// 00727555  83c103               add ecx, 3
// 00727558  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0072755c  e984000000           jmp 0x7275e5
// 00727561  83f802               cmp eax, 2
// 00727564  7517                 jne 0x72757d
// 00727566  837c244400           cmp dword ptr [esp + 0x44], 0
// 0072756b  7478                 je 0x7275e5
// 0072756d  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00727572  7571                 jne 0x7275e5
// 00727574  83c103               add ecx, 3
// 00727577  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0072757b  eb68                 jmp 0x7275e5
// 0072757d  83f803               cmp eax, 3
// 00727580  7405                 je 0x727587
// 00727582  83f801               cmp eax, 1
// 00727585  755e                 jne 0x7275e5
// 00727587  837c244400           cmp dword ptr [esp + 0x44], 0
// 0072758c  7457                 je 0x7275e5
// 0072758e  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00727593  7550                 jne 0x7275e5
// 00727595  837c241400           cmp dword ptr [esp + 0x14], 0
// 0072759a  7525                 jne 0x7275c1
// 0072759c  8d4c2474             lea ecx, [esp + 0x74]
// 007275a0  51                   push ecx
// 007275a1  8d4c241c             lea ecx, [esp + 0x1c]
// 007275a5  e8e64dcfff           call 0x41c390
// 007275aa  8bc8                 mov ecx, eax
// 007275ac  8b442430             mov eax, dword ptr [esp + 0x30]
// 007275b0  99                   cdq 
// 007275b1  2bc2                 sub eax, edx
// 007275b3  8bd0                 mov edx, eax
// 007275b5  8b01                 mov eax, dword ptr [ecx]
// 007275b7  d1fa                 sar edx, 1
// 007275b9  2bc2                 sub eax, edx
// 007275bb  8944244c             mov dword ptr [esp + 0x4c], eax
// 007275bf  eb24                 jmp 0x7275e5
// 007275c1  8d442474             lea eax, [esp + 0x74]
// 007275c5  50                   push eax
// 007275c6  8d4c241c             lea ecx, [esp + 0x1c]
// 007275ca  e8c14dcfff           call 0x41c390
// 007275cf  8bc8                 mov ecx, eax
// 007275d1  8b442434             mov eax, dword ptr [esp + 0x34]
// 007275d5  99                   cdq 
// 007275d6  2bc2                 sub eax, edx
// 007275d8  8bd0                 mov edx, eax
// 007275da  8b4104               mov eax, dword ptr [ecx + 4]
// 007275dd  d1fa                 sar edx, 1
// 007275df  2bc2                 sub eax, edx
// 007275e1  89442450             mov dword ptr [esp + 0x50], eax
// 007275e5  8bcf                 mov ecx, edi
// 007275e7  e834de0600           call 0x795420
// 007275ec  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007275f3  8b542468             mov edx, dword ptr [esp + 0x68]
// 007275f7  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 007275fb  6a01                 push 1
// 007275fd  51                   push ecx
// 007275fe  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00727602  52                   push edx
// 00727603  8b542470             mov edx, dword ptr [esp + 0x70]
// 00727607  51                   push ecx
// 00727608  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0072760c  52                   push edx
// 0072760d  8b542448             mov edx, dword ptr [esp + 0x48]
// 00727611  51                   push ecx
// 00727612  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00727616  53                   push ebx
// 00727617  52                   push edx
// 00727618  8b542470             mov edx, dword ptr [esp + 0x70]
// 0072761c  51                   push ecx
// 0072761d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00727621  52                   push edx
// 00727622  894320               mov dword ptr [ebx + 0x20], eax
// 00727625  8b06                 mov eax, dword ptr [esi]
// 00727627  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0072762d  51                   push ecx
// 0072762e  55                   push ebp
// 0072762f  8bce                 mov ecx, esi
// 00727631  ffd2                 call edx
// 00727633  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00727637  c7432000000000       mov dword ptr [ebx + 0x20], 0
// 0072763e  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 00727645  8b442448             mov eax, dword ptr [esp + 0x48]
// 00727649  48                   dec eax
// 0072764a  83f809               cmp eax, 9
// 0072764d  0f874e020000         ja 0x7278a1
// 00727653  0fb680e07b7200       movzx eax, byte ptr [eax + 0x727be0]
// 0072765a  ff2485d07b7200       jmp dword ptr [eax*4 + 0x727bd0]
// 00727661  85c9                 test ecx, ecx
// 00727663  756f                 jne 0x7276d4
// 00727665  85db                 test ebx, ebx
// 00727667  7412                 je 0x72767b
// 00727669  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0072766f  3988f8000000         cmp dword ptr [eax + 0xf8], ecx
// 00727675  7504                 jne 0x72767b
// 00727677  33c0                 xor eax, eax
// 00727679  eb05                 jmp 0x727680
// 0072767b  b801000000           mov eax, 1
// 00727680  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00727684  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 0072768b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072768f  50                   push eax
// 00727690  6a01                 push 1
// 00727692  53                   push ebx
// 00727693  51                   push ecx
// 00727694  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00727698  83ec10               sub esp, 0x10
// 0072769b  8bc4                 mov eax, esp
// 0072769d  8910                 mov dword ptr [eax], edx
// 0072769f  8b542440             mov edx, dword ptr [esp + 0x40]
// 007276a3  894804               mov dword ptr [eax + 4], ecx
// 007276a6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007276aa  57                   push edi
// 007276ab  895008               mov dword ptr [eax + 8], edx
// 007276ae  55                   push ebp
// 007276af  8d542458             lea edx, [esp + 0x58]
// 007276b3  89480c               mov dword ptr [eax + 0xc], ecx
// 007276b6  52                   push edx
// 007276b7  8bce                 mov ecx, esi
// 007276b9  e832d1ffff           call 0x7247f0
// 007276be  8b442434             mov eax, dword ptr [esp + 0x34]
// 007276c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007276c6  83c006               add eax, 6
// 007276c9  53                   push ebx
// 007276ca  83c106               add ecx, 6
// 007276cd  50                   push eax
// 007276ce  51                   push ecx
// 007276cf  e9b7040000           jmp 0x727b8b
// 007276d4  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007276d9  756c                 jne 0x727747
// 007276db  8d442474             lea eax, [esp + 0x74]
// 007276df  50                   push eax
// 007276e0  8d4c241c             lea ecx, [esp + 0x1c]
// 007276e4  e8a74ccfff           call 0x41c390
// 007276e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007276ed  8b16                 mov edx, dword ptr [esi]
// 007276ef  8b5804               mov ebx, dword ptr [eax + 4]
// 007276f2  83c1f9               add ecx, -7
// 007276f5  894c2430             mov dword ptr [esp + 0x30], ecx
// 007276f9  6a00                 push 0
// 007276fb  8bcf                 mov ecx, edi
// 007276fd  89542450             mov dword ptr [esp + 0x50], edx
// 00727701  e8aa49d2ff           call 0x44c0b0
// 00727706  50                   push eax
// 00727707  8b07                 mov eax, dword ptr [edi]
// 00727709  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0072770f  8bcf                 mov ecx, edi
// 00727711  ffd2                 call edx
// 00727713  50                   push eax
// 00727714  8b07                 mov eax, dword ptr [edi]
// 00727716  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00727719  8bcf                 mov ecx, edi
// 0072771b  ffd2                 call edx
// 0072771d  8b542458             mov edx, dword ptr [esp + 0x58]
// 00727721  50                   push eax
// 00727722  8b442440             mov eax, dword ptr [esp + 0x40]
// 00727726  53                   push ebx
// 00727727  50                   push eax
// 00727728  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 0072772e  57                   push edi
// 0072772f  55                   push ebp
// 00727730  8bce                 mov ecx, esi
// 00727732  ffd0                 call eax
// 00727734  8b542414             mov edx, dword ptr [esp + 0x14]
// 00727738  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072773c  52                   push edx
// 0072773d  8d4807               lea ecx, [eax + 7]
// 00727740  50                   push eax
// 00727741  51                   push ecx
// 00727742  e944040000           jmp 0x727b8b
// 00727747  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0072774d  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00727753  8b542428             mov edx, dword ptr [esp + 0x28]
// 00727757  51                   push ecx
// 00727758  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072775c  51                   push ecx
// 0072775d  33c9                 xor ecx, ecx
// 0072775f  85c0                 test eax, eax
// 00727761  0f95c1               setne cl
// 00727764  52                   push edx
// 00727765  8b542424             mov edx, dword ptr [esp + 0x24]
// 00727769  51                   push ecx
// 0072776a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072776e  53                   push ebx
// 0072776f  83ec10               sub esp, 0x10
// 00727772  8bc4                 mov eax, esp
// 00727774  8910                 mov dword ptr [eax], edx
// 00727776  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072777a  894804               mov dword ptr [eax + 4], ecx
// 0072777d  895008               mov dword ptr [eax + 8], edx
// 00727780  8d9424b8000000       lea edx, [esp + 0xb8]
// 00727787  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072778b  57                   push edi
// 0072778c  55                   push ebp
// 0072778d  89480c               mov dword ptr [eax + 0xc], ecx
// 00727790  52                   push edx
// 00727791  8bce                 mov ecx, esi
// 00727793  e848e9ffff           call 0x7260e0
// 00727798  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072779c  8b5004               mov edx, dword ptr [eax + 4]
// 0072779f  8b00                 mov eax, dword ptr [eax]
// 007277a1  51                   push ecx
// 007277a2  52                   push edx
// 007277a3  e9e2030000           jmp 0x727b8a
// 007277a8  85c9                 test ecx, ecx
// 007277aa  7511                 jne 0x7277bd
// 007277ac  bb16000000           mov ebx, 0x16
// 007277b1  8bd3                 mov edx, ebx
// 007277b3  895c2428             mov dword ptr [esp + 0x28], ebx
// 007277b7  8954242c             mov dword ptr [esp + 0x2c], edx
// 007277bb  eb08                 jmp 0x7277c5
// 007277bd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007277c1  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007277c5  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007277ca  7513                 jne 0x7277df
// 007277cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007277d0  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007277d6  51                   push ecx
// 007277d7  03c3                 add eax, ebx
// 007277d9  52                   push edx
// 007277da  e9ab030000           jmp 0x727b8a
// 007277df  ff742444             push dword ptr [esp + 0x44]
// 007277e3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007277e7  2b8ec8000000         sub ecx, dword ptr [esi + 0xc8]
// 007277ed  52                   push edx
// 007277ee  8b9424d0000000       mov edx, dword ptr [esp + 0xd0]
// 007277f5  53                   push ebx
// 007277f6  6a00                 push 0
// 007277f8  52                   push edx
// 007277f9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007277fd  83ec10               sub esp, 0x10
// 00727800  8bc4                 mov eax, esp
// 00727802  8910                 mov dword ptr [eax], edx
// 00727804  8b542440             mov edx, dword ptr [esp + 0x40]
// 00727808  895004               mov dword ptr [eax + 4], edx
// 0072780b  894808               mov dword ptr [eax + 8], ecx
// 0072780e  894c2444             mov dword ptr [esp + 0x44], ecx
// 00727812  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00727816  57                   push edi
// 00727817  55                   push ebp
// 00727818  8d54245c             lea edx, [esp + 0x5c]
// 0072781c  89480c               mov dword ptr [eax + 0xc], ecx
// 0072781f  52                   push edx
// 00727820  8bce                 mov ecx, esi
// 00727822  e8b9e8ffff           call 0x7260e0
// 00727827  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0072782d  03442430             add eax, dword ptr [esp + 0x30]
// 00727831  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00727835  8b542414             mov edx, dword ptr [esp + 0x14]
// 00727839  e94a030000           jmp 0x727b88
// 0072783e  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00727843  7514                 jne 0x727859
// 00727845  8b442414             mov eax, dword ptr [esp + 0x14]
// 00727849  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072784d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00727851  50                   push eax
// 00727852  51                   push ecx
// 00727853  52                   push edx
// 00727854  e932030000           jmp 0x727b8b
// 00727859  85c9                 test ecx, ecx
// 0072785b  7511                 jne 0x72786e
// 0072785d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00727861  b816000000           mov eax, 0x16
// 00727866  89442428             mov dword ptr [esp + 0x28], eax
// 0072786a  8954242c             mov dword ptr [esp + 0x2c], edx
// 0072786e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00727872  8b542418             mov edx, dword ptr [esp + 0x18]
// 00727876  51                   push ecx
// 00727877  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072787b  50                   push eax
// 0072787c  51                   push ecx
// 0072787d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00727881  6a00                 push 0
// 00727883  53                   push ebx
// 00727884  83ec10               sub esp, 0x10
// 00727887  8bc4                 mov eax, esp
// 00727889  8910                 mov dword ptr [eax], edx
// 0072788b  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072788f  894804               mov dword ptr [eax + 4], ecx
// 00727892  895008               mov dword ptr [eax + 8], edx
// 00727895  8d942490000000       lea edx, [esp + 0x90]
// 0072789c  e9e6feffff           jmp 0x727787
// 007278a1  8bb424bc000000       mov esi, dword ptr [esp + 0xbc]
// 007278a8  8d8c2484000000       lea ecx, [esp + 0x84]
// 007278af  c70600000000         mov dword ptr [esi], 0
// 007278b5  c7460400000000       mov dword ptr [esi + 4], 0
// 007278bc  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 007278c7  e814900400           call 0x7708e0
// 007278cc  8bc6                 mov eax, esi
// 007278ce  e9e1020000           jmp 0x727bb4
// 007278d3  8b442440             mov eax, dword ptr [esp + 0x40]
// 007278d7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007278db  8b16                 mov edx, dword ptr [esi]
// 007278dd  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 007278e3  50                   push eax
// 007278e4  8b442460             mov eax, dword ptr [esp + 0x60]
// 007278e8  53                   push ebx
// 007278e9  51                   push ecx
// 007278ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007278ee  50                   push eax
// 007278ef  6a00                 push 0
// 007278f1  83ec10               sub esp, 0x10
// 007278f4  8bc4                 mov eax, esp
// 007278f6  8908                 mov dword ptr [eax], ecx
// 007278f8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007278fc  894804               mov dword ptr [eax + 4], ecx
// 007278ff  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00727903  894808               mov dword ptr [eax + 8], ecx
// 00727906  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072790a  89480c               mov dword ptr [eax + 0xc], ecx
// 0072790d  8d442470             lea eax, [esp + 0x70]
// 00727911  eb41                 jmp 0x727954
// 00727913  8b442440             mov eax, dword ptr [esp + 0x40]
// 00727917  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0072791b  8b16                 mov edx, dword ptr [esi]
// 0072791d  8b92d0000000         mov edx, dword ptr [edx + 0xd0]
// 00727923  50                   push eax
// 00727924  8b442460             mov eax, dword ptr [esp + 0x60]
// 00727928  53                   push ebx
// 00727929  51                   push ecx
// 0072792a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072792e  50                   push eax
// 0072792f  6a00                 push 0
// 00727931  83ec10               sub esp, 0x10
// 00727934  8bc4                 mov eax, esp
// 00727936  8908                 mov dword ptr [eax], ecx
// 00727938  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0072793c  894804               mov dword ptr [eax + 4], ecx
// 0072793f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00727943  894808               mov dword ptr [eax + 8], ecx
// 00727946  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072794a  89480c               mov dword ptr [eax + 0xc], ecx
// 0072794d  8d842498000000       lea eax, [esp + 0x98]
// 00727954  55                   push ebp
// 00727955  50                   push eax
// 00727956  8bce                 mov ecx, esi
// 00727958  ffd2                 call edx
// 0072795a  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 00727962  8b18                 mov ebx, dword ptr [eax]
// 00727964  8b4004               mov eax, dword ptr [eax + 4]
// 00727967  895c2430             mov dword ptr [esp + 0x30], ebx
// 0072796b  89442434             mov dword ptr [esp + 0x34], eax
// 0072796f  0f84af010000         je 0x727b24
// 00727975  8b16                 mov edx, dword ptr [esi]
// 00727977  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0072797a  8b5d00               mov ebx, dword ptr [ebp]
// 0072797d  57                   push edi
// 0072797e  8bce                 mov ecx, esi
// 00727980  ffd0                 call eax
// 00727982  8b5338               mov edx, dword ptr [ebx + 0x38]
// 00727985  50                   push eax
// 00727986  8bcd                 mov ecx, ebp
// 00727988  ffd2                 call edx
// 0072798a  837c241400           cmp dword ptr [esp + 0x14], 0
// 0072798f  7552                 jne 0x7279e3
// 00727991  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00727995  2b442434             sub eax, dword ptr [esp + 0x34]
// 00727999  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0072799d  03442424             add eax, dword ptr [esp + 0x24]
// 007279a1  8d4b03               lea ecx, [ebx + 3]
// 007279a4  99                   cdq 
// 007279a5  2bc2                 sub eax, edx
// 007279a7  8b542430             mov edx, dword ptr [esp + 0x30]
// 007279ab  03d1                 add edx, ecx
// 007279ad  d1f8                 sar eax, 1
// 007279af  8954247c             mov dword ptr [esp + 0x7c], edx
// 007279b3  8b542434             mov edx, dword ptr [esp + 0x34]
// 007279b7  03d0                 add edx, eax
// 007279b9  89942480000000       mov dword ptr [esp + 0x80], edx
// 007279c0  8bd0                 mov edx, eax
// 007279c2  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007279c6  89442454             mov dword ptr [esp + 0x54], eax
// 007279ca  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007279d1  89442458             mov dword ptr [esp + 0x58], eax
// 007279d5  8b442430             mov eax, dword ptr [esp + 0x30]
// 007279d9  8d440305             lea eax, [ebx + eax + 5]
// 007279dd  89442418             mov dword ptr [esp + 0x18], eax
// 007279e1  eb58                 jmp 0x727a3b
// 007279e3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007279e7  8b542420             mov edx, dword ptr [esp + 0x20]
// 007279eb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007279ef  8d040a               lea eax, [edx + ecx]
// 007279f2  99                   cdq 
// 007279f3  2bc2                 sub eax, edx
// 007279f5  8bc8                 mov ecx, eax
// 007279f7  8b442430             mov eax, dword ptr [esp + 0x30]
// 007279fb  99                   cdq 
// 007279fc  2bc2                 sub eax, edx
// 007279fe  8b542434             mov edx, dword ptr [esp + 0x34]
// 00727a02  d1f8                 sar eax, 1
// 00727a04  d1f9                 sar ecx, 1
// 00727a06  2bc8                 sub ecx, eax
// 00727a08  8b442430             mov eax, dword ptr [esp + 0x30]
// 00727a0c  03c1                 add eax, ecx
// 00727a0e  83c303               add ebx, 3
// 00727a11  03d3                 add edx, ebx
// 00727a13  89442454             mov dword ptr [esp + 0x54], eax
// 00727a17  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 00727a1e  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00727a25  89442458             mov dword ptr [esp + 0x58], eax
// 00727a29  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00727a2d  8bd3                 mov edx, ebx
// 00727a2f  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00727a33  8d441805             lea eax, [eax + ebx + 5]
// 00727a37  8944241c             mov dword ptr [esp + 0x1c], eax
// 00727a3b  8b442440             mov eax, dword ptr [esp + 0x40]
// 00727a3f  50                   push eax
// 00727a40  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00727a44  8b1e                 mov ebx, dword ptr [esi]
// 00727a46  50                   push eax
// 00727a47  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00727a4b  50                   push eax
// 00727a4c  8b442468             mov eax, dword ptr [esp + 0x68]
// 00727a50  50                   push eax
// 00727a51  6a01                 push 1
// 00727a53  83ec10               sub esp, 0x10
// 00727a56  837c246c0b           cmp dword ptr [esp + 0x6c], 0xb
// 00727a5b  8bc4                 mov eax, esp
// 00727a5d  8908                 mov dword ptr [eax], ecx
// 00727a5f  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00727a63  895004               mov dword ptr [eax + 4], edx
// 00727a66  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00727a6a  894808               mov dword ptr [eax + 8], ecx
// 00727a6d  89500c               mov dword ptr [eax + 0xc], edx
// 00727a70  55                   push ebp
// 00727a71  8d442474             lea eax, [esp + 0x74]
// 00727a75  8bce                 mov ecx, esi
// 00727a77  50                   push eax
// 00727a78  7508                 jne 0x727a82
// 00727a7a  8b93d4000000         mov edx, dword ptr [ebx + 0xd4]
// 00727a80  eb06                 jmp 0x727a88
// 00727a82  8b93d0000000         mov edx, dword ptr [ebx + 0xd0]
// 00727a88  ffd2                 call edx
// 00727a8a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00727a8e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00727a92  8b9424c8000000       mov edx, dword ptr [esp + 0xc8]
// 00727a99  6a00                 push 0
// 00727a9b  50                   push eax
// 00727a9c  51                   push ecx
// 00727a9d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00727aa1  6a00                 push 0
// 00727aa3  52                   push edx
// 00727aa4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00727aa8  83ec10               sub esp, 0x10
// 00727aab  8bc4                 mov eax, esp
// 00727aad  8908                 mov dword ptr [eax], ecx
// 00727aaf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00727ab3  895004               mov dword ptr [eax + 4], edx
// 00727ab6  8b542448             mov edx, dword ptr [esp + 0x48]
// 00727aba  894808               mov dword ptr [eax + 8], ecx
// 00727abd  57                   push edi
// 00727abe  89500c               mov dword ptr [eax + 0xc], edx
// 00727ac1  55                   push ebp
// 00727ac2  8d442478             lea eax, [esp + 0x78]
// 00727ac6  50                   push eax
// 00727ac7  8bce                 mov ecx, esi
// 00727ac9  e812e6ffff           call 0x7260e0
// 00727ace  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00727ad2  83f802               cmp eax, 2
// 00727ad5  7405                 je 0x727adc
// 00727ad7  83f803               cmp eax, 3
// 00727ada  7537                 jne 0x727b13
// 00727adc  8b5500               mov edx, dword ptr [ebp]
// 00727adf  6a12                 push 0x12
// 00727ae1  8bce                 mov ecx, esi
// 00727ae3  e898acffff           call 0x722780
// 00727ae8  50                   push eax
// 00727ae9  8b4238               mov eax, dword ptr [edx + 0x38]
// 00727aec  8bcd                 mov ecx, ebp
// 00727aee  ffd0                 call eax
// 00727af0  8b5500               mov edx, dword ptr [ebp]
// 00727af3  6a0f                 push 0xf
// 00727af5  8bce                 mov ecx, esi
// 00727af7  e884acffff           call 0x722780
// 00727afc  50                   push eax
// 00727afd  8b4234               mov eax, dword ptr [edx + 0x34]
// 00727b00  8bcd                 mov ecx, ebp
// 00727b02  ffd0                 call eax
// 00727b04  8b5504               mov edx, dword ptr [ebp + 4]
// 00727b07  8d4c2418             lea ecx, [esp + 0x18]
// 00727b0b  51                   push ecx
// 00727b0c  52                   push edx
// 00727b0d  ff15e0ee8900         call dword ptr [0x89eee0]
// 00727b13  8b442414             mov eax, dword ptr [esp + 0x14]
// 00727b17  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00727b1b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00727b1f  50                   push eax
// 00727b20  51                   push ecx
// 00727b21  52                   push edx
// 00727b22  eb67                 jmp 0x727b8b
// 00727b24  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00727b28  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00727b2c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00727b30  6a00                 push 0
// 00727b32  50                   push eax
// 00727b33  51                   push ecx
// 00727b34  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00727b38  6a00                 push 0
// 00727b3a  6a00                 push 0
// 00727b3c  83ec10               sub esp, 0x10
// 00727b3f  8bc4                 mov eax, esp
// 00727b41  8910                 mov dword ptr [eax], edx
// 00727b43  8b542444             mov edx, dword ptr [esp + 0x44]
// 00727b47  894804               mov dword ptr [eax + 4], ecx
// 00727b4a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00727b4e  57                   push edi
// 00727b4f  895008               mov dword ptr [eax + 8], edx
// 00727b52  55                   push ebp
// 00727b53  8d542478             lea edx, [esp + 0x78]
// 00727b57  89480c               mov dword ptr [eax + 0xc], ecx
// 00727b5a  52                   push edx
// 00727b5b  8bce                 mov ecx, esi
// 00727b5d  e87ee5ffff           call 0x7260e0
// 00727b62  8b542414             mov edx, dword ptr [esp + 0x14]
// 00727b66  85d2                 test edx, edx
// 00727b68  7412                 je 0x727b7c
// 00727b6a  8b442450             mov eax, dword ptr [esp + 0x50]
// 00727b6e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00727b72  8d4c0805             lea ecx, [eax + ecx + 5]
// 00727b76  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00727b7a  eb0c                 jmp 0x727b88
// 00727b7c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00727b80  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00727b84  8d441805             lea eax, [eax + ebx + 5]
// 00727b88  52                   push edx
// 00727b89  51                   push ecx
// 00727b8a  50                   push eax
// 00727b8b  57                   push edi
// 00727b8c  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 00727b93  57                   push edi
// 00727b94  8bce                 mov ecx, esi
// 00727b96  e805b4ffff           call 0x722fa0
// 00727b9b  8d8c2484000000       lea ecx, [esp + 0x84]
// 00727ba2  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 00727bad  e82e8d0400           call 0x7708e0
// 00727bb2  8bc7                 mov eax, edi
// 00727bb4  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00727bbb  64890d00000000       mov dword ptr fs:[0], ecx
// 00727bc2  59                   pop ecx
// 00727bc3  5f                   pop edi
// 00727bc4  5e                   pop esi
// 00727bc5  5d                   pop ebp
// 00727bc6  5b                   pop ebx
// 00727bc7  81c4a4000000         add esp, 0xa4
// 00727bcd  c21000               ret 0x10
// 00727bd0  3e7872               js 0x727c45
// 00727bd3  006176               add byte ptr [ecx + 0x76], ah
// 00727bd6  7200                 jb 0x727bd8
// 00727bd8  a877                 test al, 0x77
// 00727bda  7200                 jb 0x727bdc
// 00727bdc  a178720000           mov eax, dword ptr [0x7278]
// 00727be1  0100                 add dword ptr [eax], eax
// 00727be3  0203                 add al, byte ptr [ebx]
// 00727be5  0303                 add eax, dword ptr [ebx]
// 00727be7  0000                 add byte ptr [eax], al
// copied from an identical function in another client (function ?DrawControlToolBarParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp