// from server: 100% by auto
// roc 2007-08 00632610  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632610
//
// 00632610  83ec14               sub esp, 0x14
// 00632613  53                   push ebx
// 00632614  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00632618  55                   push ebp
// 00632619  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0063261d  56                   push esi
// 0063261e  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00632622  85f6                 test esi, esi
// 00632624  57                   push edi
// 00632625  894c2410             mov dword ptr [esp + 0x10], ecx
// 00632629  0f8486000000         je 0x6326b5
// 0063262f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00632632  8d442414             lea eax, [esp + 0x14]
// 00632636  50                   push eax
// 00632637  51                   push ecx
// 00632638  ff15d4ed7700         call dword ptr [0x77edd4]
// 0063263e  8b4654               mov eax, dword ptr [esi + 0x54]
// 00632641  a900a00000           test eax, 0xa000
// 00632646  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0063264a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0063264e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00632652  743a                 je 0x63268e
// 00632654  8d5fec               lea ebx, [edi - 0x14]
// 00632657  3bdd                 cmp ebx, ebp
// 00632659  7d29                 jge 0x632684
// 0063265b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0063265f  83c314               add ebx, 0x14
// 00632662  3bdd                 cmp ebx, ebp
// 00632664  7e1e                 jle 0x632684
// 00632666  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0063266a  8d69ec               lea ebp, [ecx - 0x14]
// 0063266d  3beb                 cmp ebp, ebx
// 0063266f  7d19                 jge 0x63268a
// 00632671  8d6a14               lea ebp, [edx + 0x14]
// 00632674  3beb                 cmp ebp, ebx
// 00632676  7e12                 jle 0x63268a
// 00632678  5f                   pop edi
// 00632679  8bc6                 mov eax, esi
// 0063267b  5e                   pop esi
// 0063267c  5d                   pop ebp
// 0063267d  5b                   pop ebx
// 0063267e  83c414               add esp, 0x14
// 00632681  c20c00               ret 0xc
// 00632684  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00632688  eb04                 jmp 0x63268e
// 0063268a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0063268e  a900500000           test eax, 0x5000
// 00632693  7420                 je 0x6326b5
// 00632695  83c1ec               add ecx, -0x14
// 00632698  3bcb                 cmp ecx, ebx
// 0063269a  7d19                 jge 0x6326b5
// 0063269c  83c214               add edx, 0x14
// 0063269f  3bd3                 cmp edx, ebx
// 006326a1  7e12                 jle 0x6326b5
// 006326a3  83c7ec               add edi, -0x14
// 006326a6  3bfd                 cmp edi, ebp
// 006326a8  7d0b                 jge 0x6326b5
// 006326aa  8b542420             mov edx, dword ptr [esp + 0x20]
// 006326ae  83c214               add edx, 0x14
// 006326b1  3bd5                 cmp edx, ebp
// 006326b3  7fc3                 jg 0x632678
// 006326b5  8b742410             mov esi, dword ptr [esp + 0x10]
// 006326b9  33ff                 xor edi, edi
// 006326bb  81c690000000         add esi, 0x90
// 006326c1  8b0e                 mov ecx, dword ptr [esi]
// 006326c3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006326c6  8d442414             lea eax, [esp + 0x14]
// 006326ca  50                   push eax
// 006326cb  52                   push edx
// 006326cc  ff15d4ed7700         call dword ptr [0x77edd4]
// 006326d2  8b06                 mov eax, dword ptr [esi]
// 006326d4  8b4054               mov eax, dword ptr [eax + 0x54]
// 006326d7  a900a00000           test eax, 0xa000
// 006326dc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006326e0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006326e4  742c                 je 0x632712
// 006326e6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006326ea  83c3ec               add ebx, -0x14
// 006326ed  3bdd                 cmp ebx, ebp
// 006326ef  7d67                 jge 0x632758
// 006326f1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006326f5  83c314               add ebx, 0x14
// 006326f8  3bdd                 cmp ebx, ebp
// 006326fa  7e5c                 jle 0x632758
// 006326fc  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00632700  8d69ec               lea ebp, [ecx - 0x14]
// 00632703  3beb                 cmp ebp, ebx
// 00632705  7d07                 jge 0x63270e
// 00632707  8d6a14               lea ebp, [edx + 0x14]
// 0063270a  3beb                 cmp ebp, ebx
// 0063270c  7f50                 jg 0x63275e
// 0063270e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00632712  a900500000           test eax, 0x5000
// 00632717  7424                 je 0x63273d
// 00632719  83c1ec               add ecx, -0x14
// 0063271c  3bcb                 cmp ecx, ebx
// 0063271e  7d1d                 jge 0x63273d
// 00632720  83c214               add edx, 0x14
// 00632723  3bd3                 cmp edx, ebx
// 00632725  7e16                 jle 0x63273d
// 00632727  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063272b  83c1ec               add ecx, -0x14
// 0063272e  3bcd                 cmp ecx, ebp
// 00632730  7d0b                 jge 0x63273d
// 00632732  8b542420             mov edx, dword ptr [esp + 0x20]
// 00632736  83c214               add edx, 0x14
// 00632739  3bd5                 cmp edx, ebp
// 0063273b  7f36                 jg 0x632773
// 0063273d  83c701               add edi, 1
// 00632740  83c604               add esi, 4
// 00632743  83ff04               cmp edi, 4
// 00632746  0f8c75ffffff         jl 0x6326c1
// 0063274c  5f                   pop edi
// 0063274d  5e                   pop esi
// 0063274e  5d                   pop ebp
// 0063274f  33c0                 xor eax, eax
// 00632751  5b                   pop ebx
// 00632752  83c414               add esp, 0x14
// 00632755  c20c00               ret 0xc
// 00632758  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0063275c  ebb4                 jmp 0x632712
// 0063275e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00632762  8b84b890000000       mov eax, dword ptr [eax + edi*4 + 0x90]
// 00632769  5f                   pop edi
// 0063276a  5e                   pop esi
// 0063276b  5d                   pop ebp
// 0063276c  5b                   pop ebx
// 0063276d  83c414               add esp, 0x14
// 00632770  c20c00               ret 0xc
// 00632773  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00632777  8b84b990000000       mov eax, dword ptr [ecx + edi*4 + 0x90]
// 0063277e  5f                   pop edi
// 0063277f  5e                   pop esi
// 00632780  5d                   pop ebp
// 00632781  5b                   pop ebx
// 00632782  83c414               add esp, 0x14
// 00632785  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?CanDock@CXTPCommandBars@@QBEPAVCXTPDockBar@@VCPoint@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
