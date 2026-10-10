// from server: 100% by tester
// roc 2007-03 00736590  unit: seg_00730000  size: 2578 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00736590
//
// 00736590  6aff                 push -1
// 00736592  68f7d47600           push 0x76d4f7
// 00736597  64a100000000         mov eax, dword ptr fs:[0]
// 0073659d  50                   push eax
// 0073659e  81ec60010000         sub esp, 0x160
// 007365a4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 007365a9  33c4                 xor eax, esp
// 007365ab  8984245c010000       mov dword ptr [esp + 0x15c], eax
// 007365b2  53                   push ebx
// 007365b3  55                   push ebp
// 007365b4  56                   push esi
// 007365b5  57                   push edi
// 007365b6  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 007365bb  33c4                 xor eax, esp
// 007365bd  50                   push eax
// 007365be  8d842474010000       lea eax, [esp + 0x174]
// 007365c5  64a300000000         mov dword ptr fs:[0], eax
// 007365cb  8bac2488010000       mov ebp, dword ptr [esp + 0x188]
// 007365d2  8b84248c010000       mov eax, dword ptr [esp + 0x18c]
// 007365d9  8bf1                 mov esi, ecx
// 007365db  33db                 xor ebx, ebx
// 007365dd  c706946d7900         mov dword ptr [esi], 0x796d94
// 007365e3  895e04               mov dword ptr [esi + 4], ebx
// 007365e6  89742450             mov dword ptr [esp + 0x50], esi
// 007365ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 007365ee  89442420             mov dword ptr [esp + 0x20], eax
// 007365f2  895e08               mov dword ptr [esi + 8], ebx
// 007365f5  68c0594700           push 0x4759c0
// 007365fa  6860884b00           push 0x4b8860
// 007365ff  6a06                 push 6
// 00736601  6a04                 push 4
// 00736603  8d7e0c               lea edi, [esi + 0xc]
// 00736606  57                   push edi
// 00736607  899c2490010000       mov dword ptr [esp + 0x190], ebx
// 0073660e  c7060ca87e00         mov dword ptr [esi], 0x7ea80c
// 00736614  e8538aeeff           call 0x61f06c
// 00736619  8d4e24               lea ecx, [esi + 0x24]
// 0073661c  8919                 mov dword ptr [ecx], ebx
// 0073661e  895e28               mov dword ptr [esi + 0x28], ebx
// 00736621  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00736624  895e30               mov dword ptr [esi + 0x30], ebx
// 00736627  895e34               mov dword ptr [esi + 0x34], ebx
// 0073662a  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0073662d  895e40               mov dword ptr [esi + 0x40], ebx
// 00736630  895e38               mov dword ptr [esi + 0x38], ebx
// 00736633  895e48               mov dword ptr [esi + 0x48], ebx
// 00736636  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00736639  895e44               mov dword ptr [esi + 0x44], ebx
// 0073663c  389c2490010000       cmp byte ptr [esp + 0x190], bl
// 00736643  8a942494010000       mov dl, byte ptr [esp + 0x194]
// 0073664a  8b842484010000       mov eax, dword ptr [esp + 0x184]
// 00736651  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00736659  885650               mov byte ptr [esi + 0x50], dl
// 0073665c  894654               mov dword ptr [esi + 0x54], eax
// 0073665f  740b                 je 0x73666c
// 00736661  8b5500               mov edx, dword ptr [ebp]
// 00736664  52                   push edx
// 00736665  e826ead3ff           call 0x475090
// 0073666a  eb61                 jmp 0x7366cd
// 0073666c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00736670  8b442414             mov eax, dword ptr [esp + 0x14]
// 00736674  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00736678  8b2c88               mov ebp, dword ptr [eax + ecx*4]
// 0073667b  8b07                 mov eax, dword ptr [edi]
// 0073667d  3be8                 cmp ebp, eax
// 0073667f  7439                 je 0x7366ba
// 00736681  3bc3                 cmp eax, ebx
// 00736683  7425                 je 0x7366aa
// 00736685  83c004               add eax, 4
// 00736688  50                   push eax
// 00736689  ff15a8d27700         call dword ptr [0x77d2a8]
// 0073668f  85c0                 test eax, eax
// 00736691  7515                 jne 0x7366a8
// 00736693  8b0f                 mov ecx, dword ptr [edi]
// 00736695  e826cdd2ff           call 0x4633c0
// 0073669a  8b0f                 mov ecx, dword ptr [edi]
// 0073669c  3bcb                 cmp ecx, ebx
// 0073669e  7408                 je 0x7366a8
// 007366a0  8b11                 mov edx, dword ptr [ecx]
// 007366a2  8b02                 mov eax, dword ptr [edx]
// 007366a4  6a01                 push 1
// 007366a6  ffd0                 call eax
// 007366a8  891f                 mov dword ptr [edi], ebx
// 007366aa  3beb                 cmp ebp, ebx
// 007366ac  740c                 je 0x7366ba
// 007366ae  892f                 mov dword ptr [edi], ebp
// 007366b0  83c504               add ebp, 4
// 007366b3  55                   push ebp
// 007366b4  ff15acd27700         call dword ptr [0x77d2ac]
// 007366ba  8b442418             mov eax, dword ptr [esp + 0x18]
// 007366be  83c001               add eax, 1
// 007366c1  83c704               add edi, 4
// 007366c4  83f806               cmp eax, 6
// 007366c7  89442418             mov dword ptr [esp + 0x18], eax
// 007366cb  7ca3                 jl 0x736670
// 007366cd  dd0568a97e00         fld qword ptr [0x7ea968]
// 007366d3  dd842498010000       fld qword ptr [esp + 0x198]
// 007366da  d8d1                 fcom st(1)
// 007366dc  dfe0                 fnstsw ax
// 007366de  ddd9                 fstp st(1)
// 007366e0  f6c441               test ah, 0x41
// 007366e3  7518                 jne 0x7366fd
// 007366e5  8b0d54828b00         mov ecx, dword ptr [0x8b8254]
// 007366eb  ddd8                 fstp st(0)
// 007366ed  8b154c828b00         mov edx, dword ptr [0x8b824c]
// 007366f3  894c2418             mov dword ptr [esp + 0x18], ecx
// 007366f7  89542414             mov dword ptr [esp + 0x14], edx
// 007366fb  eb2b                 jmp 0x736728
// 007366fd  dc1d60a97e00         fcomp qword ptr [0x7ea960]
// 00736703  dfe0                 fnstsw ax
// 00736705  f6c441               test ah, 0x41
// 00736708  7511                 jne 0x73671b
// 0073670a  8b0d1c828b00         mov ecx, dword ptr [0x8b821c]
// 00736710  a1fc818b00           mov eax, dword ptr [0x8b81fc]
// 00736715  894c2414             mov dword ptr [esp + 0x14], ecx
// 00736719  eb09                 jmp 0x736724
// 0073671b  a160828b00           mov eax, dword ptr [0x8b8260]
// 00736720  89442414             mov dword ptr [esp + 0x14], eax
// 00736724  89442418             mov dword ptr [esp + 0x18], eax
// 00736728  807e5000             cmp byte ptr [esi + 0x50], 0
// 0073672c  0f8444080000         je 0x736f76
// 00736732  8b542420             mov edx, dword ptr [esp + 0x20]
// 00736736  8b2d04e77700         mov ebp, dword ptr [0x77e704]
// 0073673c  6850a97e00           push 0x7ea950
// 00736741  52                   push edx
// 00736742  8d8424d8000000       lea eax, [esp + 0xd8]
// 00736749  50                   push eax
// 0073674a  ffd5                 call ebp
// 0073674c  8bf8                 mov edi, eax
// 0073674e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00736752  6844a97e00           push 0x7ea944
// 00736757  51                   push ecx
// 00736758  8d542448             lea edx, [esp + 0x48]
// 0073675c  52                   push edx
// 0073675d  c684249401000009     mov byte ptr [esp + 0x194], 9
// 00736765  ffd5                 call ebp
// 00736767  d9e8                 fld1 
// 00736769  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0073676d  d95c2414             fstp dword ptr [esp + 0x14]
// 00736771  83c414               add esp, 0x14
// 00736774  53                   push ebx
// 00736775  6a02                 push 2
// 00736777  6a02                 push 2
// 00736779  6a02                 push 2
// 0073677b  51                   push ecx
// 0073677c  57                   push edi
// 0073677d  50                   push eax
// 0073677e  8d542444             lea edx, [esp + 0x44]
// 00736782  52                   push edx
// 00736783  c68424a00100000a     mov byte ptr [esp + 0x1a0], 0xa
// 0073678b  e8b0b9d3ff           call 0x472140
// 00736790  83c424               add esp, 0x24
// 00736793  8b38                 mov edi, dword ptr [eax]
// 00736795  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00736798  3bf8                 cmp edi, eax
// 0073679a  c684247c0100000b     mov byte ptr [esp + 0x17c], 0xb
// 007367a2  743d                 je 0x7367e1
// 007367a4  3bc3                 cmp eax, ebx
// 007367a6  7428                 je 0x7367d0
// 007367a8  83c004               add eax, 4
// 007367ab  50                   push eax
// 007367ac  ff15a8d27700         call dword ptr [0x77d2a8]
// 007367b2  85c0                 test eax, eax
// 007367b4  7517                 jne 0x7367cd
// 007367b6  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007367b9  e802ccd2ff           call 0x4633c0
// 007367be  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007367c1  3bcb                 cmp ecx, ebx
// 007367c3  7408                 je 0x7367cd
// 007367c5  8b01                 mov eax, dword ptr [ecx]
// 007367c7  8b10                 mov edx, dword ptr [eax]
// 007367c9  6a01                 push 1
// 007367cb  ffd2                 call edx
// 007367cd  895e2c               mov dword ptr [esi + 0x2c], ebx
// 007367d0  3bfb                 cmp edi, ebx
// 007367d2  740d                 je 0x7367e1
// 007367d4  897e2c               mov dword ptr [esi + 0x2c], edi
// 007367d7  83c704               add edi, 4
// 007367da  57                   push edi
// 007367db  ff15acd27700         call dword ptr [0x77d2ac]
// 007367e1  8b442424             mov eax, dword ptr [esp + 0x24]
// 007367e5  3bc3                 cmp eax, ebx
// 007367e7  c684247c0100000a     mov byte ptr [esp + 0x17c], 0xa
// 007367ef  742b                 je 0x73681c
// 007367f1  83c004               add eax, 4
// 007367f4  50                   push eax
// 007367f5  ff15a8d27700         call dword ptr [0x77d2a8]
// 007367fb  85c0                 test eax, eax
// 007367fd  7519                 jne 0x736818
// 007367ff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00736803  e8b8cbd2ff           call 0x4633c0
// 00736808  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073680c  3bcb                 cmp ecx, ebx
// 0073680e  7408                 je 0x736818
// 00736810  8b01                 mov eax, dword ptr [ecx]
// 00736812  8b10                 mov edx, dword ptr [eax]
// 00736814  6a01                 push 1
// 00736816  ffd2                 call edx
// 00736818  895c2424             mov dword ptr [esp + 0x24], ebx
// 0073681c  8d4c2434             lea ecx, [esp + 0x34]
// 00736820  c684247c01000009     mov byte ptr [esp + 0x17c], 9
// 00736828  ff158ce77700         call dword ptr [0x77e78c]
// 0073682e  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00736835  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 0073683d  ff158ce77700         call dword ptr [0x77e78c]
// 00736843  8b442420             mov eax, dword ptr [esp + 0x20]
// 00736847  683ca97e00           push 0x7ea93c
// 0073684c  50                   push eax
// 0073684d  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00736854  51                   push ecx
// 00736855  ffd5                 call ebp
// 00736857  d9e8                 fld1 
// 00736859  8b542424             mov edx, dword ptr [esp + 0x24]
// 0073685d  d9542408             fst dword ptr [esp + 8]
// 00736861  83c404               add esp, 4
// 00736864  d91c24               fstp dword ptr [esp]
// 00736867  d9e8                 fld1 
// 00736869  53                   push ebx
// 0073686a  83ec08               sub esp, 8
// 0073686d  dd1c24               fstp qword ptr [esp]
// 00736870  c68424900100000c     mov byte ptr [esp + 0x190], 0xc
// 00736878  6a02                 push 2
// 0073687a  6a02                 push 2
// 0073687c  6a02                 push 2
// 0073687e  52                   push edx
// 0073687f  50                   push eax
// 00736880  8d442444             lea eax, [esp + 0x44]
// 00736884  50                   push eax
// 00736885  e836b7d3ff           call 0x471fc0
// 0073688a  83c42c               add esp, 0x2c
// 0073688d  8b38                 mov edi, dword ptr [eax]
// 0073688f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00736892  3bf8                 cmp edi, eax
// 00736894  c684247c0100000d     mov byte ptr [esp + 0x17c], 0xd
// 0073689c  743d                 je 0x7368db
// 0073689e  3bc3                 cmp eax, ebx
// 007368a0  7428                 je 0x7368ca
// 007368a2  83c004               add eax, 4
// 007368a5  50                   push eax
// 007368a6  ff15a8d27700         call dword ptr [0x77d2a8]
// 007368ac  85c0                 test eax, eax
// 007368ae  7517                 jne 0x7368c7
// 007368b0  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007368b3  e808cbd2ff           call 0x4633c0
// 007368b8  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007368bb  3bcb                 cmp ecx, ebx
// 007368bd  7408                 je 0x7368c7
// 007368bf  8b11                 mov edx, dword ptr [ecx]
// 007368c1  8b02                 mov eax, dword ptr [edx]
// 007368c3  6a01                 push 1
// 007368c5  ffd0                 call eax
// 007368c7  895e28               mov dword ptr [esi + 0x28], ebx
// 007368ca  3bfb                 cmp edi, ebx
// 007368cc  740d                 je 0x7368db
// 007368ce  897e28               mov dword ptr [esi + 0x28], edi
// 007368d1  83c704               add edi, 4
// 007368d4  57                   push edi
// 007368d5  ff15acd27700         call dword ptr [0x77d2ac]
// 007368db  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007368df  3bc3                 cmp eax, ebx
// 007368e1  c684247c0100000c     mov byte ptr [esp + 0x17c], 0xc
// 007368e9  742b                 je 0x736916
// 007368eb  83c004               add eax, 4
// 007368ee  50                   push eax
// 007368ef  ff15a8d27700         call dword ptr [0x77d2a8]
// 007368f5  85c0                 test eax, eax
// 007368f7  7519                 jne 0x736912
// 007368f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007368fd  e8becad2ff           call 0x4633c0
// 00736902  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00736906  3bcb                 cmp ecx, ebx
// 00736908  7408                 je 0x736912
// 0073690a  8b11                 mov edx, dword ptr [ecx]
// 0073690c  8b02                 mov eax, dword ptr [edx]
// 0073690e  6a01                 push 1
// 00736910  ffd0                 call eax
// 00736912  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00736916  8d8c2498000000       lea ecx, [esp + 0x98]
// 0073691d  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00736925  ff158ce77700         call dword ptr [0x77e78c]
// 0073692b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073692f  682ca97e00           push 0x7ea92c
// 00736934  51                   push ecx
// 00736935  8d9424f4000000       lea edx, [esp + 0xf4]
// 0073693c  52                   push edx
// 0073693d  ffd5                 call ebp
// 0073693f  d9e8                 fld1 
// 00736941  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00736945  d9542408             fst dword ptr [esp + 8]
// 00736949  83c404               add esp, 4
// 0073694c  d91c24               fstp dword ptr [esp]
// 0073694f  d9e8                 fld1 
// 00736951  53                   push ebx
// 00736952  83ec08               sub esp, 8
// 00736955  dd1c24               fstp qword ptr [esp]
// 00736958  8d54243c             lea edx, [esp + 0x3c]
// 0073695c  6a02                 push 2
// 0073695e  6a02                 push 2
// 00736960  6a02                 push 2
// 00736962  51                   push ecx
// 00736963  50                   push eax
// 00736964  52                   push edx
// 00736965  c68424a80100000e     mov byte ptr [esp + 0x1a8], 0xe
// 0073696d  e84eb6d3ff           call 0x471fc0
// 00736972  83c42c               add esp, 0x2c
// 00736975  8b38                 mov edi, dword ptr [eax]
// 00736977  8b4630               mov eax, dword ptr [esi + 0x30]
// 0073697a  3bf8                 cmp edi, eax
// 0073697c  c684247c0100000f     mov byte ptr [esp + 0x17c], 0xf
// 00736984  743d                 je 0x7369c3
// 00736986  3bc3                 cmp eax, ebx
// 00736988  7428                 je 0x7369b2
// 0073698a  83c004               add eax, 4
// 0073698d  50                   push eax
// 0073698e  ff15a8d27700         call dword ptr [0x77d2a8]
// 00736994  85c0                 test eax, eax
// 00736996  7517                 jne 0x7369af
// 00736998  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0073699b  e820cad2ff           call 0x4633c0
// 007369a0  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007369a3  3bcb                 cmp ecx, ebx
// 007369a5  7408                 je 0x7369af
// 007369a7  8b01                 mov eax, dword ptr [ecx]
// 007369a9  8b10                 mov edx, dword ptr [eax]
// 007369ab  6a01                 push 1
// 007369ad  ffd2                 call edx
// 007369af  895e30               mov dword ptr [esi + 0x30], ebx
// 007369b2  3bfb                 cmp edi, ebx
// 007369b4  740d                 je 0x7369c3
// 007369b6  897e30               mov dword ptr [esi + 0x30], edi
// 007369b9  83c704               add edi, 4
// 007369bc  57                   push edi
// 007369bd  ff15acd27700         call dword ptr [0x77d2ac]
// 007369c3  8b442428             mov eax, dword ptr [esp + 0x28]
// 007369c7  3bc3                 cmp eax, ebx
// 007369c9  c684247c0100000e     mov byte ptr [esp + 0x17c], 0xe
// 007369d1  742b                 je 0x7369fe
// 007369d3  83c004               add eax, 4
// 007369d6  50                   push eax
// 007369d7  ff15a8d27700         call dword ptr [0x77d2a8]
// 007369dd  85c0                 test eax, eax
// 007369df  7519                 jne 0x7369fa
// 007369e1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007369e5  e8d6c9d2ff           call 0x4633c0
// 007369ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007369ee  3bcb                 cmp ecx, ebx
// 007369f0  7408                 je 0x7369fa
// 007369f2  8b01                 mov eax, dword ptr [ecx]
// 007369f4  8b10                 mov edx, dword ptr [eax]
// 007369f6  6a01                 push 1
// 007369f8  ffd2                 call edx
// 007369fa  895c2428             mov dword ptr [esp + 0x28], ebx
// 007369fe  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00736a05  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00736a0d  ff158ce77700         call dword ptr [0x77e78c]
// 00736a13  8b442420             mov eax, dword ptr [esp + 0x20]
// 00736a17  681ca97e00           push 0x7ea91c
// 00736a1c  50                   push eax
// 00736a1d  8d4c2468             lea ecx, [esp + 0x68]
// 00736a21  51                   push ecx
// 00736a22  ffd5                 call ebp
// 00736a24  d9e8                 fld1 
// 00736a26  8b542424             mov edx, dword ptr [esp + 0x24]
// 00736a2a  d9542408             fst dword ptr [esp + 8]
// 00736a2e  83c404               add esp, 4
// 00736a31  d91c24               fstp dword ptr [esp]
// 00736a34  d9e8                 fld1 
// 00736a36  53                   push ebx
// 00736a37  83ec08               sub esp, 8
// 00736a3a  dd1c24               fstp qword ptr [esp]
// 00736a3d  c684249001000010     mov byte ptr [esp + 0x190], 0x10
// 00736a45  6a02                 push 2
// 00736a47  6a02                 push 2
// 00736a49  6a02                 push 2
// 00736a4b  52                   push edx
// 00736a4c  50                   push eax
// 00736a4d  8d442454             lea eax, [esp + 0x54]
// 00736a51  50                   push eax
// 00736a52  e869b5d3ff           call 0x471fc0
// 00736a57  83c42c               add esp, 0x2c
// 00736a5a  8b38                 mov edi, dword ptr [eax]
// 00736a5c  8b4634               mov eax, dword ptr [esi + 0x34]
// 00736a5f  3bf8                 cmp edi, eax
// 00736a61  c684247c01000011     mov byte ptr [esp + 0x17c], 0x11
// 00736a69  743d                 je 0x736aa8
// 00736a6b  3bc3                 cmp eax, ebx
// 00736a6d  7428                 je 0x736a97
// 00736a6f  83c004               add eax, 4
// 00736a72  50                   push eax
// 00736a73  ff15a8d27700         call dword ptr [0x77d2a8]
// 00736a79  85c0                 test eax, eax
// 00736a7b  7517                 jne 0x736a94
// 00736a7d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00736a80  e83bc9d2ff           call 0x4633c0
// 00736a85  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00736a88  3bcb                 cmp ecx, ebx
// 00736a8a  7408                 je 0x736a94
// 00736a8c  8b11                 mov edx, dword ptr [ecx]
// 00736a8e  8b02                 mov eax, dword ptr [edx]
// 00736a90  6a01                 push 1
// 00736a92  ffd0                 call eax
// 00736a94  895e34               mov dword ptr [esi + 0x34], ebx
// 00736a97  3bfb                 cmp edi, ebx
// 00736a99  740d                 je 0x736aa8
// 00736a9b  897e34               mov dword ptr [esi + 0x34], edi
// 00736a9e  83c704               add edi, 4
// 00736aa1  57                   push edi
// 00736aa2  ff15acd27700         call dword ptr [0x77d2ac]
// 00736aa8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00736aac  3bc3                 cmp eax, ebx
// 00736aae  c684247c01000010     mov byte ptr [esp + 0x17c], 0x10
// 00736ab6  742b                 je 0x736ae3
// 00736ab8  83c004               add eax, 4
// 00736abb  50                   push eax
// 00736abc  ff15a8d27700         call dword ptr [0x77d2a8]
// 00736ac2  85c0                 test eax, eax
// 00736ac4  7519                 jne 0x736adf
// 00736ac6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00736aca  e8f1c8d2ff           call 0x4633c0
// 00736acf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00736ad3  3bcb                 cmp ecx, ebx
// 00736ad5  7408                 je 0x736adf
// 00736ad7  8b11                 mov edx, dword ptr [ecx]
// 00736ad9  8b02                 mov eax, dword ptr [edx]
// 00736adb  6a01                 push 1
// 00736add  ffd0                 call eax
// 00736adf  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00736ae3  8d4c2460             lea ecx, [esp + 0x60]
// 00736ae7  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00736aef  ff158ce77700         call dword ptr [0x77e78c]
// 00736af5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00736af9  6810a97e00           push 0x7ea910
// 00736afe  8d8c2480000000       lea ecx, [esp + 0x80]
// 00736b05  57                   push edi
// 00736b06  51                   push ecx
// 00736b07  ffd5                 call ebp
// 00736b09  50                   push eax
// 00736b0a  c684248c01000012     mov byte ptr [esp + 0x18c], 0x12
// 00736b12  e859a1dcff           call 0x500c70
// 00736b17  83c410               add esp, 0x10
// 00736b1a  8d4c247c             lea ecx, [esp + 0x7c]
// 00736b1e  8844241c             mov byte ptr [esp + 0x1c], al
// 00736b22  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00736b2a  ff158ce77700         call dword ptr [0x77e78c]
// 00736b30  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 00736b35  0f8470030000         je 0x736eab
// 00736b3b  6810a97e00           push 0x7ea910
// 00736b40  8d9424b8000000       lea edx, [esp + 0xb8]
// 00736b47  57                   push edi
// 00736b48  52                   push edx
// 00736b49  ffd5                 call ebp
// 00736b4b  83c40c               add esp, 0xc
// 00736b4e  6a01                 push 1
// 00736b50  6a01                 push 1
// 00736b52  50                   push eax
// 00736b53  8d8c2414010000       lea ecx, [esp + 0x114]
// 00736b5a  c684248801000013     mov byte ptr [esp + 0x188], 0x13
// 00736b62  e879acdcff           call 0x5017e0
// 00736b67  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00736b6e  c684247c01000015     mov byte ptr [esp + 0x17c], 0x15
// 00736b76  ff158ce77700         call dword ptr [0x77e78c]
// 00736b7c  6a05                 push 5
// 00736b7e  8d842458010000       lea eax, [esp + 0x158]
// 00736b85  50                   push eax
// 00736b86  8d8c2410010000       lea ecx, [esp + 0x110]
// 00736b8d  e8deaadcff           call 0x501670
// 00736b92  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736b99  8d4802               lea ecx, [eax + 2]
// 00736b9c  3b8c2444010000       cmp ecx, dword ptr [esp + 0x144]
// 00736ba3  c684247c01000016     mov byte ptr [esp + 0x17c], 0x16
// 00736bab  7e1f                 jle 0x736bcc
// 00736bad  8b94243c010000       mov edx, dword ptr [esp + 0x13c]
// 00736bb4  6a02                 push 2
// 00736bb6  03d0                 add edx, eax
// 00736bb8  52                   push edx
// 00736bb9  8d8c2410010000       lea ecx, [esp + 0x110]
// 00736bc0  e8aba7dcff           call 0x501370
// 00736bc5  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736bcc  83c002               add eax, 2
// 00736bcf  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 00736bd7  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 00736bde  741e                 je 0x736bfe
// 00736be0  8bbc2448010000       mov edi, dword ptr [esp + 0x148]
// 00736be7  8a4c07ff             mov cl, byte ptr [edi + eax - 1]
// 00736beb  8a5407fe             mov dl, byte ptr [edi + eax - 2]
// 00736bef  884c241c             mov byte ptr [esp + 0x1c], cl
// 00736bf3  8854241d             mov byte ptr [esp + 0x1d], dl
// 00736bf7  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00736bfc  eb0c                 jmp 0x736c0a
// 00736bfe  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 00736c05  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00736c0a  0fbfe8               movsx ebp, ax
// 00736c0d  6a01                 push 1
// 00736c0f  55                   push ebp
// 00736c10  8d4e38               lea ecx, [esi + 0x38]
// 00736c13  e82855dcff           call 0x4fc140
// 00736c18  6a01                 push 1
// 00736c1a  55                   push ebp
// 00736c1b  8d4e44               lea ecx, [esi + 0x44]
// 00736c1e  e82d41d4ff           call 0x47ad50
// 00736c23  33ff                 xor edi, edi
// 00736c25  3beb                 cmp ebp, ebx
// 00736c27  0f8e50020000         jle 0x736e7d
// 00736c2d  8d4900               lea ecx, [ecx]
// 00736c30  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736c37  8d5002               lea edx, [eax + 2]
// 00736c3a  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 00736c41  7e1f                 jle 0x736c62
// 00736c43  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 00736c4a  03c8                 add ecx, eax
// 00736c4c  6a02                 push 2
// 00736c4e  51                   push ecx
// 00736c4f  8d8c2410010000       lea ecx, [esp + 0x110]
// 00736c56  e815a7dcff           call 0x501370
// 00736c5b  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736c62  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 00736c69  83c002               add eax, 2
// 00736c6c  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 00736c74  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 00736c7b  7419                 je 0x736c96
// 00736c7d  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 00736c82  8854241c             mov byte ptr [esp + 0x1c], dl
// 00736c86  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 00736c8b  8854241d             mov byte ptr [esp + 0x1d], dl
// 00736c8f  0fb754241c           movzx edx, word ptr [esp + 0x1c]
// 00736c94  eb05                 jmp 0x736c9b
// 00736c96  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 00736c9b  0fbfd2               movsx edx, dx
// 00736c9e  89542414             mov dword ptr [esp + 0x14], edx
// 00736ca2  8d5002               lea edx, [eax + 2]
// 00736ca5  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 00736cac  db442414             fild dword ptr [esp + 0x14]
// 00736cb0  dcc0                 fadd st(0), st(0)
// 00736cb2  dc05a81f7900         fadd qword ptr [0x791fa8]
// 00736cb8  dc0d08a97e00         fmul qword ptr [0x7ea908]
// 00736cbe  d95c242c             fstp dword ptr [esp + 0x2c]
// 00736cc2  7e26                 jle 0x736cea
// 00736cc4  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 00736ccb  03c8                 add ecx, eax
// 00736ccd  6a02                 push 2
// 00736ccf  51                   push ecx
// 00736cd0  8d8c2410010000       lea ecx, [esp + 0x110]
// 00736cd7  e894a6dcff           call 0x501370
// 00736cdc  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736ce3  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 00736cea  83c002               add eax, 2
// 00736ced  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 00736cf5  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 00736cfc  7419                 je 0x736d17
// 00736cfe  0fb65401ff           movzx edx, byte ptr [ecx + eax - 1]
// 00736d03  88542424             mov byte ptr [esp + 0x24], dl
// 00736d07  0fb65401fe           movzx edx, byte ptr [ecx + eax - 2]
// 00736d0c  88542425             mov byte ptr [esp + 0x25], dl
// 00736d10  0fb7542424           movzx edx, word ptr [esp + 0x24]
// 00736d15  eb05                 jmp 0x736d1c
// 00736d17  0fb75401fe           movzx edx, word ptr [ecx + eax - 2]
// 00736d1c  0fbfd2               movsx edx, dx
// 00736d1f  89542414             mov dword ptr [esp + 0x14], edx
// 00736d23  8d5002               lea edx, [eax + 2]
// 00736d26  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 00736d2d  db442414             fild dword ptr [esp + 0x14]
// 00736d31  dcc0                 fadd st(0), st(0)
// 00736d33  dc05a81f7900         fadd qword ptr [0x791fa8]
// 00736d39  dc0d08a97e00         fmul qword ptr [0x7ea908]
// 00736d3f  d95c2428             fstp dword ptr [esp + 0x28]
// 00736d43  7e26                 jle 0x736d6b
// 00736d45  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 00736d4c  03c8                 add ecx, eax
// 00736d4e  6a02                 push 2
// 00736d50  51                   push ecx
// 00736d51  8d8c2410010000       lea ecx, [esp + 0x110]
// 00736d58  e813a6dcff           call 0x501370
// 00736d5d  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736d64  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 00736d6b  83c002               add eax, 2
// 00736d6e  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 00736d76  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 00736d7d  7417                 je 0x736d96
// 00736d7f  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 00736d83  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 00736d87  88542418             mov byte ptr [esp + 0x18], dl
// 00736d8b  88442419             mov byte ptr [esp + 0x19], al
// 00736d8f  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00736d94  eb05                 jmp 0x736d9b
// 00736d96  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00736d9b  0fbfc8               movsx ecx, ax
// 00736d9e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00736da1  894c2414             mov dword ptr [esp + 0x14], ecx
// 00736da5  03c3                 add eax, ebx
// 00736da7  db442414             fild dword ptr [esp + 0x14]
// 00736dab  dcc0                 fadd st(0), st(0)
// 00736dad  dc05a81f7900         fadd qword ptr [0x791fa8]
// 00736db3  dc0d08a97e00         fmul qword ptr [0x7ea908]
// 00736db9  d95c2414             fstp dword ptr [esp + 0x14]
// 00736dbd  d944242c             fld dword ptr [esp + 0x2c]
// 00736dc1  d918                 fstp dword ptr [eax]
// 00736dc3  d9442428             fld dword ptr [esp + 0x28]
// 00736dc7  d95804               fstp dword ptr [eax + 4]
// 00736dca  d9442414             fld dword ptr [esp + 0x14]
// 00736dce  d95808               fstp dword ptr [eax + 8]
// 00736dd1  d9ee                 fldz 
// 00736dd3  d9580c               fstp dword ptr [eax + 0xc]
// 00736dd6  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736ddd  8d5002               lea edx, [eax + 2]
// 00736de0  3b942444010000       cmp edx, dword ptr [esp + 0x144]
// 00736de7  7e1f                 jle 0x736e08
// 00736de9  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 00736df0  03c8                 add ecx, eax
// 00736df2  6a02                 push 2
// 00736df4  51                   push ecx
// 00736df5  8d8c2410010000       lea ecx, [esp + 0x110]
// 00736dfc  e86fa5dcff           call 0x501370
// 00736e01  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 00736e08  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 00736e0f  83c002               add eax, 2
// 00736e12  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 00736e1a  8984244c010000       mov dword ptr [esp + 0x14c], eax
// 00736e21  7417                 je 0x736e3a
// 00736e23  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 00736e27  8a4401fe             mov al, byte ptr [ecx + eax - 2]
// 00736e2b  88542420             mov byte ptr [esp + 0x20], dl
// 00736e2f  88442421             mov byte ptr [esp + 0x21], al
// 00736e33  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00736e38  eb05                 jmp 0x736e3f
// 00736e3a  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00736e3f  0fbfd0               movsx edx, ax
// 00736e42  8b4644               mov eax, dword ptr [esi + 0x44]
// 00736e45  89542414             mov dword ptr [esp + 0x14], edx
// 00736e49  83c701               add edi, 1
// 00736e4c  83c310               add ebx, 0x10
// 00736e4f  3bfd                 cmp edi, ebp
// 00736e51  db442414             fild dword ptr [esp + 0x14]
// 00736e55  dcc0                 fadd st(0), st(0)
// 00736e57  dc05a81f7900         fadd qword ptr [0x791fa8]
// 00736e5d  dc0d08a97e00         fmul qword ptr [0x7ea908]
// 00736e63  dcc8                 fmul st(0), st(0)
// 00736e65  dc0548ea7900         fadd qword ptr [0x79ea48]
// 00736e6b  d95c2414             fstp dword ptr [esp + 0x14]
// 00736e6f  d9442414             fld dword ptr [esp + 0x14]
// 00736e73  d95cb8fc             fstp dword ptr [eax + edi*4 - 4]
// 00736e77  0f8cb3fdffff         jl 0x736c30
// 00736e7d  8d8c2454010000       lea ecx, [esp + 0x154]
// 00736e84  c684247c01000015     mov byte ptr [esp + 0x17c], 0x15
// 00736e8c  ff158ce77700         call dword ptr [0x77e78c]
// 00736e92  8d8c2408010000       lea ecx, [esp + 0x108]
// 00736e99  c684247c01000008     mov byte ptr [esp + 0x17c], 8
// 00736ea1  e8eaa6dcff           call 0x501590
// 00736ea6  e9cb000000           jmp 0x736f76
// 00736eab  6a01                 push 1
// 00736ead  68b80b0000           push 0xbb8
// 00736eb2  8d4e38               lea ecx, [esi + 0x38]
// 00736eb5  e88652dcff           call 0x4fc140
// 00736eba  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00736ebd  6a01                 push 1
// 00736ebf  51                   push ecx
// 00736ec0  8d4e44               lea ecx, [esi + 0x44]
// 00736ec3  e8883ed4ff           call 0x47ad50
// 00736ec8  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 00736ecb  83ef01               sub edi, 1
// 00736ece  0f88a2000000         js 0x736f76
// 00736ed4  d9e8                 fld1 
// 00736ed6  8b1d18e97700         mov ebx, dword ptr [0x77e918]
// 00736edc  dc2560ef7800         fsub qword ptr [0x78ef60]
// 00736ee2  8bef                 mov ebp, edi
// 00736ee4  c1e504               shl ebp, 4
// 00736ee7  dd5c242c             fstp qword ptr [esp + 0x2c]
// 00736eeb  eb03                 jmp 0x736ef0
// 00736eed  8d4900               lea ecx, [ecx]
// 00736ef0  8d542454             lea edx, [esp + 0x54]
// 00736ef4  52                   push edx
// 00736ef5  e826cddcff           call 0x503c20
// 00736efa  d900                 fld dword ptr [eax]
// 00736efc  d95c2438             fstp dword ptr [esp + 0x38]
// 00736f00  83c404               add esp, 4
// 00736f03  d94004               fld dword ptr [eax + 4]
// 00736f06  d95c2438             fstp dword ptr [esp + 0x38]
// 00736f0a  d94008               fld dword ptr [eax + 8]
// 00736f0d  8b4638               mov eax, dword ptr [esi + 0x38]
// 00736f10  d95c243c             fstp dword ptr [esp + 0x3c]
// 00736f14  03c5                 add eax, ebp
// 00736f16  d9442434             fld dword ptr [esp + 0x34]
// 00736f1a  d918                 fstp dword ptr [eax]
// 00736f1c  d9442438             fld dword ptr [esp + 0x38]
// 00736f20  d95804               fstp dword ptr [eax + 4]
// 00736f23  d944243c             fld dword ptr [esp + 0x3c]
// 00736f27  d95808               fstp dword ptr [eax + 8]
// 00736f2a  d9ee                 fldz 
// 00736f2c  d9580c               fstp dword ptr [eax + 0xc]
// 00736f2f  ffd3                 call ebx
// 00736f31  89442414             mov dword ptr [esp + 0x14], eax
// 00736f35  db442414             fild dword ptr [esp + 0x14]
// 00736f39  8b4644               mov eax, dword ptr [esi + 0x44]
// 00736f3c  83ef01               sub edi, 1
// 00736f3f  83ed10               sub ebp, 0x10
// 00736f42  85ff                 test edi, edi
// 00736f44  dc4c242c             fmul qword ptr [esp + 0x2c]
// 00736f48  dc3508e97900         fdiv qword ptr [0x79e908]
// 00736f4e  dc0560ef7800         fadd qword ptr [0x78ef60]
// 00736f54  d95c2414             fstp dword ptr [esp + 0x14]
// 00736f58  d9442414             fld dword ptr [esp + 0x14]
// 00736f5c  dcc8                 fmul st(0), st(0)
// 00736f5e  dc0548ea7900         fadd qword ptr [0x79ea48]
// 00736f64  d95c2414             fstp dword ptr [esp + 0x14]
// 00736f68  d9442414             fld dword ptr [esp + 0x14]
// 00736f6c  d95cb804             fstp dword ptr [eax + edi*4 + 4]
// 00736f70  0f8d7affffff         jge 0x736ef0
// 00736f76  8bc6                 mov eax, esi
// 00736f78  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 00736f7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00736f86  59                   pop ecx
// 00736f87  5f                   pop edi
// 00736f88  5e                   pop esi
// 00736f89  5d                   pop ebp
// 00736f8a  5b                   pop ebx
// 00736f8b  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 00736f92  33cc                 xor ecx, esp
// 00736f94  e80d7feeff           call 0x61eea6
// 00736f99  81c46c010000         add esp, 0x16c
// 00736f9f  c21c00               ret 0x1c
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??0Sky@G3D@@AAE@PAVRenderDevice@1@QAV?$ReferenceCountedPointer@VTexture@G3D@@@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
