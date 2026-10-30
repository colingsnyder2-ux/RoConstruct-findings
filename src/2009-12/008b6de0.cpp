// roc 2009-12 008b6de0  unit: CXTPDockingPanePaintManager  size: 1478 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6de0
//
// 008b6de0  83ec30               sub esp, 0x30
// 008b6de3  53                   push ebx
// 008b6de4  55                   push ebp
// 008b6de5  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008b6de9  56                   push esi
// 008b6dea  57                   push edi
// 008b6deb  8bf1                 mov esi, ecx
// 008b6ded  55                   push ebp
// 008b6dee  8d4c2414             lea ecx, [esp + 0x14]
// 008b6df2  e8d944f9ff           call 0x84b2d0
// 008b6df7  8b4674               mov eax, dword ptr [esi + 0x74]
// 008b6dfa  a801                 test al, 1
// 008b6dfc  0f8401010000         je 0x8b6f03
// 008b6e02  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008b6e05  83f8ff               cmp eax, -1
// 008b6e08  7503                 jne 0x8b6e0d
// 008b6e0a  8b4648               mov eax, dword ptr [esi + 0x48]
// 008b6e0d  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b6e11  50                   push eax
// 008b6e12  8d442414             lea eax, [esp + 0x14]
// 008b6e16  50                   push eax
// 008b6e17  8bcf                 mov ecx, edi
// 008b6e19  e8e0d7f3ff           call 0x7f45fe
// 008b6e1e  8bcd                 mov ecx, ebp
// 008b6e20  e8fb3eb6ff           call 0x41ad20
// 008b6e25  6a14                 push 0x14
// 008b6e27  8bce                 mov ecx, esi
// 008b6e29  85c0                 test eax, eax
// 008b6e2b  746b                 je 0x8b6e98
// 008b6e2d  e8ceeaffff           call 0x8b5900
// 008b6e32  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b6e36  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008b6e3a  50                   push eax
// 008b6e3b  6a01                 push 1
// 008b6e3d  51                   push ecx
// 008b6e3e  6a00                 push 0
// 008b6e40  6a00                 push 0
// 008b6e42  8bcf                 mov ecx, edi
// 008b6e44  e84df60600           call 0x926496
// 008b6e49  6a34                 push 0x34
// 008b6e4b  8bce                 mov ecx, esi
// 008b6e4d  e8aeeaffff           call 0x8b5900
// 008b6e52  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b6e56  2b542410             sub edx, dword ptr [esp + 0x10]
// 008b6e5a  50                   push eax
// 008b6e5b  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b6e5f  6a01                 push 1
// 008b6e61  52                   push edx
// 008b6e62  83c0fe               add eax, -2
// 008b6e65  50                   push eax
// 008b6e66  6a00                 push 0
// 008b6e68  8bcf                 mov ecx, edi
// 008b6e6a  e827f60600           call 0x926496
// 008b6e6f  6a12                 push 0x12
// 008b6e71  8bce                 mov ecx, esi
// 008b6e73  e888eaffff           call 0x8b5900
// 008b6e78  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b6e7c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008b6e80  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b6e84  50                   push eax
// 008b6e85  6a01                 push 1
// 008b6e87  51                   push ecx
// 008b6e88  4a                   dec edx
// 008b6e89  52                   push edx
// 008b6e8a  6a00                 push 0
// 008b6e8c  8bcf                 mov ecx, edi
// 008b6e8e  e803f60600           call 0x926496
// 008b6e93  e996020000           jmp 0x8b712e
// 008b6e98  e863eaffff           call 0x8b5900
// 008b6e9d  50                   push eax
// 008b6e9e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b6ea2  2b442418             sub eax, dword ptr [esp + 0x18]
// 008b6ea6  8bcf                 mov ecx, edi
// 008b6ea8  50                   push eax
// 008b6ea9  6a01                 push 1
// 008b6eab  6a00                 push 0
// 008b6ead  6a00                 push 0
// 008b6eaf  e8e2f50600           call 0x926496
// 008b6eb4  6a34                 push 0x34
// 008b6eb6  8bce                 mov ecx, esi
// 008b6eb8  e843eaffff           call 0x8b5900
// 008b6ebd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b6ec1  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008b6ec5  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b6ec9  50                   push eax
// 008b6eca  51                   push ecx
// 008b6ecb  6a01                 push 1
// 008b6ecd  6a00                 push 0
// 008b6ecf  83c2fe               add edx, -2
// 008b6ed2  52                   push edx
// 008b6ed3  8bcf                 mov ecx, edi
// 008b6ed5  e8bcf50600           call 0x926496
// 008b6eda  6a12                 push 0x12
// 008b6edc  8bce                 mov ecx, esi
// 008b6ede  e81deaffff           call 0x8b5900
// 008b6ee3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b6ee7  50                   push eax
// 008b6ee8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b6eec  2b442418             sub eax, dword ptr [esp + 0x18]
// 008b6ef0  49                   dec ecx
// 008b6ef1  50                   push eax
// 008b6ef2  6a01                 push 1
// 008b6ef4  6a00                 push 0
// 008b6ef6  51                   push ecx
// 008b6ef7  8bcf                 mov ecx, edi
// 008b6ef9  e898f50600           call 0x926496
// 008b6efe  e92b020000           jmp 0x8b712e
// 008b6f03  a802                 test al, 2
// 008b6f05  0f8449010000         je 0x8b7054
// 008b6f0b  8b4628               mov eax, dword ptr [esi + 0x28]
// 008b6f0e  99                   cdq 
// 008b6f0f  2bc2                 sub eax, edx
// 008b6f11  8bd8                 mov ebx, eax
// 008b6f13  8bcd                 mov ecx, ebp
// 008b6f15  d1fb                 sar ebx, 1
// 008b6f17  e8043eb6ff           call 0x41ad20
// 008b6f1c  6a15                 push 0x15
// 008b6f1e  8bce                 mov ecx, esi
// 008b6f20  85c0                 test eax, eax
// 008b6f22  0f8496000000         je 0x8b6fbe
// 008b6f28  e8d3e9ffff           call 0x8b5900
// 008b6f2d  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b6f31  2b542410             sub edx, dword ptr [esp + 0x10]
// 008b6f35  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b6f39  50                   push eax
// 008b6f3a  6a01                 push 1
// 008b6f3c  52                   push edx
// 008b6f3d  6a00                 push 0
// 008b6f3f  6a00                 push 0
// 008b6f41  8bcf                 mov ecx, edi
// 008b6f43  e84ef50600           call 0x926496
// 008b6f48  6a15                 push 0x15
// 008b6f4a  8bce                 mov ecx, esi
// 008b6f4c  e8afe9ffff           call 0x8b5900
// 008b6f51  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b6f55  50                   push eax
// 008b6f56  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b6f5a  2b442414             sub eax, dword ptr [esp + 0x14]
// 008b6f5e  6a01                 push 1
// 008b6f60  50                   push eax
// 008b6f61  49                   dec ecx
// 008b6f62  51                   push ecx
// 008b6f63  6a00                 push 0
// 008b6f65  8bcf                 mov ecx, edi
// 008b6f67  e82af50600           call 0x926496
// 008b6f6c  6a05                 push 5
// 008b6f6e  8bce                 mov ecx, esi
// 008b6f70  e88be9ffff           call 0x8b5900
// 008b6f75  50                   push eax
// 008b6f76  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b6f7a  2b442414             sub eax, dword ptr [esp + 0x14]
// 008b6f7e  8d53ff               lea edx, [ebx - 1]
// 008b6f81  52                   push edx
// 008b6f82  50                   push eax
// 008b6f83  6a01                 push 1
// 008b6f85  6a00                 push 0
// 008b6f87  8bcf                 mov ecx, edi
// 008b6f89  e808f50600           call 0x926496
// 008b6f8e  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008b6f91  83f8ff               cmp eax, -1
// 008b6f94  7503                 jne 0x8b6f99
// 008b6f96  8b4648               mov eax, dword ptr [esi + 0x48]
// 008b6f99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b6f9d  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008b6fa1  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b6fa5  2b542410             sub edx, dword ptr [esp + 0x10]
// 008b6fa9  50                   push eax
// 008b6faa  2bcb                 sub ecx, ebx
// 008b6fac  49                   dec ecx
// 008b6fad  51                   push ecx
// 008b6fae  52                   push edx
// 008b6faf  53                   push ebx
// 008b6fb0  6a00                 push 0
// 008b6fb2  8bcf                 mov ecx, edi
// 008b6fb4  e8ddf40600           call 0x926496
// 008b6fb9  e970010000           jmp 0x8b712e
// 008b6fbe  e83de9ffff           call 0x8b5900
// 008b6fc3  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b6fc7  50                   push eax
// 008b6fc8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b6fcc  2b442418             sub eax, dword ptr [esp + 0x18]
// 008b6fd0  8bcf                 mov ecx, edi
// 008b6fd2  50                   push eax
// 008b6fd3  6a01                 push 1
// 008b6fd5  6a00                 push 0
// 008b6fd7  6a00                 push 0
// 008b6fd9  e8b8f40600           call 0x926496
// 008b6fde  6a15                 push 0x15
// 008b6fe0  8bce                 mov ecx, esi
// 008b6fe2  e819e9ffff           call 0x8b5900
// 008b6fe7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b6feb  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008b6fef  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b6ff3  50                   push eax
// 008b6ff4  51                   push ecx
// 008b6ff5  6a01                 push 1
// 008b6ff7  6a00                 push 0
// 008b6ff9  4a                   dec edx
// 008b6ffa  52                   push edx
// 008b6ffb  8bcf                 mov ecx, edi
// 008b6ffd  e894f40600           call 0x926496
// 008b7002  6a05                 push 5
// 008b7004  8bce                 mov ecx, esi
// 008b7006  e8f5e8ffff           call 0x8b5900
// 008b700b  50                   push eax
// 008b700c  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b7010  2b442418             sub eax, dword ptr [esp + 0x18]
// 008b7014  8d4bff               lea ecx, [ebx - 1]
// 008b7017  50                   push eax
// 008b7018  51                   push ecx
// 008b7019  6a00                 push 0
// 008b701b  6a01                 push 1
// 008b701d  8bcf                 mov ecx, edi
// 008b701f  e872f40600           call 0x926496
// 008b7024  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008b7027  83f8ff               cmp eax, -1
// 008b702a  7503                 jne 0x8b702f
// 008b702c  8b4648               mov eax, dword ptr [esi + 0x48]
// 008b702f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b7033  2b542414             sub edx, dword ptr [esp + 0x14]
// 008b7037  50                   push eax
// 008b7038  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b703c  2b442414             sub eax, dword ptr [esp + 0x14]
// 008b7040  52                   push edx
// 008b7041  2bc3                 sub eax, ebx
// 008b7043  48                   dec eax
// 008b7044  50                   push eax
// 008b7045  6a00                 push 0
// 008b7047  53                   push ebx
// 008b7048  8bcf                 mov ecx, edi
// 008b704a  e847f40600           call 0x926496
// 008b704f  e9da000000           jmp 0x8b712e
// 008b7054  a804                 test al, 4
// 008b7056  745b                 je 0x8b70b3
// 008b7058  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b705c  8b442448             mov eax, dword ptr [esp + 0x48]
// 008b7060  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b7064  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b7068  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008b706c  6a01                 push 1
// 008b706e  8d5650               lea edx, [esi + 0x50]
// 008b7071  894c2440             mov dword ptr [esp + 0x40], ecx
// 008b7075  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008b7078  52                   push edx
// 008b7079  51                   push ecx
// 008b707a  ff15bccb9800         call dword ptr [0x98cbbc]
// 008b7080  50                   push eax
// 008b7081  e8a4caf3ff           call 0x7f3b2a
// 008b7086  8b542450             mov edx, dword ptr [esp + 0x50]
// 008b708a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b708e  50                   push eax
// 008b708f  52                   push edx
// 008b7090  83ec10               sub esp, 0x10
// 008b7093  8bc4                 mov eax, esp
// 008b7095  8938                 mov dword ptr [eax], edi
// 008b7097  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008b709b  895804               mov dword ptr [eax + 4], ebx
// 008b709e  896808               mov dword ptr [eax + 8], ebp
// 008b70a1  57                   push edi
// 008b70a2  89480c               mov dword ptr [eax + 0xc], ecx
// 008b70a5  e8a6eaffff           call 0x8b5b50
// 008b70aa  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008b70ae  83c424               add esp, 0x24
// 008b70b1  eb7b                 jmp 0x8b712e
// 008b70b3  a808                 test al, 8
// 008b70b5  745b                 je 0x8b7112
// 008b70b7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b70bb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008b70bf  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b70c3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b70c7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008b70cb  6a00                 push 0
// 008b70cd  8d4650               lea eax, [esi + 0x50]
// 008b70d0  89542440             mov dword ptr [esp + 0x40], edx
// 008b70d4  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008b70d7  50                   push eax
// 008b70d8  52                   push edx
// 008b70d9  ff15bccb9800         call dword ptr [0x98cbbc]
// 008b70df  50                   push eax
// 008b70e0  e845caf3ff           call 0x7f3b2a
// 008b70e5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b70e9  50                   push eax
// 008b70ea  8b442454             mov eax, dword ptr [esp + 0x54]
// 008b70ee  50                   push eax
// 008b70ef  83ec10               sub esp, 0x10
// 008b70f2  8bc4                 mov eax, esp
// 008b70f4  8938                 mov dword ptr [eax], edi
// 008b70f6  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 008b70fa  895804               mov dword ptr [eax + 4], ebx
// 008b70fd  896808               mov dword ptr [eax + 8], ebp
// 008b7100  57                   push edi
// 008b7101  89480c               mov dword ptr [eax + 0xc], ecx
// 008b7104  e847eaffff           call 0x8b5b50
// 008b7109  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008b710d  83c424               add esp, 0x24
// 008b7110  eb1c                 jmp 0x8b712e
// 008b7112  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008b7115  83f8ff               cmp eax, -1
// 008b7118  7503                 jne 0x8b711d
// 008b711a  8b4648               mov eax, dword ptr [esi + 0x48]
// 008b711d  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b7121  50                   push eax
// 008b7122  8d542414             lea edx, [esp + 0x14]
// 008b7126  52                   push edx
// 008b7127  8bcf                 mov ecx, edi
// 008b7129  e8d0d4f3ff           call 0x7f45fe
// 008b712e  f7467400010000       test dword ptr [esi + 0x74], 0x100
// 008b7135  0f84a8000000         je 0x8b71e3
// 008b713b  8bcd                 mov ecx, ebp
// 008b713d  e8de3bb6ff           call 0x41ad20
// 008b7142  85c0                 test eax, eax
// 008b7144  8b4640               mov eax, dword ptr [esi + 0x40]
// 008b7147  744a                 je 0x8b7193
// 008b7149  83f8ff               cmp eax, -1
// 008b714c  7503                 jne 0x8b7151
// 008b714e  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008b7151  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b7155  50                   push eax
// 008b7156  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b715a  03c1                 add eax, ecx
// 008b715c  6a01                 push 1
// 008b715e  99                   cdq 
// 008b715f  6a0b                 push 0xb
// 008b7161  2bc2                 sub eax, edx
// 008b7163  6a02                 push 2
// 008b7165  d1f8                 sar eax, 1
// 008b7167  50                   push eax
// 008b7168  8bcf                 mov ecx, edi
// 008b716a  e827f30600           call 0x926496
// 008b716f  8b4640               mov eax, dword ptr [esi + 0x40]
// 008b7172  83f8ff               cmp eax, -1
// 008b7175  7503                 jne 0x8b717a
// 008b7177  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008b717a  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b717e  50                   push eax
// 008b717f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b7183  03c2                 add eax, edx
// 008b7185  6a01                 push 1
// 008b7187  99                   cdq 
// 008b7188  6a0b                 push 0xb
// 008b718a  2bc2                 sub eax, edx
// 008b718c  6a04                 push 4
// 008b718e  d1f8                 sar eax, 1
// 008b7190  50                   push eax
// 008b7191  eb49                 jmp 0x8b71dc
// 008b7193  83f8ff               cmp eax, -1
// 008b7196  7503                 jne 0x8b719b
// 008b7198  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008b719b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b719f  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b71a3  50                   push eax
// 008b71a4  8d040a               lea eax, [edx + ecx]
// 008b71a7  99                   cdq 
// 008b71a8  6a0b                 push 0xb
// 008b71aa  2bc2                 sub eax, edx
// 008b71ac  6a01                 push 1
// 008b71ae  d1f8                 sar eax, 1
// 008b71b0  50                   push eax
// 008b71b1  6a02                 push 2
// 008b71b3  8bcf                 mov ecx, edi
// 008b71b5  e8dcf20600           call 0x926496
// 008b71ba  8b4640               mov eax, dword ptr [esi + 0x40]
// 008b71bd  83f8ff               cmp eax, -1
// 008b71c0  7503                 jne 0x8b71c5
// 008b71c2  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008b71c5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b71c9  50                   push eax
// 008b71ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b71ce  03c1                 add eax, ecx
// 008b71d0  99                   cdq 
// 008b71d1  6a0b                 push 0xb
// 008b71d3  2bc2                 sub eax, edx
// 008b71d5  6a01                 push 1
// 008b71d7  d1f8                 sar eax, 1
// 008b71d9  50                   push eax
// 008b71da  6a04                 push 4
// 008b71dc  8bcf                 mov ecx, edi
// 008b71de  e8b3f20600           call 0x926496
// 008b71e3  f7467400020000       test dword ptr [esi + 0x74], 0x200
// 008b71ea  0f84ac010000         je 0x8b739c
// 008b71f0  8bcd                 mov ecx, ebp
// 008b71f2  e8293bb6ff           call 0x41ad20
// 008b71f7  bd20000000           mov ebp, 0x20
// 008b71fc  85c0                 test eax, eax
// 008b71fe  0f84d2000000         je 0x8b72d6
// 008b7204  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008b7208  8bc3                 mov eax, ebx
// 008b720a  2b442410             sub eax, dword ptr [esp + 0x10]
// 008b720e  99                   cdq 
// 008b720f  2bc2                 sub eax, edx
// 008b7211  d1f8                 sar eax, 1
// 008b7213  8d48f6               lea ecx, [eax - 0xa]
// 008b7216  3bcd                 cmp ecx, ebp
// 008b7218  7f02                 jg 0x8b721c
// 008b721a  8be9                 mov ebp, ecx
// 008b721c  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b7220  8d041a               lea eax, [edx + ebx]
// 008b7223  99                   cdq 
// 008b7224  2bc2                 sub eax, edx
// 008b7226  d1f8                 sar eax, 1
// 008b7228  8bd8                 mov ebx, eax
// 008b722a  2bdd                 sub ebx, ebp
// 008b722c  83f920               cmp ecx, 0x20
// 008b722f  7e05                 jle 0x8b7236
// 008b7231  b920000000           mov ecx, 0x20
// 008b7236  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b723a  03c8                 add ecx, eax
// 008b723c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b7240  03c2                 add eax, edx
// 008b7242  99                   cdq 
// 008b7243  2bc2                 sub eax, edx
// 008b7245  8be8                 mov ebp, eax
// 008b7247  d1fd                 sar ebp, 1
// 008b7249  4d                   dec ebp
// 008b724a  3bd9                 cmp ebx, ecx
// 008b724c  894c2448             mov dword ptr [esp + 0x48], ecx
// 008b7250  0f8d46010000         jge 0x8b739c
// 008b7256  83c303               add ebx, 3
// 008b7259  8da42400000000       lea esp, [esp]
// 008b7260  8d43fe               lea eax, [ebx - 2]
// 008b7263  89442420             mov dword ptr [esp + 0x20], eax
// 008b7267  8d4501               lea eax, [ebp + 1]
// 008b726a  89442424             mov dword ptr [esp + 0x24], eax
// 008b726e  8d4503               lea eax, [ebp + 3]
// 008b7271  6a14                 push 0x14
// 008b7273  8bce                 mov ecx, esi
// 008b7275  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008b7279  89442430             mov dword ptr [esp + 0x30], eax
// 008b727d  e87ee6ffff           call 0x8b5900
// 008b7282  50                   push eax
// 008b7283  8d4c2424             lea ecx, [esp + 0x24]
// 008b7287  51                   push ecx
// 008b7288  8bcf                 mov ecx, edi
// 008b728a  e86fd3f3ff           call 0x7f45fe
// 008b728f  8b4640               mov eax, dword ptr [esi + 0x40]
// 008b7292  83f8ff               cmp eax, -1
// 008b7295  7503                 jne 0x8b729a
// 008b7297  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008b729a  8d4bff               lea ecx, [ebx - 1]
// 008b729d  8d53fd               lea edx, [ebx - 3]
// 008b72a0  894c2438             mov dword ptr [esp + 0x38], ecx
// 008b72a4  89542430             mov dword ptr [esp + 0x30], edx
// 008b72a8  8d4d02               lea ecx, [ebp + 2]
// 008b72ab  50                   push eax
// 008b72ac  8d542434             lea edx, [esp + 0x34]
// 008b72b0  894c2440             mov dword ptr [esp + 0x40], ecx
// 008b72b4  52                   push edx
// 008b72b5  8bcf                 mov ecx, edi
// 008b72b7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008b72bb  e83ed3f3ff           call 0x7f45fe
// 008b72c0  83c304               add ebx, 4
// 008b72c3  8d43fd               lea eax, [ebx - 3]
// 008b72c6  3b442448             cmp eax, dword ptr [esp + 0x48]
// 008b72ca  7c94                 jl 0x8b7260
// 008b72cc  5f                   pop edi
// 008b72cd  5e                   pop esi
// 008b72ce  5d                   pop ebp
// 008b72cf  5b                   pop ebx
// 008b72d0  83c430               add esp, 0x30
// 008b72d3  c20800               ret 8
// 008b72d6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008b72da  8bc3                 mov eax, ebx
// 008b72dc  2b442414             sub eax, dword ptr [esp + 0x14]
// 008b72e0  99                   cdq 
// 008b72e1  2bc2                 sub eax, edx
// 008b72e3  d1f8                 sar eax, 1
// 008b72e5  8d48f6               lea ecx, [eax - 0xa]
// 008b72e8  83f920               cmp ecx, 0x20
// 008b72eb  7f02                 jg 0x8b72ef
// 008b72ed  8be9                 mov ebp, ecx
// 008b72ef  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b72f3  8d041a               lea eax, [edx + ebx]
// 008b72f6  99                   cdq 
// 008b72f7  2bc2                 sub eax, edx
// 008b72f9  d1f8                 sar eax, 1
// 008b72fb  8bd8                 mov ebx, eax
// 008b72fd  2bdd                 sub ebx, ebp
// 008b72ff  83f920               cmp ecx, 0x20
// 008b7302  7e05                 jle 0x8b7309
// 008b7304  b920000000           mov ecx, 0x20
// 008b7309  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b730d  03c8                 add ecx, eax
// 008b730f  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b7313  03c2                 add eax, edx
// 008b7315  99                   cdq 
// 008b7316  2bc2                 sub eax, edx
// 008b7318  8be8                 mov ebp, eax
// 008b731a  d1fd                 sar ebp, 1
// 008b731c  4d                   dec ebp
// 008b731d  3bd9                 cmp ebx, ecx
// 008b731f  894c2448             mov dword ptr [esp + 0x48], ecx
// 008b7323  7d77                 jge 0x8b739c
// 008b7325  83c303               add ebx, 3
// 008b7328  eb06                 jmp 0x8b7330
// 008b732a  8d9b00000000         lea ebx, [ebx]
// 008b7330  8d4501               lea eax, [ebp + 1]
// 008b7333  89442430             mov dword ptr [esp + 0x30], eax
// 008b7337  8d43fe               lea eax, [ebx - 2]
// 008b733a  89442434             mov dword ptr [esp + 0x34], eax
// 008b733e  8d4503               lea eax, [ebp + 3]
// 008b7341  6a14                 push 0x14
// 008b7343  8bce                 mov ecx, esi
// 008b7345  8944243c             mov dword ptr [esp + 0x3c], eax
// 008b7349  895c2440             mov dword ptr [esp + 0x40], ebx
// 008b734d  e8aee5ffff           call 0x8b5900
// 008b7352  50                   push eax
// 008b7353  8d4c2434             lea ecx, [esp + 0x34]
// 008b7357  51                   push ecx
// 008b7358  8bcf                 mov ecx, edi
// 008b735a  e89fd2f3ff           call 0x7f45fe
// 008b735f  8b4640               mov eax, dword ptr [esi + 0x40]
// 008b7362  83f8ff               cmp eax, -1
// 008b7365  7503                 jne 0x8b736a
// 008b7367  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008b736a  8d4d02               lea ecx, [ebp + 2]
// 008b736d  8d53fd               lea edx, [ebx - 3]
// 008b7370  894c2428             mov dword ptr [esp + 0x28], ecx
// 008b7374  89542424             mov dword ptr [esp + 0x24], edx
// 008b7378  8d4bff               lea ecx, [ebx - 1]
// 008b737b  50                   push eax
// 008b737c  8d542424             lea edx, [esp + 0x24]
// 008b7380  894c2430             mov dword ptr [esp + 0x30], ecx
// 008b7384  52                   push edx
// 008b7385  8bcf                 mov ecx, edi
// 008b7387  896c2428             mov dword ptr [esp + 0x28], ebp
// 008b738b  e86ed2f3ff           call 0x7f45fe
// 008b7390  83c304               add ebx, 4
// 008b7393  8d43fd               lea eax, [ebx - 3]
// 008b7396  3b442448             cmp eax, dword ptr [esp + 0x48]
// 008b739a  7c94                 jl 0x8b7330
// 008b739c  5f                   pop edi
// 008b739d  5e                   pop esi
// 008b739e  5d                   pop ebp
// 008b739f  5b                   pop ebx
// 008b73a0  83c430               add esp, 0x30
// 008b73a3  c20800               ret 8
// copied from an identical function in another client (function ?DrawSplitter@CXTPDockingPanePaintManager@@UAEXAAVCDC@@PAVCXTPDockingPaneSplitterWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp