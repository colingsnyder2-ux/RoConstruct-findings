// roc 2009-12 0088de50  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 762 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088de50
//
// 0088de50  6aff                 push -1
// 0088de52  68180f9600           push 0x960f18
// 0088de57  64a100000000         mov eax, dword ptr fs:[0]
// 0088de5d  50                   push eax
// 0088de5e  83ec6c               sub esp, 0x6c
// 0088de61  53                   push ebx
// 0088de62  55                   push ebp
// 0088de63  56                   push esi
// 0088de64  57                   push edi
// 0088de65  a10052b600           mov eax, dword ptr [0xb65200]
// 0088de6a  33c4                 xor eax, esp
// 0088de6c  50                   push eax
// 0088de6d  8d842480000000       lea eax, [esp + 0x80]
// 0088de74  64a300000000         mov dword ptr fs:[0], eax
// 0088de7a  8bf1                 mov esi, ecx
// 0088de7c  8b06                 mov eax, dword ptr [esi]
// 0088de7e  50                   push eax
// 0088de7f  8d4c2430             lea ecx, [esp + 0x30]
// 0088de83  e848d4fbff           call 0x84b2d0
// 0088de88  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 0088de8f  8d4d1c               lea ecx, [ebp + 0x1c]
// 0088de92  51                   push ecx
// 0088de93  8d542420             lea edx, [esp + 0x20]
// 0088de97  52                   push edx
// 0088de98  ff1564cc9800         call dword ptr [0x98cc64]
// 0088de9e  8d7e04               lea edi, [esi + 4]
// 0088dea1  33db                 xor ebx, ebx
// 0088dea3  3bfb                 cmp edi, ebx
// 0088dea5  7439                 je 0x88dee0
// 0088dea7  395f04               cmp dword ptr [edi + 4], ebx
// 0088deaa  7434                 je 0x88dee0
// 0088deac  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088deaf  8d44243c             lea eax, [esp + 0x3c]
// 0088deb3  50                   push eax
// 0088deb4  6a18                 push 0x18
// 0088deb6  51                   push ecx
// 0088deb7  ff155cb19800         call dword ptr [0x98b15c]
// 0088debd  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088dec1  2b542430             sub edx, dword ptr [esp + 0x30]
// 0088dec5  39542444             cmp dword ptr [esp + 0x44], edx
// 0088dec9  750e                 jne 0x88ded9
// 0088decb  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088decf  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0088ded3  39442440             cmp dword ptr [esp + 0x40], eax
// 0088ded7  7407                 je 0x88dee0
// 0088ded9  8bcf                 mov ecx, edi
// 0088dedb  e83e5ff6ff           call 0x7f3e1e
// 0088dee0  395e18               cmp dword ptr [esi + 0x18], ebx
// 0088dee3  7577                 jne 0x88df5c
// 0088dee5  8bce                 mov ecx, esi
// 0088dee7  e844f4ffff           call 0x88d330
// 0088deec  85c0                 test eax, eax
// 0088deee  756c                 jne 0x88df5c
// 0088def0  8bcf                 mov ecx, edi
// 0088def2  e8275ff6ff           call 0x7f3e1e
// 0088def7  55                   push ebp
// 0088def8  8d4c2440             lea ecx, [esp + 0x40]
// 0088defc  e8ffd4fbff           call 0x84b400
// 0088df01  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088df05  8b0e                 mov ecx, dword ptr [esi]
// 0088df07  8b11                 mov edx, dword ptr [ecx]
// 0088df09  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 0088df0f  83ec10               sub esp, 0x10
// 0088df12  8bc4                 mov eax, esp
// 0088df14  8938                 mov dword ptr [eax], edi
// 0088df16  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0088df1a  897804               mov dword ptr [eax + 4], edi
// 0088df1d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0088df21  897808               mov dword ptr [eax + 8], edi
// 0088df24  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0088df28  89780c               mov dword ptr [eax + 0xc], edi
// 0088df2b  8d44244c             lea eax, [esp + 0x4c]
// 0088df2f  50                   push eax
// 0088df30  899c249c000000       mov dword ptr [esp + 0x9c], ebx
// 0088df37  ffd2                 call edx
// 0088df39  8bce                 mov ecx, esi
// 0088df3b  e870feffff           call 0x88ddb0
// 0088df40  8d4c243c             lea ecx, [esp + 0x3c]
// 0088df44  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 0088df4f  e8ecd5fbff           call 0x84b540
// 0088df54  895e0c               mov dword ptr [esi + 0xc], ebx
// 0088df57  e9d5010000           jmp 0x88e131
// 0088df5c  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0088df5f  7547                 jne 0x88dfa8
// 0088df61  3bfb                 cmp edi, ebx
// 0088df63  7443                 je 0x88dfa8
// 0088df65  395f04               cmp dword ptr [edi + 4], ebx
// 0088df68  743e                 je 0x88dfa8
// 0088df6a  57                   push edi
// 0088df6b  55                   push ebp
// 0088df6c  8d4c2474             lea ecx, [esp + 0x74]
// 0088df70  e80bd9fbff           call 0x84b880
// 0088df75  8b442470             mov eax, dword ptr [esp + 0x70]
// 0088df79  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088df7d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088df81  682000cc00           push 0xcc0020
// 0088df86  53                   push ebx
// 0088df87  53                   push ebx
// 0088df88  50                   push eax
// 0088df89  8b4504               mov eax, dword ptr [ebp + 4]
// 0088df8c  51                   push ecx
// 0088df8d  52                   push edx
// 0088df8e  53                   push ebx
// 0088df8f  53                   push ebx
// 0088df90  50                   push eax
// 0088df91  ff1548b19800         call dword ptr [0x98b148]
// 0088df97  8d4c246c             lea ecx, [esp + 0x6c]
// 0088df9b  e8f0d9fbff           call 0x84b990
// 0088dfa0  895e0c               mov dword ptr [esi + 0xc], ebx
// 0088dfa3  e989010000           jmp 0x88e131
// 0088dfa8  8d4c243c             lea ecx, [esp + 0x3c]
// 0088dfac  e8fd840900           call 0x9264ae
// 0088dfb1  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 0088dfbc  3beb                 cmp ebp, ebx
// 0088dfbe  7504                 jne 0x88dfc4
// 0088dfc0  33c0                 xor eax, eax
// 0088dfc2  eb03                 jmp 0x88dfc7
// 0088dfc4  8b4504               mov eax, dword ptr [ebp + 4]
// 0088dfc7  50                   push eax
// 0088dfc8  ff1554b19800         call dword ptr [0x98b154]
// 0088dfce  50                   push eax
// 0088dfcf  8d4c2440             lea ecx, [esp + 0x40]
// 0088dfd3  e8c4840900           call 0x92649c
// 0088dfd8  3bfb                 cmp edi, ebx
// 0088dfda  7405                 je 0x88dfe1
// 0088dfdc  395f04               cmp dword ptr [edi + 4], ebx
// 0088dfdf  7544                 jne 0x88e025
// 0088dfe1  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088dfe5  2b442430             sub eax, dword ptr [esp + 0x30]
// 0088dfe9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088dfed  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0088dff1  50                   push eax
// 0088dff2  51                   push ecx
// 0088dff3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0088dff6  51                   push ecx
// 0088dff7  ff1550b19800         call dword ptr [0x98b150]
// 0088dffd  50                   push eax
// 0088dffe  8bcf                 mov ecx, edi
// 0088e000  e8255ef6ff           call 0x7f3e2a
// 0088e005  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088e009  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088e00d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088e011  8954241c             mov dword ptr [esp + 0x1c], edx
// 0088e015  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088e019  89442420             mov dword ptr [esp + 0x20], eax
// 0088e01d  894c2424             mov dword ptr [esp + 0x24], ecx
// 0088e021  89542428             mov dword ptr [esp + 0x28], edx
// 0088e025  3bfb                 cmp edi, ebx
// 0088e027  7504                 jne 0x88e02d
// 0088e029  33ff                 xor edi, edi
// 0088e02b  eb03                 jmp 0x88e030
// 0088e02d  8b7f04               mov edi, dword ptr [edi + 4]
// 0088e030  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088e034  57                   push edi
// 0088e035  50                   push eax
// 0088e036  e8bd850900           call 0x9265f8
// 0088e03b  8be8                 mov ebp, eax
// 0088e03d  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088e041  c7442414f82a9f00     mov dword ptr [esp + 0x14], 0x9f2af8
// 0088e049  8d4c241c             lea ecx, [esp + 0x1c]
// 0088e04d  51                   push ecx
// 0088e04e  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 0088e056  ff15c4b09800         call dword ptr [0x98b0c4]
// 0088e05c  50                   push eax
// 0088e05d  8d4c2418             lea ecx, [esp + 0x18]
// 0088e061  e8c45df6ff           call 0x7f3e2a
// 0088e066  8d542414             lea edx, [esp + 0x14]
// 0088e06a  52                   push edx
// 0088e06b  8d4c2440             lea ecx, [esp + 0x40]
// 0088e06f  e8f0850900           call 0x926664
// 0088e074  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088e078  8b0e                 mov ecx, dword ptr [esi]
// 0088e07a  8b11                 mov edx, dword ptr [ecx]
// 0088e07c  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 0088e082  83ec10               sub esp, 0x10
// 0088e085  8bc4                 mov eax, esp
// 0088e087  8938                 mov dword ptr [eax], edi
// 0088e089  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0088e08d  897804               mov dword ptr [eax + 4], edi
// 0088e090  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0088e094  897808               mov dword ptr [eax + 8], edi
// 0088e097  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0088e09b  89780c               mov dword ptr [eax + 0xc], edi
// 0088e09e  8d44244c             lea eax, [esp + 0x4c]
// 0088e0a2  50                   push eax
// 0088e0a3  ffd2                 call edx
// 0088e0a5  53                   push ebx
// 0088e0a6  8d4c2440             lea ecx, [esp + 0x40]
// 0088e0aa  e8b5850900           call 0x926664
// 0088e0af  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088e0b3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088e0b7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088e0bb  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0088e0bf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088e0c3  682000cc00           push 0xcc0020
// 0088e0c8  52                   push edx
// 0088e0c9  57                   push edi
// 0088e0ca  53                   push ebx
// 0088e0cb  2bc2                 sub eax, edx
// 0088e0cd  50                   push eax
// 0088e0ce  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0088e0d5  2bcf                 sub ecx, edi
// 0088e0d7  51                   push ecx
// 0088e0d8  8b4804               mov ecx, dword ptr [eax + 4]
// 0088e0db  52                   push edx
// 0088e0dc  57                   push edi
// 0088e0dd  51                   push ecx
// 0088e0de  ff1548b19800         call dword ptr [0x98b148]
// 0088e0e4  85ed                 test ebp, ebp
// 0088e0e6  7403                 je 0x88e0eb
// 0088e0e8  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0088e0eb  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088e0ef  55                   push ebp
// 0088e0f0  52                   push edx
// 0088e0f1  e802850900           call 0x9265f8
// 0088e0f6  8bce                 mov ecx, esi
// 0088e0f8  e8b3fcffff           call 0x88ddb0
// 0088e0fd  8d4c2414             lea ecx, [esp + 0x14]
// 0088e101  c684248800000001     mov byte ptr [esp + 0x88], 1
// 0088e109  c7442414f82a9f00     mov dword ptr [esp + 0x14], 0x9f2af8
// 0088e111  e81a11b8ff           call 0x40f230
// 0088e116  8d4c243c             lea ecx, [esp + 0x3c]
// 0088e11a  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 0088e125  e87e830900           call 0x9264a8
// 0088e12a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0088e131  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0088e138  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e13f  59                   pop ecx
// 0088e140  5f                   pop edi
// 0088e141  5e                   pop esi
// 0088e142  5d                   pop ebp
// 0088e143  5b                   pop ebx
// 0088e144  83c478               add esp, 0x78
// 0088e147  c20400               ret 4
// copied from an identical function in another client (function ?OnPaint@CXTPCommandBarAnimation@@QAEXAAVCPaintDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp