// roc 2009-12 008be830  unit: CXTPDockingPaneContext  size: 1094 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008be830
//
// 008be830  6aff                 push -1
// 008be832  68c83c9600           push 0x963cc8
// 008be837  64a100000000         mov eax, dword ptr fs:[0]
// 008be83d  50                   push eax
// 008be83e  83ec5c               sub esp, 0x5c
// 008be841  53                   push ebx
// 008be842  55                   push ebp
// 008be843  56                   push esi
// 008be844  57                   push edi
// 008be845  a10052b600           mov eax, dword ptr [0xb65200]
// 008be84a  33c4                 xor eax, esp
// 008be84c  50                   push eax
// 008be84d  8d442470             lea eax, [esp + 0x70]
// 008be851  64a300000000         mov dword ptr fs:[0], eax
// 008be857  8bf1                 mov esi, ecx
// 008be859  8b1d28cc9800         mov ebx, dword ptr [0x98cc28]
// 008be85f  ffd3                 call ebx
// 008be861  85c0                 test eax, eax
// 008be863  0f85f9030000         jne 0x8bec62
// 008be869  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008be86f  8bb8cc000000         mov edi, dword ptr [eax + 0xcc]
// 008be875  897c2418             mov dword ptr [esp + 0x18], edi
// 008be879  85ff                 test edi, edi
// 008be87b  0f84e1030000         je 0x8bec62
// 008be881  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008be884  51                   push ecx
// 008be885  ff152ccc9800         call dword ptr [0x98cc2c]
// 008be88b  50                   push eax
// 008be88c  e89952f3ff           call 0x7f3b2a
// 008be891  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008be899  ffd3                 call ebx
// 008be89b  50                   push eax
// 008be89c  e88952f3ff           call 0x7f3b2a
// 008be8a1  3bc7                 cmp eax, edi
// 008be8a3  0f8516020000         jne 0x8beabf
// 008be8a9  8b2d24cc9800         mov ebp, dword ptr [0x98cc24]
// 008be8af  90                   nop 
// 008be8b0  6a00                 push 0
// 008be8b2  6a0f                 push 0xf
// 008be8b4  6a0f                 push 0xf
// 008be8b6  6a00                 push 0
// 008be8b8  8d542448             lea edx, [esp + 0x48]
// 008be8bc  52                   push edx
// 008be8bd  ffd5                 call ebp
// 008be8bf  85c0                 test eax, eax
// 008be8c1  7437                 je 0x8be8fa
// 008be8c3  6a0f                 push 0xf
// 008be8c5  6a0f                 push 0xf
// 008be8c7  6a00                 push 0
// 008be8c9  8d442444             lea eax, [esp + 0x44]
// 008be8cd  50                   push eax
// 008be8ce  ff15b0ca9800         call dword ptr [0x98cab0]
// 008be8d4  85c0                 test eax, eax
// 008be8d6  0f8486030000         je 0x8bec62
// 008be8dc  8d4c2438             lea ecx, [esp + 0x38]
// 008be8e0  51                   push ecx
// 008be8e1  ff1594ca9800         call dword ptr [0x98ca94]
// 008be8e7  6a00                 push 0
// 008be8e9  6a0f                 push 0xf
// 008be8eb  6a0f                 push 0xf
// 008be8ed  6a00                 push 0
// 008be8ef  8d542448             lea edx, [esp + 0x48]
// 008be8f3  52                   push edx
// 008be8f4  ffd5                 call ebp
// 008be8f6  85c0                 test eax, eax
// 008be8f8  75c9                 jne 0x8be8c3
// 008be8fa  6a00                 push 0
// 008be8fc  6a00                 push 0
// 008be8fe  6a00                 push 0
// 008be900  8d442444             lea eax, [esp + 0x44]
// 008be904  50                   push eax
// 008be905  ff15b0ca9800         call dword ptr [0x98cab0]
// 008be90b  85c0                 test eax, eax
// 008be90d  0f8498010000         je 0x8beaab
// 008be913  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008be917  3d02020000           cmp eax, 0x202
// 008be91c  0f8495010000         je 0x8beab7
// 008be922  3d00020000           cmp eax, 0x200
// 008be927  7576                 jne 0x8be99f
// 008be929  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 008be92f  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 008be933  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008be939  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008be93d  2bc3                 sub eax, ebx
// 008be93f  99                   cdq 
// 008be940  33c2                 xor eax, edx
// 008be942  2bc2                 sub eax, edx
// 008be944  2bcf                 sub ecx, edi
// 008be946  83f804               cmp eax, 4
// 008be949  7f0c                 jg 0x8be957
// 008be94b  8bc1                 mov eax, ecx
// 008be94d  99                   cdq 
// 008be94e  33c2                 xor eax, edx
// 008be950  2bc2                 sub eax, edx
// 008be952  83f804               cmp eax, 4
// 008be955  7e2b                 jle 0x8be982
// 008be957  83ec08               sub esp, 8
// 008be95a  8bc4                 mov eax, esp
// 008be95c  8bcb                 mov ecx, ebx
// 008be95e  8bd7                 mov edx, edi
// 008be960  8908                 mov dword ptr [eax], ecx
// 008be962  895004               mov dword ptr [eax + 4], edx
// 008be965  8b16                 mov edx, dword ptr [esi]
// 008be967  8b4210               mov eax, dword ptr [edx + 0x10]
// 008be96a  8bce                 mov ecx, esi
// 008be96c  89642424             mov dword ptr [esp + 0x24], esp
// 008be970  ffd0                 call eax
// 008be972  33c0                 xor eax, eax
// 008be974  33c9                 xor ecx, ecx
// 008be976  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 008be97c  898ef8000000         mov dword ptr [esi + 0xf8], ecx
// 008be982  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008be986  ff1528cc9800         call dword ptr [0x98cc28]
// 008be98c  50                   push eax
// 008be98d  e89851f3ff           call 0x7f3b2a
// 008be992  3bc7                 cmp eax, edi
// 008be994  0f8416ffffff         je 0x8be8b0
// 008be99a  e920010000           jmp 0x8beabf
// 008be99f  3d00010000           cmp eax, 0x100
// 008be9a4  7414                 je 0x8be9ba
// 008be9a6  3d01010000           cmp eax, 0x101
// 008be9ab  740d                 je 0x8be9ba
// 008be9ad  8d4c2438             lea ecx, [esp + 0x38]
// 008be9b1  51                   push ecx
// 008be9b2  ff1594ca9800         call dword ptr [0x98ca94]
// 008be9b8  ebcc                 jmp 0x8be986
// 008be9ba  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 008be9c1  0f84a6000000         je 0x8bea6d
// 008be9c7  3d00010000           cmp eax, 0x100
// 008be9cc  0f859b000000         jne 0x8bea6d
// 008be9d2  8b442440             mov eax, dword ptr [esp + 0x40]
// 008be9d6  83f80d               cmp eax, 0xd
// 008be9d9  0f84d8000000         je 0x8beab7
// 008be9df  8d50db               lea edx, [eax - 0x25]
// 008be9e2  83fa03               cmp edx, 3
// 008be9e5  0f8786000000         ja 0x8bea71
// 008be9eb  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008be9f1  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 008be9f7  894c2420             mov dword ptr [esp + 0x20], ecx
// 008be9fb  89542424             mov dword ptr [esp + 0x24], edx
// 008be9ff  83f825               cmp eax, 0x25
// 008bea02  7507                 jne 0x8bea0b
// 008bea04  836c24200a           sub dword ptr [esp + 0x20], 0xa
// 008bea09  eb22                 jmp 0x8bea2d
// 008bea0b  83f827               cmp eax, 0x27
// 008bea0e  7507                 jne 0x8bea17
// 008bea10  834424200a           add dword ptr [esp + 0x20], 0xa
// 008bea15  eb16                 jmp 0x8bea2d
// 008bea17  83f826               cmp eax, 0x26
// 008bea1a  7507                 jne 0x8bea23
// 008bea1c  836c24240a           sub dword ptr [esp + 0x24], 0xa
// 008bea21  eb0a                 jmp 0x8bea2d
// 008bea23  83f828               cmp eax, 0x28
// 008bea26  7505                 jne 0x8bea2d
// 008bea28  834424240a           add dword ptr [esp + 0x24], 0xa
// 008bea2d  8d442420             lea eax, [esp + 0x20]
// 008bea31  50                   push eax
// 008bea32  e849d6ffff           call 0x8bc080
// 008bea37  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008bea3b  8b542424             mov edx, dword ptr [esp + 0x24]
// 008bea3f  83c404               add esp, 4
// 008bea42  51                   push ecx
// 008bea43  52                   push edx
// 008bea44  ff1524ca9800         call dword ptr [0x98ca24]
// 008bea4a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008bea4e  8b06                 mov eax, dword ptr [esi]
// 008bea50  8b542420             mov edx, dword ptr [esp + 0x20]
// 008bea54  8b4010               mov eax, dword ptr [eax + 0x10]
// 008bea57  51                   push ecx
// 008bea58  52                   push edx
// 008bea59  8bce                 mov ecx, esi
// 008bea5b  ffd0                 call eax
// 008bea5d  33c0                 xor eax, eax
// 008bea5f  33c9                 xor ecx, ecx
// 008bea61  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 008bea67  898ef8000000         mov dword ptr [esi + 0xf8], ecx
// 008bea6d  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bea71  83f811               cmp eax, 0x11
// 008bea74  752b                 jne 0x8beaa1
// 008bea76  8b86f0000000         mov eax, dword ptr [esi + 0xf0]
// 008bea7c  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008bea82  8b16                 mov edx, dword ptr [esi]
// 008bea84  8b5210               mov edx, dword ptr [edx + 0x10]
// 008bea87  50                   push eax
// 008bea88  51                   push ecx
// 008bea89  8bce                 mov ecx, esi
// 008bea8b  ffd2                 call edx
// 008bea8d  33c0                 xor eax, eax
// 008bea8f  33c9                 xor ecx, ecx
// 008bea91  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 008bea97  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bea9b  898ef8000000         mov dword ptr [esi + 0xf8], ecx
// 008beaa1  83f81b               cmp eax, 0x1b
// 008beaa4  7419                 je 0x8beabf
// 008beaa6  e9dbfeffff           jmp 0x8be986
// 008beaab  8b442440             mov eax, dword ptr [esp + 0x40]
// 008beaaf  50                   push eax
// 008beab0  e8455cf3ff           call 0x7f46fa
// 008beab5  eb08                 jmp 0x8beabf
// 008beab7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008beabf  8b16                 mov edx, dword ptr [esi]
// 008beac1  8b4218               mov eax, dword ptr [edx + 0x18]
// 008beac4  8bce                 mov ecx, esi
// 008beac6  ffd0                 call eax
// 008beac8  837c241400           cmp dword ptr [esp + 0x14], 0
// 008beacd  0f848f010000         je 0x8bec62
// 008bead3  83bef400000000       cmp dword ptr [esi + 0xf4], 0
// 008beada  0f8582010000         jne 0x8bec62
// 008beae0  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 008beae7  0f8575010000         jne 0x8bec62
// 008beaed  6a0a                 push 0xa
// 008beaef  8d4c2458             lea ecx, [esp + 0x58]
// 008beaf3  bb01000000           mov ebx, 1
// 008beaf8  e8c3abf7ff           call 0x8396c0
// 008beafd  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008beb03  8b11                 mov edx, dword ptr [ecx]
// 008beb05  8b520c               mov edx, dword ptr [edx + 0xc]
// 008beb08  8d442454             lea eax, [esp + 0x54]
// 008beb0c  50                   push eax
// 008beb0d  6a00                 push 0
// 008beb0f  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008beb1a  ffd2                 call edx
// 008beb1c  83be4401000000       cmp dword ptr [esi + 0x144], 0
// 008beb23  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008beb29  741d                 je 0x8beb48
// 008beb2b  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008beb31  50                   push eax
// 008beb32  51                   push ecx
// 008beb33  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008beb39  e8a2bbf7ff           call 0x83a6e0
// 008beb3e  bb07000000           mov ebx, 7
// 008beb43  e9cb000000           jmp 0x8bec13
// 008beb48  85c0                 test eax, eax
// 008beb4a  7442                 je 0x8beb8e
// 008beb4c  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 008beb52  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008beb58  50                   push eax
// 008beb59  52                   push edx
// 008beb5a  e8a19bf7ff           call 0x838700
// 008beb5f  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008beb65  50                   push eax
// 008beb66  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008beb6c  50                   push eax
// 008beb6d  e88ebaf7ff           call 0x83a600
// 008beb72  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 008beb78  51                   push ecx
// 008beb79  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008beb7f  e85ca6f7ff           call 0x8391e0
// 008beb84  bb05000000           mov ebx, 5
// 008beb89  e985000000           jmp 0x8bec13
// 008beb8e  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008beb95  0f84b6000000         je 0x8bec51
// 008beb9b  8dbefc000000         lea edi, [esi + 0xfc]
// 008beba1  8d542428             lea edx, [esp + 0x28]
// 008beba5  57                   push edi
// 008beba6  52                   push edx
// 008beba7  e8c4dbf7ff           call 0x83c770
// 008bebac  8bc8                 mov ecx, eax
// 008bebae  e81dd7f7ff           call 0x83c2d0
// 008bebb3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008bebb9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008bebbd  3bc8                 cmp ecx, eax
// 008bebbf  7d0c                 jge 0x8bebcd
// 008bebc1  2bc1                 sub eax, ecx
// 008bebc3  50                   push eax
// 008bebc4  6a00                 push 0
// 008bebc6  57                   push edi
// 008bebc7  ff156ccc9800         call dword ptr [0x98cc6c]
// 008bebcd  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008bebd3  83791802             cmp dword ptr [ecx + 0x18], 2
// 008bebd7  7513                 jne 0x8bebec
// 008bebd9  8b01                 mov eax, dword ptr [ecx]
// 008bebdb  8b5018               mov edx, dword ptr [eax + 0x18]
// 008bebde  6a01                 push 1
// 008bebe0  57                   push edi
// 008bebe1  ffd2                 call edx
// 008bebe3  8bc8                 mov ecx, eax
// 008bebe5  e816c8baff           call 0x46b400
// 008bebea  eb27                 jmp 0x8bec13
// 008bebec  8b17                 mov edx, dword ptr [edi]
// 008bebee  83ec10               sub esp, 0x10
// 008bebf1  8bc4                 mov eax, esp
// 008bebf3  8910                 mov dword ptr [eax], edx
// 008bebf5  8b5704               mov edx, dword ptr [edi + 4]
// 008bebf8  895004               mov dword ptr [eax + 4], edx
// 008bebfb  8b5708               mov edx, dword ptr [edi + 8]
// 008bebfe  895008               mov dword ptr [eax + 8], edx
// 008bec01  8b570c               mov edx, dword ptr [edi + 0xc]
// 008bec04  51                   push ecx
// 008bec05  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bec0b  89500c               mov dword ptr [eax + 0xc], edx
// 008bec0e  e8bd9ef7ff           call 0x838ad0
// 008bec13  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 008bec17  85ff                 test edi, edi
// 008bec19  7436                 je 0x8bec51
// 008bec1b  eb03                 jmp 0x8bec20
// 008bec1d  8d4900               lea ecx, [ecx]
// 008bec20  8bc7                 mov eax, edi
// 008bec22  8b4008               mov eax, dword ptr [eax + 8]
// 008bec25  8b3f                 mov edi, dword ptr [edi]
// 008bec27  85c0                 test eax, eax
// 008bec29  7405                 je 0x8bec30
// 008bec2b  83c0e0               add eax, -0x20
// 008bec2e  eb02                 jmp 0x8bec32
// 008bec30  33c0                 xor eax, eax
// 008bec32  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 008bec38  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 008bec3e  51                   push ecx
// 008bec3f  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bec45  52                   push edx
// 008bec46  50                   push eax
// 008bec47  53                   push ebx
// 008bec48  e8d398f7ff           call 0x838520
// 008bec4d  85ff                 test edi, edi
// 008bec4f  75cf                 jne 0x8bec20
// 008bec51  8d4c2454             lea ecx, [esp + 0x54]
// 008bec55  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008bec5d  e88eaaf7ff           call 0x8396f0
// 008bec62  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008bec66  64890d00000000       mov dword ptr fs:[0], ecx
// 008bec6d  59                   pop ecx
// 008bec6e  5f                   pop edi
// 008bec6f  5e                   pop esi
// 008bec70  5d                   pop ebp
// 008bec71  5b                   pop ebx
// 008bec72  83c468               add esp, 0x68
// 008bec75  c3                   ret 
// copied from an identical function in another client (function ?Track@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp