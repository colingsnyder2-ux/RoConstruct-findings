// roc 2012-06 00a2a040  unit: CXTPReportPaintManager  size: 1171 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2a040
//
// 00a2a040  6aff                 push -1
// 00a2a042  68784cae00           push 0xae4c78
// 00a2a047  64a100000000         mov eax, dword ptr fs:[0]
// 00a2a04d  50                   push eax
// 00a2a04e  83ec44               sub esp, 0x44
// 00a2a051  53                   push ebx
// 00a2a052  55                   push ebp
// 00a2a053  56                   push esi
// 00a2a054  57                   push edi
// 00a2a055  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2a05a  33c4                 xor eax, esp
// 00a2a05c  50                   push eax
// 00a2a05d  8d442458             lea eax, [esp + 0x58]
// 00a2a061  64a300000000         mov dword ptr fs:[0], eax
// 00a2a067  8bf9                 mov edi, ecx
// 00a2a069  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 00a2a06d  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00a2a070  e8cb5bf8ff           call 0x9afc40
// 00a2a075  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 00a2a07c  8b742468             mov esi, dword ptr [esp + 0x68]
// 00a2a080  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a2a084  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00a2a087  83f8ff               cmp eax, -1
// 00a2a08a  740d                 je 0xa2a099
// 00a2a08c  50                   push eax
// 00a2a08d  8d442474             lea eax, [esp + 0x74]
// 00a2a091  50                   push eax
// 00a2a092  8bce                 mov ecx, esi
// 00a2a094  e8138ef5ff           call 0x982eac
// 00a2a099  8b16                 mov edx, dword ptr [esi]
// 00a2a09b  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00a2a09e  8b5238               mov edx, dword ptr [edx + 0x38]
// 00a2a0a1  50                   push eax
// 00a2a0a2  8bce                 mov ecx, esi
// 00a2a0a4  ffd2                 call edx
// 00a2a0a6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00a2a0a9  50                   push eax
// 00a2a0aa  56                   push esi
// 00a2a0ab  8d4c2450             lea ecx, [esp + 0x50]
// 00a2a0af  e87cb4faff           call 0x9d5530
// 00a2a0b4  8b13                 mov edx, dword ptr [ebx]
// 00a2a0b6  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00a2a0bc  8bcb                 mov ecx, ebx
// 00a2a0be  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00a2a0c6  ffd0                 call eax
// 00a2a0c8  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00a2a0cb  40                   inc eax
// 00a2a0cc  50                   push eax
// 00a2a0cd  e88eebf7ff           call 0x9a8c60
// 00a2a0d2  8be8                 mov ebp, eax
// 00a2a0d4  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 00a2a0da  83f8ff               cmp eax, -1
// 00a2a0dd  7506                 jne 0xa2a0e5
// 00a2a0df  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 00a2a0e5  8b8f6c020000         mov ecx, dword ptr [edi + 0x26c]
// 00a2a0eb  8b542478             mov edx, dword ptr [esp + 0x78]
// 00a2a0ef  50                   push eax
// 00a2a0f0  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a2a0f4  51                   push ecx
// 00a2a0f5  2bd0                 sub edx, eax
// 00a2a0f7  52                   push edx
// 00a2a0f8  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00a2a0ff  2bd1                 sub edx, ecx
// 00a2a101  52                   push edx
// 00a2a102  50                   push eax
// 00a2a103  8bce                 mov ecx, esi
// 00a2a105  e886f40600           call 0xa99590
// 00a2a10a  8b03                 mov eax, dword ptr [ebx]
// 00a2a10c  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a2a10f  8bcb                 mov ecx, ebx
// 00a2a111  ffd2                 call edx
// 00a2a113  85c0                 test eax, eax
// 00a2a115  7457                 je 0xa2a16e
// 00a2a117  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00a2a11c  7450                 je 0xa2a16e
// 00a2a11e  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00a2a122  754a                 jne 0xa2a16e
// 00a2a124  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00a2a127  83b80402000000       cmp dword ptr [eax + 0x204], 0
// 00a2a12e  743e                 je 0xa2a16e
// 00a2a130  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00a2a134  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a2a138  8b17                 mov edx, dword ptr [edi]
// 00a2a13a  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 00a2a140  48                   dec eax
// 00a2a141  03cd                 add ecx, ebp
// 00a2a143  83ec10               sub esp, 0x10
// 00a2a146  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a2a14a  8bc4                 mov eax, esp
// 00a2a14c  8908                 mov dword ptr [eax], ecx
// 00a2a14e  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a2a155  894804               mov dword ptr [eax + 4], ecx
// 00a2a158  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a2a15f  894808               mov dword ptr [eax + 8], ecx
// 00a2a162  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a2a166  89480c               mov dword ptr [eax + 0xc], ecx
// 00a2a169  56                   push esi
// 00a2a16a  8bcf                 mov ecx, edi
// 00a2a16c  ffd2                 call edx
// 00a2a16e  85ed                 test ebp, ebp
// 00a2a170  7e3a                 jle 0xa2a1ac
// 00a2a172  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a2a176  8b17                 mov edx, dword ptr [edi]
// 00a2a178  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 00a2a17e  8d0429               lea eax, [ecx + ebp]
// 00a2a181  83ec10               sub esp, 0x10
// 00a2a184  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a2a188  8bc4                 mov eax, esp
// 00a2a18a  8908                 mov dword ptr [eax], ecx
// 00a2a18c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a2a193  894804               mov dword ptr [eax + 4], ecx
// 00a2a196  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a2a19a  894808               mov dword ptr [eax + 8], ecx
// 00a2a19d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a2a1a4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a2a1a7  56                   push esi
// 00a2a1a8  8bcf                 mov ecx, edi
// 00a2a1aa  ffd2                 call edx
// 00a2a1ac  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00a2a1b3  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00a2a1b6  016c2470             add dword ptr [esp + 0x70], ebp
// 00a2a1ba  33d2                 xor edx, edx
// 00a2a1bc  89542468             mov dword ptr [esp + 0x68], edx
// 00a2a1c0  89542414             mov dword ptr [esp + 0x14], edx
// 00a2a1c4  89542420             mov dword ptr [esp + 0x20], edx
// 00a2a1c8  89542424             mov dword ptr [esp + 0x24], edx
// 00a2a1cc  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a2a1d0  a80f                 test al, 0xf
// 00a2a1d2  7507                 jne 0xa2a1db
// 00a2a1d4  83c801               or eax, 1
// 00a2a1d7  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a2a1db  a9000f0000           test eax, 0xf00
// 00a2a1e0  7509                 jne 0xa2a1eb
// 00a2a1e2  0d00020000           or eax, 0x200
// 00a2a1e7  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a2a1eb  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00a2a1ee  83f8ff               cmp eax, -1
// 00a2a1f1  7456                 je 0xa2a249
// 00a2a1f3  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00a2a1f6  8b89d0010000         mov ecx, dword ptr [ecx + 0x1d0]
// 00a2a1fc  52                   push edx
// 00a2a1fd  50                   push eax
// 00a2a1fe  e8bd3ef7ff           call 0x99e0c0
// 00a2a203  8be8                 mov ebp, eax
// 00a2a205  85ed                 test ebp, ebp
// 00a2a207  741e                 je 0xa2a227
// 00a2a209  8bcd                 mov ecx, ebp
// 00a2a20b  e810d8f6ff           call 0x997a20
// 00a2a210  8bcd                 mov ecx, ebp
// 00a2a212  89442418             mov dword ptr [esp + 0x18], eax
// 00a2a216  e845140000           call 0xa2b660
// 00a2a21b  89442420             mov dword ptr [esp + 0x20], eax
// 00a2a21f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a2a223  89442424             mov dword ptr [esp + 0x24], eax
// 00a2a227  8a44246c             mov al, byte ptr [esp + 0x6c]
// 00a2a22b  a801                 test al, 1
// 00a2a22d  740b                 je 0xa2a23a
// 00a2a22f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a2a233  83c105               add ecx, 5
// 00a2a236  894c2468             mov dword ptr [esp + 0x68], ecx
// 00a2a23a  a802                 test al, 2
// 00a2a23c  740b                 je 0xa2a249
// 00a2a23e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a2a242  83c20a               add edx, 0xa
// 00a2a245  89542414             mov dword ptr [esp + 0x14], edx
// 00a2a249  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a2a24d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a2a251  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a2a255  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00a2a259  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 00a2a25d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a2a261  8bc8                 mov ecx, eax
// 00a2a263  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 00a2a269  036c2468             add ebp, dword ptr [esp + 0x68]
// 00a2a26d  83e80c               sub eax, 0xc
// 00a2a270  03c1                 add eax, ecx
// 00a2a272  99                   cdq 
// 00a2a273  2bc2                 sub eax, edx
// 00a2a275  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a2a279  8bc8                 mov ecx, eax
// 00a2a27b  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 00a2a281  99                   cdq 
// 00a2a282  2bc2                 sub eax, edx
// 00a2a284  8d542428             lea edx, [esp + 0x28]
// 00a2a288  52                   push edx
// 00a2a289  d1f9                 sar ecx, 1
// 00a2a28b  d1f8                 sar eax, 1
// 00a2a28d  2bc8                 sub ecx, eax
// 00a2a28f  53                   push ebx
// 00a2a290  56                   push esi
// 00a2a291  8d442424             lea eax, [esp + 0x24]
// 00a2a295  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a2a299  50                   push eax
// 00a2a29a  8bcf                 mov ecx, edi
// 00a2a29c  896c2438             mov dword ptr [esp + 0x38], ebp
// 00a2a2a0  e87ba8ffff           call 0xa24b20
// 00a2a2a5  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00a2a2a9  8b28                 mov ebp, dword ptr [eax]
// 00a2a2ab  752c                 jne 0xa2a2d9
// 00a2a2ad  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a2a2b1  8b13                 mov edx, dword ptr [ebx]
// 00a2a2b3  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 00a2a2b9  83ec10               sub esp, 0x10
// 00a2a2bc  8bc4                 mov eax, esp
// 00a2a2be  8908                 mov dword ptr [eax], ecx
// 00a2a2c0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a2a2c4  894804               mov dword ptr [eax + 4], ecx
// 00a2a2c7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a2a2cb  894808               mov dword ptr [eax + 8], ecx
// 00a2a2ce  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a2a2d2  89480c               mov dword ptr [eax + 0xc], ecx
// 00a2a2d5  8bcb                 mov ecx, ebx
// 00a2a2d7  ffd2                 call edx
// 00a2a2d9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a2a2dd  8b542478             mov edx, dword ptr [esp + 0x78]
// 00a2a2e1  8d4c2805             lea ecx, [eax + ebp + 5]
// 00a2a2e5  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00a2a2e9  89442444             mov dword ptr [esp + 0x44], eax
// 00a2a2ed  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 00a2a2f3  894c2468             mov dword ptr [esp + 0x68], ecx
// 00a2a2f7  034c2414             add ecx, dword ptr [esp + 0x14]
// 00a2a2fb  83e806               sub eax, 6
// 00a2a2fe  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a2a302  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a2a309  837830ff             cmp dword ptr [eax + 0x30], -1
// 00a2a30d  89542440             mov dword ptr [esp + 0x40], edx
// 00a2a311  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a2a315  740f                 je 0xa2a326
// 00a2a317  f644246c0c           test byte ptr [esp + 0x6c], 0xc
// 00a2a31c  7408                 je 0xa2a326
// 00a2a31e  2b542420             sub edx, dword ptr [esp + 0x20]
// 00a2a322  89542440             mov dword ptr [esp + 0x40], edx
// 00a2a326  8b2e                 mov ebp, dword ptr [esi]
// 00a2a328  6824880000           push 0x8824
// 00a2a32d  8d54243c             lea edx, [esp + 0x3c]
// 00a2a331  8d482c               lea ecx, [eax + 0x2c]
// 00a2a334  52                   push edx
// 00a2a335  ff155846b200         call dword ptr [0xb24658]
// 00a2a33b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a2a342  50                   push eax
// 00a2a343  83c12c               add ecx, 0x2c
// 00a2a346  ff159847b200         call dword ptr [0xb24798]
// 00a2a34c  50                   push eax
// 00a2a34d  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00a2a350  8bce                 mov ecx, esi
// 00a2a352  ffd0                 call eax
// 00a2a354  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 00a2a35b  8d4c2418             lea ecx, [esp + 0x18]
// 00a2a35f  51                   push ecx
// 00a2a360  83c52c               add ebp, 0x2c
// 00a2a363  8bcd                 mov ecx, ebp
// 00a2a365  ff155846b200         call dword ptr [0xb24658]
// 00a2a36b  50                   push eax
// 00a2a36c  8bcd                 mov ecx, ebp
// 00a2a36e  ff159847b200         call dword ptr [0xb24798]
// 00a2a374  8b5608               mov edx, dword ptr [esi + 8]
// 00a2a377  50                   push eax
// 00a2a378  52                   push edx
// 00a2a379  ff154021b200         call dword ptr [0xb22140]
// 00a2a37f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a2a386  837830ff             cmp dword ptr [eax + 0x30], -1
// 00a2a38a  0f841c010000         je 0xa2a4ac
// 00a2a390  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a2a394  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a2a398  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00a2a39c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 00a2a3a0  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a2a3a4  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a2a3a8  89442430             mov dword ptr [esp + 0x30], eax
// 00a2a3ac  89542434             mov dword ptr [esp + 0x34], edx
// 00a2a3b0  f6c102               test cl, 2
// 00a2a3b3  7406                 je 0xa2a3bb
// 00a2a3b5  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a2a3b9  eb2e                 jmp 0xa2a3e9
// 00a2a3bb  f6c104               test cl, 4
// 00a2a3be  741f                 je 0xa2a3df
// 00a2a3c0  2b442420             sub eax, dword ptr [esp + 0x20]
// 00a2a3c4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a2a3c8  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a2a3cc  8d4c0a05             lea ecx, [edx + ecx + 5]
// 00a2a3d0  48                   dec eax
// 00a2a3d1  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a2a3d5  3bc8                 cmp ecx, eax
// 00a2a3d7  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a2a3db  7c10                 jl 0xa2a3ed
// 00a2a3dd  eb0a                 jmp 0xa2a3e9
// 00a2a3df  f6c108               test cl, 8
// 00a2a3e2  7409                 je 0xa2a3ed
// 00a2a3e4  2b442420             sub eax, dword ptr [esp + 0x20]
// 00a2a3e8  48                   dec eax
// 00a2a3e9  89442428             mov dword ptr [esp + 0x28], eax
// 00a2a3ed  f7c100010000         test ecx, 0x100
// 00a2a3f3  740e                 je 0xa2a403
// 00a2a3f5  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a2a3f9  8d4c2801             lea ecx, [eax + ebp + 1]
// 00a2a3fd  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a2a401  eb41                 jmp 0xa2a444
// 00a2a403  f7c100040000         test ecx, 0x400
// 00a2a409  7428                 je 0xa2a433
// 00a2a40b  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a2a40f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a2a413  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a2a417  03c2                 add eax, edx
// 00a2a419  99                   cdq 
// 00a2a41a  2bc2                 sub eax, edx
// 00a2a41c  8be8                 mov ebp, eax
// 00a2a41e  8bc1                 mov eax, ecx
// 00a2a420  99                   cdq 
// 00a2a421  2bc2                 sub eax, edx
// 00a2a423  d1fd                 sar ebp, 1
// 00a2a425  d1f8                 sar eax, 1
// 00a2a427  2be8                 sub ebp, eax
// 00a2a429  8d4c2901             lea ecx, [ecx + ebp + 1]
// 00a2a42d  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a2a431  eb11                 jmp 0xa2a444
// 00a2a433  f7c100080000         test ecx, 0x800
// 00a2a439  7409                 je 0xa2a444
// 00a2a43b  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a2a43f  2b6c2424             sub ebp, dword ptr [esp + 0x24]
// 00a2a443  4d                   dec ebp
// 00a2a444  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00a2a44b  8b4228               mov eax, dword ptr [edx + 0x28]
// 00a2a44e  83f8ff               cmp eax, -1
// 00a2a451  7505                 jne 0xa2a458
// 00a2a453  b8ffffff00           mov eax, 0xffffff
// 00a2a458  8b16                 mov edx, dword ptr [esi]
// 00a2a45a  50                   push eax
// 00a2a45b  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a2a45e  8bce                 mov ecx, esi
// 00a2a460  ffd0                 call eax
// 00a2a462  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 00a2a465  8b17                 mov edx, dword ptr [edi]
// 00a2a467  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 00a2a46d  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a2a471  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a2a478  8b4830               mov ecx, dword ptr [eax + 0x30]
// 00a2a47b  51                   push ecx
// 00a2a47c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a2a480  83ec10               sub esp, 0x10
// 00a2a483  8bc4                 mov eax, esp
// 00a2a485  8908                 mov dword ptr [eax], ecx
// 00a2a487  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a2a48b  896804               mov dword ptr [eax + 4], ebp
// 00a2a48e  894808               mov dword ptr [eax + 8], ecx
// 00a2a491  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a2a495  53                   push ebx
// 00a2a496  89480c               mov dword ptr [eax + 0xc], ecx
// 00a2a499  56                   push esi
// 00a2a49a  8bcf                 mov ecx, edi
// 00a2a49c  ffd2                 call edx
// 00a2a49e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a2a4a2  8b06                 mov eax, dword ptr [esi]
// 00a2a4a4  8b5034               mov edx, dword ptr [eax + 0x34]
// 00a2a4a7  51                   push ecx
// 00a2a4a8  8bce                 mov ecx, esi
// 00a2a4aa  ffd2                 call edx
// 00a2a4ac  8d4c2448             lea ecx, [esp + 0x48]
// 00a2a4b0  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00a2a4b8  e8f3b0faff           call 0x9d55b0
// 00a2a4bd  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a2a4c1  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2a4c8  59                   pop ecx
// 00a2a4c9  5f                   pop edi
// 00a2a4ca  5e                   pop esi
// 00a2a4cb  5d                   pop ebp
// 00a2a4cc  5b                   pop ebx
// 00a2a4cd  83c450               add esp, 0x50
// 00a2a4d0  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawGroupRow@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportGroupRow@@VCRect@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp