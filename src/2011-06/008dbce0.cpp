// roc 2011-06 008dbce0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 1852 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dbce0
//
// 008dbce0  83ec78               sub esp, 0x78
// 008dbce3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008dbcea  8b5048               mov edx, dword ptr [eax + 0x48]
// 008dbced  53                   push ebx
// 008dbcee  8b5850               mov ebx, dword ptr [eax + 0x50]
// 008dbcf1  894c2410             mov dword ptr [esp + 0x10], ecx
// 008dbcf5  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008dbcf8  55                   push ebp
// 008dbcf9  8b6844               mov ebp, dword ptr [eax + 0x44]
// 008dbcfc  89542434             mov dword ptr [esp + 0x34], edx
// 008dbd00  8b91e4000000         mov edx, dword ptr [ecx + 0xe4]
// 008dbd06  8b8a4c010000         mov ecx, dword ptr [edx + 0x14c]
// 008dbd0c  56                   push esi
// 008dbd0d  57                   push edi
// 008dbd0e  8b784c               mov edi, dword ptr [eax + 0x4c]
// 008dbd11  896c2438             mov dword ptr [esp + 0x38], ebp
// 008dbd15  83f9ff               cmp ecx, -1
// 008dbd18  7506                 jne 0x8dbd20
// 008dbd1a  8b8a48010000         mov ecx, dword ptr [edx + 0x148]
// 008dbd20  894c2410             mov dword ptr [esp + 0x10], ecx
// 008dbd24  8b8a64010000         mov ecx, dword ptr [edx + 0x164]
// 008dbd2a  83f9ff               cmp ecx, -1
// 008dbd2d  7506                 jne 0x8dbd35
// 008dbd2f  8b8a60010000         mov ecx, dword ptr [edx + 0x160]
// 008dbd35  894c2414             mov dword ptr [esp + 0x14], ecx
// 008dbd39  8b8a70010000         mov ecx, dword ptr [edx + 0x170]
// 008dbd3f  83f9ff               cmp ecx, -1
// 008dbd42  7506                 jne 0x8dbd4a
// 008dbd44  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 008dbd4a  894c2418             mov dword ptr [esp + 0x18], ecx
// 008dbd4e  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008dbd51  394104               cmp dword ptr [ecx + 4], eax
// 008dbd54  7528                 jne 0x8dbd7e
// 008dbd56  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008dbd5c  83f8ff               cmp eax, -1
// 008dbd5f  750c                 jne 0x8dbd6d
// 008dbd61  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 008dbd67  89542410             mov dword ptr [esp + 0x10], edx
// 008dbd6b  eb04                 jmp 0x8dbd71
// 008dbd6d  89442410             mov dword ptr [esp + 0x10], eax
// 008dbd71  b8ffffff00           mov eax, 0xffffff
// 008dbd76  89442414             mov dword ptr [esp + 0x14], eax
// 008dbd7a  89442418             mov dword ptr [esp + 0x18], eax
// 008dbd7e  8b01                 mov eax, dword ptr [ecx]
// 008dbd80  8b5048               mov edx, dword ptr [eax + 0x48]
// 008dbd83  ffd2                 call edx
// 008dbd85  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 008dbd8c  b903000000           mov ecx, 3
// 008dbd91  3bc1                 cmp eax, ecx
// 008dbd93  0f8731060000         ja 0x8dc3ca
// 008dbd99  ff24850cc48d00       jmp dword ptr [eax*4 + 0x8dc40c]
// 008dbda0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008dbda4  8bc3                 mov eax, ebx
// 008dbda6  2bc1                 sub eax, ecx
// 008dbda8  99                   cdq 
// 008dbda9  2bc2                 sub eax, edx
// 008dbdab  8bd8                 mov ebx, eax
// 008dbdad  d1fb                 sar ebx, 1
// 008dbdaf  8d441ffc             lea eax, [edi + ebx - 4]
// 008dbdb3  89442448             mov dword ptr [esp + 0x48], eax
// 008dbdb7  8d4101               lea eax, [ecx + 1]
// 008dbdba  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008dbdc1  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008dbdc4  8b11                 mov edx, dword ptr [ecx]
// 008dbdc6  89442420             mov dword ptr [esp + 0x20], eax
// 008dbdca  8944244c             mov dword ptr [esp + 0x4c], eax
// 008dbdce  b803000000           mov eax, 3
// 008dbdd3  2bc3                 sub eax, ebx
// 008dbdd5  89442424             mov dword ptr [esp + 0x24], eax
// 008dbdd9  89442450             mov dword ptr [esp + 0x50], eax
// 008dbddd  8d441bfa             lea eax, [ebx + ebx - 6]
// 008dbde1  89442428             mov dword ptr [esp + 0x28], eax
// 008dbde5  89442454             mov dword ptr [esp + 0x54], eax
// 008dbde9  b8feffffff           mov eax, 0xfffffffe
// 008dbdee  89442460             mov dword ptr [esp + 0x60], eax
// 008dbdf2  89442470             mov dword ptr [esp + 0x70], eax
// 008dbdf6  b802000000           mov eax, 2
// 008dbdfb  2bc3                 sub eax, ebx
// 008dbdfd  2bef                 sub ebp, edi
// 008dbdff  8944242c             mov dword ptr [esp + 0x2c], eax
// 008dbe03  89842480000000       mov dword ptr [esp + 0x80], eax
// 008dbe0a  03c0                 add eax, eax
// 008dbe0c  83c50e               add ebp, 0xe
// 008dbe0f  896c2468             mov dword ptr [esp + 0x68], ebp
// 008dbe13  bdfdffffff           mov ebp, 0xfffffffd
// 008dbe18  89442430             mov dword ptr [esp + 0x30], eax
// 008dbe1c  89842484000000       mov dword ptr [esp + 0x84], eax
// 008dbe23  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dbe26  6a00                 push 0
// 008dbe28  c744245cfcffffff     mov dword ptr [esp + 0x5c], 0xfffffffc
// 008dbe30  c744246004000000     mov dword ptr [esp + 0x60], 4
// 008dbe38  c744246801000000     mov dword ptr [esp + 0x68], 1
// 008dbe40  c744247000000000     mov dword ptr [esp + 0x70], 0
// 008dbe48  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008dbe50  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008dbe54  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008dbe5b  ffd0                 call eax
// 008dbe5d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008dbe64  50                   push eax
// 008dbe65  6a08                 push 8
// 008dbe67  8d4c2454             lea ecx, [esp + 0x54]
// 008dbe6b  51                   push ecx
// 008dbe6c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dbe70  52                   push edx
// 008dbe71  56                   push esi
// 008dbe72  e849dbffff           call 0x8d99c0
// 008dbe77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008dbe7b  6a08                 push 8
// 008dbe7d  8d44244c             lea eax, [esp + 0x4c]
// 008dbe81  50                   push eax
// 008dbe82  51                   push ecx
// 008dbe83  56                   push esi
// 008dbe84  e857d9ffff           call 0x8d97e0
// 008dbe89  8b442430             mov eax, dword ptr [esp + 0x30]
// 008dbe8d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008dbe91  6a04                 push 4
// 008dbe93  8d541ffb             lea edx, [edi + ebx - 5]
// 008dbe97  89442460             mov dword ptr [esp + 0x60], eax
// 008dbe9b  8d44245c             lea eax, [esp + 0x5c]
// 008dbe9f  894c2464             mov dword ptr [esp + 0x64], ecx
// 008dbea3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dbea7  50                   push eax
// 008dbea8  89542460             mov dword ptr [esp + 0x60], edx
// 008dbeac  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dbeb0  bffeffffff           mov edi, 0xfffffffe
// 008dbeb5  51                   push ecx
// 008dbeb6  89542470             mov dword ptr [esp + 0x70], edx
// 008dbeba  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dbebe  c744247803000000     mov dword ptr [esp + 0x78], 3
// 008dbec6  897c247c             mov dword ptr [esp + 0x7c], edi
// 008dbeca  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 008dbed5  56                   push esi
// 008dbed6  e805d9ffff           call 0x8d97e0
// 008dbedb  8b542458             mov edx, dword ptr [esp + 0x58]
// 008dbedf  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008dbee3  83c207               add edx, 7
// 008dbee6  8d4c58ff             lea ecx, [eax + ebx*2 - 1]
// 008dbeea  8b442450             mov eax, dword ptr [esp + 0x50]
// 008dbeee  89542468             mov dword ptr [esp + 0x68], edx
// 008dbef2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008dbef6  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008dbefa  897c2470             mov dword ptr [esp + 0x70], edi
// 008dbefe  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 008dbf06  897c2478             mov dword ptr [esp + 0x78], edi
// 008dbf0a  897c247c             mov dword ptr [esp + 0x7c], edi
// 008dbf0e  89942480000000       mov dword ptr [esp + 0x80], edx
// 008dbf15  89842484000000       mov dword ptr [esp + 0x84], eax
// 008dbf1c  6a04                 push 4
// 008dbf1e  8d4c246c             lea ecx, [esp + 0x6c]
// 008dbf22  e994040000           jmp 0x8dc3bb
// 008dbf27  8bc3                 mov eax, ebx
// 008dbf29  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 008dbf2d  894c247c             mov dword ptr [esp + 0x7c], ecx
// 008dbf31  99                   cdq 
// 008dbf32  2bc2                 sub eax, edx
// 008dbf34  d1f8                 sar eax, 1
// 008dbf36  8d5438fc             lea edx, [eax + edi - 4]
// 008dbf3a  89542448             mov dword ptr [esp + 0x48], edx
// 008dbf3e  8d53ff               lea edx, [ebx - 1]
// 008dbf41  8954244c             mov dword ptr [esp + 0x4c], edx
// 008dbf45  8bd1                 mov edx, ecx
// 008dbf47  2bd0                 sub edx, eax
// 008dbf49  89542430             mov dword ptr [esp + 0x30], edx
// 008dbf4d  89542450             mov dword ptr [esp + 0x50], edx
// 008dbf51  03d2                 add edx, edx
// 008dbf53  8954242c             mov dword ptr [esp + 0x2c], edx
// 008dbf57  89542454             mov dword ptr [esp + 0x54], edx
// 008dbf5b  bafcffffff           mov edx, 0xfffffffc
// 008dbf60  89542458             mov dword ptr [esp + 0x58], edx
// 008dbf64  8954245c             mov dword ptr [esp + 0x5c], edx
// 008dbf68  8b542438             mov edx, dword ptr [esp + 0x38]
// 008dbf6c  89442420             mov dword ptr [esp + 0x20], eax
// 008dbf70  b902000000           mov ecx, 2
// 008dbf75  2bc8                 sub ecx, eax
// 008dbf77  8d4400fc             lea eax, [eax + eax - 4]
// 008dbf7b  2bd7                 sub edx, edi
// 008dbf7d  89442434             mov dword ptr [esp + 0x34], eax
// 008dbf81  89842484000000       mov dword ptr [esp + 0x84], eax
// 008dbf88  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 008dbf8f  89542428             mov dword ptr [esp + 0x28], edx
// 008dbf93  83c210               add edx, 0x10
// 008dbf96  894c2424             mov dword ptr [esp + 0x24], ecx
// 008dbf9a  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008dbfa1  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008dbfa4  89542468             mov dword ptr [esp + 0x68], edx
// 008dbfa8  8b11                 mov edx, dword ptr [ecx]
// 008dbfaa  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dbfad  bdfdffffff           mov ebp, 0xfffffffd
// 008dbfb2  6a00                 push 0
// 008dbfb4  896c2464             mov dword ptr [esp + 0x64], ebp
// 008dbfb8  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008dbfc0  c744247000000000     mov dword ptr [esp + 0x70], 0
// 008dbfc8  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dbfcc  c744247801000000     mov dword ptr [esp + 0x78], 1
// 008dbfd4  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008dbfd8  ffd0                 call eax
// 008dbfda  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008dbfe1  50                   push eax
// 008dbfe2  6a08                 push 8
// 008dbfe4  8d4c2454             lea ecx, [esp + 0x54]
// 008dbfe8  51                   push ecx
// 008dbfe9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dbfed  52                   push edx
// 008dbfee  56                   push esi
// 008dbfef  e8ccd9ffff           call 0x8d99c0
// 008dbff4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008dbff8  6a08                 push 8
// 008dbffa  8d44244c             lea eax, [esp + 0x4c]
// 008dbffe  50                   push eax
// 008dbfff  51                   push ecx
// 008dc000  56                   push esi
// 008dc001  e8dad7ffff           call 0x8d97e0
// 008dc006  8b542430             mov edx, dword ptr [esp + 0x30]
// 008dc00a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008dc00e  8d443afb             lea eax, [edx + edi - 5]
// 008dc012  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008dc016  89442458             mov dword ptr [esp + 0x58], eax
// 008dc01a  8d43ff               lea eax, [ebx - 1]
// 008dc01d  6a04                 push 4
// 008dc01f  89442460             mov dword ptr [esp + 0x60], eax
// 008dc023  8d44245c             lea eax, [esp + 0x5c]
// 008dc027  894c2464             mov dword ptr [esp + 0x64], ecx
// 008dc02b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dc02f  50                   push eax
// 008dc030  51                   push ecx
// 008dc031  89542470             mov dword ptr [esp + 0x70], edx
// 008dc035  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dc039  896c2478             mov dword ptr [esp + 0x78], ebp
// 008dc03d  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008dc041  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 008dc04c  56                   push esi
// 008dc04d  e88ed7ffff           call 0x8d97e0
// 008dc052  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dc056  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008dc05a  8d0412               lea eax, [edx + edx]
// 008dc05d  8b542444             mov edx, dword ptr [esp + 0x44]
// 008dc061  2bd8                 sub ebx, eax
// 008dc063  8b442454             mov eax, dword ptr [esp + 0x54]
// 008dc067  83c7f9               add edi, -7
// 008dc06a  43                   inc ebx
// 008dc06b  83c10f               add ecx, 0xf
// 008dc06e  894c2470             mov dword ptr [esp + 0x70], ecx
// 008dc072  c744247400000000     mov dword ptr [esp + 0x74], 0
// 008dc07a  896c2478             mov dword ptr [esp + 0x78], ebp
// 008dc07e  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 008dc086  c7842480000000feffffff mov dword ptr [esp + 0x80], 0xfffffffe
// 008dc091  c784248400000002000000 mov dword ptr [esp + 0x84], 2
// 008dc09c  e9fe020000           jmp 0x8dc39f
// 008dc0a1  8bc7                 mov eax, edi
// 008dc0a3  2bc5                 sub eax, ebp
// 008dc0a5  99                   cdq 
// 008dc0a6  2bc2                 sub eax, edx
// 008dc0a8  8bf8                 mov edi, eax
// 008dc0aa  d1ff                 sar edi, 1
// 008dc0ac  8d441ffc             lea eax, [edi + ebx - 4]
// 008dc0b0  8944244c             mov dword ptr [esp + 0x4c], eax
// 008dc0b4  8d443ffb             lea eax, [edi + edi - 5]
// 008dc0b8  89442434             mov dword ptr [esp + 0x34], eax
// 008dc0bc  89442450             mov dword ptr [esp + 0x50], eax
// 008dc0c0  8bc1                 mov eax, ecx
// 008dc0c2  2bc7                 sub eax, edi
// 008dc0c4  89442430             mov dword ptr [esp + 0x30], eax
// 008dc0c8  89442454             mov dword ptr [esp + 0x54], eax
// 008dc0cc  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008dc0d0  2bc3                 sub eax, ebx
// 008dc0d2  8944242c             mov dword ptr [esp + 0x2c], eax
// 008dc0d6  83c010               add eax, 0x10
// 008dc0d9  8944246c             mov dword ptr [esp + 0x6c], eax
// 008dc0dd  b802000000           mov eax, 2
// 008dc0e2  2bc7                 sub eax, edi
// 008dc0e4  8d0c00               lea ecx, [eax + eax]
// 008dc0e7  894c2428             mov dword ptr [esp + 0x28], ecx
// 008dc0eb  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008dc0f2  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008dc0f9  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008dc0fc  8b11                 mov edx, dword ptr [ecx]
// 008dc0fe  896c2448             mov dword ptr [esp + 0x48], ebp
// 008dc102  bdfdffffff           mov ebp, 0xfffffffd
// 008dc107  89442424             mov dword ptr [esp + 0x24], eax
// 008dc10b  89842484000000       mov dword ptr [esp + 0x84], eax
// 008dc112  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dc115  6a00                 push 0
// 008dc117  c744245c04000000     mov dword ptr [esp + 0x5c], 4
// 008dc11f  c7442460fcffffff     mov dword ptr [esp + 0x60], 0xfffffffc
// 008dc127  c744246401000000     mov dword ptr [esp + 0x64], 1
// 008dc12f  896c2468             mov dword ptr [esp + 0x68], ebp
// 008dc133  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008dc13b  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 008dc143  896c2478             mov dword ptr [esp + 0x78], ebp
// 008dc147  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008dc14b  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008dc152  ffd0                 call eax
// 008dc154  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008dc15b  50                   push eax
// 008dc15c  6a08                 push 8
// 008dc15e  8d4c2454             lea ecx, [esp + 0x54]
// 008dc162  51                   push ecx
// 008dc163  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dc167  52                   push edx
// 008dc168  56                   push esi
// 008dc169  e852d8ffff           call 0x8d99c0
// 008dc16e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008dc172  6a08                 push 8
// 008dc174  8d44244c             lea eax, [esp + 0x4c]
// 008dc178  50                   push eax
// 008dc179  51                   push ecx
// 008dc17a  56                   push esi
// 008dc17b  e860d6ffff           call 0x8d97e0
// 008dc180  8b542448             mov edx, dword ptr [esp + 0x48]
// 008dc184  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008dc188  8d441ffb             lea eax, [edi + ebx - 5]
// 008dc18c  89542458             mov dword ptr [esp + 0x58], edx
// 008dc190  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dc194  8944245c             mov dword ptr [esp + 0x5c], eax
// 008dc198  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008dc19c  894c2460             mov dword ptr [esp + 0x60], ecx
// 008dc1a0  6a05                 push 5
// 008dc1a2  8d4c245c             lea ecx, [esp + 0x5c]
// 008dc1a6  89542468             mov dword ptr [esp + 0x68], edx
// 008dc1aa  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dc1ae  83c00e               add eax, 0xe
// 008dc1b1  51                   push ecx
// 008dc1b2  c744247003000000     mov dword ptr [esp + 0x70], 3
// 008dc1ba  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dc1be  c744247801000000     mov dword ptr [esp + 0x78], 1
// 008dc1c6  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008dc1ca  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008dc1d5  89842484000000       mov dword ptr [esp + 0x84], eax
// 008dc1dc  52                   push edx
// 008dc1dd  56                   push esi
// 008dc1de  e8fdd5ffff           call 0x8d97e0
// 008dc1e3  8b442458             mov eax, dword ptr [esp + 0x58]
// 008dc1e7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008dc1eb  8d4c78fe             lea ecx, [eax + edi*2 - 2]
// 008dc1ef  b8feffffff           mov eax, 0xfffffffe
// 008dc1f4  83c205               add edx, 5
// 008dc1f7  89442470             mov dword ptr [esp + 0x70], eax
// 008dc1fb  89442474             mov dword ptr [esp + 0x74], eax
// 008dc1ff  8b442448             mov eax, dword ptr [esp + 0x48]
// 008dc203  8954246c             mov dword ptr [esp + 0x6c], edx
// 008dc207  6a03                 push 3
// 008dc209  8d54246c             lea edx, [esp + 0x6c]
// 008dc20d  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008dc211  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008dc215  8944247c             mov dword ptr [esp + 0x7c], eax
// 008dc219  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008dc21d  52                   push edx
// 008dc21e  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008dc225  50                   push eax
// 008dc226  e996010000           jmp 0x8dc3c1
// 008dc22b  8bc7                 mov eax, edi
// 008dc22d  2bc5                 sub eax, ebp
// 008dc22f  99                   cdq 
// 008dc230  2bc2                 sub eax, edx
// 008dc232  d1f8                 sar eax, 1
// 008dc234  8d57ff               lea edx, [edi - 1]
// 008dc237  89542448             mov dword ptr [esp + 0x48], edx
// 008dc23b  8d5418fc             lea edx, [eax + ebx - 4]
// 008dc23f  8954244c             mov dword ptr [esp + 0x4c], edx
// 008dc243  8bd1                 mov edx, ecx
// 008dc245  2bd0                 sub edx, eax
// 008dc247  8d2c12               lea ebp, [edx + edx]
// 008dc24a  89542430             mov dword ptr [esp + 0x30], edx
// 008dc24e  89542454             mov dword ptr [esp + 0x54], edx
// 008dc252  894c2478             mov dword ptr [esp + 0x78], ecx
// 008dc256  8d4c00fc             lea ecx, [eax + eax - 4]
// 008dc25a  bafcffffff           mov edx, 0xfffffffc
// 008dc25f  89542458             mov dword ptr [esp + 0x58], edx
// 008dc263  8954245c             mov dword ptr [esp + 0x5c], edx
// 008dc267  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008dc26b  894c2428             mov dword ptr [esp + 0x28], ecx
// 008dc26f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008dc276  89442420             mov dword ptr [esp + 0x20], eax
// 008dc27a  2bd3                 sub edx, ebx
// 008dc27c  b902000000           mov ecx, 2
// 008dc281  2bc8                 sub ecx, eax
// 008dc283  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 008dc28a  83c210               add edx, 0x10
// 008dc28d  894c2424             mov dword ptr [esp + 0x24], ecx
// 008dc291  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 008dc298  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008dc29b  8954242c             mov dword ptr [esp + 0x2c], edx
// 008dc29f  8954246c             mov dword ptr [esp + 0x6c], edx
// 008dc2a3  8b11                 mov edx, dword ptr [ecx]
// 008dc2a5  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dc2a8  896c2434             mov dword ptr [esp + 0x34], ebp
// 008dc2ac  896c2450             mov dword ptr [esp + 0x50], ebp
// 008dc2b0  bdfdffffff           mov ebp, 0xfffffffd
// 008dc2b5  6a00                 push 0
// 008dc2b7  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008dc2bf  896c2468             mov dword ptr [esp + 0x68], ebp
// 008dc2c3  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008dc2cb  c744247401000000     mov dword ptr [esp + 0x74], 1
// 008dc2d3  896c2478             mov dword ptr [esp + 0x78], ebp
// 008dc2d7  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008dc2de  ffd0                 call eax
// 008dc2e0  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008dc2e7  50                   push eax
// 008dc2e8  6a08                 push 8
// 008dc2ea  8d4c2454             lea ecx, [esp + 0x54]
// 008dc2ee  51                   push ecx
// 008dc2ef  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dc2f3  52                   push edx
// 008dc2f4  56                   push esi
// 008dc2f5  e8c6d6ffff           call 0x8d99c0
// 008dc2fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008dc2fe  6a08                 push 8
// 008dc300  8d44244c             lea eax, [esp + 0x4c]
// 008dc304  50                   push eax
// 008dc305  51                   push ecx
// 008dc306  56                   push esi
// 008dc307  e8d4d4ffff           call 0x8d97e0
// 008dc30c  8b542430             mov edx, dword ptr [esp + 0x30]
// 008dc310  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008dc314  8d47ff               lea eax, [edi - 1]
// 008dc317  89442458             mov dword ptr [esp + 0x58], eax
// 008dc31b  8d441afb             lea eax, [edx + ebx - 5]
// 008dc31f  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dc323  6a04                 push 4
// 008dc325  89442460             mov dword ptr [esp + 0x60], eax
// 008dc329  8d44245c             lea eax, [esp + 0x5c]
// 008dc32d  894c2464             mov dword ptr [esp + 0x64], ecx
// 008dc331  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dc335  50                   push eax
// 008dc336  51                   push ecx
// 008dc337  89542470             mov dword ptr [esp + 0x70], edx
// 008dc33b  896c2474             mov dword ptr [esp + 0x74], ebp
// 008dc33f  896c2478             mov dword ptr [esp + 0x78], ebp
// 008dc343  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 008dc34b  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008dc352  56                   push esi
// 008dc353  e888d4ffff           call 0x8d97e0
// 008dc358  8b542440             mov edx, dword ptr [esp + 0x40]
// 008dc35c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008dc360  8d0412               lea eax, [edx + edx]
// 008dc363  8b542448             mov edx, dword ptr [esp + 0x48]
// 008dc367  2bf8                 sub edi, eax
// 008dc369  8b442444             mov eax, dword ptr [esp + 0x44]
// 008dc36d  47                   inc edi
// 008dc36e  83c3f8               add ebx, -8
// 008dc371  c744247000000000     mov dword ptr [esp + 0x70], 0
// 008dc379  894c2474             mov dword ptr [esp + 0x74], ecx
// 008dc37d  c744247801000000     mov dword ptr [esp + 0x78], 1
// 008dc385  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008dc389  c784248000000002000000 mov dword ptr [esp + 0x80], 2
// 008dc394  c7842484000000feffffff mov dword ptr [esp + 0x84], 0xfffffffe
// 008dc39f  8d4c2468             lea ecx, [esp + 0x68]
// 008dc3a3  6a05                 push 5
// 008dc3a5  89842490000000       mov dword ptr [esp + 0x90], eax
// 008dc3ac  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 008dc3b3  895c2470             mov dword ptr [esp + 0x70], ebx
// 008dc3b7  897c246c             mov dword ptr [esp + 0x6c], edi
// 008dc3bb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008dc3bf  51                   push ecx
// 008dc3c0  52                   push edx
// 008dc3c1  56                   push esi
// 008dc3c2  e819d4ffff           call 0x8d97e0
// 008dc3c7  83c430               add esp, 0x30
// 008dc3ca  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 008dc3d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dc3d5  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008dc3d8  8b5a44               mov ebx, dword ptr [edx + 0x44]
// 008dc3db  8b39                 mov edi, dword ptr [ecx]
// 008dc3dd  6a01                 push 1
// 008dc3df  83ec10               sub esp, 0x10
// 008dc3e2  8bc4                 mov eax, esp
// 008dc3e4  8918                 mov dword ptr [eax], ebx
// 008dc3e6  8b5a48               mov ebx, dword ptr [edx + 0x48]
// 008dc3e9  895804               mov dword ptr [eax + 4], ebx
// 008dc3ec  8b5a4c               mov ebx, dword ptr [edx + 0x4c]
// 008dc3ef  895808               mov dword ptr [eax + 8], ebx
// 008dc3f2  8b5a50               mov ebx, dword ptr [edx + 0x50]
// 008dc3f5  52                   push edx
// 008dc3f6  8b5768               mov edx, dword ptr [edi + 0x68]
// 008dc3f9  56                   push esi
// 008dc3fa  89580c               mov dword ptr [eax + 0xc], ebx
// 008dc3fd  ffd2                 call edx
// 008dc3ff  5f                   pop edi
// 008dc400  5e                   pop esi
// 008dc401  5d                   pop ebp
// 008dc402  5b                   pop ebx
// 008dc403  83c478               add esp, 0x78
// 008dc406  c20800               ret 8
// 008dc409  8d4900               lea ecx, [ecx]
// 008dc40c  27                   daa 
// 008dc40d  bf8d002bc2           mov edi, 0xc22b008d
// 008dc412  8d00                 lea eax, [eax]
// 008dc414  a0bd8d00a1           mov al, byte ptr [0xa1008dbd]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp