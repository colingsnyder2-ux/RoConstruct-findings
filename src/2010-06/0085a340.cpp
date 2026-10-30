// roc 2010-06 0085a340  unit: CXTPReportTip  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085a340
//
// 0085a340  6aff                 push -1
// 0085a342  6860869b00           push 0x9b8660
// 0085a347  64a100000000         mov eax, dword ptr fs:[0]
// 0085a34d  50                   push eax
// 0085a34e  81ec88000000         sub esp, 0x88
// 0085a354  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085a359  33c4                 xor eax, esp
// 0085a35b  89842484000000       mov dword ptr [esp + 0x84], eax
// 0085a362  56                   push esi
// 0085a363  57                   push edi
// 0085a364  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085a369  33c4                 xor eax, esp
// 0085a36b  50                   push eax
// 0085a36c  8d842494000000       lea eax, [esp + 0x94]
// 0085a373  64a300000000         mov dword ptr fs:[0], eax
// 0085a379  8bf1                 mov esi, ecx
// 0085a37b  56                   push esi
// 0085a37c  8d4c2440             lea ecx, [esp + 0x40]
// 0085a380  e8abdff4ff           call 0x7a8330
// 0085a385  56                   push esi
// 0085a386  8d4c2410             lea ecx, [esp + 0x10]
// 0085a38a  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 0085a395  e8764ffaff           call 0x7ff310
// 0085a39a  e88197f8ff           call 0x7e3b20
// 0085a39f  6a17                 push 0x17
// 0085a3a1  8bc8                 mov ecx, eax
// 0085a3a3  e8088ff8ff           call 0x7e32b0
// 0085a3a8  8bf8                 mov edi, eax
// 0085a3aa  e87197f8ff           call 0x7e3b20
// 0085a3af  6a18                 push 0x18
// 0085a3b1  8bc8                 mov ecx, eax
// 0085a3b3  e8f88ef8ff           call 0x7e32b0
// 0085a3b8  50                   push eax
// 0085a3b9  8d442410             lea eax, [esp + 0x10]
// 0085a3bd  50                   push eax
// 0085a3be  8d4c2444             lea ecx, [esp + 0x44]
// 0085a3c2  e877e3f4ff           call 0x7a873e
// 0085a3c7  57                   push edi
// 0085a3c8  57                   push edi
// 0085a3c9  8d4c2414             lea ecx, [esp + 0x14]
// 0085a3cd  51                   push ecx
// 0085a3ce  8d4c2448             lea ecx, [esp + 0x48]
// 0085a3d2  e861e3f4ff           call 0x7a8738
// 0085a3d7  57                   push edi
// 0085a3d8  8d4c2440             lea ecx, [esp + 0x40]
// 0085a3dc  e87b2a1200           call 0x97ce5c
// 0085a3e1  6a01                 push 1
// 0085a3e3  8d4c2440             lea ecx, [esp + 0x40]
// 0085a3e7  e8c8291200           call 0x97cdb4
// 0085a3ec  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0085a3ef  e8f0291200           call 0x97cde4
// 0085a3f4  a900200000           test eax, 0x2000
// 0085a3f9  750f                 jne 0x85a40a
// 0085a3fb  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0085a3fe  e8e1291200           call 0x97cde4
// 0085a403  a900004000           test eax, 0x400000
// 0085a408  740e                 je 0x85a418
// 0085a40a  6800010000           push 0x100
// 0085a40f  8d4c2440             lea ecx, [esp + 0x40]
// 0085a413  e86ae4f4ff           call 0x7a8882
// 0085a418  8d5674               lea edx, [esi + 0x74]
// 0085a41b  52                   push edx
// 0085a41c  8d442440             lea eax, [esp + 0x40]
// 0085a420  50                   push eax
// 0085a421  8d4c2434             lea ecx, [esp + 0x34]
// 0085a425  e87652faff           call 0x7ff6a0
// 0085a42a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085a42e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085a432  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085a436  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0085a43a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085a43e  83c003               add eax, 3
// 0085a441  83e902               sub ecx, 2
// 0085a444  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085a448  89542424             mov dword ptr [esp + 0x24], edx
// 0085a44c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085a450  6824080000           push 0x824
// 0085a455  8d442420             lea eax, [esp + 0x20]
// 0085a459  894c2424             mov dword ptr [esp + 0x24], ecx
// 0085a45d  83c668               add esi, 0x68
// 0085a460  50                   push eax
// 0085a461  8bce                 mov ecx, esi
// 0085a463  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 0085a46b  89542430             mov dword ptr [esp + 0x30], edx
// 0085a46f  83c770               add edi, 0x70
// 0085a472  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085a478  50                   push eax
// 0085a479  8bce                 mov ecx, esi
// 0085a47b  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0085a481  8b17                 mov edx, dword ptr [edi]
// 0085a483  50                   push eax
// 0085a484  8d4c244c             lea ecx, [esp + 0x4c]
// 0085a488  ffd2                 call edx
// 0085a48a  8d4c242c             lea ecx, [esp + 0x2c]
// 0085a48e  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 0085a496  e88552faff           call 0x7ff720
// 0085a49b  8d4c243c             lea ecx, [esp + 0x3c]
// 0085a49f  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0085a4aa  e87bdef4ff           call 0x7a832a
// 0085a4af  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0085a4b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a4bd  59                   pop ecx
// 0085a4be  5f                   pop edi
// 0085a4bf  5e                   pop esi
// 0085a4c0  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0085a4c7  33cc                 xor ecx, esp
// 0085a4c9  e806f0f4ff           call 0x7a94d4
// 0085a4ce  81c494000000         add esp, 0x94
// 0085a4d4  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp