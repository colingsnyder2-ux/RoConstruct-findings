// roc 2010-06 00854a60  unit: CXTPReportPaintManager  size: 1171 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00854a60
//
// 00854a60  6aff                 push -1
// 00854a62  68787f9b00           push 0x9b7f78
// 00854a67  64a100000000         mov eax, dword ptr fs:[0]
// 00854a6d  50                   push eax
// 00854a6e  83ec44               sub esp, 0x44
// 00854a71  53                   push ebx
// 00854a72  55                   push ebp
// 00854a73  56                   push esi
// 00854a74  57                   push edi
// 00854a75  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00854a7a  33c4                 xor eax, esp
// 00854a7c  50                   push eax
// 00854a7d  8d442458             lea eax, [esp + 0x58]
// 00854a81  64a300000000         mov dword ptr fs:[0], eax
// 00854a87  8bf9                 mov edi, ecx
// 00854a89  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 00854a8d  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00854a90  e80b2af8ff           call 0x7d74a0
// 00854a95  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 00854a9c  8b742468             mov esi, dword ptr [esp + 0x68]
// 00854aa0  8944246c             mov dword ptr [esp + 0x6c], eax
// 00854aa4  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00854aa7  83f8ff               cmp eax, -1
// 00854aaa  740d                 je 0x854ab9
// 00854aac  50                   push eax
// 00854aad  8d442474             lea eax, [esp + 0x74]
// 00854ab1  50                   push eax
// 00854ab2  8bce                 mov ecx, esi
// 00854ab4  e8853cf5ff           call 0x7a873e
// 00854ab9  8b16                 mov edx, dword ptr [esi]
// 00854abb  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00854abe  8b5238               mov edx, dword ptr [edx + 0x38]
// 00854ac1  50                   push eax
// 00854ac2  8bce                 mov ecx, esi
// 00854ac4  ffd2                 call edx
// 00854ac6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00854ac9  50                   push eax
// 00854aca  56                   push esi
// 00854acb  8d4c2450             lea ecx, [esp + 0x50]
// 00854acf  e8ccabfaff           call 0x7ff6a0
// 00854ad4  8b13                 mov edx, dword ptr [ebx]
// 00854ad6  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00854adc  8bcb                 mov ecx, ebx
// 00854ade  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00854ae6  ffd0                 call eax
// 00854ae8  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00854aeb  40                   inc eax
// 00854aec  50                   push eax
// 00854aed  e84ebaf7ff           call 0x7d0540
// 00854af2  8be8                 mov ebp, eax
// 00854af4  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 00854afa  83f8ff               cmp eax, -1
// 00854afd  7506                 jne 0x854b05
// 00854aff  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 00854b05  8b8f6c020000         mov ecx, dword ptr [edi + 0x26c]
// 00854b0b  8b542478             mov edx, dword ptr [esp + 0x78]
// 00854b0f  50                   push eax
// 00854b10  8b442474             mov eax, dword ptr [esp + 0x74]
// 00854b14  51                   push ecx
// 00854b15  2bd0                 sub edx, eax
// 00854b17  52                   push edx
// 00854b18  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00854b1f  2bd1                 sub edx, ecx
// 00854b21  52                   push edx
// 00854b22  50                   push eax
// 00854b23  8bce                 mov ecx, esi
// 00854b25  e860821200           call 0x97cd8a
// 00854b2a  8b03                 mov eax, dword ptr [ebx]
// 00854b2c  8b5070               mov edx, dword ptr [eax + 0x70]
// 00854b2f  8bcb                 mov ecx, ebx
// 00854b31  ffd2                 call edx
// 00854b33  85c0                 test eax, eax
// 00854b35  7457                 je 0x854b8e
// 00854b37  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00854b3c  7450                 je 0x854b8e
// 00854b3e  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00854b42  754a                 jne 0x854b8e
// 00854b44  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00854b47  83b80402000000       cmp dword ptr [eax + 0x204], 0
// 00854b4e  743e                 je 0x854b8e
// 00854b50  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00854b54  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00854b58  8b17                 mov edx, dword ptr [edi]
// 00854b5a  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 00854b60  48                   dec eax
// 00854b61  03cd                 add ecx, ebp
// 00854b63  83ec10               sub esp, 0x10
// 00854b66  8944247c             mov dword ptr [esp + 0x7c], eax
// 00854b6a  8bc4                 mov eax, esp
// 00854b6c  8908                 mov dword ptr [eax], ecx
// 00854b6e  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00854b75  894804               mov dword ptr [eax + 4], ecx
// 00854b78  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00854b7f  894808               mov dword ptr [eax + 8], ecx
// 00854b82  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00854b86  89480c               mov dword ptr [eax + 0xc], ecx
// 00854b89  56                   push esi
// 00854b8a  8bcf                 mov ecx, edi
// 00854b8c  ffd2                 call edx
// 00854b8e  85ed                 test ebp, ebp
// 00854b90  7e3a                 jle 0x854bcc
// 00854b92  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00854b96  8b17                 mov edx, dword ptr [edi]
// 00854b98  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 00854b9e  8d0429               lea eax, [ecx + ebp]
// 00854ba1  83ec10               sub esp, 0x10
// 00854ba4  8944247c             mov dword ptr [esp + 0x7c], eax
// 00854ba8  8bc4                 mov eax, esp
// 00854baa  8908                 mov dword ptr [eax], ecx
// 00854bac  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00854bb3  894804               mov dword ptr [eax + 4], ecx
// 00854bb6  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00854bba  894808               mov dword ptr [eax + 8], ecx
// 00854bbd  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00854bc4  89480c               mov dword ptr [eax + 0xc], ecx
// 00854bc7  56                   push esi
// 00854bc8  8bcf                 mov ecx, edi
// 00854bca  ffd2                 call edx
// 00854bcc  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00854bd3  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00854bd6  016c2470             add dword ptr [esp + 0x70], ebp
// 00854bda  33d2                 xor edx, edx
// 00854bdc  89542468             mov dword ptr [esp + 0x68], edx
// 00854be0  89542414             mov dword ptr [esp + 0x14], edx
// 00854be4  89542420             mov dword ptr [esp + 0x20], edx
// 00854be8  89542424             mov dword ptr [esp + 0x24], edx
// 00854bec  8944246c             mov dword ptr [esp + 0x6c], eax
// 00854bf0  a80f                 test al, 0xf
// 00854bf2  7507                 jne 0x854bfb
// 00854bf4  83c801               or eax, 1
// 00854bf7  8944246c             mov dword ptr [esp + 0x6c], eax
// 00854bfb  a9000f0000           test eax, 0xf00
// 00854c00  7509                 jne 0x854c0b
// 00854c02  0d00020000           or eax, 0x200
// 00854c07  8944246c             mov dword ptr [esp + 0x6c], eax
// 00854c0b  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00854c0e  83f8ff               cmp eax, -1
// 00854c11  7456                 je 0x854c69
// 00854c13  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00854c16  8b89d0010000         mov ecx, dword ptr [ecx + 0x1d0]
// 00854c1c  52                   push edx
// 00854c1d  50                   push eax
// 00854c1e  e8fdeff6ff           call 0x7c3c20
// 00854c23  8be8                 mov ebp, eax
// 00854c25  85ed                 test ebp, ebp
// 00854c27  741e                 je 0x854c47
// 00854c29  8bcd                 mov ecx, ebp
// 00854c2b  e8203ff6ff           call 0x7b8b50
// 00854c30  8bcd                 mov ecx, ebp
// 00854c32  89442418             mov dword ptr [esp + 0x18], eax
// 00854c36  e86595f7ff           call 0x7ce1a0
// 00854c3b  89442420             mov dword ptr [esp + 0x20], eax
// 00854c3f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00854c43  89442424             mov dword ptr [esp + 0x24], eax
// 00854c47  8a44246c             mov al, byte ptr [esp + 0x6c]
// 00854c4b  a801                 test al, 1
// 00854c4d  740b                 je 0x854c5a
// 00854c4f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00854c53  83c105               add ecx, 5
// 00854c56  894c2468             mov dword ptr [esp + 0x68], ecx
// 00854c5a  a802                 test al, 2
// 00854c5c  740b                 je 0x854c69
// 00854c5e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00854c62  83c20a               add edx, 0xa
// 00854c65  89542414             mov dword ptr [esp + 0x14], edx
// 00854c69  8b442474             mov eax, dword ptr [esp + 0x74]
// 00854c6d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00854c71  8944242c             mov dword ptr [esp + 0x2c], eax
// 00854c75  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00854c79  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 00854c7d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00854c81  8bc8                 mov ecx, eax
// 00854c83  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 00854c89  036c2468             add ebp, dword ptr [esp + 0x68]
// 00854c8d  83e80c               sub eax, 0xc
// 00854c90  03c1                 add eax, ecx
// 00854c92  99                   cdq 
// 00854c93  2bc2                 sub eax, edx
// 00854c95  894c2434             mov dword ptr [esp + 0x34], ecx
// 00854c99  8bc8                 mov ecx, eax
// 00854c9b  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 00854ca1  99                   cdq 
// 00854ca2  2bc2                 sub eax, edx
// 00854ca4  8d542428             lea edx, [esp + 0x28]
// 00854ca8  52                   push edx
// 00854ca9  d1f9                 sar ecx, 1
// 00854cab  d1f8                 sar eax, 1
// 00854cad  2bc8                 sub ecx, eax
// 00854caf  53                   push ebx
// 00854cb0  56                   push esi
// 00854cb1  8d442424             lea eax, [esp + 0x24]
// 00854cb5  894c2438             mov dword ptr [esp + 0x38], ecx
// 00854cb9  50                   push eax
// 00854cba  8bcf                 mov ecx, edi
// 00854cbc  896c2438             mov dword ptr [esp + 0x38], ebp
// 00854cc0  e87ba8ffff           call 0x84f540
// 00854cc5  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00854cc9  8b28                 mov ebp, dword ptr [eax]
// 00854ccb  752c                 jne 0x854cf9
// 00854ccd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00854cd1  8b13                 mov edx, dword ptr [ebx]
// 00854cd3  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 00854cd9  83ec10               sub esp, 0x10
// 00854cdc  8bc4                 mov eax, esp
// 00854cde  8908                 mov dword ptr [eax], ecx
// 00854ce0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00854ce4  894804               mov dword ptr [eax + 4], ecx
// 00854ce7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00854ceb  894808               mov dword ptr [eax + 8], ecx
// 00854cee  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00854cf2  89480c               mov dword ptr [eax + 0xc], ecx
// 00854cf5  8bcb                 mov ecx, ebx
// 00854cf7  ffd2                 call edx
// 00854cf9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00854cfd  8b542478             mov edx, dword ptr [esp + 0x78]
// 00854d01  8d4c2805             lea ecx, [eax + ebp + 5]
// 00854d05  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00854d09  89442444             mov dword ptr [esp + 0x44], eax
// 00854d0d  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 00854d13  894c2468             mov dword ptr [esp + 0x68], ecx
// 00854d17  034c2414             add ecx, dword ptr [esp + 0x14]
// 00854d1b  83e806               sub eax, 6
// 00854d1e  8944243c             mov dword ptr [esp + 0x3c], eax
// 00854d22  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00854d29  837830ff             cmp dword ptr [eax + 0x30], -1
// 00854d2d  89542440             mov dword ptr [esp + 0x40], edx
// 00854d31  894c2438             mov dword ptr [esp + 0x38], ecx
// 00854d35  740f                 je 0x854d46
// 00854d37  f644246c0c           test byte ptr [esp + 0x6c], 0xc
// 00854d3c  7408                 je 0x854d46
// 00854d3e  2b542420             sub edx, dword ptr [esp + 0x20]
// 00854d42  89542440             mov dword ptr [esp + 0x40], edx
// 00854d46  8b2e                 mov ebp, dword ptr [esi]
// 00854d48  6824880000           push 0x8824
// 00854d4d  8d54243c             lea edx, [esp + 0x3c]
// 00854d51  8d482c               lea ecx, [eax + 0x2c]
// 00854d54  52                   push edx
// 00854d55  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00854d5b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00854d62  50                   push eax
// 00854d63  83c12c               add ecx, 0x2c
// 00854d66  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00854d6c  50                   push eax
// 00854d6d  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00854d70  8bce                 mov ecx, esi
// 00854d72  ffd0                 call eax
// 00854d74  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 00854d7b  8d4c2418             lea ecx, [esp + 0x18]
// 00854d7f  51                   push ecx
// 00854d80  83c52c               add ebp, 0x2c
// 00854d83  8bcd                 mov ecx, ebp
// 00854d85  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00854d8b  50                   push eax
// 00854d8c  8bcd                 mov ecx, ebp
// 00854d8e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00854d94  8b5608               mov edx, dword ptr [esi + 8]
// 00854d97  50                   push eax
// 00854d98  52                   push edx
// 00854d99  ff1594a19e00         call dword ptr [0x9ea194]
// 00854d9f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00854da6  837830ff             cmp dword ptr [eax + 0x30], -1
// 00854daa  0f841c010000         je 0x854ecc
// 00854db0  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00854db4  8b442478             mov eax, dword ptr [esp + 0x78]
// 00854db8  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00854dbc  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 00854dc0  894c2428             mov dword ptr [esp + 0x28], ecx
// 00854dc4  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00854dc8  89442430             mov dword ptr [esp + 0x30], eax
// 00854dcc  89542434             mov dword ptr [esp + 0x34], edx
// 00854dd0  f6c102               test cl, 2
// 00854dd3  7406                 je 0x854ddb
// 00854dd5  8b442468             mov eax, dword ptr [esp + 0x68]
// 00854dd9  eb2e                 jmp 0x854e09
// 00854ddb  f6c104               test cl, 4
// 00854dde  741f                 je 0x854dff
// 00854de0  2b442420             sub eax, dword ptr [esp + 0x20]
// 00854de4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00854de8  8b542418             mov edx, dword ptr [esp + 0x18]
// 00854dec  8d4c0a05             lea ecx, [edx + ecx + 5]
// 00854df0  48                   dec eax
// 00854df1  894c2428             mov dword ptr [esp + 0x28], ecx
// 00854df5  3bc8                 cmp ecx, eax
// 00854df7  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00854dfb  7c10                 jl 0x854e0d
// 00854dfd  eb0a                 jmp 0x854e09
// 00854dff  f6c108               test cl, 8
// 00854e02  7409                 je 0x854e0d
// 00854e04  2b442420             sub eax, dword ptr [esp + 0x20]
// 00854e08  48                   dec eax
// 00854e09  89442428             mov dword ptr [esp + 0x28], eax
// 00854e0d  f7c100010000         test ecx, 0x100
// 00854e13  740e                 je 0x854e23
// 00854e15  8b442424             mov eax, dword ptr [esp + 0x24]
// 00854e19  8d4c2801             lea ecx, [eax + ebp + 1]
// 00854e1d  894c2434             mov dword ptr [esp + 0x34], ecx
// 00854e21  eb41                 jmp 0x854e64
// 00854e23  f7c100040000         test ecx, 0x400
// 00854e29  7428                 je 0x854e53
// 00854e2b  8b542444             mov edx, dword ptr [esp + 0x44]
// 00854e2f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00854e33  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00854e37  03c2                 add eax, edx
// 00854e39  99                   cdq 
// 00854e3a  2bc2                 sub eax, edx
// 00854e3c  8be8                 mov ebp, eax
// 00854e3e  8bc1                 mov eax, ecx
// 00854e40  99                   cdq 
// 00854e41  2bc2                 sub eax, edx
// 00854e43  d1fd                 sar ebp, 1
// 00854e45  d1f8                 sar eax, 1
// 00854e47  2be8                 sub ebp, eax
// 00854e49  8d4c2901             lea ecx, [ecx + ebp + 1]
// 00854e4d  894c2434             mov dword ptr [esp + 0x34], ecx
// 00854e51  eb11                 jmp 0x854e64
// 00854e53  f7c100080000         test ecx, 0x800
// 00854e59  7409                 je 0x854e64
// 00854e5b  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00854e5f  2b6c2424             sub ebp, dword ptr [esp + 0x24]
// 00854e63  4d                   dec ebp
// 00854e64  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00854e6b  8b4228               mov eax, dword ptr [edx + 0x28]
// 00854e6e  83f8ff               cmp eax, -1
// 00854e71  7505                 jne 0x854e78
// 00854e73  b8ffffff00           mov eax, 0xffffff
// 00854e78  8b16                 mov edx, dword ptr [esi]
// 00854e7a  50                   push eax
// 00854e7b  8b4234               mov eax, dword ptr [edx + 0x34]
// 00854e7e  8bce                 mov ecx, esi
// 00854e80  ffd0                 call eax
// 00854e82  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 00854e85  8b17                 mov edx, dword ptr [edi]
// 00854e87  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 00854e8d  8944246c             mov dword ptr [esp + 0x6c], eax
// 00854e91  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00854e98  8b4830               mov ecx, dword ptr [eax + 0x30]
// 00854e9b  51                   push ecx
// 00854e9c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00854ea0  83ec10               sub esp, 0x10
// 00854ea3  8bc4                 mov eax, esp
// 00854ea5  8908                 mov dword ptr [eax], ecx
// 00854ea7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00854eab  896804               mov dword ptr [eax + 4], ebp
// 00854eae  894808               mov dword ptr [eax + 8], ecx
// 00854eb1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00854eb5  53                   push ebx
// 00854eb6  89480c               mov dword ptr [eax + 0xc], ecx
// 00854eb9  56                   push esi
// 00854eba  8bcf                 mov ecx, edi
// 00854ebc  ffd2                 call edx
// 00854ebe  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00854ec2  8b06                 mov eax, dword ptr [esi]
// 00854ec4  8b5034               mov edx, dword ptr [eax + 0x34]
// 00854ec7  51                   push ecx
// 00854ec8  8bce                 mov ecx, esi
// 00854eca  ffd2                 call edx
// 00854ecc  8d4c2448             lea ecx, [esp + 0x48]
// 00854ed0  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00854ed8  e843a8faff           call 0x7ff720
// 00854edd  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00854ee1  64890d00000000       mov dword ptr fs:[0], ecx
// 00854ee8  59                   pop ecx
// 00854ee9  5f                   pop edi
// 00854eea  5e                   pop esi
// 00854eeb  5d                   pop ebp
// 00854eec  5b                   pop ebx
// 00854eed  83c450               add esp, 0x50
// 00854ef0  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawGroupRow@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportGroupRow@@VCRect@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp