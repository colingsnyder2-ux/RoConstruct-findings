// roc 2011-06 008b1bc0  unit: CXTPReportPaintManager  size: 1171 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b1bc0
//
// 008b1bc0  6aff                 push -1
// 008b1bc2  6848b1a000           push 0xa0b148
// 008b1bc7  64a100000000         mov eax, dword ptr fs:[0]
// 008b1bcd  50                   push eax
// 008b1bce  83ec44               sub esp, 0x44
// 008b1bd1  53                   push ebx
// 008b1bd2  55                   push ebp
// 008b1bd3  56                   push esi
// 008b1bd4  57                   push edi
// 008b1bd5  a12058c900           mov eax, dword ptr [0xc95820]
// 008b1bda  33c4                 xor eax, esp
// 008b1bdc  50                   push eax
// 008b1bdd  8d442458             lea eax, [esp + 0x58]
// 008b1be1  64a300000000         mov dword ptr fs:[0], eax
// 008b1be7  8bf9                 mov edi, ecx
// 008b1be9  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 008b1bed  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008b1bf0  e83b5af8ff           call 0x837630
// 008b1bf5  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 008b1bfc  8b742468             mov esi, dword ptr [esp + 0x68]
// 008b1c00  8944246c             mov dword ptr [esp + 0x6c], eax
// 008b1c04  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008b1c07  83f8ff               cmp eax, -1
// 008b1c0a  740d                 je 0x8b1c19
// 008b1c0c  50                   push eax
// 008b1c0d  8d442474             lea eax, [esp + 0x74]
// 008b1c11  50                   push eax
// 008b1c12  8bce                 mov ecx, esi
// 008b1c14  e80792f5ff           call 0x80ae20
// 008b1c19  8b16                 mov edx, dword ptr [esi]
// 008b1c1b  8b4524               mov eax, dword ptr [ebp + 0x24]
// 008b1c1e  8b5238               mov edx, dword ptr [edx + 0x38]
// 008b1c21  50                   push eax
// 008b1c22  8bce                 mov ecx, esi
// 008b1c24  ffd2                 call edx
// 008b1c26  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008b1c29  50                   push eax
// 008b1c2a  56                   push esi
// 008b1c2b  8d4c2450             lea ecx, [esp + 0x50]
// 008b1c2f  e8ecb4faff           call 0x85d120
// 008b1c34  8b13                 mov edx, dword ptr [ebx]
// 008b1c36  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008b1c3c  8bcb                 mov ecx, ebx
// 008b1c3e  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008b1c46  ffd0                 call eax
// 008b1c48  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008b1c4b  40                   inc eax
// 008b1c4c  50                   push eax
// 008b1c4d  e81eeaf7ff           call 0x830670
// 008b1c52  8be8                 mov ebp, eax
// 008b1c54  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 008b1c5a  83f8ff               cmp eax, -1
// 008b1c5d  7506                 jne 0x8b1c65
// 008b1c5f  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 008b1c65  8b8f6c020000         mov ecx, dword ptr [edi + 0x26c]
// 008b1c6b  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b1c6f  50                   push eax
// 008b1c70  8b442474             mov eax, dword ptr [esp + 0x74]
// 008b1c74  51                   push ecx
// 008b1c75  2bd0                 sub edx, eax
// 008b1c77  52                   push edx
// 008b1c78  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008b1c7f  2bd1                 sub edx, ecx
// 008b1c81  52                   push edx
// 008b1c82  50                   push eax
// 008b1c83  8bce                 mov ecx, esi
// 008b1c85  e84ca91100           call 0x9cc5d6
// 008b1c8a  8b03                 mov eax, dword ptr [ebx]
// 008b1c8c  8b5070               mov edx, dword ptr [eax + 0x70]
// 008b1c8f  8bcb                 mov ecx, ebx
// 008b1c91  ffd2                 call edx
// 008b1c93  85c0                 test eax, eax
// 008b1c95  7457                 je 0x8b1cee
// 008b1c97  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 008b1c9c  7450                 je 0x8b1cee
// 008b1c9e  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008b1ca2  754a                 jne 0x8b1cee
// 008b1ca4  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008b1ca7  83b80402000000       cmp dword ptr [eax + 0x204], 0
// 008b1cae  743e                 je 0x8b1cee
// 008b1cb0  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008b1cb4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b1cb8  8b17                 mov edx, dword ptr [edi]
// 008b1cba  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 008b1cc0  48                   dec eax
// 008b1cc1  03cd                 add ecx, ebp
// 008b1cc3  83ec10               sub esp, 0x10
// 008b1cc6  8944247c             mov dword ptr [esp + 0x7c], eax
// 008b1cca  8bc4                 mov eax, esp
// 008b1ccc  8908                 mov dword ptr [eax], ecx
// 008b1cce  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b1cd5  894804               mov dword ptr [eax + 4], ecx
// 008b1cd8  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008b1cdf  894808               mov dword ptr [eax + 8], ecx
// 008b1ce2  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008b1ce6  89480c               mov dword ptr [eax + 0xc], ecx
// 008b1ce9  56                   push esi
// 008b1cea  8bcf                 mov ecx, edi
// 008b1cec  ffd2                 call edx
// 008b1cee  85ed                 test ebp, ebp
// 008b1cf0  7e3a                 jle 0x8b1d2c
// 008b1cf2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b1cf6  8b17                 mov edx, dword ptr [edi]
// 008b1cf8  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008b1cfe  8d0429               lea eax, [ecx + ebp]
// 008b1d01  83ec10               sub esp, 0x10
// 008b1d04  8944247c             mov dword ptr [esp + 0x7c], eax
// 008b1d08  8bc4                 mov eax, esp
// 008b1d0a  8908                 mov dword ptr [eax], ecx
// 008b1d0c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b1d13  894804               mov dword ptr [eax + 4], ecx
// 008b1d16  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008b1d1a  894808               mov dword ptr [eax + 8], ecx
// 008b1d1d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008b1d24  89480c               mov dword ptr [eax + 0xc], ecx
// 008b1d27  56                   push esi
// 008b1d28  8bcf                 mov ecx, edi
// 008b1d2a  ffd2                 call edx
// 008b1d2c  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008b1d33  8b4134               mov eax, dword ptr [ecx + 0x34]
// 008b1d36  016c2470             add dword ptr [esp + 0x70], ebp
// 008b1d3a  33d2                 xor edx, edx
// 008b1d3c  89542468             mov dword ptr [esp + 0x68], edx
// 008b1d40  89542414             mov dword ptr [esp + 0x14], edx
// 008b1d44  89542420             mov dword ptr [esp + 0x20], edx
// 008b1d48  89542424             mov dword ptr [esp + 0x24], edx
// 008b1d4c  8944246c             mov dword ptr [esp + 0x6c], eax
// 008b1d50  a80f                 test al, 0xf
// 008b1d52  7507                 jne 0x8b1d5b
// 008b1d54  83c801               or eax, 1
// 008b1d57  8944246c             mov dword ptr [esp + 0x6c], eax
// 008b1d5b  a9000f0000           test eax, 0xf00
// 008b1d60  7509                 jne 0x8b1d6b
// 008b1d62  0d00020000           or eax, 0x200
// 008b1d67  8944246c             mov dword ptr [esp + 0x6c], eax
// 008b1d6b  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008b1d6e  83f8ff               cmp eax, -1
// 008b1d71  7456                 je 0x8b1dc9
// 008b1d73  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008b1d76  8b89d0010000         mov ecx, dword ptr [ecx + 0x1d0]
// 008b1d7c  52                   push edx
// 008b1d7d  50                   push eax
// 008b1d7e  e80d3df7ff           call 0x825a90
// 008b1d83  8be8                 mov ebp, eax
// 008b1d85  85ed                 test ebp, ebp
// 008b1d87  741e                 je 0x8b1da7
// 008b1d89  8bcd                 mov ecx, ebp
// 008b1d8b  e84024ffff           call 0x8a41d0
// 008b1d90  8bcd                 mov ecx, ebp
// 008b1d92  89442418             mov dword ptr [esp + 0x18], eax
// 008b1d96  e8f575fbff           call 0x869390
// 008b1d9b  89442420             mov dword ptr [esp + 0x20], eax
// 008b1d9f  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b1da3  89442424             mov dword ptr [esp + 0x24], eax
// 008b1da7  8a44246c             mov al, byte ptr [esp + 0x6c]
// 008b1dab  a801                 test al, 1
// 008b1dad  740b                 je 0x8b1dba
// 008b1daf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b1db3  83c105               add ecx, 5
// 008b1db6  894c2468             mov dword ptr [esp + 0x68], ecx
// 008b1dba  a802                 test al, 2
// 008b1dbc  740b                 je 0x8b1dc9
// 008b1dbe  8b542420             mov edx, dword ptr [esp + 0x20]
// 008b1dc2  83c20a               add edx, 0xa
// 008b1dc5  89542414             mov dword ptr [esp + 0x14], edx
// 008b1dc9  8b442474             mov eax, dword ptr [esp + 0x74]
// 008b1dcd  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008b1dd1  8944242c             mov dword ptr [esp + 0x2c], eax
// 008b1dd5  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008b1dd9  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 008b1ddd  894c2430             mov dword ptr [esp + 0x30], ecx
// 008b1de1  8bc8                 mov ecx, eax
// 008b1de3  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 008b1de9  036c2468             add ebp, dword ptr [esp + 0x68]
// 008b1ded  83e80c               sub eax, 0xc
// 008b1df0  03c1                 add eax, ecx
// 008b1df2  99                   cdq 
// 008b1df3  2bc2                 sub eax, edx
// 008b1df5  894c2434             mov dword ptr [esp + 0x34], ecx
// 008b1df9  8bc8                 mov ecx, eax
// 008b1dfb  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 008b1e01  99                   cdq 
// 008b1e02  2bc2                 sub eax, edx
// 008b1e04  8d542428             lea edx, [esp + 0x28]
// 008b1e08  52                   push edx
// 008b1e09  d1f9                 sar ecx, 1
// 008b1e0b  d1f8                 sar eax, 1
// 008b1e0d  2bc8                 sub ecx, eax
// 008b1e0f  53                   push ebx
// 008b1e10  56                   push esi
// 008b1e11  8d442424             lea eax, [esp + 0x24]
// 008b1e15  894c2438             mov dword ptr [esp + 0x38], ecx
// 008b1e19  50                   push eax
// 008b1e1a  8bcf                 mov ecx, edi
// 008b1e1c  896c2438             mov dword ptr [esp + 0x38], ebp
// 008b1e20  e87ba8ffff           call 0x8ac6a0
// 008b1e25  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008b1e29  8b28                 mov ebp, dword ptr [eax]
// 008b1e2b  752c                 jne 0x8b1e59
// 008b1e2d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b1e31  8b13                 mov edx, dword ptr [ebx]
// 008b1e33  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 008b1e39  83ec10               sub esp, 0x10
// 008b1e3c  8bc4                 mov eax, esp
// 008b1e3e  8908                 mov dword ptr [eax], ecx
// 008b1e40  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008b1e44  894804               mov dword ptr [eax + 4], ecx
// 008b1e47  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008b1e4b  894808               mov dword ptr [eax + 8], ecx
// 008b1e4e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b1e52  89480c               mov dword ptr [eax + 0xc], ecx
// 008b1e55  8bcb                 mov ecx, ebx
// 008b1e57  ffd2                 call edx
// 008b1e59  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b1e5d  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b1e61  8d4c2805             lea ecx, [eax + ebp + 5]
// 008b1e65  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008b1e69  89442444             mov dword ptr [esp + 0x44], eax
// 008b1e6d  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 008b1e73  894c2468             mov dword ptr [esp + 0x68], ecx
// 008b1e77  034c2414             add ecx, dword ptr [esp + 0x14]
// 008b1e7b  83e806               sub eax, 6
// 008b1e7e  8944243c             mov dword ptr [esp + 0x3c], eax
// 008b1e82  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008b1e89  837830ff             cmp dword ptr [eax + 0x30], -1
// 008b1e8d  89542440             mov dword ptr [esp + 0x40], edx
// 008b1e91  894c2438             mov dword ptr [esp + 0x38], ecx
// 008b1e95  740f                 je 0x8b1ea6
// 008b1e97  f644246c0c           test byte ptr [esp + 0x6c], 0xc
// 008b1e9c  7408                 je 0x8b1ea6
// 008b1e9e  2b542420             sub edx, dword ptr [esp + 0x20]
// 008b1ea2  89542440             mov dword ptr [esp + 0x40], edx
// 008b1ea6  8b2e                 mov ebp, dword ptr [esi]
// 008b1ea8  6824880000           push 0x8824
// 008b1ead  8d54243c             lea edx, [esp + 0x3c]
// 008b1eb1  8d482c               lea ecx, [eax + 0x2c]
// 008b1eb4  52                   push edx
// 008b1eb5  ff15a826a400         call dword ptr [0xa426a8]
// 008b1ebb  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008b1ec2  50                   push eax
// 008b1ec3  83c12c               add ecx, 0x2c
// 008b1ec6  ff15c82da400         call dword ptr [0xa42dc8]
// 008b1ecc  50                   push eax
// 008b1ecd  8b4570               mov eax, dword ptr [ebp + 0x70]
// 008b1ed0  8bce                 mov ecx, esi
// 008b1ed2  ffd0                 call eax
// 008b1ed4  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 008b1edb  8d4c2418             lea ecx, [esp + 0x18]
// 008b1edf  51                   push ecx
// 008b1ee0  83c52c               add ebp, 0x2c
// 008b1ee3  8bcd                 mov ecx, ebp
// 008b1ee5  ff15a826a400         call dword ptr [0xa426a8]
// 008b1eeb  50                   push eax
// 008b1eec  8bcd                 mov ecx, ebp
// 008b1eee  ff15c82da400         call dword ptr [0xa42dc8]
// 008b1ef4  8b5608               mov edx, dword ptr [esi + 8]
// 008b1ef7  50                   push eax
// 008b1ef8  52                   push edx
// 008b1ef9  ff153801a400         call dword ptr [0xa40138]
// 008b1eff  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008b1f06  837830ff             cmp dword ptr [eax + 0x30], -1
// 008b1f0a  0f841c010000         je 0x8b202c
// 008b1f10  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b1f14  8b442478             mov eax, dword ptr [esp + 0x78]
// 008b1f18  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008b1f1c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 008b1f20  894c2428             mov dword ptr [esp + 0x28], ecx
// 008b1f24  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b1f28  89442430             mov dword ptr [esp + 0x30], eax
// 008b1f2c  89542434             mov dword ptr [esp + 0x34], edx
// 008b1f30  f6c102               test cl, 2
// 008b1f33  7406                 je 0x8b1f3b
// 008b1f35  8b442468             mov eax, dword ptr [esp + 0x68]
// 008b1f39  eb2e                 jmp 0x8b1f69
// 008b1f3b  f6c104               test cl, 4
// 008b1f3e  741f                 je 0x8b1f5f
// 008b1f40  2b442420             sub eax, dword ptr [esp + 0x20]
// 008b1f44  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008b1f48  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b1f4c  8d4c0a05             lea ecx, [edx + ecx + 5]
// 008b1f50  48                   dec eax
// 008b1f51  894c2428             mov dword ptr [esp + 0x28], ecx
// 008b1f55  3bc8                 cmp ecx, eax
// 008b1f57  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b1f5b  7c10                 jl 0x8b1f6d
// 008b1f5d  eb0a                 jmp 0x8b1f69
// 008b1f5f  f6c108               test cl, 8
// 008b1f62  7409                 je 0x8b1f6d
// 008b1f64  2b442420             sub eax, dword ptr [esp + 0x20]
// 008b1f68  48                   dec eax
// 008b1f69  89442428             mov dword ptr [esp + 0x28], eax
// 008b1f6d  f7c100010000         test ecx, 0x100
// 008b1f73  740e                 je 0x8b1f83
// 008b1f75  8b442424             mov eax, dword ptr [esp + 0x24]
// 008b1f79  8d4c2801             lea ecx, [eax + ebp + 1]
// 008b1f7d  894c2434             mov dword ptr [esp + 0x34], ecx
// 008b1f81  eb41                 jmp 0x8b1fc4
// 008b1f83  f7c100040000         test ecx, 0x400
// 008b1f89  7428                 je 0x8b1fb3
// 008b1f8b  8b542444             mov edx, dword ptr [esp + 0x44]
// 008b1f8f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008b1f93  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b1f97  03c2                 add eax, edx
// 008b1f99  99                   cdq 
// 008b1f9a  2bc2                 sub eax, edx
// 008b1f9c  8be8                 mov ebp, eax
// 008b1f9e  8bc1                 mov eax, ecx
// 008b1fa0  99                   cdq 
// 008b1fa1  2bc2                 sub eax, edx
// 008b1fa3  d1fd                 sar ebp, 1
// 008b1fa5  d1f8                 sar eax, 1
// 008b1fa7  2be8                 sub ebp, eax
// 008b1fa9  8d4c2901             lea ecx, [ecx + ebp + 1]
// 008b1fad  894c2434             mov dword ptr [esp + 0x34], ecx
// 008b1fb1  eb11                 jmp 0x8b1fc4
// 008b1fb3  f7c100080000         test ecx, 0x800
// 008b1fb9  7409                 je 0x8b1fc4
// 008b1fbb  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008b1fbf  2b6c2424             sub ebp, dword ptr [esp + 0x24]
// 008b1fc3  4d                   dec ebp
// 008b1fc4  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008b1fcb  8b4228               mov eax, dword ptr [edx + 0x28]
// 008b1fce  83f8ff               cmp eax, -1
// 008b1fd1  7505                 jne 0x8b1fd8
// 008b1fd3  b8ffffff00           mov eax, 0xffffff
// 008b1fd8  8b16                 mov edx, dword ptr [esi]
// 008b1fda  50                   push eax
// 008b1fdb  8b4234               mov eax, dword ptr [edx + 0x34]
// 008b1fde  8bce                 mov ecx, esi
// 008b1fe0  ffd0                 call eax
// 008b1fe2  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 008b1fe5  8b17                 mov edx, dword ptr [edi]
// 008b1fe7  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 008b1fed  8944246c             mov dword ptr [esp + 0x6c], eax
// 008b1ff1  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008b1ff8  8b4830               mov ecx, dword ptr [eax + 0x30]
// 008b1ffb  51                   push ecx
// 008b1ffc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b2000  83ec10               sub esp, 0x10
// 008b2003  8bc4                 mov eax, esp
// 008b2005  8908                 mov dword ptr [eax], ecx
// 008b2007  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b200b  896804               mov dword ptr [eax + 4], ebp
// 008b200e  894808               mov dword ptr [eax + 8], ecx
// 008b2011  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008b2015  53                   push ebx
// 008b2016  89480c               mov dword ptr [eax + 0xc], ecx
// 008b2019  56                   push esi
// 008b201a  8bcf                 mov ecx, edi
// 008b201c  ffd2                 call edx
// 008b201e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b2022  8b06                 mov eax, dword ptr [esi]
// 008b2024  8b5034               mov edx, dword ptr [eax + 0x34]
// 008b2027  51                   push ecx
// 008b2028  8bce                 mov ecx, esi
// 008b202a  ffd2                 call edx
// 008b202c  8d4c2448             lea ecx, [esp + 0x48]
// 008b2030  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008b2038  e863b1faff           call 0x85d1a0
// 008b203d  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008b2041  64890d00000000       mov dword ptr fs:[0], ecx
// 008b2048  59                   pop ecx
// 008b2049  5f                   pop edi
// 008b204a  5e                   pop esi
// 008b204b  5d                   pop ebp
// 008b204c  5b                   pop ebx
// 008b204d  83c450               add esp, 0x50
// 008b2050  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawGroupRow@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportGroupRow@@VCRect@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp