// roc 2009-06 007c5b00  unit: CXTPReportPaintManager  size: 1171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c5b00
//
// 007c5b00  6aff                 push -1
// 007c5b02  6858de8700           push 0x87de58
// 007c5b07  64a100000000         mov eax, dword ptr fs:[0]
// 007c5b0d  50                   push eax
// 007c5b0e  83ec44               sub esp, 0x44
// 007c5b11  53                   push ebx
// 007c5b12  55                   push ebp
// 007c5b13  56                   push esi
// 007c5b14  57                   push edi
// 007c5b15  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c5b1a  33c4                 xor eax, esp
// 007c5b1c  50                   push eax
// 007c5b1d  8d442458             lea eax, [esp + 0x58]
// 007c5b21  64a300000000         mov dword ptr fs:[0], eax
// 007c5b27  8bf9                 mov edi, ecx
// 007c5b29  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 007c5b2d  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 007c5b30  e8fb2af8ff           call 0x748630
// 007c5b35  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 007c5b3c  8b742468             mov esi, dword ptr [esp + 0x68]
// 007c5b40  8944246c             mov dword ptr [esp + 0x6c], eax
// 007c5b44  8b4528               mov eax, dword ptr [ebp + 0x28]
// 007c5b47  83f8ff               cmp eax, -1
// 007c5b4a  740d                 je 0x7c5b59
// 007c5b4c  50                   push eax
// 007c5b4d  8d442474             lea eax, [esp + 0x74]
// 007c5b51  50                   push eax
// 007c5b52  8bce                 mov ecx, esi
// 007c5b54  e8773cf5ff           call 0x7197d0
// 007c5b59  8b16                 mov edx, dword ptr [esi]
// 007c5b5b  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007c5b5e  8b5238               mov edx, dword ptr [edx + 0x38]
// 007c5b61  50                   push eax
// 007c5b62  8bce                 mov ecx, esi
// 007c5b64  ffd2                 call edx
// 007c5b66  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007c5b69  50                   push eax
// 007c5b6a  56                   push esi
// 007c5b6b  8d4c2450             lea ecx, [esp + 0x50]
// 007c5b6f  e8ecacfaff           call 0x770860
// 007c5b74  8b13                 mov edx, dword ptr [ebx]
// 007c5b76  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 007c5b7c  8bcb                 mov ecx, ebx
// 007c5b7e  c744246000000000     mov dword ptr [esp + 0x60], 0
// 007c5b86  ffd0                 call eax
// 007c5b88  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 007c5b8b  40                   inc eax
// 007c5b8c  50                   push eax
// 007c5b8d  e88ebaf7ff           call 0x741620
// 007c5b92  8be8                 mov ebp, eax
// 007c5b94  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 007c5b9a  83f8ff               cmp eax, -1
// 007c5b9d  7506                 jne 0x7c5ba5
// 007c5b9f  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 007c5ba5  8b8f6c020000         mov ecx, dword ptr [edi + 0x26c]
// 007c5bab  8b542478             mov edx, dword ptr [esp + 0x78]
// 007c5baf  50                   push eax
// 007c5bb0  8b442474             mov eax, dword ptr [esp + 0x74]
// 007c5bb4  51                   push ecx
// 007c5bb5  2bd0                 sub edx, eax
// 007c5bb7  52                   push edx
// 007c5bb8  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007c5bbf  2bd1                 sub edx, ecx
// 007c5bc1  52                   push edx
// 007c5bc2  50                   push eax
// 007c5bc3  8bce                 mov ecx, esi
// 007c5bc5  e866630800           call 0x84bf30
// 007c5bca  8b03                 mov eax, dword ptr [ebx]
// 007c5bcc  8b5070               mov edx, dword ptr [eax + 0x70]
// 007c5bcf  8bcb                 mov ecx, ebx
// 007c5bd1  ffd2                 call edx
// 007c5bd3  85c0                 test eax, eax
// 007c5bd5  7457                 je 0x7c5c2e
// 007c5bd7  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007c5bdc  7450                 je 0x7c5c2e
// 007c5bde  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007c5be2  754a                 jne 0x7c5c2e
// 007c5be4  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007c5be7  83b80402000000       cmp dword ptr [eax + 0x204], 0
// 007c5bee  743e                 je 0x7c5c2e
// 007c5bf0  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007c5bf4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c5bf8  8b17                 mov edx, dword ptr [edi]
// 007c5bfa  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 007c5c00  48                   dec eax
// 007c5c01  03cd                 add ecx, ebp
// 007c5c03  83ec10               sub esp, 0x10
// 007c5c06  8944247c             mov dword ptr [esp + 0x7c], eax
// 007c5c0a  8bc4                 mov eax, esp
// 007c5c0c  8908                 mov dword ptr [eax], ecx
// 007c5c0e  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c5c15  894804               mov dword ptr [eax + 4], ecx
// 007c5c18  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007c5c1f  894808               mov dword ptr [eax + 8], ecx
// 007c5c22  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007c5c26  89480c               mov dword ptr [eax + 0xc], ecx
// 007c5c29  56                   push esi
// 007c5c2a  8bcf                 mov ecx, edi
// 007c5c2c  ffd2                 call edx
// 007c5c2e  85ed                 test ebp, ebp
// 007c5c30  7e3a                 jle 0x7c5c6c
// 007c5c32  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c5c36  8b17                 mov edx, dword ptr [edi]
// 007c5c38  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 007c5c3e  8d0429               lea eax, [ecx + ebp]
// 007c5c41  83ec10               sub esp, 0x10
// 007c5c44  8944247c             mov dword ptr [esp + 0x7c], eax
// 007c5c48  8bc4                 mov eax, esp
// 007c5c4a  8908                 mov dword ptr [eax], ecx
// 007c5c4c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c5c53  894804               mov dword ptr [eax + 4], ecx
// 007c5c56  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007c5c5a  894808               mov dword ptr [eax + 8], ecx
// 007c5c5d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c5c64  89480c               mov dword ptr [eax + 0xc], ecx
// 007c5c67  56                   push esi
// 007c5c68  8bcf                 mov ecx, edi
// 007c5c6a  ffd2                 call edx
// 007c5c6c  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007c5c73  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007c5c76  016c2470             add dword ptr [esp + 0x70], ebp
// 007c5c7a  33d2                 xor edx, edx
// 007c5c7c  89542468             mov dword ptr [esp + 0x68], edx
// 007c5c80  89542414             mov dword ptr [esp + 0x14], edx
// 007c5c84  89542420             mov dword ptr [esp + 0x20], edx
// 007c5c88  89542424             mov dword ptr [esp + 0x24], edx
// 007c5c8c  8944246c             mov dword ptr [esp + 0x6c], eax
// 007c5c90  a80f                 test al, 0xf
// 007c5c92  7507                 jne 0x7c5c9b
// 007c5c94  83c801               or eax, 1
// 007c5c97  8944246c             mov dword ptr [esp + 0x6c], eax
// 007c5c9b  a9000f0000           test eax, 0xf00
// 007c5ca0  7509                 jne 0x7c5cab
// 007c5ca2  0d00020000           or eax, 0x200
// 007c5ca7  8944246c             mov dword ptr [esp + 0x6c], eax
// 007c5cab  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007c5cae  83f8ff               cmp eax, -1
// 007c5cb1  7456                 je 0x7c5d09
// 007c5cb3  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 007c5cb6  8b89d0010000         mov ecx, dword ptr [ecx + 0x1d0]
// 007c5cbc  52                   push edx
// 007c5cbd  50                   push eax
// 007c5cbe  e8cd2df7ff           call 0x738a90
// 007c5cc3  8be8                 mov ebp, eax
// 007c5cc5  85ed                 test ebp, ebp
// 007c5cc7  741e                 je 0x7c5ce7
// 007c5cc9  8bcd                 mov ecx, ebp
// 007c5ccb  e8e071f8ff           call 0x74ceb0
// 007c5cd0  8bcd                 mov ecx, ebp
// 007c5cd2  89442418             mov dword ptr [esp + 0x18], eax
// 007c5cd6  e845250000           call 0x7c8220
// 007c5cdb  89442420             mov dword ptr [esp + 0x20], eax
// 007c5cdf  8b442418             mov eax, dword ptr [esp + 0x18]
// 007c5ce3  89442424             mov dword ptr [esp + 0x24], eax
// 007c5ce7  8a44246c             mov al, byte ptr [esp + 0x6c]
// 007c5ceb  a801                 test al, 1
// 007c5ced  740b                 je 0x7c5cfa
// 007c5cef  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007c5cf3  83c105               add ecx, 5
// 007c5cf6  894c2468             mov dword ptr [esp + 0x68], ecx
// 007c5cfa  a802                 test al, 2
// 007c5cfc  740b                 je 0x7c5d09
// 007c5cfe  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c5d02  83c20a               add edx, 0xa
// 007c5d05  89542414             mov dword ptr [esp + 0x14], edx
// 007c5d09  8b442474             mov eax, dword ptr [esp + 0x74]
// 007c5d0d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007c5d11  8944242c             mov dword ptr [esp + 0x2c], eax
// 007c5d15  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007c5d19  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 007c5d1d  894c2430             mov dword ptr [esp + 0x30], ecx
// 007c5d21  8bc8                 mov ecx, eax
// 007c5d23  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 007c5d29  036c2468             add ebp, dword ptr [esp + 0x68]
// 007c5d2d  83e80c               sub eax, 0xc
// 007c5d30  03c1                 add eax, ecx
// 007c5d32  99                   cdq 
// 007c5d33  2bc2                 sub eax, edx
// 007c5d35  894c2434             mov dword ptr [esp + 0x34], ecx
// 007c5d39  8bc8                 mov ecx, eax
// 007c5d3b  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 007c5d41  99                   cdq 
// 007c5d42  2bc2                 sub eax, edx
// 007c5d44  8d542428             lea edx, [esp + 0x28]
// 007c5d48  52                   push edx
// 007c5d49  d1f9                 sar ecx, 1
// 007c5d4b  d1f8                 sar eax, 1
// 007c5d4d  2bc8                 sub ecx, eax
// 007c5d4f  53                   push ebx
// 007c5d50  56                   push esi
// 007c5d51  8d442424             lea eax, [esp + 0x24]
// 007c5d55  894c2438             mov dword ptr [esp + 0x38], ecx
// 007c5d59  50                   push eax
// 007c5d5a  8bcf                 mov ecx, edi
// 007c5d5c  896c2438             mov dword ptr [esp + 0x38], ebp
// 007c5d60  e87ba8ffff           call 0x7c05e0
// 007c5d65  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007c5d69  8b28                 mov ebp, dword ptr [eax]
// 007c5d6b  752c                 jne 0x7c5d99
// 007c5d6d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007c5d71  8b13                 mov edx, dword ptr [ebx]
// 007c5d73  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 007c5d79  83ec10               sub esp, 0x10
// 007c5d7c  8bc4                 mov eax, esp
// 007c5d7e  8908                 mov dword ptr [eax], ecx
// 007c5d80  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007c5d84  894804               mov dword ptr [eax + 4], ecx
// 007c5d87  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007c5d8b  894808               mov dword ptr [eax + 8], ecx
// 007c5d8e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007c5d92  89480c               mov dword ptr [eax + 0xc], ecx
// 007c5d95  8bcb                 mov ecx, ebx
// 007c5d97  ffd2                 call edx
// 007c5d99  8b442428             mov eax, dword ptr [esp + 0x28]
// 007c5d9d  8b542478             mov edx, dword ptr [esp + 0x78]
// 007c5da1  8d4c2805             lea ecx, [eax + ebp + 5]
// 007c5da5  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007c5da9  89442444             mov dword ptr [esp + 0x44], eax
// 007c5dad  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 007c5db3  894c2468             mov dword ptr [esp + 0x68], ecx
// 007c5db7  034c2414             add ecx, dword ptr [esp + 0x14]
// 007c5dbb  83e806               sub eax, 6
// 007c5dbe  8944243c             mov dword ptr [esp + 0x3c], eax
// 007c5dc2  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007c5dc9  837830ff             cmp dword ptr [eax + 0x30], -1
// 007c5dcd  89542440             mov dword ptr [esp + 0x40], edx
// 007c5dd1  894c2438             mov dword ptr [esp + 0x38], ecx
// 007c5dd5  740f                 je 0x7c5de6
// 007c5dd7  f644246c0c           test byte ptr [esp + 0x6c], 0xc
// 007c5ddc  7408                 je 0x7c5de6
// 007c5dde  2b542420             sub edx, dword ptr [esp + 0x20]
// 007c5de2  89542440             mov dword ptr [esp + 0x40], edx
// 007c5de6  8b2e                 mov ebp, dword ptr [esi]
// 007c5de8  6824880000           push 0x8824
// 007c5ded  8d54243c             lea edx, [esp + 0x3c]
// 007c5df1  8d482c               lea ecx, [eax + 0x2c]
// 007c5df4  52                   push edx
// 007c5df5  ff1554fb8900         call dword ptr [0x89fb54]
// 007c5dfb  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007c5e02  50                   push eax
// 007c5e03  83c12c               add ecx, 0x2c
// 007c5e06  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c5e0c  50                   push eax
// 007c5e0d  8b4570               mov eax, dword ptr [ebp + 0x70]
// 007c5e10  8bce                 mov ecx, esi
// 007c5e12  ffd0                 call eax
// 007c5e14  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 007c5e1b  8d4c2418             lea ecx, [esp + 0x18]
// 007c5e1f  51                   push ecx
// 007c5e20  83c52c               add ebp, 0x2c
// 007c5e23  8bcd                 mov ecx, ebp
// 007c5e25  ff1554fb8900         call dword ptr [0x89fb54]
// 007c5e2b  50                   push eax
// 007c5e2c  8bcd                 mov ecx, ebp
// 007c5e2e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c5e34  8b5608               mov edx, dword ptr [esi + 8]
// 007c5e37  50                   push eax
// 007c5e38  52                   push edx
// 007c5e39  ff1550e18900         call dword ptr [0x89e150]
// 007c5e3f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007c5e46  837830ff             cmp dword ptr [eax + 0x30], -1
// 007c5e4a  0f841c010000         je 0x7c5f6c
// 007c5e50  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007c5e54  8b442478             mov eax, dword ptr [esp + 0x78]
// 007c5e58  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007c5e5c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 007c5e60  894c2428             mov dword ptr [esp + 0x28], ecx
// 007c5e64  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c5e68  89442430             mov dword ptr [esp + 0x30], eax
// 007c5e6c  89542434             mov dword ptr [esp + 0x34], edx
// 007c5e70  f6c102               test cl, 2
// 007c5e73  7406                 je 0x7c5e7b
// 007c5e75  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c5e79  eb2e                 jmp 0x7c5ea9
// 007c5e7b  f6c104               test cl, 4
// 007c5e7e  741f                 je 0x7c5e9f
// 007c5e80  2b442420             sub eax, dword ptr [esp + 0x20]
// 007c5e84  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007c5e88  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c5e8c  8d4c0a05             lea ecx, [edx + ecx + 5]
// 007c5e90  48                   dec eax
// 007c5e91  894c2428             mov dword ptr [esp + 0x28], ecx
// 007c5e95  3bc8                 cmp ecx, eax
// 007c5e97  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c5e9b  7c10                 jl 0x7c5ead
// 007c5e9d  eb0a                 jmp 0x7c5ea9
// 007c5e9f  f6c108               test cl, 8
// 007c5ea2  7409                 je 0x7c5ead
// 007c5ea4  2b442420             sub eax, dword ptr [esp + 0x20]
// 007c5ea8  48                   dec eax
// 007c5ea9  89442428             mov dword ptr [esp + 0x28], eax
// 007c5ead  f7c100010000         test ecx, 0x100
// 007c5eb3  740e                 je 0x7c5ec3
// 007c5eb5  8b442424             mov eax, dword ptr [esp + 0x24]
// 007c5eb9  8d4c2801             lea ecx, [eax + ebp + 1]
// 007c5ebd  894c2434             mov dword ptr [esp + 0x34], ecx
// 007c5ec1  eb41                 jmp 0x7c5f04
// 007c5ec3  f7c100040000         test ecx, 0x400
// 007c5ec9  7428                 je 0x7c5ef3
// 007c5ecb  8b542444             mov edx, dword ptr [esp + 0x44]
// 007c5ecf  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007c5ed3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007c5ed7  03c2                 add eax, edx
// 007c5ed9  99                   cdq 
// 007c5eda  2bc2                 sub eax, edx
// 007c5edc  8be8                 mov ebp, eax
// 007c5ede  8bc1                 mov eax, ecx
// 007c5ee0  99                   cdq 
// 007c5ee1  2bc2                 sub eax, edx
// 007c5ee3  d1fd                 sar ebp, 1
// 007c5ee5  d1f8                 sar eax, 1
// 007c5ee7  2be8                 sub ebp, eax
// 007c5ee9  8d4c2901             lea ecx, [ecx + ebp + 1]
// 007c5eed  894c2434             mov dword ptr [esp + 0x34], ecx
// 007c5ef1  eb11                 jmp 0x7c5f04
// 007c5ef3  f7c100080000         test ecx, 0x800
// 007c5ef9  7409                 je 0x7c5f04
// 007c5efb  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007c5eff  2b6c2424             sub ebp, dword ptr [esp + 0x24]
// 007c5f03  4d                   dec ebp
// 007c5f04  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007c5f0b  8b4228               mov eax, dword ptr [edx + 0x28]
// 007c5f0e  83f8ff               cmp eax, -1
// 007c5f11  7505                 jne 0x7c5f18
// 007c5f13  b8ffffff00           mov eax, 0xffffff
// 007c5f18  8b16                 mov edx, dword ptr [esi]
// 007c5f1a  50                   push eax
// 007c5f1b  8b4234               mov eax, dword ptr [edx + 0x34]
// 007c5f1e  8bce                 mov ecx, esi
// 007c5f20  ffd0                 call eax
// 007c5f22  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 007c5f25  8b17                 mov edx, dword ptr [edi]
// 007c5f27  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 007c5f2d  8944246c             mov dword ptr [esp + 0x6c], eax
// 007c5f31  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007c5f38  8b4830               mov ecx, dword ptr [eax + 0x30]
// 007c5f3b  51                   push ecx
// 007c5f3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c5f40  83ec10               sub esp, 0x10
// 007c5f43  8bc4                 mov eax, esp
// 007c5f45  8908                 mov dword ptr [eax], ecx
// 007c5f47  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007c5f4b  896804               mov dword ptr [eax + 4], ebp
// 007c5f4e  894808               mov dword ptr [eax + 8], ecx
// 007c5f51  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c5f55  53                   push ebx
// 007c5f56  89480c               mov dword ptr [eax + 0xc], ecx
// 007c5f59  56                   push esi
// 007c5f5a  8bcf                 mov ecx, edi
// 007c5f5c  ffd2                 call edx
// 007c5f5e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c5f62  8b06                 mov eax, dword ptr [esi]
// 007c5f64  8b5034               mov edx, dword ptr [eax + 0x34]
// 007c5f67  51                   push ecx
// 007c5f68  8bce                 mov ecx, esi
// 007c5f6a  ffd2                 call edx
// 007c5f6c  8d4c2448             lea ecx, [esp + 0x48]
// 007c5f70  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 007c5f78  e863a9faff           call 0x7708e0
// 007c5f7d  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007c5f81  64890d00000000       mov dword ptr fs:[0], ecx
// 007c5f88  59                   pop ecx
// 007c5f89  5f                   pop edi
// 007c5f8a  5e                   pop esi
// 007c5f8b  5d                   pop ebp
// 007c5f8c  5b                   pop ebx
// 007c5f8d  83c450               add esp, 0x50
// 007c5f90  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawGroupRow@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportGroupRow@@VCRect@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp