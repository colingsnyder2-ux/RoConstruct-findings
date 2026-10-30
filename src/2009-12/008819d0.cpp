// roc 2009-12 008819d0  unit: CXTPOffice2007Theme  size: 644 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008819d0
//
// 008819d0  6aff                 push -1
// 008819d2  681b099600           push 0x96091b
// 008819d7  64a100000000         mov eax, dword ptr fs:[0]
// 008819dd  50                   push eax
// 008819de  81eca8000000         sub esp, 0xa8
// 008819e4  53                   push ebx
// 008819e5  55                   push ebp
// 008819e6  56                   push esi
// 008819e7  57                   push edi
// 008819e8  a10052b600           mov eax, dword ptr [0xb65200]
// 008819ed  33c4                 xor eax, esp
// 008819ef  50                   push eax
// 008819f0  8d8424bc000000       lea eax, [esp + 0xbc]
// 008819f7  64a300000000         mov dword ptr fs:[0], eax
// 008819fd  8b8424cc000000       mov eax, dword ptr [esp + 0xcc]
// 00881a04  8b4808               mov ecx, dword ptr [eax + 8]
// 00881a07  51                   push ecx
// 00881a08  e81d21f7ff           call 0x7f3b2a
// 00881a0d  8bc8                 mov ecx, eax
// 00881a0f  e85e4a0a00           call 0x926472
// 00881a14  a900000001           test eax, 0x1000000
// 00881a19  7407                 je 0x881a22
// 00881a1b  33c0                 xor eax, eax
// 00881a1d  e916020000           jmp 0x881c38
// 00881a22  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00881a29  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 00881a30  be01000000           mov esi, 1
// 00881a35  ba02000000           mov edx, 2
// 00881a3a  89742478             mov dword ptr [esp + 0x78], esi
// 00881a3e  8954247c             mov dword ptr [esp + 0x7c], edx
// 00881a42  89b42480000000       mov dword ptr [esp + 0x80], esi
// 00881a49  89942488000000       mov dword ptr [esp + 0x88], edx
// 00881a50  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 00881a57  89942490000000       mov dword ptr [esp + 0x90], edx
// 00881a5e  8d50ff               lea edx, [eax - 1]
// 00881a61  89b4249c000000       mov dword ptr [esp + 0x9c], esi
// 00881a68  be04000000           mov esi, 4
// 00881a6d  89942494000000       mov dword ptr [esp + 0x94], edx
// 00881a74  899424a4000000       mov dword ptr [esp + 0xa4], edx
// 00881a7b  89b424a8000000       mov dword ptr [esp + 0xa8], esi
// 00881a82  89b424b0000000       mov dword ptr [esp + 0xb0], esi
// 00881a89  8d71fc               lea esi, [ecx - 4]
// 00881a8c  89542444             mov dword ptr [esp + 0x44], edx
// 00881a90  8d51fe               lea edx, [ecx - 2]
// 00881a93  33ed                 xor ebp, ebp
// 00881a95  8d78fc               lea edi, [eax - 4]
// 00881a98  8d58fe               lea ebx, [eax - 2]
// 00881a9b  89b424b8000000       mov dword ptr [esp + 0xb8], esi
// 00881aa2  89742440             mov dword ptr [esp + 0x40], esi
// 00881aa6  89542448             mov dword ptr [esp + 0x48], edx
// 00881aaa  89542450             mov dword ptr [esp + 0x50], edx
// 00881aae  8d51ff               lea edx, [ecx - 1]
// 00881ab1  89742430             mov dword ptr [esp + 0x30], esi
// 00881ab5  8bb424cc000000       mov esi, dword ptr [esp + 0xcc]
// 00881abc  894c2428             mov dword ptr [esp + 0x28], ecx
// 00881ac0  894c2468             mov dword ptr [esp + 0x68], ecx
// 00881ac4  894c2438             mov dword ptr [esp + 0x38], ecx
// 00881ac8  55                   push ebp
// 00881ac9  8bce                 mov ecx, esi
// 00881acb  89442428             mov dword ptr [esp + 0x28], eax
// 00881acf  c744247004000000     mov dword ptr [esp + 0x70], 4
// 00881ad7  896c2474             mov dword ptr [esp + 0x74], ebp
// 00881adb  897c2478             mov dword ptr [esp + 0x78], edi
// 00881adf  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 00881ae6  c784249c00000003000000 mov dword ptr [esp + 0x9c], 3
// 00881af1  c78424a400000003000000 mov dword ptr [esp + 0xa4], 3
// 00881afc  89ac24b0000000       mov dword ptr [esp + 0xb0], ebp
// 00881b03  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00881b0a  c744244001000000     mov dword ptr [esp + 0x40], 1
// 00881b12  c744245002000000     mov dword ptr [esp + 0x50], 2
// 00881b1a  895c2458             mov dword ptr [esp + 0x58], ebx
// 00881b1e  8954245c             mov dword ptr [esp + 0x5c], edx
// 00881b22  c744246004000000     mov dword ptr [esp + 0x60], 4
// 00881b2a  89542464             mov dword ptr [esp + 0x64], edx
// 00881b2e  897c2468             mov dword ptr [esp + 0x68], edi
// 00881b32  896c2430             mov dword ptr [esp + 0x30], ebp
// 00881b36  89442438             mov dword ptr [esp + 0x38], eax
// 00881b3a  e8319e0600           call 0x8eb970
// 00881b3f  85c0                 test eax, eax
// 00881b41  740e                 je 0x881b51
// 00881b43  837e4003             cmp dword ptr [esi + 0x40], 3
// 00881b47  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00881b4f  7f04                 jg 0x881b55
// 00881b51  896c2414             mov dword ptr [esp + 0x14], ebp
// 00881b55  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00881b59  f7df                 neg edi
// 00881b5b  1bff                 sbb edi, edi
// 00881b5d  83e720               and edi, 0x20
// 00881b60  83c710               add edi, 0x10
// 00881b63  8d5f50               lea ebx, [edi + 0x50]
// 00881b66  8d4320               lea eax, [ebx + 0x20]
// 00881b69  50                   push eax
// 00881b6a  89442424             mov dword ptr [esp + 0x24], eax
// 00881b6e  ff1578b79800         call dword ptr [0x98b778]
// 00881b74  8bf0                 mov esi, eax
// 00881b76  83c404               add esp, 4
// 00881b79  3bf5                 cmp esi, ebp
// 00881b7b  0f849afeffff         je 0x881a1b
// 00881b81  6a50                 push 0x50
// 00881b83  8d542470             lea edx, [esp + 0x70]
// 00881b87  52                   push edx
// 00881b88  8d4620               lea eax, [esi + 0x20]
// 00881b8b  50                   push eax
// 00881b8c  e85531f7ff           call 0x7f4ce6
// 00881b91  83c40c               add esp, 0xc
// 00881b94  8d44243c             lea eax, [esp + 0x3c]
// 00881b98  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00881b9c  7504                 jne 0x881ba2
// 00881b9e  8d44242c             lea eax, [esp + 0x2c]
// 00881ba2  57                   push edi
// 00881ba3  50                   push eax
// 00881ba4  8d4e70               lea ecx, [esi + 0x70]
// 00881ba7  51                   push ecx
// 00881ba8  e83931f7ff           call 0x7f4ce6
// 00881bad  8b542430             mov edx, dword ptr [esp + 0x30]
// 00881bb1  33c0                 xor eax, eax
// 00881bb3  894610               mov dword ptr [esi + 0x10], eax
// 00881bb6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00881bba  33c9                 xor ecx, ecx
// 00881bbc  894e14               mov dword ptr [esi + 0x14], ecx
// 00881bbf  895618               mov dword ptr [esi + 0x18], edx
// 00881bc2  c1eb04               shr ebx, 4
// 00881bc5  c70620000000         mov dword ptr [esi], 0x20
// 00881bcb  c7460401000000       mov dword ptr [esi + 4], 1
// 00881bd2  895e08               mov dword ptr [esi + 8], ebx
// 00881bd5  896e0c               mov dword ptr [esi + 0xc], ebp
// 00881bd8  89461c               mov dword ptr [esi + 0x1c], eax
// 00881bdb  bff82a9f00           mov edi, 0x9f2af8
// 00881be0  83c40c               add esp, 0xc
// 00881be3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00881be7  897c2418             mov dword ptr [esp + 0x18], edi
// 00881beb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00881bef  56                   push esi
// 00881bf0  51                   push ecx
// 00881bf1  55                   push ebp
// 00881bf2  89ac24d0000000       mov dword ptr [esp + 0xd0], ebp
// 00881bf9  ff15b8b09800         call dword ptr [0x98b0b8]
// 00881bff  50                   push eax
// 00881c00  8d4c241c             lea ecx, [esp + 0x1c]
// 00881c04  e82122f7ff           call 0x7f3e2a
// 00881c09  56                   push esi
// 00881c0a  ff1540b79800         call dword ptr [0x98b740]
// 00881c10  83c404               add esp, 4
// 00881c13  8d4c2418             lea ecx, [esp + 0x18]
// 00881c17  e852490a00           call 0x92656e
// 00881c1c  8d4c2418             lea ecx, [esp + 0x18]
// 00881c20  8bf0                 mov esi, eax
// 00881c22  c78424c4000000ffffffff mov dword ptr [esp + 0xc4], 0xffffffff
// 00881c2d  897c2418             mov dword ptr [esp + 0x18], edi
// 00881c31  e8fad5b8ff           call 0x40f230
// 00881c36  8bc6                 mov eax, esi
// 00881c38  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00881c3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00881c46  59                   pop ecx
// 00881c47  5f                   pop edi
// 00881c48  5e                   pop esi
// 00881c49  5d                   pop ebp
// 00881c4a  5b                   pop ebx
// 00881c4b  81c4b4000000         add esp, 0xb4
// 00881c51  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcRibbonFrameRegion@CXTPOffice2007Theme@@UAEPAUHRGN__@@PAVCXTPOffice2007FrameHook@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp