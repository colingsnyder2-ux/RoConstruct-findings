// roc 2011-06 009021b0  unit: CXTButtonTheme  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009021b0
//
// 009021b0  6aff                 push -1
// 009021b2  6831f7a000           push 0xa0f731
// 009021b7  64a100000000         mov eax, dword ptr fs:[0]
// 009021bd  50                   push eax
// 009021be  83ec2c               sub esp, 0x2c
// 009021c1  53                   push ebx
// 009021c2  55                   push ebp
// 009021c3  56                   push esi
// 009021c4  57                   push edi
// 009021c5  a12058c900           mov eax, dword ptr [0xc95820]
// 009021ca  33c4                 xor eax, esp
// 009021cc  50                   push eax
// 009021cd  8d442440             lea eax, [esp + 0x40]
// 009021d1  64a300000000         mov dword ptr fs:[0], eax
// 009021d7  8bf1                 mov esi, ecx
// 009021d9  8d4c2414             lea ecx, [esp + 0x14]
// 009021dd  ff15b42da400         call dword ptr [0xa42db4]
// 009021e3  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 009021e7  8d442414             lea eax, [esp + 0x14]
// 009021eb  50                   push eax
// 009021ec  8bcd                 mov ecx, ebp
// 009021ee  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 009021f6  e84b84f0ff           call 0x80a646
// 009021fb  8d4c2414             lea ecx, [esp + 0x14]
// 009021ff  ff15b026a400         call dword ptr [0xa426b0]
// 00902205  84c0                 test al, al
// 00902207  0f8525010000         jne 0x902332
// 0090220d  e86ecbf5ff           call 0x85ed80
// 00902212  8d4c2414             lea ecx, [esp + 0x14]
// 00902216  51                   push ecx
// 00902217  e8c49bf5ff           call 0x85bde0
// 0090221c  8b16                 mov edx, dword ptr [esi]
// 0090221e  8b4220               mov eax, dword ptr [edx + 0x20]
// 00902221  83c404               add esp, 4
// 00902224  55                   push ebp
// 00902225  8bce                 mov ecx, esi
// 00902227  ffd0                 call eax
// 00902229  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0090222d  50                   push eax
// 0090222e  57                   push edi
// 0090222f  8d4c2438             lea ecx, [esp + 0x38]
// 00902233  e8e8aef5ff           call 0x85d120
// 00902238  8d4c2428             lea ecx, [esp + 0x28]
// 0090223c  51                   push ecx
// 0090223d  8d4c2418             lea ecx, [esp + 0x18]
// 00902241  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00902246  ff15a826a400         call dword ptr [0xa426a8]
// 0090224c  50                   push eax
// 0090224d  8d4c241c             lea ecx, [esp + 0x1c]
// 00902251  ff15c82da400         call dword ptr [0xa42dc8]
// 00902257  8b5708               mov edx, dword ptr [edi + 8]
// 0090225a  50                   push eax
// 0090225b  52                   push edx
// 0090225c  ff153801a400         call dword ptr [0xa40138]
// 00902262  8b442428             mov eax, dword ptr [esp + 0x28]
// 00902266  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0090226a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0090226e  8b16                 mov edx, dword ptr [esi]
// 00902270  8b5244               mov edx, dword ptr [edx + 0x44]
// 00902273  55                   push ebp
// 00902274  89442424             mov dword ptr [esp + 0x24], eax
// 00902278  894c2428             mov dword ptr [esp + 0x28], ecx
// 0090227c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00902280  8d442424             lea eax, [esp + 0x24]
// 00902284  50                   push eax
// 00902285  51                   push ecx
// 00902286  53                   push ebx
// 00902287  8d442428             lea eax, [esp + 0x28]
// 0090228b  50                   push eax
// 0090228c  8bce                 mov ecx, esi
// 0090228e  ffd2                 call edx
// 00902290  837d7c00             cmp dword ptr [ebp + 0x7c], 0
// 00902294  7505                 jne 0x90229b
// 00902296  f6c301               test bl, 1
// 00902299  7413                 je 0x9022ae
// 0090229b  837e1800             cmp dword ptr [esi + 0x18], 0
// 0090229f  740d                 je 0x9022ae
// 009022a1  b801000000           mov eax, 1
// 009022a6  01442418             add dword ptr [esp + 0x18], eax
// 009022aa  0144241c             add dword ptr [esp + 0x1c], eax
// 009022ae  8b07                 mov eax, dword ptr [edi]
// 009022b0  8b16                 mov edx, dword ptr [esi]
// 009022b2  55                   push ebp
// 009022b3  89442460             mov dword ptr [esp + 0x60], eax
// 009022b7  8b4248               mov eax, dword ptr [edx + 0x48]
// 009022ba  53                   push ebx
// 009022bb  8bce                 mov ecx, esi
// 009022bd  ffd0                 call eax
// 009022bf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 009022c3  50                   push eax
// 009022c4  8b4238               mov eax, dword ptr [edx + 0x38]
// 009022c7  8bcf                 mov ecx, edi
// 009022c9  ffd0                 call eax
// 009022cb  f7c300010000         test ebx, 0x100
// 009022d1  750c                 jne 0x9022df
// 009022d3  8d4c2414             lea ecx, [esp + 0x14]
// 009022d7  51                   push ecx
// 009022d8  8bcd                 mov ecx, ebp
// 009022da  e86783f0ff           call 0x80a646
// 009022df  6a00                 push 0
// 009022e1  8bcf                 mov ecx, edi
// 009022e3  e88e8cf0ff           call 0x80af76
// 009022e8  8d4c2414             lea ecx, [esp + 0x14]
// 009022ec  ff15a826a400         call dword ptr [0xa426a8]
// 009022f2  8d4c2414             lea ecx, [esp + 0x14]
// 009022f6  8bf0                 mov esi, eax
// 009022f8  ff15c82da400         call dword ptr [0xa42dc8]
// 009022fe  8b542424             mov edx, dword ptr [esp + 0x24]
// 00902302  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00902306  8b7f04               mov edi, dword ptr [edi + 4]
// 00902309  6a02                 push 2
// 0090230b  52                   push edx
// 0090230c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00902310  51                   push ecx
// 00902311  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00902315  52                   push edx
// 00902316  51                   push ecx
// 00902317  56                   push esi
// 00902318  50                   push eax
// 00902319  6a00                 push 0
// 0090231b  6a00                 push 0
// 0090231d  57                   push edi
// 0090231e  ff15e41aa400         call dword ptr [0xa41ae4]
// 00902324  8d4c2430             lea ecx, [esp + 0x30]
// 00902328  c644244800           mov byte ptr [esp + 0x48], 0
// 0090232d  e86eaef5ff           call 0x85d1a0
// 00902332  8d4c2414             lea ecx, [esp + 0x14]
// 00902336  ff15082ea400         call dword ptr [0xa42e08]
// 0090233c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00902340  64890d00000000       mov dword ptr fs:[0], ecx
// 00902347  59                   pop ecx
// 00902348  5f                   pop edi
// 00902349  5e                   pop esi
// 0090234a  5d                   pop ebp
// 0090234b  5b                   pop ebx
// 0090234c  83c438               add esp, 0x38
// 0090234f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawButtonText@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp