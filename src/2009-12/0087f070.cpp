// roc 2009-12 0087f070  unit: CXTPOffice2007Theme  size: 4998 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087f070
//
// 0087f070  6aff                 push -1
// 0087f072  68e4079600           push 0x9607e4
// 0087f077  64a100000000         mov eax, dword ptr fs:[0]
// 0087f07d  50                   push eax
// 0087f07e  81ec64010000         sub esp, 0x164
// 0087f084  a10052b600           mov eax, dword ptr [0xb65200]
// 0087f089  33c4                 xor eax, esp
// 0087f08b  89842460010000       mov dword ptr [esp + 0x160], eax
// 0087f092  53                   push ebx
// 0087f093  55                   push ebp
// 0087f094  56                   push esi
// 0087f095  57                   push edi
// 0087f096  a10052b600           mov eax, dword ptr [0xb65200]
// 0087f09b  33c4                 xor eax, esp
// 0087f09d  50                   push eax
// 0087f09e  8d842478010000       lea eax, [esp + 0x178]
// 0087f0a5  64a300000000         mov dword ptr fs:[0], eax
// 0087f0ab  8bf1                 mov esi, ecx
// 0087f0ad  e81e6e0000           call 0x885ed0
// 0087f0b2  8d4c2420             lea ecx, [esp + 0x20]
// 0087f0b6  e815e5f7ff           call 0x7fd5d0
// 0087f0bb  33ed                 xor ebp, ebp
// 0087f0bd  bf90010000           mov edi, 0x190
// 0087f0c2  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 0087f0c9  396e70               cmp dword ptr [esi + 0x70], ebp
// 0087f0cc  7415                 je 0x87f0e3
// 0087f0ce  e84dc6fbff           call 0x83b720
// 0087f0d3  8bc8                 mov ecx, eax
// 0087f0d5  e886cffbff           call 0x83c060
// 0087f0da  85c0                 test eax, eax
// 0087f0dc  7405                 je 0x87f0e3
// 0087f0de  c644245205           mov byte ptr [esp + 0x52], 5
// 0087f0e3  897c2448             mov dword ptr [esp + 0x48], edi
// 0087f0e7  39ae18010000         cmp dword ptr [esi + 0x118], ebp
// 0087f0ed  7434                 je 0x87f123
// 0087f0ef  8dbe1c010000         lea edi, [esi + 0x11c]
// 0087f0f5  8bcf                 mov ecx, edi
// 0087f0f7  ff1580de9800         call dword ptr [0x98de80]
// 0087f0fd  50                   push eax
// 0087f0fe  e85de9f7ff           call 0x7fda60
// 0087f103  83c404               add esp, 4
// 0087f106  85c0                 test eax, eax
// 0087f108  7419                 je 0x87f123
// 0087f10a  8bcf                 mov ecx, edi
// 0087f10c  ff1580de9800         call dword ptr [0x98de80]
// 0087f112  50                   push eax
// 0087f113  8d442458             lea eax, [esp + 0x58]
// 0087f117  6a20                 push 0x20
// 0087f119  50                   push eax
// 0087f11a  ff15c8b79800         call dword ptr [0x98b7c8]
// 0087f120  83c40c               add esp, 0xc
// 0087f123  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087f127  83c10a               add ecx, 0xa
// 0087f12a  83f909               cmp ecx, 9
// 0087f12d  7708                 ja 0x87f137
// 0087f12f  c7442438f5ffffff     mov dword ptr [esp + 0x38], 0xfffffff5
// 0087f137  39aebc050000         cmp dword ptr [esi + 0x5bc], ebp
// 0087f13d  8dbeb4050000         lea edi, [esi + 0x5b4]
// 0087f143  7505                 jne 0x87f14a
// 0087f145  396f04               cmp dword ptr [edi + 4], ebp
// 0087f148  751a                 jne 0x87f164
// 0087f14a  8bcf                 mov ecx, edi
// 0087f14c  e8cd4cf7ff           call 0x7f3e1e
// 0087f151  8d542438             lea edx, [esp + 0x38]
// 0087f155  52                   push edx
// 0087f156  ff1528b19800         call dword ptr [0x98b128]
// 0087f15c  50                   push eax
// 0087f15d  8bcf                 mov ecx, edi
// 0087f15f  e8c64cf7ff           call 0x7f3e2a
// 0087f164  55                   push ebp
// 0087f165  8d442420             lea eax, [esp + 0x20]
// 0087f169  50                   push eax
// 0087f16a  55                   push ebp
// 0087f16b  bb01000000           mov ebx, 1
// 0087f170  6a05                 push 5
// 0087f172  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0087f176  ff1500cc9800         call dword ptr [0x98cc00]
// 0087f17c  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 0087f182  6a04                 push 4
// 0087f184  ffd7                 call edi
// 0087f186  83f811               cmp eax, 0x11
// 0087f189  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 0087f18f  7f05                 jg 0x87f196
// 0087f191  b811000000           mov eax, 0x11
// 0087f196  6a04                 push 4
// 0087f198  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 0087f19e  ffd7                 call edi
// 0087f1a0  40                   inc eax
// 0087f1a1  83f812               cmp eax, 0x12
// 0087f1a4  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 0087f1aa  7f05                 jg 0x87f1b1
// 0087f1ac  b812000000           mov eax, 0x12
// 0087f1b1  51                   push ecx
// 0087f1b2  8bcc                 mov ecx, esp
// 0087f1b4  89642418             mov dword ptr [esp + 0x18], esp
// 0087f1b8  686825a000           push 0xa02568
// 0087f1bd  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 0087f1c3  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f1c9  51                   push ecx
// 0087f1ca  8bcc                 mov ecx, esp
// 0087f1cc  89642420             mov dword ptr [esp + 0x20], esp
// 0087f1d0  68ac7d9f00           push 0x9f7dac
// 0087f1d5  89ac248c010000       mov dword ptr [esp + 0x18c], ebp
// 0087f1dc  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f1e2  8bce                 mov ecx, esi
// 0087f1e4  e807fbffff           call 0x87ecf0
// 0087f1e9  83cfff               or edi, 0xffffffff
// 0087f1ec  8bc8                 mov ecx, eax
// 0087f1ee  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f1f5  e8061f0600           call 0x8e1100
// 0087f1fa  51                   push ecx
// 0087f1fb  8bcc                 mov ecx, esp
// 0087f1fd  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f201  685825a000           push 0xa02558
// 0087f206  894624               mov dword ptr [esi + 0x24], eax
// 0087f209  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f20f  51                   push ecx
// 0087f210  8bcc                 mov ecx, esp
// 0087f212  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f216  68ac7d9f00           push 0x9f7dac
// 0087f21b  899c248c010000       mov dword ptr [esp + 0x18c], ebx
// 0087f222  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f228  8bce                 mov ecx, esi
// 0087f22a  e8c1faffff           call 0x87ecf0
// 0087f22f  8bc8                 mov ecx, eax
// 0087f231  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f238  e8c31e0600           call 0x8e1100
// 0087f23d  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0087f243  83ec08               sub esp, 8
// 0087f246  d95c2404             fstp dword ptr [esp + 4]
// 0087f24a  8bcc                 mov ecx, esp
// 0087f24c  89642420             mov dword ptr [esp + 0x20], esp
// 0087f250  684025a000           push 0xa02540
// 0087f255  8986fc050000         mov dword ptr [esi + 0x5fc], eax
// 0087f25b  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f261  51                   push ecx
// 0087f262  8bcc                 mov ecx, esp
// 0087f264  89642420             mov dword ptr [esp + 0x20], esp
// 0087f268  68ac7d9f00           push 0x9f7dac
// 0087f26d  c784249001000002000000 mov dword ptr [esp + 0x190], 2
// 0087f278  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f27e  8bce                 mov ecx, esi
// 0087f280  e86bfaffff           call 0x87ecf0
// 0087f285  8bc8                 mov ecx, eax
// 0087f287  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087f28e  e86d1e0600           call 0x8e1100
// 0087f293  50                   push eax
// 0087f294  51                   push ecx
// 0087f295  8bcc                 mov ecx, esp
// 0087f297  89642424             mov dword ptr [esp + 0x24], esp
// 0087f29b  682825a000           push 0xa02528
// 0087f2a0  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f2a6  51                   push ecx
// 0087f2a7  8bcc                 mov ecx, esp
// 0087f2a9  89642424             mov dword ptr [esp + 0x24], esp
// 0087f2ad  68ac7d9f00           push 0x9f7dac
// 0087f2b2  c784249401000003000000 mov dword ptr [esp + 0x194], 3
// 0087f2bd  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f2c3  8bce                 mov ecx, esi
// 0087f2c5  e826faffff           call 0x87ecf0
// 0087f2ca  8bc8                 mov ecx, eax
// 0087f2cc  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087f2d3  e8281e0600           call 0x8e1100
// 0087f2d8  50                   push eax
// 0087f2d9  8d8e00060000         lea ecx, [esi + 0x600]
// 0087f2df  e87cfbfaff           call 0x82ee60
// 0087f2e4  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0087f2ea  83ec08               sub esp, 8
// 0087f2ed  d95c2404             fstp dword ptr [esp + 4]
// 0087f2f1  8bcc                 mov ecx, esp
// 0087f2f3  89642420             mov dword ptr [esp + 0x20], esp
// 0087f2f7  681025a000           push 0xa02510
// 0087f2fc  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f302  51                   push ecx
// 0087f303  8bcc                 mov ecx, esp
// 0087f305  89642420             mov dword ptr [esp + 0x20], esp
// 0087f309  68ac7d9f00           push 0x9f7dac
// 0087f30e  c784249001000004000000 mov dword ptr [esp + 0x190], 4
// 0087f319  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f31f  8bce                 mov ecx, esi
// 0087f321  e8caf9ffff           call 0x87ecf0
// 0087f326  8bc8                 mov ecx, eax
// 0087f328  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087f32f  e8cc1d0600           call 0x8e1100
// 0087f334  50                   push eax
// 0087f335  51                   push ecx
// 0087f336  8bcc                 mov ecx, esp
// 0087f338  89642424             mov dword ptr [esp + 0x24], esp
// 0087f33c  68f424a000           push 0xa024f4
// 0087f341  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f347  51                   push ecx
// 0087f348  8bcc                 mov ecx, esp
// 0087f34a  89642424             mov dword ptr [esp + 0x24], esp
// 0087f34e  68ac7d9f00           push 0x9f7dac
// 0087f353  c784249401000005000000 mov dword ptr [esp + 0x194], 5
// 0087f35e  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f364  8bce                 mov ecx, esi
// 0087f366  e885f9ffff           call 0x87ecf0
// 0087f36b  8bc8                 mov ecx, eax
// 0087f36d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087f374  e8871d0600           call 0x8e1100
// 0087f379  50                   push eax
// 0087f37a  8d8e20060000         lea ecx, [esi + 0x620]
// 0087f380  e8dbfafaff           call 0x82ee60
// 0087f385  51                   push ecx
// 0087f386  8bcc                 mov ecx, esp
// 0087f388  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f38c  68e824a000           push 0xa024e8
// 0087f391  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f397  51                   push ecx
// 0087f398  8bcc                 mov ecx, esp
// 0087f39a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f39e  68781fa000           push 0xa01f78
// 0087f3a3  c784248c01000006000000 mov dword ptr [esp + 0x18c], 6
// 0087f3ae  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f3b4  8bce                 mov ecx, esi
// 0087f3b6  e835f9ffff           call 0x87ecf0
// 0087f3bb  8bc8                 mov ecx, eax
// 0087f3bd  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f3c4  e8371d0600           call 0x8e1100
// 0087f3c9  50                   push eax
// 0087f3ca  8d8e5c040000         lea ecx, [esi + 0x45c]
// 0087f3d0  e84b05fbff           call 0x82f920
// 0087f3d5  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 0087f3db  83ec08               sub esp, 8
// 0087f3de  d95c2404             fstp dword ptr [esp + 4]
// 0087f3e2  8bcc                 mov ecx, esp
// 0087f3e4  89642420             mov dword ptr [esp + 0x20], esp
// 0087f3e8  68d824a000           push 0xa024d8
// 0087f3ed  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f3f3  51                   push ecx
// 0087f3f4  8bcc                 mov ecx, esp
// 0087f3f6  89642420             mov dword ptr [esp + 0x20], esp
// 0087f3fa  68781fa000           push 0xa01f78
// 0087f3ff  c784249001000007000000 mov dword ptr [esp + 0x190], 7
// 0087f40a  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f410  8bce                 mov ecx, esi
// 0087f412  e8d9f8ffff           call 0x87ecf0
// 0087f417  8bc8                 mov ecx, eax
// 0087f419  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087f420  e8db1c0600           call 0x8e1100
// 0087f425  50                   push eax
// 0087f426  51                   push ecx
// 0087f427  8bcc                 mov ecx, esp
// 0087f429  89642424             mov dword ptr [esp + 0x24], esp
// 0087f42d  68c424a000           push 0xa024c4
// 0087f432  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f438  51                   push ecx
// 0087f439  8bcc                 mov ecx, esp
// 0087f43b  89642424             mov dword ptr [esp + 0x24], esp
// 0087f43f  68781fa000           push 0xa01f78
// 0087f444  c784249401000008000000 mov dword ptr [esp + 0x194], 8
// 0087f44f  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f455  8bce                 mov ecx, esi
// 0087f457  e894f8ffff           call 0x87ecf0
// 0087f45c  8bc8                 mov ecx, eax
// 0087f45e  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087f465  e8961c0600           call 0x8e1100
// 0087f46a  50                   push eax
// 0087f46b  8d8e7c040000         lea ecx, [esi + 0x47c]
// 0087f471  e8eaf9faff           call 0x82ee60
// 0087f476  51                   push ecx
// 0087f477  8bcc                 mov ecx, esp
// 0087f479  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f47d  68b024a000           push 0xa024b0
// 0087f482  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f488  51                   push ecx
// 0087f489  8bcc                 mov ecx, esp
// 0087f48b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f48f  68781fa000           push 0xa01f78
// 0087f494  c784248c01000009000000 mov dword ptr [esp + 0x18c], 9
// 0087f49f  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f4a5  8bce                 mov ecx, esi
// 0087f4a7  e844f8ffff           call 0x87ecf0
// 0087f4ac  8bc8                 mov ecx, eax
// 0087f4ae  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f4b5  e8461c0600           call 0x8e1100
// 0087f4ba  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 0087f4c0  83ec08               sub esp, 8
// 0087f4c3  d95c2404             fstp dword ptr [esp + 4]
// 0087f4c7  8bcc                 mov ecx, esp
// 0087f4c9  89642420             mov dword ptr [esp + 0x20], esp
// 0087f4cd  689424a000           push 0xa02494
// 0087f4d2  898620050000         mov dword ptr [esi + 0x520], eax
// 0087f4d8  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f4de  51                   push ecx
// 0087f4df  8bcc                 mov ecx, esp
// 0087f4e1  89642420             mov dword ptr [esp + 0x20], esp
// 0087f4e5  68781fa000           push 0xa01f78
// 0087f4ea  c78424900100000a000000 mov dword ptr [esp + 0x190], 0xa
// 0087f4f5  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f4fb  8bce                 mov ecx, esi
// 0087f4fd  e8eef7ffff           call 0x87ecf0
// 0087f502  8bc8                 mov ecx, eax
// 0087f504  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087f50b  e8f01b0600           call 0x8e1100
// 0087f510  50                   push eax
// 0087f511  51                   push ecx
// 0087f512  8bcc                 mov ecx, esp
// 0087f514  89642424             mov dword ptr [esp + 0x24], esp
// 0087f518  687824a000           push 0xa02478
// 0087f51d  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f523  51                   push ecx
// 0087f524  8bcc                 mov ecx, esp
// 0087f526  89642424             mov dword ptr [esp + 0x24], esp
// 0087f52a  68781fa000           push 0xa01f78
// 0087f52f  c78424940100000b000000 mov dword ptr [esp + 0x194], 0xb
// 0087f53a  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f540  8bce                 mov ecx, esi
// 0087f542  e8a9f7ffff           call 0x87ecf0
// 0087f547  8bc8                 mov ecx, eax
// 0087f549  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087f550  e8ab1b0600           call 0x8e1100
// 0087f555  50                   push eax
// 0087f556  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0087f55c  e8fff8faff           call 0x82ee60
// 0087f561  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0087f567  83ec08               sub esp, 8
// 0087f56a  d95c2404             fstp dword ptr [esp + 4]
// 0087f56e  8bcc                 mov ecx, esp
// 0087f570  89642420             mov dword ptr [esp + 0x20], esp
// 0087f574  685c24a000           push 0xa0245c
// 0087f579  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f57f  51                   push ecx
// 0087f580  8bcc                 mov ecx, esp
// 0087f582  89642420             mov dword ptr [esp + 0x20], esp
// 0087f586  68781fa000           push 0xa01f78
// 0087f58b  c78424900100000c000000 mov dword ptr [esp + 0x190], 0xc
// 0087f596  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f59c  8bce                 mov ecx, esi
// 0087f59e  e84df7ffff           call 0x87ecf0
// 0087f5a3  8bc8                 mov ecx, eax
// 0087f5a5  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087f5ac  e84f1b0600           call 0x8e1100
// 0087f5b1  50                   push eax
// 0087f5b2  51                   push ecx
// 0087f5b3  8bcc                 mov ecx, esp
// 0087f5b5  89642424             mov dword ptr [esp + 0x24], esp
// 0087f5b9  683c24a000           push 0xa0243c
// 0087f5be  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f5c4  51                   push ecx
// 0087f5c5  8bcc                 mov ecx, esp
// 0087f5c7  89642424             mov dword ptr [esp + 0x24], esp
// 0087f5cb  68781fa000           push 0xa01f78
// 0087f5d0  c78424940100000d000000 mov dword ptr [esp + 0x194], 0xd
// 0087f5db  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f5e1  8bce                 mov ecx, esi
// 0087f5e3  e808f7ffff           call 0x87ecf0
// 0087f5e8  8bc8                 mov ecx, eax
// 0087f5ea  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087f5f1  e80a1b0600           call 0x8e1100
// 0087f5f6  8d9efc040000         lea ebx, [esi + 0x4fc]
// 0087f5fc  50                   push eax
// 0087f5fd  8bcb                 mov ecx, ebx
// 0087f5ff  e85cf8faff           call 0x82ee60
// 0087f604  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0087f60a  83ec08               sub esp, 8
// 0087f60d  d95c2404             fstp dword ptr [esp + 4]
// 0087f611  8bcc                 mov ecx, esp
// 0087f613  89642420             mov dword ptr [esp + 0x20], esp
// 0087f617  68200ea000           push 0xa00e20
// 0087f61c  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f622  51                   push ecx
// 0087f623  8bcc                 mov ecx, esp
// 0087f625  89642420             mov dword ptr [esp + 0x20], esp
// 0087f629  68781fa000           push 0xa01f78
// 0087f62e  c78424900100000e000000 mov dword ptr [esp + 0x190], 0xe
// 0087f639  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f63f  8bce                 mov ecx, esi
// 0087f641  e8aaf6ffff           call 0x87ecf0
// 0087f646  8bc8                 mov ecx, eax
// 0087f648  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087f64f  e8ac1a0600           call 0x8e1100
// 0087f654  50                   push eax
// 0087f655  51                   push ecx
// 0087f656  8bcc                 mov ecx, esp
// 0087f658  89642424             mov dword ptr [esp + 0x24], esp
// 0087f65c  68000ea000           push 0xa00e00
// 0087f661  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f667  51                   push ecx
// 0087f668  8bcc                 mov ecx, esp
// 0087f66a  89642424             mov dword ptr [esp + 0x24], esp
// 0087f66e  68781fa000           push 0xa01f78
// 0087f673  c78424940100000f000000 mov dword ptr [esp + 0x194], 0xf
// 0087f67e  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f684  8bce                 mov ecx, esi
// 0087f686  e865f6ffff           call 0x87ecf0
// 0087f68b  8bc8                 mov ecx, eax
// 0087f68d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087f694  e8671a0600           call 0x8e1100
// 0087f699  50                   push eax
// 0087f69a  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0087f6a0  e8bbf7faff           call 0x82ee60
// 0087f6a5  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0087f6a8  898ec8040000         mov dword ptr [esi + 0x4c8], ecx
// 0087f6ae  8b5308               mov edx, dword ptr [ebx + 8]
// 0087f6b1  8996c4040000         mov dword ptr [esi + 0x4c4], edx
// 0087f6b7  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0087f6ba  8986d4040000         mov dword ptr [esi + 0x4d4], eax
// 0087f6c0  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0087f6c3  898ed0040000         mov dword ptr [esi + 0x4d0], ecx
// 0087f6c9  d9431c               fld dword ptr [ebx + 0x1c]
// 0087f6cc  51                   push ecx
// 0087f6cd  d99ed8040000         fstp dword ptr [esi + 0x4d8]
// 0087f6d3  8bcc                 mov ecx, esp
// 0087f6d5  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f6d9  682424a000           push 0xa02424
// 0087f6de  896e20               mov dword ptr [esi + 0x20], ebp
// 0087f6e1  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f6e7  51                   push ecx
// 0087f6e8  8bcc                 mov ecx, esp
// 0087f6ea  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f6ee  68781fa000           push 0xa01f78
// 0087f6f3  c784248c01000010000000 mov dword ptr [esp + 0x18c], 0x10
// 0087f6fe  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f704  8bce                 mov ecx, esi
// 0087f706  e8e5f5ffff           call 0x87ecf0
// 0087f70b  8bc8                 mov ecx, eax
// 0087f70d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f714  e8e7190600           call 0x8e1100
// 0087f719  51                   push ecx
// 0087f71a  8bcc                 mov ecx, esp
// 0087f71c  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f720  681824a000           push 0xa02418
// 0087f725  898638050000         mov dword ptr [esi + 0x538], eax
// 0087f72b  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f731  51                   push ecx
// 0087f732  8bcc                 mov ecx, esp
// 0087f734  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f738  68781fa000           push 0xa01f78
// 0087f73d  c784248c01000011000000 mov dword ptr [esp + 0x18c], 0x11
// 0087f748  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f74e  8bce                 mov ecx, esi
// 0087f750  e89bf5ffff           call 0x87ecf0
// 0087f755  8bc8                 mov ecx, eax
// 0087f757  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f75e  e89d190600           call 0x8e1100
// 0087f763  51                   push ecx
// 0087f764  8bcc                 mov ecx, esp
// 0087f766  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f76a  680824a000           push 0xa02408
// 0087f76f  8986f8050000         mov dword ptr [esi + 0x5f8], eax
// 0087f775  c78654030000f6f6f600 mov dword ptr [esi + 0x354], 0xf6f6f6
// 0087f77f  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f785  51                   push ecx
// 0087f786  8bcc                 mov ecx, esp
// 0087f788  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f78c  68781fa000           push 0xa01f78
// 0087f791  c784248c01000012000000 mov dword ptr [esp + 0x18c], 0x12
// 0087f79c  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f7a2  8bce                 mov ecx, esi
// 0087f7a4  e847f5ffff           call 0x87ecf0
// 0087f7a9  8bc8                 mov ecx, eax
// 0087f7ab  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f7b2  e849190600           call 0x8e1100
// 0087f7b7  51                   push ecx
// 0087f7b8  8bcc                 mov ecx, esp
// 0087f7ba  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f7be  68f823a000           push 0xa023f8
// 0087f7c3  89866c030000         mov dword ptr [esi + 0x36c], eax
// 0087f7c9  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f7cf  51                   push ecx
// 0087f7d0  8bcc                 mov ecx, esp
// 0087f7d2  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f7d6  68781fa000           push 0xa01f78
// 0087f7db  c784248c01000013000000 mov dword ptr [esp + 0x18c], 0x13
// 0087f7e6  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f7ec  8bce                 mov ecx, esi
// 0087f7ee  e8fdf4ffff           call 0x87ecf0
// 0087f7f3  8bc8                 mov ecx, eax
// 0087f7f5  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f7fc  e8ff180600           call 0x8e1100
// 0087f801  898630030000         mov dword ptr [esi + 0x330], eax
// 0087f807  89ae78030000         mov dword ptr [esi + 0x378], ebp
// 0087f80d  89ae84030000         mov dword ptr [esi + 0x384], ebp
// 0087f813  89ae90030000         mov dword ptr [esi + 0x390], ebp
// 0087f819  b88d8d8d00           mov eax, 0x8d8d8d
// 0087f81e  51                   push ecx
// 0087f81f  8bcc                 mov ecx, esp
// 0087f821  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f825  68ec23a000           push 0xa023ec
// 0087f82a  898638040000         mov dword ptr [esi + 0x438], eax
// 0087f830  898620040000         mov dword ptr [esi + 0x420], eax
// 0087f836  89860c030000         mov dword ptr [esi + 0x30c], eax
// 0087f83c  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f842  51                   push ecx
// 0087f843  8bcc                 mov ecx, esp
// 0087f845  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f849  68b8589b00           push 0x9b58b8
// 0087f84e  c784248c01000014000000 mov dword ptr [esp + 0x18c], 0x14
// 0087f859  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f85f  8bce                 mov ecx, esi
// 0087f861  e88af4ffff           call 0x87ecf0
// 0087f866  8bc8                 mov ecx, eax
// 0087f868  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f86f  e88c180600           call 0x8e1100
// 0087f874  51                   push ecx
// 0087f875  8bcc                 mov ecx, esp
// 0087f877  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f87b  68d823a000           push 0xa023d8
// 0087f880  8986f0030000         mov dword ptr [esi + 0x3f0], eax
// 0087f886  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f88c  51                   push ecx
// 0087f88d  8bcc                 mov ecx, esp
// 0087f88f  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f893  68781fa000           push 0xa01f78
// 0087f898  c784248c01000015000000 mov dword ptr [esp + 0x18c], 0x15
// 0087f8a3  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f8a9  8bce                 mov ecx, esi
// 0087f8ab  e840f4ffff           call 0x87ecf0
// 0087f8b0  8bc8                 mov ecx, eax
// 0087f8b2  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f8b9  e842180600           call 0x8e1100
// 0087f8be  51                   push ecx
// 0087f8bf  8bcc                 mov ecx, esp
// 0087f8c1  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f8c5  68c023a000           push 0xa023c0
// 0087f8ca  89464c               mov dword ptr [esi + 0x4c], eax
// 0087f8cd  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f8d3  51                   push ecx
// 0087f8d4  8bcc                 mov ecx, esp
// 0087f8d6  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f8da  68781fa000           push 0xa01f78
// 0087f8df  c784248c01000016000000 mov dword ptr [esp + 0x18c], 0x16
// 0087f8ea  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f8f0  8bce                 mov ecx, esi
// 0087f8f2  e8f9f3ffff           call 0x87ecf0
// 0087f8f7  8bc8                 mov ecx, eax
// 0087f8f9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f900  e8fb170600           call 0x8e1100
// 0087f905  51                   push ecx
// 0087f906  8bcc                 mov ecx, esp
// 0087f908  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f90c  68ac23a000           push 0xa023ac
// 0087f911  894658               mov dword ptr [esi + 0x58], eax
// 0087f914  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f91a  51                   push ecx
// 0087f91b  8bcc                 mov ecx, esp
// 0087f91d  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f921  68781fa000           push 0xa01f78
// 0087f926  c784248c01000017000000 mov dword ptr [esp + 0x18c], 0x17
// 0087f931  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f937  8bce                 mov ecx, esi
// 0087f939  e8b2f3ffff           call 0x87ecf0
// 0087f93e  8bc8                 mov ecx, eax
// 0087f940  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f947  e8b4170600           call 0x8e1100
// 0087f94c  51                   push ecx
// 0087f94d  8bcc                 mov ecx, esp
// 0087f94f  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f953  689c23a000           push 0xa0239c
// 0087f958  898644040000         mov dword ptr [esi + 0x444], eax
// 0087f95e  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f964  51                   push ecx
// 0087f965  8bcc                 mov ecx, esp
// 0087f967  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f96b  680c259d00           push 0x9d250c
// 0087f970  c784248c01000018000000 mov dword ptr [esp + 0x18c], 0x18
// 0087f97b  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f981  8bce                 mov ecx, esi
// 0087f983  e868f3ffff           call 0x87ecf0
// 0087f988  8bc8                 mov ecx, eax
// 0087f98a  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f991  e86a170600           call 0x8e1100
// 0087f996  51                   push ecx
// 0087f997  8bcc                 mov ecx, esp
// 0087f999  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f99d  689023a000           push 0xa02390
// 0087f9a2  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 0087f9a8  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f9ae  51                   push ecx
// 0087f9af  8bcc                 mov ecx, esp
// 0087f9b1  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f9b5  68b8589b00           push 0x9b58b8
// 0087f9ba  c784248c01000019000000 mov dword ptr [esp + 0x18c], 0x19
// 0087f9c5  ff15b8de9800         call dword ptr [0x98deb8]
// 0087f9cb  8bce                 mov ecx, esi
// 0087f9cd  e81ef3ffff           call 0x87ecf0
// 0087f9d2  8bc8                 mov ecx, eax
// 0087f9d4  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087f9db  e820170600           call 0x8e1100
// 0087f9e0  8986cc030000         mov dword ptr [esi + 0x3cc], eax
// 0087f9e6  8b8624050000         mov eax, dword ptr [esi + 0x524]
// 0087f9ec  3bc7                 cmp eax, edi
// 0087f9ee  7506                 jne 0x87f9f6
// 0087f9f0  8b8620050000         mov eax, dword ptr [esi + 0x520]
// 0087f9f6  51                   push ecx
// 0087f9f7  8bcc                 mov ecx, esp
// 0087f9f9  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087f9fd  688423a000           push 0xa02384
// 0087fa02  8986d8030000         mov dword ptr [esi + 0x3d8], eax
// 0087fa08  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fa0e  51                   push ecx
// 0087fa0f  8bcc                 mov ecx, esp
// 0087fa11  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fa15  68781fa000           push 0xa01f78
// 0087fa1a  c784248c0100001a000000 mov dword ptr [esp + 0x18c], 0x1a
// 0087fa25  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fa2b  8bce                 mov ecx, esi
// 0087fa2d  e8bef2ffff           call 0x87ecf0
// 0087fa32  8bc8                 mov ecx, eax
// 0087fa34  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fa3b  e8c0160600           call 0x8e1100
// 0087fa40  51                   push ecx
// 0087fa41  8bcc                 mov ecx, esp
// 0087fa43  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fa47  687023a000           push 0xa02370
// 0087fa4c  8986d0020000         mov dword ptr [esi + 0x2d0], eax
// 0087fa52  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fa58  51                   push ecx
// 0087fa59  8bcc                 mov ecx, esp
// 0087fa5b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fa5f  68781fa000           push 0xa01f78
// 0087fa64  c784248c0100001b000000 mov dword ptr [esp + 0x18c], 0x1b
// 0087fa6f  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fa75  8bce                 mov ecx, esi
// 0087fa77  e874f2ffff           call 0x87ecf0
// 0087fa7c  8bc8                 mov ecx, eax
// 0087fa7e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fa85  e876160600           call 0x8e1100
// 0087fa8a  51                   push ecx
// 0087fa8b  8bcc                 mov ecx, esp
// 0087fa8d  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fa91  685c23a000           push 0xa0235c
// 0087fa96  89863c030000         mov dword ptr [esi + 0x33c], eax
// 0087fa9c  ff15b8de9800         call dword ptr [0x98deb8]
// 0087faa2  51                   push ecx
// 0087faa3  8bcc                 mov ecx, esp
// 0087faa5  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087faa9  68781fa000           push 0xa01f78
// 0087faae  c784248c0100001c000000 mov dword ptr [esp + 0x18c], 0x1c
// 0087fab9  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fabf  8bce                 mov ecx, esi
// 0087fac1  e82af2ffff           call 0x87ecf0
// 0087fac6  8bc8                 mov ecx, eax
// 0087fac8  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087facf  e82c160600           call 0x8e1100
// 0087fad4  51                   push ecx
// 0087fad5  8bcc                 mov ecx, esp
// 0087fad7  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fadb  684823a000           push 0xa02348
// 0087fae0  898648030000         mov dword ptr [esi + 0x348], eax
// 0087fae6  ff15b8de9800         call dword ptr [0x98deb8]
// 0087faec  51                   push ecx
// 0087faed  8bcc                 mov ecx, esp
// 0087faef  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087faf3  680c259d00           push 0x9d250c
// 0087faf8  c784248c0100001d000000 mov dword ptr [esp + 0x18c], 0x1d
// 0087fb03  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fb09  8bce                 mov ecx, esi
// 0087fb0b  e8e0f1ffff           call 0x87ecf0
// 0087fb10  8bc8                 mov ecx, eax
// 0087fb12  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fb19  e8e2150600           call 0x8e1100
// 0087fb1e  51                   push ecx
// 0087fb1f  8bcc                 mov ecx, esp
// 0087fb21  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fb25  683023a000           push 0xa02330
// 0087fb2a  898640060000         mov dword ptr [esi + 0x640], eax
// 0087fb30  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fb36  c78424840100001e000000 mov dword ptr [esp + 0x184], 0x1e
// 0087fb41  51                   push ecx
// 0087fb42  8bcc                 mov ecx, esp
// 0087fb44  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fb48  680c259d00           push 0x9d250c
// 0087fb4d  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fb53  8bce                 mov ecx, esi
// 0087fb55  e896f1ffff           call 0x87ecf0
// 0087fb5a  8bc8                 mov ecx, eax
// 0087fb5c  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fb63  e898150600           call 0x8e1100
// 0087fb68  51                   push ecx
// 0087fb69  8bcc                 mov ecx, esp
// 0087fb6b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fb6f  681823a000           push 0xa02318
// 0087fb74  898644060000         mov dword ptr [esi + 0x644], eax
// 0087fb7a  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fb80  51                   push ecx
// 0087fb81  8bcc                 mov ecx, esp
// 0087fb83  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fb87  680c259d00           push 0x9d250c
// 0087fb8c  c784248c0100001f000000 mov dword ptr [esp + 0x18c], 0x1f
// 0087fb97  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fb9d  8bce                 mov ecx, esi
// 0087fb9f  e84cf1ffff           call 0x87ecf0
// 0087fba4  8bc8                 mov ecx, eax
// 0087fba6  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fbad  e84e150600           call 0x8e1100
// 0087fbb2  51                   push ecx
// 0087fbb3  8bcc                 mov ecx, esp
// 0087fbb5  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fbb9  680423a000           push 0xa02304
// 0087fbbe  898648060000         mov dword ptr [esi + 0x648], eax
// 0087fbc4  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fbca  51                   push ecx
// 0087fbcb  8bcc                 mov ecx, esp
// 0087fbcd  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fbd1  68b8589b00           push 0x9b58b8
// 0087fbd6  c784248c01000020000000 mov dword ptr [esp + 0x18c], 0x20
// 0087fbe1  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fbe7  8bce                 mov ecx, esi
// 0087fbe9  e802f1ffff           call 0x87ecf0
// 0087fbee  8bc8                 mov ecx, eax
// 0087fbf0  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fbf7  e804150600           call 0x8e1100
// 0087fbfc  51                   push ecx
// 0087fbfd  8bcc                 mov ecx, esp
// 0087fbff  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fc03  68ec22a000           push 0xa022ec
// 0087fc08  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 0087fc0e  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fc14  51                   push ecx
// 0087fc15  8bcc                 mov ecx, esp
// 0087fc17  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fc1b  68b8589b00           push 0x9b58b8
// 0087fc20  c784248c01000021000000 mov dword ptr [esp + 0x18c], 0x21
// 0087fc2b  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fc31  8bce                 mov ecx, esi
// 0087fc33  e8b8f0ffff           call 0x87ecf0
// 0087fc38  8bc8                 mov ecx, eax
// 0087fc3a  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fc41  e8ba140600           call 0x8e1100
// 0087fc46  51                   push ecx
// 0087fc47  8bcc                 mov ecx, esp
// 0087fc49  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fc4d  68d822a000           push 0xa022d8
// 0087fc52  8986e8020000         mov dword ptr [esi + 0x2e8], eax
// 0087fc58  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fc5e  51                   push ecx
// 0087fc5f  8bcc                 mov ecx, esp
// 0087fc61  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fc65  68b8589b00           push 0x9b58b8
// 0087fc6a  c784248c01000022000000 mov dword ptr [esp + 0x18c], 0x22
// 0087fc75  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fc7b  8bce                 mov ecx, esi
// 0087fc7d  e86ef0ffff           call 0x87ecf0
// 0087fc82  8bc8                 mov ecx, eax
// 0087fc84  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fc8b  e870140600           call 0x8e1100
// 0087fc90  51                   push ecx
// 0087fc91  8bcc                 mov ecx, esp
// 0087fc93  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fc97  68c022a000           push 0xa022c0
// 0087fc9c  8986f4020000         mov dword ptr [esi + 0x2f4], eax
// 0087fca2  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fca8  51                   push ecx
// 0087fca9  8bcc                 mov ecx, esp
// 0087fcab  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fcaf  68b8589b00           push 0x9b58b8
// 0087fcb4  c784248c01000023000000 mov dword ptr [esp + 0x18c], 0x23
// 0087fcbf  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fcc5  8bce                 mov ecx, esi
// 0087fcc7  e824f0ffff           call 0x87ecf0
// 0087fccc  8bc8                 mov ecx, eax
// 0087fcce  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fcd5  e826140600           call 0x8e1100
// 0087fcda  51                   push ecx
// 0087fcdb  8bcc                 mov ecx, esp
// 0087fcdd  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fce1  68ac22a000           push 0xa022ac
// 0087fce6  8986c0030000         mov dword ptr [esi + 0x3c0], eax
// 0087fcec  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fcf2  51                   push ecx
// 0087fcf3  8bcc                 mov ecx, esp
// 0087fcf5  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fcf9  68b8589b00           push 0x9b58b8
// 0087fcfe  c784248c01000024000000 mov dword ptr [esp + 0x18c], 0x24
// 0087fd09  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fd0f  8bce                 mov ecx, esi
// 0087fd11  e8daefffff           call 0x87ecf0
// 0087fd16  8bc8                 mov ecx, eax
// 0087fd18  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fd1f  e8dc130600           call 0x8e1100
// 0087fd24  51                   push ecx
// 0087fd25  8bcc                 mov ecx, esp
// 0087fd27  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fd2b  689422a000           push 0xa02294
// 0087fd30  898618030000         mov dword ptr [esi + 0x318], eax
// 0087fd36  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fd3c  51                   push ecx
// 0087fd3d  8bcc                 mov ecx, esp
// 0087fd3f  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fd43  68b8589b00           push 0x9b58b8
// 0087fd48  c784248c01000025000000 mov dword ptr [esp + 0x18c], 0x25
// 0087fd53  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fd59  8bce                 mov ecx, esi
// 0087fd5b  e890efffff           call 0x87ecf0
// 0087fd60  8bc8                 mov ecx, eax
// 0087fd62  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fd69  e892130600           call 0x8e1100
// 0087fd6e  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0087fd74  83ec08               sub esp, 8
// 0087fd77  d95c2404             fstp dword ptr [esp + 4]
// 0087fd7b  8bcc                 mov ecx, esp
// 0087fd7d  89642420             mov dword ptr [esp + 0x20], esp
// 0087fd81  687c22a000           push 0xa0227c
// 0087fd86  898624030000         mov dword ptr [esi + 0x324], eax
// 0087fd8c  89ae9c030000         mov dword ptr [esi + 0x39c], ebp
// 0087fd92  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 0087fd9c  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fda2  51                   push ecx
// 0087fda3  8bcc                 mov ecx, esp
// 0087fda5  89642420             mov dword ptr [esp + 0x20], esp
// 0087fda9  68b8589b00           push 0x9b58b8
// 0087fdae  c784249001000026000000 mov dword ptr [esp + 0x190], 0x26
// 0087fdb9  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fdbf  8bce                 mov ecx, esi
// 0087fdc1  e82aefffff           call 0x87ecf0
// 0087fdc6  8bc8                 mov ecx, eax
// 0087fdc8  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087fdcf  e82c130600           call 0x8e1100
// 0087fdd4  50                   push eax
// 0087fdd5  51                   push ecx
// 0087fdd6  8bcc                 mov ecx, esp
// 0087fdd8  89642424             mov dword ptr [esp + 0x24], esp
// 0087fddc  686422a000           push 0xa02264
// 0087fde1  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fde7  51                   push ecx
// 0087fde8  8bcc                 mov ecx, esp
// 0087fdea  89642424             mov dword ptr [esp + 0x24], esp
// 0087fdee  68b8589b00           push 0x9b58b8
// 0087fdf3  c784249401000027000000 mov dword ptr [esp + 0x194], 0x27
// 0087fdfe  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fe04  8bce                 mov ecx, esi
// 0087fe06  e8e5eeffff           call 0x87ecf0
// 0087fe0b  8bc8                 mov ecx, eax
// 0087fe0d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087fe14  e8e7120600           call 0x8e1100
// 0087fe19  50                   push eax
// 0087fe1a  8d8e90050000         lea ecx, [esi + 0x590]
// 0087fe20  e83bf0faff           call 0x82ee60
// 0087fe25  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0087fe2b  83ec08               sub esp, 8
// 0087fe2e  d95c2404             fstp dword ptr [esp + 4]
// 0087fe32  8bcc                 mov ecx, esp
// 0087fe34  89642420             mov dword ptr [esp + 0x20], esp
// 0087fe38  684c22a000           push 0xa0224c
// 0087fe3d  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fe43  51                   push ecx
// 0087fe44  8bcc                 mov ecx, esp
// 0087fe46  89642420             mov dword ptr [esp + 0x20], esp
// 0087fe4a  68b8589b00           push 0x9b58b8
// 0087fe4f  c784249001000028000000 mov dword ptr [esp + 0x190], 0x28
// 0087fe5a  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fe60  8bce                 mov ecx, esi
// 0087fe62  e889eeffff           call 0x87ecf0
// 0087fe67  8bc8                 mov ecx, eax
// 0087fe69  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087fe70  e88b120600           call 0x8e1100
// 0087fe75  50                   push eax
// 0087fe76  51                   push ecx
// 0087fe77  8bcc                 mov ecx, esp
// 0087fe79  89642424             mov dword ptr [esp + 0x24], esp
// 0087fe7d  683422a000           push 0xa02234
// 0087fe82  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fe88  51                   push ecx
// 0087fe89  8bcc                 mov ecx, esp
// 0087fe8b  89642424             mov dword ptr [esp + 0x24], esp
// 0087fe8f  68b8589b00           push 0x9b58b8
// 0087fe94  c784249401000029000000 mov dword ptr [esp + 0x194], 0x29
// 0087fe9f  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fea5  8bce                 mov ecx, esi
// 0087fea7  e844eeffff           call 0x87ecf0
// 0087feac  8bc8                 mov ecx, eax
// 0087feae  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087feb5  e846120600           call 0x8e1100
// 0087feba  50                   push eax
// 0087febb  8d8e50050000         lea ecx, [esi + 0x550]
// 0087fec1  e89aeffaff           call 0x82ee60
// 0087fec6  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0087fecc  83ec08               sub esp, 8
// 0087fecf  d95c2404             fstp dword ptr [esp + 4]
// 0087fed3  8bcc                 mov ecx, esp
// 0087fed5  89642420             mov dword ptr [esp + 0x20], esp
// 0087fed9  681c22a000           push 0xa0221c
// 0087fede  ff15b8de9800         call dword ptr [0x98deb8]
// 0087fee4  51                   push ecx
// 0087fee5  8bcc                 mov ecx, esp
// 0087fee7  89642420             mov dword ptr [esp + 0x20], esp
// 0087feeb  68b8589b00           push 0x9b58b8
// 0087fef0  c78424900100002a000000 mov dword ptr [esp + 0x190], 0x2a
// 0087fefb  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ff01  8bce                 mov ecx, esi
// 0087ff03  e8e8edffff           call 0x87ecf0
// 0087ff08  8bc8                 mov ecx, eax
// 0087ff0a  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0087ff11  e8ea110600           call 0x8e1100
// 0087ff16  50                   push eax
// 0087ff17  51                   push ecx
// 0087ff18  8bcc                 mov ecx, esp
// 0087ff1a  89642424             mov dword ptr [esp + 0x24], esp
// 0087ff1e  680422a000           push 0xa02204
// 0087ff23  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ff29  51                   push ecx
// 0087ff2a  8bcc                 mov ecx, esp
// 0087ff2c  89642424             mov dword ptr [esp + 0x24], esp
// 0087ff30  68b8589b00           push 0x9b58b8
// 0087ff35  c78424940100002b000000 mov dword ptr [esp + 0x194], 0x2b
// 0087ff40  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ff46  8bce                 mov ecx, esi
// 0087ff48  e8a3edffff           call 0x87ecf0
// 0087ff4d  8bc8                 mov ecx, eax
// 0087ff4f  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0087ff56  e8a5110600           call 0x8e1100
// 0087ff5b  50                   push eax
// 0087ff5c  8d8e70050000         lea ecx, [esi + 0x570]
// 0087ff62  e8f9eefaff           call 0x82ee60
// 0087ff67  51                   push ecx
// 0087ff68  8bcc                 mov ecx, esp
// 0087ff6a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087ff6e  68f421a000           push 0xa021f4
// 0087ff73  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ff79  51                   push ecx
// 0087ff7a  8bcc                 mov ecx, esp
// 0087ff7c  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087ff80  68b8589b00           push 0x9b58b8
// 0087ff85  c784248c0100002c000000 mov dword ptr [esp + 0x18c], 0x2c
// 0087ff90  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ff96  8bce                 mov ecx, esi
// 0087ff98  e853edffff           call 0x87ecf0
// 0087ff9d  8bc8                 mov ecx, eax
// 0087ff9f  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087ffa6  e855110600           call 0x8e1100
// 0087ffab  51                   push ecx
// 0087ffac  8bcc                 mov ecx, esp
// 0087ffae  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087ffb2  68e421a000           push 0xa021e4
// 0087ffb7  8986cc050000         mov dword ptr [esi + 0x5cc], eax
// 0087ffbd  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ffc3  51                   push ecx
// 0087ffc4  8bcc                 mov ecx, esp
// 0087ffc6  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087ffca  68b8589b00           push 0x9b58b8
// 0087ffcf  c784248c0100002d000000 mov dword ptr [esp + 0x18c], 0x2d
// 0087ffda  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ffe0  8bce                 mov ecx, esi
// 0087ffe2  e809edffff           call 0x87ecf0
// 0087ffe7  8bc8                 mov ecx, eax
// 0087ffe9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0087fff0  e80b110600           call 0x8e1100
// 0087fff5  51                   push ecx
// 0087fff6  8bcc                 mov ecx, esp
// 0087fff8  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087fffc  68d421a000           push 0xa021d4
// 00880001  8986d0050000         mov dword ptr [esi + 0x5d0], eax
// 00880007  ff15b8de9800         call dword ptr [0x98deb8]
// 0088000d  51                   push ecx
// 0088000e  8bcc                 mov ecx, esp
// 00880010  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880014  68b8589b00           push 0x9b58b8
// 00880019  c784248c0100002e000000 mov dword ptr [esp + 0x18c], 0x2e
// 00880024  ff15b8de9800         call dword ptr [0x98deb8]
// 0088002a  8bce                 mov ecx, esi
// 0088002c  e8bfecffff           call 0x87ecf0
// 00880031  8bc8                 mov ecx, eax
// 00880033  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088003a  e8c1100600           call 0x8e1100
// 0088003f  51                   push ecx
// 00880040  8bcc                 mov ecx, esp
// 00880042  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880046  68c421a000           push 0xa021c4
// 0088004b  8986d4050000         mov dword ptr [esi + 0x5d4], eax
// 00880051  ff15b8de9800         call dword ptr [0x98deb8]
// 00880057  51                   push ecx
// 00880058  8bcc                 mov ecx, esp
// 0088005a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088005e  68b8589b00           push 0x9b58b8
// 00880063  c784248c0100002f000000 mov dword ptr [esp + 0x18c], 0x2f
// 0088006e  ff15b8de9800         call dword ptr [0x98deb8]
// 00880074  8bce                 mov ecx, esi
// 00880076  e875ecffff           call 0x87ecf0
// 0088007b  8bc8                 mov ecx, eax
// 0088007d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00880084  e877100600           call 0x8e1100
// 00880089  51                   push ecx
// 0088008a  8bcc                 mov ecx, esp
// 0088008c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880090  68b421a000           push 0xa021b4
// 00880095  8986d8050000         mov dword ptr [esi + 0x5d8], eax
// 0088009b  ff15b8de9800         call dword ptr [0x98deb8]
// 008800a1  51                   push ecx
// 008800a2  8bcc                 mov ecx, esp
// 008800a4  8964241c             mov dword ptr [esp + 0x1c], esp
// 008800a8  68b8589b00           push 0x9b58b8
// 008800ad  c784248c01000030000000 mov dword ptr [esp + 0x18c], 0x30
// 008800b8  ff15b8de9800         call dword ptr [0x98deb8]
// 008800be  8bce                 mov ecx, esi
// 008800c0  e82becffff           call 0x87ecf0
// 008800c5  8bc8                 mov ecx, eax
// 008800c7  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008800ce  e82d100600           call 0x8e1100
// 008800d3  51                   push ecx
// 008800d4  8bcc                 mov ecx, esp
// 008800d6  8964241c             mov dword ptr [esp + 0x1c], esp
// 008800da  68a421a000           push 0xa021a4
// 008800df  8986dc050000         mov dword ptr [esi + 0x5dc], eax
// 008800e5  ff15b8de9800         call dword ptr [0x98deb8]
// 008800eb  51                   push ecx
// 008800ec  8bcc                 mov ecx, esp
// 008800ee  8964241c             mov dword ptr [esp + 0x1c], esp
// 008800f2  68b8589b00           push 0x9b58b8
// 008800f7  c784248c01000031000000 mov dword ptr [esp + 0x18c], 0x31
// 00880102  ff15b8de9800         call dword ptr [0x98deb8]
// 00880108  8bce                 mov ecx, esi
// 0088010a  e8e1ebffff           call 0x87ecf0
// 0088010f  8bc8                 mov ecx, eax
// 00880111  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00880118  e8e30f0600           call 0x8e1100
// 0088011d  51                   push ecx
// 0088011e  8bcc                 mov ecx, esp
// 00880120  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880124  689421a000           push 0xa02194
// 00880129  8986e0050000         mov dword ptr [esi + 0x5e0], eax
// 0088012f  ff15b8de9800         call dword ptr [0x98deb8]
// 00880135  51                   push ecx
// 00880136  8bcc                 mov ecx, esp
// 00880138  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088013c  68b8589b00           push 0x9b58b8
// 00880141  c784248c01000032000000 mov dword ptr [esp + 0x18c], 0x32
// 0088014c  ff15b8de9800         call dword ptr [0x98deb8]
// 00880152  8bce                 mov ecx, esi
// 00880154  e897ebffff           call 0x87ecf0
// 00880159  8bc8                 mov ecx, eax
// 0088015b  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00880162  e8990f0600           call 0x8e1100
// 00880167  51                   push ecx
// 00880168  8bcc                 mov ecx, esp
// 0088016a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088016e  688421a000           push 0xa02184
// 00880173  8986e4050000         mov dword ptr [esi + 0x5e4], eax
// 00880179  ff15b8de9800         call dword ptr [0x98deb8]
// 0088017f  51                   push ecx
// 00880180  8bcc                 mov ecx, esp
// 00880182  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880186  68b8589b00           push 0x9b58b8
// 0088018b  c784248c01000033000000 mov dword ptr [esp + 0x18c], 0x33
// 00880196  ff15b8de9800         call dword ptr [0x98deb8]
// 0088019c  8bce                 mov ecx, esi
// 0088019e  e84debffff           call 0x87ecf0
// 008801a3  8bc8                 mov ecx, eax
// 008801a5  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008801ac  e84f0f0600           call 0x8e1100
// 008801b1  51                   push ecx
// 008801b2  8986e8050000         mov dword ptr [esi + 0x5e8], eax
// 008801b8  8bcc                 mov ecx, esp
// 008801ba  8964241c             mov dword ptr [esp + 0x1c], esp
// 008801be  686c21a000           push 0xa0216c
// 008801c3  ff15b8de9800         call dword ptr [0x98deb8]
// 008801c9  51                   push ecx
// 008801ca  8bcc                 mov ecx, esp
// 008801cc  8964241c             mov dword ptr [esp + 0x1c], esp
// 008801d0  68b8589b00           push 0x9b58b8
// 008801d5  c784248c01000034000000 mov dword ptr [esp + 0x18c], 0x34
// 008801e0  ff15b8de9800         call dword ptr [0x98deb8]
// 008801e6  8bce                 mov ecx, esi
// 008801e8  e803ebffff           call 0x87ecf0
// 008801ed  8bc8                 mov ecx, eax
// 008801ef  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008801f6  e8050f0600           call 0x8e1100
// 008801fb  51                   push ecx
// 008801fc  8bcc                 mov ecx, esp
// 008801fe  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880202  685821a000           push 0xa02158
// 00880207  8986f4050000         mov dword ptr [esi + 0x5f4], eax
// 0088020d  ff15b8de9800         call dword ptr [0x98deb8]
// 00880213  51                   push ecx
// 00880214  8bcc                 mov ecx, esp
// 00880216  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088021a  68b8589b00           push 0x9b58b8
// 0088021f  c784248c01000035000000 mov dword ptr [esp + 0x18c], 0x35
// 0088022a  ff15b8de9800         call dword ptr [0x98deb8]
// 00880230  8bce                 mov ecx, esi
// 00880232  e8b9eaffff           call 0x87ecf0
// 00880237  8bc8                 mov ecx, eax
// 00880239  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00880240  e8bb0e0600           call 0x8e1100
// 00880245  51                   push ecx
// 00880246  8bcc                 mov ecx, esp
// 00880248  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088024c  684421a000           push 0xa02144
// 00880251  8986f0050000         mov dword ptr [esi + 0x5f0], eax
// 00880257  ff15b8de9800         call dword ptr [0x98deb8]
// 0088025d  51                   push ecx
// 0088025e  8bcc                 mov ecx, esp
// 00880260  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880264  68b8589b00           push 0x9b58b8
// 00880269  c784248c01000036000000 mov dword ptr [esp + 0x18c], 0x36
// 00880274  ff15b8de9800         call dword ptr [0x98deb8]
// 0088027a  8bce                 mov ecx, esi
// 0088027c  e86feaffff           call 0x87ecf0
// 00880281  8bc8                 mov ecx, eax
// 00880283  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088028a  e8710e0600           call 0x8e1100
// 0088028f  51                   push ecx
// 00880290  8bcc                 mov ecx, esp
// 00880292  8964241c             mov dword ptr [esp + 0x1c], esp
// 00880296  683421a000           push 0xa02134
// 0088029b  8986ec050000         mov dword ptr [esi + 0x5ec], eax
// 008802a1  ff15b8de9800         call dword ptr [0x98deb8]
// 008802a7  51                   push ecx
// 008802a8  8bcc                 mov ecx, esp
// 008802aa  8964241c             mov dword ptr [esp + 0x1c], esp
// 008802ae  68781fa000           push 0xa01f78
// 008802b3  c784248c01000037000000 mov dword ptr [esp + 0x18c], 0x37
// 008802be  ff15b8de9800         call dword ptr [0x98deb8]
// 008802c4  8bce                 mov ecx, esi
// 008802c6  e825eaffff           call 0x87ecf0
// 008802cb  8bc8                 mov ecx, eax
// 008802cd  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008802d4  e8270e0600           call 0x8e1100
// 008802d9  51                   push ecx
// 008802da  8bcc                 mov ecx, esp
// 008802dc  8964241c             mov dword ptr [esp + 0x1c], esp
// 008802e0  682021a000           push 0xa02120
// 008802e5  898608040000         mov dword ptr [esi + 0x408], eax
// 008802eb  ff15b8de9800         call dword ptr [0x98deb8]
// 008802f1  51                   push ecx
// 008802f2  8bcc                 mov ecx, esp
// 008802f4  8964241c             mov dword ptr [esp + 0x1c], esp
// 008802f8  68781fa000           push 0xa01f78
// 008802fd  c784248c01000038000000 mov dword ptr [esp + 0x18c], 0x38
// 00880308  ff15b8de9800         call dword ptr [0x98deb8]
// 0088030e  8bce                 mov ecx, esi
// 00880310  e8dbe9ffff           call 0x87ecf0
// 00880315  8bc8                 mov ecx, eax
// 00880317  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088031e  e8dd0d0600           call 0x8e1100
// 00880323  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00880329  83ec08               sub esp, 8
// 0088032c  d95c2404             fstp dword ptr [esp + 4]
// 00880330  8bcc                 mov ecx, esp
// 00880332  89642420             mov dword ptr [esp + 0x20], esp
// 00880336  680821a000           push 0xa02108
// 0088033b  8986e4030000         mov dword ptr [esi + 0x3e4], eax
// 00880341  ff15b8de9800         call dword ptr [0x98deb8]
// 00880347  51                   push ecx
// 00880348  8bcc                 mov ecx, esp
// 0088034a  89642420             mov dword ptr [esp + 0x20], esp
// 0088034e  68781fa000           push 0xa01f78
// 00880353  c784249001000039000000 mov dword ptr [esp + 0x190], 0x39
// 0088035e  ff15b8de9800         call dword ptr [0x98deb8]
// 00880364  8bce                 mov ecx, esi
// 00880366  e885e9ffff           call 0x87ecf0
// 0088036b  8bc8                 mov ecx, eax
// 0088036d  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00880374  e8870d0600           call 0x8e1100
// 00880379  50                   push eax
// 0088037a  51                   push ecx
// 0088037b  8bcc                 mov ecx, esp
// 0088037d  89642424             mov dword ptr [esp + 0x24], esp
// 00880381  68ec20a000           push 0xa020ec
// 00880386  ff15b8de9800         call dword ptr [0x98deb8]
// 0088038c  51                   push ecx
// 0088038d  8bcc                 mov ecx, esp
// 0088038f  89642424             mov dword ptr [esp + 0x24], esp
// 00880393  68781fa000           push 0xa01f78
// 00880398  c78424940100003a000000 mov dword ptr [esp + 0x194], 0x3a
// 008803a3  ff15b8de9800         call dword ptr [0x98deb8]
// 008803a9  8bce                 mov ecx, esi
// 008803ab  e840e9ffff           call 0x87ecf0
// 008803b0  8bc8                 mov ecx, eax
// 008803b2  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 008803b9  e8420d0600           call 0x8e1100
// 008803be  50                   push eax
// 008803bf  8d4e28               lea ecx, [esi + 0x28]
// 008803c2  e899eafaff           call 0x82ee60
// 008803c7  8bce                 mov ecx, esi
// 008803c9  e8124c0000           call 0x884fe0
// 008803ce  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 008803d5  64890d00000000       mov dword ptr fs:[0], ecx
// 008803dc  59                   pop ecx
// 008803dd  5f                   pop edi
// 008803de  5e                   pop esi
// 008803df  5d                   pop ebp
// 008803e0  5b                   pop ebx
// 008803e1  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008803e8  33cc                 xor ecx, esp
// 008803ea  e8ab4ff7ff           call 0x7f539a
// 008803ef  81c470010000         add esp, 0x170
// 008803f5  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2007Theme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp