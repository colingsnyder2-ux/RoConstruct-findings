// roc 2009-12 008d6c90  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 1852 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d6c90
//
// 008d6c90  83ec78               sub esp, 0x78
// 008d6c93  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008d6c9a  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d6c9d  53                   push ebx
// 008d6c9e  8b5850               mov ebx, dword ptr [eax + 0x50]
// 008d6ca1  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d6ca5  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008d6ca8  55                   push ebp
// 008d6ca9  8b6844               mov ebp, dword ptr [eax + 0x44]
// 008d6cac  89542434             mov dword ptr [esp + 0x34], edx
// 008d6cb0  8b91e4000000         mov edx, dword ptr [ecx + 0xe4]
// 008d6cb6  8b8a4c010000         mov ecx, dword ptr [edx + 0x14c]
// 008d6cbc  56                   push esi
// 008d6cbd  57                   push edi
// 008d6cbe  8b784c               mov edi, dword ptr [eax + 0x4c]
// 008d6cc1  896c2438             mov dword ptr [esp + 0x38], ebp
// 008d6cc5  83f9ff               cmp ecx, -1
// 008d6cc8  7506                 jne 0x8d6cd0
// 008d6cca  8b8a48010000         mov ecx, dword ptr [edx + 0x148]
// 008d6cd0  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d6cd4  8b8a64010000         mov ecx, dword ptr [edx + 0x164]
// 008d6cda  83f9ff               cmp ecx, -1
// 008d6cdd  7506                 jne 0x8d6ce5
// 008d6cdf  8b8a60010000         mov ecx, dword ptr [edx + 0x160]
// 008d6ce5  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d6ce9  8b8a70010000         mov ecx, dword ptr [edx + 0x170]
// 008d6cef  83f9ff               cmp ecx, -1
// 008d6cf2  7506                 jne 0x8d6cfa
// 008d6cf4  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 008d6cfa  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d6cfe  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008d6d01  394104               cmp dword ptr [ecx + 4], eax
// 008d6d04  7528                 jne 0x8d6d2e
// 008d6d06  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008d6d0c  83f8ff               cmp eax, -1
// 008d6d0f  750c                 jne 0x8d6d1d
// 008d6d11  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008d6d17  89542410             mov dword ptr [esp + 0x10], edx
// 008d6d1b  eb04                 jmp 0x8d6d21
// 008d6d1d  89442410             mov dword ptr [esp + 0x10], eax
// 008d6d21  b8ffffff00           mov eax, 0xffffff
// 008d6d26  89442414             mov dword ptr [esp + 0x14], eax
// 008d6d2a  89442418             mov dword ptr [esp + 0x18], eax
// 008d6d2e  8b01                 mov eax, dword ptr [ecx]
// 008d6d30  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d6d33  ffd2                 call edx
// 008d6d35  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 008d6d3c  b903000000           mov ecx, 3
// 008d6d41  3bc1                 cmp eax, ecx
// 008d6d43  0f8731060000         ja 0x8d737a
// 008d6d49  ff2485bc738d00       jmp dword ptr [eax*4 + 0x8d73bc]
// 008d6d50  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d6d54  8bc3                 mov eax, ebx
// 008d6d56  2bc1                 sub eax, ecx
// 008d6d58  99                   cdq 
// 008d6d59  2bc2                 sub eax, edx
// 008d6d5b  8bd8                 mov ebx, eax
// 008d6d5d  d1fb                 sar ebx, 1
// 008d6d5f  8d441ffc             lea eax, [edi + ebx - 4]
// 008d6d63  89442448             mov dword ptr [esp + 0x48], eax
// 008d6d67  8d4101               lea eax, [ecx + 1]
// 008d6d6a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d6d71  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008d6d74  8b11                 mov edx, dword ptr [ecx]
// 008d6d76  89442420             mov dword ptr [esp + 0x20], eax
// 008d6d7a  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d6d7e  b803000000           mov eax, 3
// 008d6d83  2bc3                 sub eax, ebx
// 008d6d85  89442424             mov dword ptr [esp + 0x24], eax
// 008d6d89  89442450             mov dword ptr [esp + 0x50], eax
// 008d6d8d  8d441bfa             lea eax, [ebx + ebx - 6]
// 008d6d91  89442428             mov dword ptr [esp + 0x28], eax
// 008d6d95  89442454             mov dword ptr [esp + 0x54], eax
// 008d6d99  b8feffffff           mov eax, 0xfffffffe
// 008d6d9e  89442460             mov dword ptr [esp + 0x60], eax
// 008d6da2  89442470             mov dword ptr [esp + 0x70], eax
// 008d6da6  b802000000           mov eax, 2
// 008d6dab  2bc3                 sub eax, ebx
// 008d6dad  2bef                 sub ebp, edi
// 008d6daf  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d6db3  89842480000000       mov dword ptr [esp + 0x80], eax
// 008d6dba  03c0                 add eax, eax
// 008d6dbc  83c50e               add ebp, 0xe
// 008d6dbf  896c2468             mov dword ptr [esp + 0x68], ebp
// 008d6dc3  bdfdffffff           mov ebp, 0xfffffffd
// 008d6dc8  89442430             mov dword ptr [esp + 0x30], eax
// 008d6dcc  89842484000000       mov dword ptr [esp + 0x84], eax
// 008d6dd3  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d6dd6  6a00                 push 0
// 008d6dd8  c744245cfcffffff     mov dword ptr [esp + 0x5c], 0xfffffffc
// 008d6de0  c744246004000000     mov dword ptr [esp + 0x60], 4
// 008d6de8  c744246801000000     mov dword ptr [esp + 0x68], 1
// 008d6df0  c744247000000000     mov dword ptr [esp + 0x70], 0
// 008d6df8  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008d6e00  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008d6e04  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008d6e0b  ffd0                 call eax
// 008d6e0d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d6e14  50                   push eax
// 008d6e15  6a08                 push 8
// 008d6e17  8d4c2454             lea ecx, [esp + 0x54]
// 008d6e1b  51                   push ecx
// 008d6e1c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d6e20  52                   push edx
// 008d6e21  56                   push esi
// 008d6e22  e869daffff           call 0x8d4890
// 008d6e27  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d6e2b  6a08                 push 8
// 008d6e2d  8d44244c             lea eax, [esp + 0x4c]
// 008d6e31  50                   push eax
// 008d6e32  51                   push ecx
// 008d6e33  56                   push esi
// 008d6e34  e877d8ffff           call 0x8d46b0
// 008d6e39  8b442430             mov eax, dword ptr [esp + 0x30]
// 008d6e3d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d6e41  6a04                 push 4
// 008d6e43  8d541ffb             lea edx, [edi + ebx - 5]
// 008d6e47  89442460             mov dword ptr [esp + 0x60], eax
// 008d6e4b  8d44245c             lea eax, [esp + 0x5c]
// 008d6e4f  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d6e53  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d6e57  50                   push eax
// 008d6e58  89542460             mov dword ptr [esp + 0x60], edx
// 008d6e5c  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d6e60  bffeffffff           mov edi, 0xfffffffe
// 008d6e65  51                   push ecx
// 008d6e66  89542470             mov dword ptr [esp + 0x70], edx
// 008d6e6a  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d6e6e  c744247803000000     mov dword ptr [esp + 0x78], 3
// 008d6e76  897c247c             mov dword ptr [esp + 0x7c], edi
// 008d6e7a  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 008d6e85  56                   push esi
// 008d6e86  e825d8ffff           call 0x8d46b0
// 008d6e8b  8b542458             mov edx, dword ptr [esp + 0x58]
// 008d6e8f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008d6e93  83c207               add edx, 7
// 008d6e96  8d4c58ff             lea ecx, [eax + ebx*2 - 1]
// 008d6e9a  8b442450             mov eax, dword ptr [esp + 0x50]
// 008d6e9e  89542468             mov dword ptr [esp + 0x68], edx
// 008d6ea2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d6ea6  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008d6eaa  897c2470             mov dword ptr [esp + 0x70], edi
// 008d6eae  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 008d6eb6  897c2478             mov dword ptr [esp + 0x78], edi
// 008d6eba  897c247c             mov dword ptr [esp + 0x7c], edi
// 008d6ebe  89942480000000       mov dword ptr [esp + 0x80], edx
// 008d6ec5  89842484000000       mov dword ptr [esp + 0x84], eax
// 008d6ecc  6a04                 push 4
// 008d6ece  8d4c246c             lea ecx, [esp + 0x6c]
// 008d6ed2  e994040000           jmp 0x8d736b
// 008d6ed7  8bc3                 mov eax, ebx
// 008d6ed9  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 008d6edd  894c247c             mov dword ptr [esp + 0x7c], ecx
// 008d6ee1  99                   cdq 
// 008d6ee2  2bc2                 sub eax, edx
// 008d6ee4  d1f8                 sar eax, 1
// 008d6ee6  8d5438fc             lea edx, [eax + edi - 4]
// 008d6eea  89542448             mov dword ptr [esp + 0x48], edx
// 008d6eee  8d53ff               lea edx, [ebx - 1]
// 008d6ef1  8954244c             mov dword ptr [esp + 0x4c], edx
// 008d6ef5  8bd1                 mov edx, ecx
// 008d6ef7  2bd0                 sub edx, eax
// 008d6ef9  89542430             mov dword ptr [esp + 0x30], edx
// 008d6efd  89542450             mov dword ptr [esp + 0x50], edx
// 008d6f01  03d2                 add edx, edx
// 008d6f03  8954242c             mov dword ptr [esp + 0x2c], edx
// 008d6f07  89542454             mov dword ptr [esp + 0x54], edx
// 008d6f0b  bafcffffff           mov edx, 0xfffffffc
// 008d6f10  89542458             mov dword ptr [esp + 0x58], edx
// 008d6f14  8954245c             mov dword ptr [esp + 0x5c], edx
// 008d6f18  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d6f1c  89442420             mov dword ptr [esp + 0x20], eax
// 008d6f20  b902000000           mov ecx, 2
// 008d6f25  2bc8                 sub ecx, eax
// 008d6f27  8d4400fc             lea eax, [eax + eax - 4]
// 008d6f2b  2bd7                 sub edx, edi
// 008d6f2d  89442434             mov dword ptr [esp + 0x34], eax
// 008d6f31  89842484000000       mov dword ptr [esp + 0x84], eax
// 008d6f38  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 008d6f3f  89542428             mov dword ptr [esp + 0x28], edx
// 008d6f43  83c210               add edx, 0x10
// 008d6f46  894c2424             mov dword ptr [esp + 0x24], ecx
// 008d6f4a  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008d6f51  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008d6f54  89542468             mov dword ptr [esp + 0x68], edx
// 008d6f58  8b11                 mov edx, dword ptr [ecx]
// 008d6f5a  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d6f5d  bdfdffffff           mov ebp, 0xfffffffd
// 008d6f62  6a00                 push 0
// 008d6f64  896c2464             mov dword ptr [esp + 0x64], ebp
// 008d6f68  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008d6f70  c744247000000000     mov dword ptr [esp + 0x70], 0
// 008d6f78  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d6f7c  c744247801000000     mov dword ptr [esp + 0x78], 1
// 008d6f84  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008d6f88  ffd0                 call eax
// 008d6f8a  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d6f91  50                   push eax
// 008d6f92  6a08                 push 8
// 008d6f94  8d4c2454             lea ecx, [esp + 0x54]
// 008d6f98  51                   push ecx
// 008d6f99  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d6f9d  52                   push edx
// 008d6f9e  56                   push esi
// 008d6f9f  e8ecd8ffff           call 0x8d4890
// 008d6fa4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d6fa8  6a08                 push 8
// 008d6faa  8d44244c             lea eax, [esp + 0x4c]
// 008d6fae  50                   push eax
// 008d6faf  51                   push ecx
// 008d6fb0  56                   push esi
// 008d6fb1  e8fad6ffff           call 0x8d46b0
// 008d6fb6  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d6fba  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d6fbe  8d443afb             lea eax, [edx + edi - 5]
// 008d6fc2  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d6fc6  89442458             mov dword ptr [esp + 0x58], eax
// 008d6fca  8d43ff               lea eax, [ebx - 1]
// 008d6fcd  6a04                 push 4
// 008d6fcf  89442460             mov dword ptr [esp + 0x60], eax
// 008d6fd3  8d44245c             lea eax, [esp + 0x5c]
// 008d6fd7  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d6fdb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d6fdf  50                   push eax
// 008d6fe0  51                   push ecx
// 008d6fe1  89542470             mov dword ptr [esp + 0x70], edx
// 008d6fe5  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d6fe9  896c2478             mov dword ptr [esp + 0x78], ebp
// 008d6fed  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008d6ff1  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 008d6ffc  56                   push esi
// 008d6ffd  e8aed6ffff           call 0x8d46b0
// 008d7002  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d7006  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d700a  8d0412               lea eax, [edx + edx]
// 008d700d  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d7011  2bd8                 sub ebx, eax
// 008d7013  8b442454             mov eax, dword ptr [esp + 0x54]
// 008d7017  83c7f9               add edi, -7
// 008d701a  43                   inc ebx
// 008d701b  83c10f               add ecx, 0xf
// 008d701e  894c2470             mov dword ptr [esp + 0x70], ecx
// 008d7022  c744247400000000     mov dword ptr [esp + 0x74], 0
// 008d702a  896c2478             mov dword ptr [esp + 0x78], ebp
// 008d702e  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 008d7036  c7842480000000feffffff mov dword ptr [esp + 0x80], 0xfffffffe
// 008d7041  c784248400000002000000 mov dword ptr [esp + 0x84], 2
// 008d704c  e9fe020000           jmp 0x8d734f
// 008d7051  8bc7                 mov eax, edi
// 008d7053  2bc5                 sub eax, ebp
// 008d7055  99                   cdq 
// 008d7056  2bc2                 sub eax, edx
// 008d7058  8bf8                 mov edi, eax
// 008d705a  d1ff                 sar edi, 1
// 008d705c  8d441ffc             lea eax, [edi + ebx - 4]
// 008d7060  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d7064  8d443ffb             lea eax, [edi + edi - 5]
// 008d7068  89442434             mov dword ptr [esp + 0x34], eax
// 008d706c  89442450             mov dword ptr [esp + 0x50], eax
// 008d7070  8bc1                 mov eax, ecx
// 008d7072  2bc7                 sub eax, edi
// 008d7074  89442430             mov dword ptr [esp + 0x30], eax
// 008d7078  89442454             mov dword ptr [esp + 0x54], eax
// 008d707c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d7080  2bc3                 sub eax, ebx
// 008d7082  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d7086  83c010               add eax, 0x10
// 008d7089  8944246c             mov dword ptr [esp + 0x6c], eax
// 008d708d  b802000000           mov eax, 2
// 008d7092  2bc7                 sub eax, edi
// 008d7094  8d0c00               lea ecx, [eax + eax]
// 008d7097  894c2428             mov dword ptr [esp + 0x28], ecx
// 008d709b  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008d70a2  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d70a9  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008d70ac  8b11                 mov edx, dword ptr [ecx]
// 008d70ae  896c2448             mov dword ptr [esp + 0x48], ebp
// 008d70b2  bdfdffffff           mov ebp, 0xfffffffd
// 008d70b7  89442424             mov dword ptr [esp + 0x24], eax
// 008d70bb  89842484000000       mov dword ptr [esp + 0x84], eax
// 008d70c2  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d70c5  6a00                 push 0
// 008d70c7  c744245c04000000     mov dword ptr [esp + 0x5c], 4
// 008d70cf  c7442460fcffffff     mov dword ptr [esp + 0x60], 0xfffffffc
// 008d70d7  c744246401000000     mov dword ptr [esp + 0x64], 1
// 008d70df  896c2468             mov dword ptr [esp + 0x68], ebp
// 008d70e3  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008d70eb  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 008d70f3  896c2478             mov dword ptr [esp + 0x78], ebp
// 008d70f7  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008d70fb  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008d7102  ffd0                 call eax
// 008d7104  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d710b  50                   push eax
// 008d710c  6a08                 push 8
// 008d710e  8d4c2454             lea ecx, [esp + 0x54]
// 008d7112  51                   push ecx
// 008d7113  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d7117  52                   push edx
// 008d7118  56                   push esi
// 008d7119  e872d7ffff           call 0x8d4890
// 008d711e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d7122  6a08                 push 8
// 008d7124  8d44244c             lea eax, [esp + 0x4c]
// 008d7128  50                   push eax
// 008d7129  51                   push ecx
// 008d712a  56                   push esi
// 008d712b  e880d5ffff           call 0x8d46b0
// 008d7130  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d7134  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d7138  8d441ffb             lea eax, [edi + ebx - 5]
// 008d713c  89542458             mov dword ptr [esp + 0x58], edx
// 008d7140  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d7144  8944245c             mov dword ptr [esp + 0x5c], eax
// 008d7148  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d714c  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d7150  6a05                 push 5
// 008d7152  8d4c245c             lea ecx, [esp + 0x5c]
// 008d7156  89542468             mov dword ptr [esp + 0x68], edx
// 008d715a  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d715e  83c00e               add eax, 0xe
// 008d7161  51                   push ecx
// 008d7162  c744247003000000     mov dword ptr [esp + 0x70], 3
// 008d716a  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d716e  c744247801000000     mov dword ptr [esp + 0x78], 1
// 008d7176  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008d717a  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008d7185  89842484000000       mov dword ptr [esp + 0x84], eax
// 008d718c  52                   push edx
// 008d718d  56                   push esi
// 008d718e  e81dd5ffff           call 0x8d46b0
// 008d7193  8b442458             mov eax, dword ptr [esp + 0x58]
// 008d7197  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008d719b  8d4c78fe             lea ecx, [eax + edi*2 - 2]
// 008d719f  b8feffffff           mov eax, 0xfffffffe
// 008d71a4  83c205               add edx, 5
// 008d71a7  89442470             mov dword ptr [esp + 0x70], eax
// 008d71ab  89442474             mov dword ptr [esp + 0x74], eax
// 008d71af  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d71b3  8954246c             mov dword ptr [esp + 0x6c], edx
// 008d71b7  6a03                 push 3
// 008d71b9  8d54246c             lea edx, [esp + 0x6c]
// 008d71bd  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008d71c1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d71c5  8944247c             mov dword ptr [esp + 0x7c], eax
// 008d71c9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d71cd  52                   push edx
// 008d71ce  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008d71d5  50                   push eax
// 008d71d6  e996010000           jmp 0x8d7371
// 008d71db  8bc7                 mov eax, edi
// 008d71dd  2bc5                 sub eax, ebp
// 008d71df  99                   cdq 
// 008d71e0  2bc2                 sub eax, edx
// 008d71e2  d1f8                 sar eax, 1
// 008d71e4  8d57ff               lea edx, [edi - 1]
// 008d71e7  89542448             mov dword ptr [esp + 0x48], edx
// 008d71eb  8d5418fc             lea edx, [eax + ebx - 4]
// 008d71ef  8954244c             mov dword ptr [esp + 0x4c], edx
// 008d71f3  8bd1                 mov edx, ecx
// 008d71f5  2bd0                 sub edx, eax
// 008d71f7  8d2c12               lea ebp, [edx + edx]
// 008d71fa  89542430             mov dword ptr [esp + 0x30], edx
// 008d71fe  89542454             mov dword ptr [esp + 0x54], edx
// 008d7202  894c2478             mov dword ptr [esp + 0x78], ecx
// 008d7206  8d4c00fc             lea ecx, [eax + eax - 4]
// 008d720a  bafcffffff           mov edx, 0xfffffffc
// 008d720f  89542458             mov dword ptr [esp + 0x58], edx
// 008d7213  8954245c             mov dword ptr [esp + 0x5c], edx
// 008d7217  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d721b  894c2428             mov dword ptr [esp + 0x28], ecx
// 008d721f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008d7226  89442420             mov dword ptr [esp + 0x20], eax
// 008d722a  2bd3                 sub edx, ebx
// 008d722c  b902000000           mov ecx, 2
// 008d7231  2bc8                 sub ecx, eax
// 008d7233  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 008d723a  83c210               add edx, 0x10
// 008d723d  894c2424             mov dword ptr [esp + 0x24], ecx
// 008d7241  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008d7248  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008d724b  8954242c             mov dword ptr [esp + 0x2c], edx
// 008d724f  8954246c             mov dword ptr [esp + 0x6c], edx
// 008d7253  8b11                 mov edx, dword ptr [ecx]
// 008d7255  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7258  896c2434             mov dword ptr [esp + 0x34], ebp
// 008d725c  896c2450             mov dword ptr [esp + 0x50], ebp
// 008d7260  bdfdffffff           mov ebp, 0xfffffffd
// 008d7265  6a00                 push 0
// 008d7267  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008d726f  896c2468             mov dword ptr [esp + 0x68], ebp
// 008d7273  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008d727b  c744247401000000     mov dword ptr [esp + 0x74], 1
// 008d7283  896c2478             mov dword ptr [esp + 0x78], ebp
// 008d7287  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008d728e  ffd0                 call eax
// 008d7290  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d7297  50                   push eax
// 008d7298  6a08                 push 8
// 008d729a  8d4c2454             lea ecx, [esp + 0x54]
// 008d729e  51                   push ecx
// 008d729f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d72a3  52                   push edx
// 008d72a4  56                   push esi
// 008d72a5  e8e6d5ffff           call 0x8d4890
// 008d72aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d72ae  6a08                 push 8
// 008d72b0  8d44244c             lea eax, [esp + 0x4c]
// 008d72b4  50                   push eax
// 008d72b5  51                   push ecx
// 008d72b6  56                   push esi
// 008d72b7  e8f4d3ffff           call 0x8d46b0
// 008d72bc  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d72c0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d72c4  8d47ff               lea eax, [edi - 1]
// 008d72c7  89442458             mov dword ptr [esp + 0x58], eax
// 008d72cb  8d441afb             lea eax, [edx + ebx - 5]
// 008d72cf  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d72d3  6a04                 push 4
// 008d72d5  89442460             mov dword ptr [esp + 0x60], eax
// 008d72d9  8d44245c             lea eax, [esp + 0x5c]
// 008d72dd  894c2464             mov dword ptr [esp + 0x64], ecx
// 008d72e1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d72e5  50                   push eax
// 008d72e6  51                   push ecx
// 008d72e7  89542470             mov dword ptr [esp + 0x70], edx
// 008d72eb  896c2474             mov dword ptr [esp + 0x74], ebp
// 008d72ef  896c2478             mov dword ptr [esp + 0x78], ebp
// 008d72f3  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 008d72fb  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008d7302  56                   push esi
// 008d7303  e8a8d3ffff           call 0x8d46b0
// 008d7308  8b542440             mov edx, dword ptr [esp + 0x40]
// 008d730c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d7310  8d0412               lea eax, [edx + edx]
// 008d7313  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d7317  2bf8                 sub edi, eax
// 008d7319  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d731d  47                   inc edi
// 008d731e  83c3f8               add ebx, -8
// 008d7321  c744247000000000     mov dword ptr [esp + 0x70], 0
// 008d7329  894c2474             mov dword ptr [esp + 0x74], ecx
// 008d732d  c744247801000000     mov dword ptr [esp + 0x78], 1
// 008d7335  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008d7339  c784248000000002000000 mov dword ptr [esp + 0x80], 2
// 008d7344  c7842484000000feffffff mov dword ptr [esp + 0x84], 0xfffffffe
// 008d734f  8d4c2468             lea ecx, [esp + 0x68]
// 008d7353  6a05                 push 5
// 008d7355  89842490000000       mov dword ptr [esp + 0x90], eax
// 008d735c  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 008d7363  895c2470             mov dword ptr [esp + 0x70], ebx
// 008d7367  897c246c             mov dword ptr [esp + 0x6c], edi
// 008d736b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d736f  51                   push ecx
// 008d7370  52                   push edx
// 008d7371  56                   push esi
// 008d7372  e839d3ffff           call 0x8d46b0
// 008d7377  83c430               add esp, 0x30
// 008d737a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 008d7381  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d7385  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008d7388  8b5a44               mov ebx, dword ptr [edx + 0x44]
// 008d738b  8b39                 mov edi, dword ptr [ecx]
// 008d738d  6a01                 push 1
// 008d738f  83ec10               sub esp, 0x10
// 008d7392  8bc4                 mov eax, esp
// 008d7394  8918                 mov dword ptr [eax], ebx
// 008d7396  8b5a48               mov ebx, dword ptr [edx + 0x48]
// 008d7399  895804               mov dword ptr [eax + 4], ebx
// 008d739c  8b5a4c               mov ebx, dword ptr [edx + 0x4c]
// 008d739f  895808               mov dword ptr [eax + 8], ebx
// 008d73a2  8b5a50               mov ebx, dword ptr [edx + 0x50]
// 008d73a5  52                   push edx
// 008d73a6  8b5768               mov edx, dword ptr [edi + 0x68]
// 008d73a9  56                   push esi
// 008d73aa  89580c               mov dword ptr [eax + 0xc], ebx
// 008d73ad  ffd2                 call edx
// 008d73af  5f                   pop edi
// 008d73b0  5e                   pop esi
// 008d73b1  5d                   pop ebp
// 008d73b2  5b                   pop ebx
// 008d73b3  83c478               add esp, 0x78
// 008d73b6  c20800               ret 8
// 008d73b9  8d4900               lea ecx, [ecx]
// 008d73bc  d7                   xlatb 
// 008d73bd  6e                   outsb dx, byte ptr [esi]
// 008d73be  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp