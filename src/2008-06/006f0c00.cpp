// roc 2008-06 006f0c00  unit: CXTPPopupBar  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0c00
//
// 006f0c00  83ec08               sub esp, 8
// 006f0c03  53                   push ebx
// 006f0c04  56                   push esi
// 006f0c05  57                   push edi
// 006f0c06  8bf1                 mov esi, ecx
// 006f0c08  e8934ffcff           call 0x6b5ba0
// 006f0c0d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006f0c11  8d8b77ecffff         lea ecx, [ebx - 0x1389]
// 006f0c17  83f903               cmp ecx, 3
// 006f0c1a  0f877a010000         ja 0x6f0d9a
// 006f0c20  ff248dac0d6f00       jmp dword ptr [ecx*4 + 0x6f0dac]
// 006f0c27  8b8e20020000         mov ecx, dword ptr [esi + 0x220]
// 006f0c2d  3bc8                 cmp ecx, eax
// 006f0c2f  7514                 jne 0x6f0c45
// 006f0c31  8d8e24020000         lea ecx, [esi + 0x224]
// 006f0c37  e804dbffff           call 0x6ee740
// 006f0c3c  5f                   pop edi
// 006f0c3d  5e                   pop esi
// 006f0c3e  5b                   pop ebx
// 006f0c3f  83c408               add esp, 8
// 006f0c42  c20400               ret 4
// 006f0c45  6a01                 push 1
// 006f0c47  41                   inc ecx
// 006f0c48  6a01                 push 1
// 006f0c4a  898e20020000         mov dword ptr [esi + 0x220], ecx
// 006f0c50  6a00                 push 0
// 006f0c52  8bce                 mov ecx, esi
// 006f0c54  e837e7ffff           call 0x6ef390
// 006f0c59  53                   push ebx
// 006f0c5a  8bce                 mov ecx, esi
// 006f0c5c  e87f4ffcff           call 0x6b5be0
// 006f0c61  5f                   pop edi
// 006f0c62  5e                   pop esi
// 006f0c63  5b                   pop ebx
// 006f0c64  83c408               add esp, 8
// 006f0c67  c20400               ret 4
// 006f0c6a  8b861c020000         mov eax, dword ptr [esi + 0x21c]
// 006f0c70  85c0                 test eax, eax
// 006f0c72  7514                 jne 0x6f0c88
// 006f0c74  8d8e40020000         lea ecx, [esi + 0x240]
// 006f0c7a  e8c1daffff           call 0x6ee740
// 006f0c7f  5f                   pop edi
// 006f0c80  5e                   pop esi
// 006f0c81  5b                   pop ebx
// 006f0c82  83c408               add esp, 8
// 006f0c85  c20400               ret 4
// 006f0c88  6a01                 push 1
// 006f0c8a  6a00                 push 0
// 006f0c8c  48                   dec eax
// 006f0c8d  6a00                 push 0
// 006f0c8f  8bce                 mov ecx, esi
// 006f0c91  89861c020000         mov dword ptr [esi + 0x21c], eax
// 006f0c97  e8f4e6ffff           call 0x6ef390
// 006f0c9c  53                   push ebx
// 006f0c9d  8bce                 mov ecx, esi
// 006f0c9f  e83c4ffcff           call 0x6b5be0
// 006f0ca4  5f                   pop edi
// 006f0ca5  5e                   pop esi
// 006f0ca6  5b                   pop ebx
// 006f0ca7  83c408               add esp, 8
// 006f0caa  c20400               ret 4
// 006f0cad  8d44240c             lea eax, [esp + 0xc]
// 006f0cb1  50                   push eax
// 006f0cb2  ff159c2d8000         call dword ptr [0x802d9c]
// 006f0cb8  8b5620               mov edx, dword ptr [esi + 0x20]
// 006f0cbb  8d4c240c             lea ecx, [esp + 0xc]
// 006f0cbf  51                   push ecx
// 006f0cc0  52                   push edx
// 006f0cc1  ff15a02d8000         call dword ptr [0x802da0]
// 006f0cc7  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 006f0cce  8b3d2c2d8000         mov edi, dword ptr [0x802d2c]
// 006f0cd4  753e                 jne 0x6f0d14
// 006f0cd6  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f0cda  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f0cde  50                   push eax
// 006f0cdf  51                   push ecx
// 006f0ce0  8d96b4010000         lea edx, [esi + 0x1b4]
// 006f0ce6  52                   push edx
// 006f0ce7  ffd7                 call edi
// 006f0ce9  85c0                 test eax, eax
// 006f0ceb  741a                 je 0x6f0d07
// 006f0ced  8b06                 mov eax, dword ptr [esi]
// 006f0cef  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006f0cf5  6a01                 push 1
// 006f0cf7  6a00                 push 0
// 006f0cf9  8bce                 mov ecx, esi
// 006f0cfb  c786d801000001000000 mov dword ptr [esi + 0x1d8], 1
// 006f0d05  ffd2                 call edx
// 006f0d07  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 006f0d0e  0f8486000000         je 0x6f0d9a
// 006f0d14  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f0d18  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f0d1c  50                   push eax
// 006f0d1d  51                   push ecx
// 006f0d1e  8d96b4010000         lea edx, [esi + 0x1b4]
// 006f0d24  52                   push edx
// 006f0d25  ffd7                 call edi
// 006f0d27  85c0                 test eax, eax
// 006f0d29  756f                 jne 0x6f0d9a
// 006f0d2b  3986e0010000         cmp dword ptr [esi + 0x1e0], eax
// 006f0d31  7567                 jne 0x6f0d9a
// 006f0d33  8986d8010000         mov dword ptr [esi + 0x1d8], eax
// 006f0d39  8b06                 mov eax, dword ptr [esi]
// 006f0d3b  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006f0d41  6a01                 push 1
// 006f0d43  6a00                 push 0
// 006f0d45  8bce                 mov ecx, esi
// 006f0d47  ffd2                 call edx
// 006f0d49  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 006f0d4f  50                   push eax
// 006f0d50  eb3e                 jmp 0x6f0d90
// 006f0d52  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 006f0d58  83f8ff               cmp eax, -1
// 006f0d5b  742e                 je 0x6f0d8b
// 006f0d5d  50                   push eax
// 006f0d5e  8bce                 mov ecx, esi
// 006f0d60  e84b4efcff           call 0x6b5bb0
// 006f0d65  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 006f0d6f  751a                 jne 0x6f0d8b
// 006f0d71  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 006f0d77  52                   push edx
// 006f0d78  8bce                 mov ecx, esi
// 006f0d7a  e8314efcff           call 0x6b5bb0
// 006f0d7f  8b10                 mov edx, dword ptr [eax]
// 006f0d81  8bc8                 mov ecx, eax
// 006f0d83  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 006f0d89  ffd0                 call eax
// 006f0d8b  688c130000           push 0x138c
// 006f0d90  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f0d93  51                   push ecx
// 006f0d94  ff151c2e8000         call dword ptr [0x802e1c]
// 006f0d9a  53                   push ebx
// 006f0d9b  8bce                 mov ecx, esi
// 006f0d9d  e83e4efcff           call 0x6b5be0
// 006f0da2  5f                   pop edi
// 006f0da3  5e                   pop esi
// 006f0da4  5b                   pop ebx
// 006f0da5  83c408               add esp, 8
// 006f0da8  c20400               ret 4
// 006f0dab  90                   nop 
// 006f0dac  27                   daa 
// 006f0dad  0c6f                 or al, 0x6f
// 006f0daf  006a0c               add byte ptr [edx + 0xc], ch
// 006f0db2  6f                   outsd dx, dword ptr [esi]
// 006f0db3  00ad0c6f0052         add byte ptr [ebp + 0x52006f0c], ch
// library xtp-11.2.2-lib-strlen/Source\CommandBars\XTPPopupBar.cpp (function ?OnTimer@CXTPPopupBar@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/CommandBars/XTPPopupBar.cpp
