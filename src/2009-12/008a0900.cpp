// roc 2009-12 008a0900  unit: CXTPReportPaintManager  size: 1171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a0900
//
// 008a0900  6aff                 push -1
// 008a0902  68c81f9600           push 0x961fc8
// 008a0907  64a100000000         mov eax, dword ptr fs:[0]
// 008a090d  50                   push eax
// 008a090e  83ec44               sub esp, 0x44
// 008a0911  53                   push ebx
// 008a0912  55                   push ebp
// 008a0913  56                   push esi
// 008a0914  57                   push edi
// 008a0915  a10052b600           mov eax, dword ptr [0xb65200]
// 008a091a  33c4                 xor eax, esp
// 008a091c  50                   push eax
// 008a091d  8d442458             lea eax, [esp + 0x58]
// 008a0921  64a300000000         mov dword ptr fs:[0], eax
// 008a0927  8bf9                 mov edi, ecx
// 008a0929  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 008a092d  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008a0930  e80b2bf8ff           call 0x823440
// 008a0935  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 008a093c  8b742468             mov esi, dword ptr [esp + 0x68]
// 008a0940  8944246c             mov dword ptr [esp + 0x6c], eax
// 008a0944  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008a0947  83f8ff               cmp eax, -1
// 008a094a  740d                 je 0x8a0959
// 008a094c  50                   push eax
// 008a094d  8d442474             lea eax, [esp + 0x74]
// 008a0951  50                   push eax
// 008a0952  8bce                 mov ecx, esi
// 008a0954  e8a53cf5ff           call 0x7f45fe
// 008a0959  8b16                 mov edx, dword ptr [esi]
// 008a095b  8b4524               mov eax, dword ptr [ebp + 0x24]
// 008a095e  8b5238               mov edx, dword ptr [edx + 0x38]
// 008a0961  50                   push eax
// 008a0962  8bce                 mov ecx, esi
// 008a0964  ffd2                 call edx
// 008a0966  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008a0969  50                   push eax
// 008a096a  56                   push esi
// 008a096b  8d4c2450             lea ecx, [esp + 0x50]
// 008a096f  e8ecacfaff           call 0x84b660
// 008a0974  8b13                 mov edx, dword ptr [ebx]
// 008a0976  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008a097c  8bcb                 mov ecx, ebx
// 008a097e  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008a0986  ffd0                 call eax
// 008a0988  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008a098b  40                   inc eax
// 008a098c  50                   push eax
// 008a098d  e83ebbf7ff           call 0x81c4d0
// 008a0992  8be8                 mov ebp, eax
// 008a0994  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 008a099a  83f8ff               cmp eax, -1
// 008a099d  7506                 jne 0x8a09a5
// 008a099f  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 008a09a5  8b8f6c020000         mov ecx, dword ptr [edi + 0x26c]
// 008a09ab  8b542478             mov edx, dword ptr [esp + 0x78]
// 008a09af  50                   push eax
// 008a09b0  8b442474             mov eax, dword ptr [esp + 0x74]
// 008a09b4  51                   push ecx
// 008a09b5  2bd0                 sub edx, eax
// 008a09b7  52                   push edx
// 008a09b8  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008a09bf  2bd1                 sub edx, ecx
// 008a09c1  52                   push edx
// 008a09c2  50                   push eax
// 008a09c3  8bce                 mov ecx, esi
// 008a09c5  e8cc5a0800           call 0x926496
// 008a09ca  8b03                 mov eax, dword ptr [ebx]
// 008a09cc  8b5070               mov edx, dword ptr [eax + 0x70]
// 008a09cf  8bcb                 mov ecx, ebx
// 008a09d1  ffd2                 call edx
// 008a09d3  85c0                 test eax, eax
// 008a09d5  7457                 je 0x8a0a2e
// 008a09d7  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 008a09dc  7450                 je 0x8a0a2e
// 008a09de  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008a09e2  754a                 jne 0x8a0a2e
// 008a09e4  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008a09e7  83b80402000000       cmp dword ptr [eax + 0x204], 0
// 008a09ee  743e                 je 0x8a0a2e
// 008a09f0  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008a09f4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008a09f8  8b17                 mov edx, dword ptr [edi]
// 008a09fa  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 008a0a00  48                   dec eax
// 008a0a01  03cd                 add ecx, ebp
// 008a0a03  83ec10               sub esp, 0x10
// 008a0a06  8944247c             mov dword ptr [esp + 0x7c], eax
// 008a0a0a  8bc4                 mov eax, esp
// 008a0a0c  8908                 mov dword ptr [eax], ecx
// 008a0a0e  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008a0a15  894804               mov dword ptr [eax + 4], ecx
// 008a0a18  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008a0a1f  894808               mov dword ptr [eax + 8], ecx
// 008a0a22  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008a0a26  89480c               mov dword ptr [eax + 0xc], ecx
// 008a0a29  56                   push esi
// 008a0a2a  8bcf                 mov ecx, edi
// 008a0a2c  ffd2                 call edx
// 008a0a2e  85ed                 test ebp, ebp
// 008a0a30  7e3a                 jle 0x8a0a6c
// 008a0a32  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008a0a36  8b17                 mov edx, dword ptr [edi]
// 008a0a38  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008a0a3e  8d0429               lea eax, [ecx + ebp]
// 008a0a41  83ec10               sub esp, 0x10
// 008a0a44  8944247c             mov dword ptr [esp + 0x7c], eax
// 008a0a48  8bc4                 mov eax, esp
// 008a0a4a  8908                 mov dword ptr [eax], ecx
// 008a0a4c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008a0a53  894804               mov dword ptr [eax + 4], ecx
// 008a0a56  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008a0a5a  894808               mov dword ptr [eax + 8], ecx
// 008a0a5d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008a0a64  89480c               mov dword ptr [eax + 0xc], ecx
// 008a0a67  56                   push esi
// 008a0a68  8bcf                 mov ecx, edi
// 008a0a6a  ffd2                 call edx
// 008a0a6c  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008a0a73  8b4134               mov eax, dword ptr [ecx + 0x34]
// 008a0a76  016c2470             add dword ptr [esp + 0x70], ebp
// 008a0a7a  33d2                 xor edx, edx
// 008a0a7c  89542468             mov dword ptr [esp + 0x68], edx
// 008a0a80  89542414             mov dword ptr [esp + 0x14], edx
// 008a0a84  89542420             mov dword ptr [esp + 0x20], edx
// 008a0a88  89542424             mov dword ptr [esp + 0x24], edx
// 008a0a8c  8944246c             mov dword ptr [esp + 0x6c], eax
// 008a0a90  a80f                 test al, 0xf
// 008a0a92  7507                 jne 0x8a0a9b
// 008a0a94  83c801               or eax, 1
// 008a0a97  8944246c             mov dword ptr [esp + 0x6c], eax
// 008a0a9b  a9000f0000           test eax, 0xf00
// 008a0aa0  7509                 jne 0x8a0aab
// 008a0aa2  0d00020000           or eax, 0x200
// 008a0aa7  8944246c             mov dword ptr [esp + 0x6c], eax
// 008a0aab  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008a0aae  83f8ff               cmp eax, -1
// 008a0ab1  7456                 je 0x8a0b09
// 008a0ab3  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008a0ab6  8b89d0010000         mov ecx, dword ptr [ecx + 0x1d0]
// 008a0abc  52                   push edx
// 008a0abd  50                   push eax
// 008a0abe  e8bdf0f6ff           call 0x80fb80
// 008a0ac3  8be8                 mov ebp, eax
// 008a0ac5  85ed                 test ebp, ebp
// 008a0ac7  741e                 je 0x8a0ae7
// 008a0ac9  8bcd                 mov ecx, ebp
// 008a0acb  e8a04dc3ff           call 0x4d5870
// 008a0ad0  8bcd                 mov ecx, ebp
// 008a0ad2  89442418             mov dword ptr [esp + 0x18], eax
// 008a0ad6  e8a5d1faff           call 0x84dc80
// 008a0adb  89442420             mov dword ptr [esp + 0x20], eax
// 008a0adf  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a0ae3  89442424             mov dword ptr [esp + 0x24], eax
// 008a0ae7  8a44246c             mov al, byte ptr [esp + 0x6c]
// 008a0aeb  a801                 test al, 1
// 008a0aed  740b                 je 0x8a0afa
// 008a0aef  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a0af3  83c105               add ecx, 5
// 008a0af6  894c2468             mov dword ptr [esp + 0x68], ecx
// 008a0afa  a802                 test al, 2
// 008a0afc  740b                 je 0x8a0b09
// 008a0afe  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a0b02  83c20a               add edx, 0xa
// 008a0b05  89542414             mov dword ptr [esp + 0x14], edx
// 008a0b09  8b442474             mov eax, dword ptr [esp + 0x74]
// 008a0b0d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008a0b11  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a0b15  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008a0b19  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 008a0b1d  894c2430             mov dword ptr [esp + 0x30], ecx
// 008a0b21  8bc8                 mov ecx, eax
// 008a0b23  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 008a0b29  036c2468             add ebp, dword ptr [esp + 0x68]
// 008a0b2d  83e80c               sub eax, 0xc
// 008a0b30  03c1                 add eax, ecx
// 008a0b32  99                   cdq 
// 008a0b33  2bc2                 sub eax, edx
// 008a0b35  894c2434             mov dword ptr [esp + 0x34], ecx
// 008a0b39  8bc8                 mov ecx, eax
// 008a0b3b  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 008a0b41  99                   cdq 
// 008a0b42  2bc2                 sub eax, edx
// 008a0b44  8d542428             lea edx, [esp + 0x28]
// 008a0b48  52                   push edx
// 008a0b49  d1f9                 sar ecx, 1
// 008a0b4b  d1f8                 sar eax, 1
// 008a0b4d  2bc8                 sub ecx, eax
// 008a0b4f  53                   push ebx
// 008a0b50  56                   push esi
// 008a0b51  8d442424             lea eax, [esp + 0x24]
// 008a0b55  894c2438             mov dword ptr [esp + 0x38], ecx
// 008a0b59  50                   push eax
// 008a0b5a  8bcf                 mov ecx, edi
// 008a0b5c  896c2438             mov dword ptr [esp + 0x38], ebp
// 008a0b60  e87ba8ffff           call 0x89b3e0
// 008a0b65  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008a0b69  8b28                 mov ebp, dword ptr [eax]
// 008a0b6b  752c                 jne 0x8a0b99
// 008a0b6d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a0b71  8b13                 mov edx, dword ptr [ebx]
// 008a0b73  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 008a0b79  83ec10               sub esp, 0x10
// 008a0b7c  8bc4                 mov eax, esp
// 008a0b7e  8908                 mov dword ptr [eax], ecx
// 008a0b80  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a0b84  894804               mov dword ptr [eax + 4], ecx
// 008a0b87  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a0b8b  894808               mov dword ptr [eax + 8], ecx
// 008a0b8e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a0b92  89480c               mov dword ptr [eax + 0xc], ecx
// 008a0b95  8bcb                 mov ecx, ebx
// 008a0b97  ffd2                 call edx
// 008a0b99  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a0b9d  8b542478             mov edx, dword ptr [esp + 0x78]
// 008a0ba1  8d4c2805             lea ecx, [eax + ebp + 5]
// 008a0ba5  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008a0ba9  89442444             mov dword ptr [esp + 0x44], eax
// 008a0bad  2b8760020000         sub eax, dword ptr [edi + 0x260]
// 008a0bb3  894c2468             mov dword ptr [esp + 0x68], ecx
// 008a0bb7  034c2414             add ecx, dword ptr [esp + 0x14]
// 008a0bbb  83e806               sub eax, 6
// 008a0bbe  8944243c             mov dword ptr [esp + 0x3c], eax
// 008a0bc2  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008a0bc9  837830ff             cmp dword ptr [eax + 0x30], -1
// 008a0bcd  89542440             mov dword ptr [esp + 0x40], edx
// 008a0bd1  894c2438             mov dword ptr [esp + 0x38], ecx
// 008a0bd5  740f                 je 0x8a0be6
// 008a0bd7  f644246c0c           test byte ptr [esp + 0x6c], 0xc
// 008a0bdc  7408                 je 0x8a0be6
// 008a0bde  2b542420             sub edx, dword ptr [esp + 0x20]
// 008a0be2  89542440             mov dword ptr [esp + 0x40], edx
// 008a0be6  8b2e                 mov ebp, dword ptr [esi]
// 008a0be8  6824880000           push 0x8824
// 008a0bed  8d54243c             lea edx, [esp + 0x3c]
// 008a0bf1  8d482c               lea ecx, [eax + 0x2c]
// 008a0bf4  52                   push edx
// 008a0bf5  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a0bfb  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008a0c02  50                   push eax
// 008a0c03  83c12c               add ecx, 0x2c
// 008a0c06  ff1580de9800         call dword ptr [0x98de80]
// 008a0c0c  50                   push eax
// 008a0c0d  8b4570               mov eax, dword ptr [ebp + 0x70]
// 008a0c10  8bce                 mov ecx, esi
// 008a0c12  ffd0                 call eax
// 008a0c14  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 008a0c1b  8d4c2418             lea ecx, [esp + 0x18]
// 008a0c1f  51                   push ecx
// 008a0c20  83c52c               add ebp, 0x2c
// 008a0c23  8bcd                 mov ecx, ebp
// 008a0c25  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a0c2b  50                   push eax
// 008a0c2c  8bcd                 mov ecx, ebp
// 008a0c2e  ff1580de9800         call dword ptr [0x98de80]
// 008a0c34  8b5608               mov edx, dword ptr [esi + 8]
// 008a0c37  50                   push eax
// 008a0c38  52                   push edx
// 008a0c39  ff156cb19800         call dword ptr [0x98b16c]
// 008a0c3f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008a0c46  837830ff             cmp dword ptr [eax + 0x30], -1
// 008a0c4a  0f841c010000         je 0x8a0d6c
// 008a0c50  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008a0c54  8b442478             mov eax, dword ptr [esp + 0x78]
// 008a0c58  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008a0c5c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 008a0c60  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a0c64  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008a0c68  89442430             mov dword ptr [esp + 0x30], eax
// 008a0c6c  89542434             mov dword ptr [esp + 0x34], edx
// 008a0c70  f6c102               test cl, 2
// 008a0c73  7406                 je 0x8a0c7b
// 008a0c75  8b442468             mov eax, dword ptr [esp + 0x68]
// 008a0c79  eb2e                 jmp 0x8a0ca9
// 008a0c7b  f6c104               test cl, 4
// 008a0c7e  741f                 je 0x8a0c9f
// 008a0c80  2b442420             sub eax, dword ptr [esp + 0x20]
// 008a0c84  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008a0c88  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a0c8c  8d4c0a05             lea ecx, [edx + ecx + 5]
// 008a0c90  48                   dec eax
// 008a0c91  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a0c95  3bc8                 cmp ecx, eax
// 008a0c97  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008a0c9b  7c10                 jl 0x8a0cad
// 008a0c9d  eb0a                 jmp 0x8a0ca9
// 008a0c9f  f6c108               test cl, 8
// 008a0ca2  7409                 je 0x8a0cad
// 008a0ca4  2b442420             sub eax, dword ptr [esp + 0x20]
// 008a0ca8  48                   dec eax
// 008a0ca9  89442428             mov dword ptr [esp + 0x28], eax
// 008a0cad  f7c100010000         test ecx, 0x100
// 008a0cb3  740e                 je 0x8a0cc3
// 008a0cb5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008a0cb9  8d4c2801             lea ecx, [eax + ebp + 1]
// 008a0cbd  894c2434             mov dword ptr [esp + 0x34], ecx
// 008a0cc1  eb41                 jmp 0x8a0d04
// 008a0cc3  f7c100040000         test ecx, 0x400
// 008a0cc9  7428                 je 0x8a0cf3
// 008a0ccb  8b542444             mov edx, dword ptr [esp + 0x44]
// 008a0ccf  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a0cd3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a0cd7  03c2                 add eax, edx
// 008a0cd9  99                   cdq 
// 008a0cda  2bc2                 sub eax, edx
// 008a0cdc  8be8                 mov ebp, eax
// 008a0cde  8bc1                 mov eax, ecx
// 008a0ce0  99                   cdq 
// 008a0ce1  2bc2                 sub eax, edx
// 008a0ce3  d1fd                 sar ebp, 1
// 008a0ce5  d1f8                 sar eax, 1
// 008a0ce7  2be8                 sub ebp, eax
// 008a0ce9  8d4c2901             lea ecx, [ecx + ebp + 1]
// 008a0ced  894c2434             mov dword ptr [esp + 0x34], ecx
// 008a0cf1  eb11                 jmp 0x8a0d04
// 008a0cf3  f7c100080000         test ecx, 0x800
// 008a0cf9  7409                 je 0x8a0d04
// 008a0cfb  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008a0cff  2b6c2424             sub ebp, dword ptr [esp + 0x24]
// 008a0d03  4d                   dec ebp
// 008a0d04  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008a0d0b  8b4228               mov eax, dword ptr [edx + 0x28]
// 008a0d0e  83f8ff               cmp eax, -1
// 008a0d11  7505                 jne 0x8a0d18
// 008a0d13  b8ffffff00           mov eax, 0xffffff
// 008a0d18  8b16                 mov edx, dword ptr [esi]
// 008a0d1a  50                   push eax
// 008a0d1b  8b4234               mov eax, dword ptr [edx + 0x34]
// 008a0d1e  8bce                 mov ecx, esi
// 008a0d20  ffd0                 call eax
// 008a0d22  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 008a0d25  8b17                 mov edx, dword ptr [edi]
// 008a0d27  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 008a0d2d  8944246c             mov dword ptr [esp + 0x6c], eax
// 008a0d31  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008a0d38  8b4830               mov ecx, dword ptr [eax + 0x30]
// 008a0d3b  51                   push ecx
// 008a0d3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a0d40  83ec10               sub esp, 0x10
// 008a0d43  8bc4                 mov eax, esp
// 008a0d45  8908                 mov dword ptr [eax], ecx
// 008a0d47  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a0d4b  896804               mov dword ptr [eax + 4], ebp
// 008a0d4e  894808               mov dword ptr [eax + 8], ecx
// 008a0d51  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008a0d55  53                   push ebx
// 008a0d56  89480c               mov dword ptr [eax + 0xc], ecx
// 008a0d59  56                   push esi
// 008a0d5a  8bcf                 mov ecx, edi
// 008a0d5c  ffd2                 call edx
// 008a0d5e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008a0d62  8b06                 mov eax, dword ptr [esi]
// 008a0d64  8b5034               mov edx, dword ptr [eax + 0x34]
// 008a0d67  51                   push ecx
// 008a0d68  8bce                 mov ecx, esi
// 008a0d6a  ffd2                 call edx
// 008a0d6c  8d4c2448             lea ecx, [esp + 0x48]
// 008a0d70  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008a0d78  e863a9faff           call 0x84b6e0
// 008a0d7d  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008a0d81  64890d00000000       mov dword ptr fs:[0], ecx
// 008a0d88  59                   pop ecx
// 008a0d89  5f                   pop edi
// 008a0d8a  5e                   pop esi
// 008a0d8b  5d                   pop ebp
// 008a0d8c  5b                   pop ebx
// 008a0d8d  83c450               add esp, 0x50
// 008a0d90  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawGroupRow@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportGroupRow@@VCRect@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp