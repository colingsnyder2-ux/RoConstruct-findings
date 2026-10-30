// roc 2009-12 008ef350  unit: CXTPRibbonTabPopupToolBar  size: 502 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef350
//
// 008ef350  6aff                 push -1
// 008ef352  6880689600           push 0x966880
// 008ef357  64a100000000         mov eax, dword ptr fs:[0]
// 008ef35d  50                   push eax
// 008ef35e  83ec64               sub esp, 0x64
// 008ef361  53                   push ebx
// 008ef362  55                   push ebp
// 008ef363  56                   push esi
// 008ef364  57                   push edi
// 008ef365  a10052b600           mov eax, dword ptr [0xb65200]
// 008ef36a  33c4                 xor eax, esp
// 008ef36c  50                   push eax
// 008ef36d  8d442478             lea eax, [esp + 0x78]
// 008ef371  64a300000000         mov dword ptr fs:[0], eax
// 008ef377  8bf1                 mov esi, ecx
// 008ef379  8b8678020000         mov eax, dword ptr [esi + 0x278]
// 008ef37f  8b5020               mov edx, dword ptr [eax + 0x20]
// 008ef382  8d4c2444             lea ecx, [esp + 0x44]
// 008ef386  51                   push ecx
// 008ef387  52                   push edx
// 008ef388  ff1570cc9800         call dword ptr [0x98cc70]
// 008ef38e  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008ef394  8b4844               mov ecx, dword ptr [eax + 0x44]
// 008ef397  894c2414             mov dword ptr [esp + 0x14], ecx
// 008ef39b  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ef39e  89542418             mov dword ptr [esp + 0x18], edx
// 008ef3a2  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008ef3a5  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008ef3a9  8b5050               mov edx, dword ptr [eax + 0x50]
// 008ef3ac  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008ef3b2  8d442414             lea eax, [esp + 0x14]
// 008ef3b6  50                   push eax
// 008ef3b7  89542424             mov dword ptr [esp + 0x24], edx
// 008ef3bb  e83a4af0ff           call 0x7f3dfa
// 008ef3c0  8d4c2414             lea ecx, [esp + 0x14]
// 008ef3c4  51                   push ecx
// 008ef3c5  8d542438             lea edx, [esp + 0x38]
// 008ef3c9  52                   push edx
// 008ef3ca  e8a1d3f4ff           call 0x83c770
// 008ef3cf  8bc8                 mov ecx, eax
// 008ef3d1  e8facef4ff           call 0x83c2d0
// 008ef3d6  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008ef3dc  8b01                 mov eax, dword ptr [ecx]
// 008ef3de  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 008ef3e4  ffd2                 call edx
// 008ef3e6  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008ef3ea  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ef3ee  8b9698010000         mov edx, dword ptr [esi + 0x198]
// 008ef3f4  8bd8                 mov ebx, eax
// 008ef3f6  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ef3fa  2bf8                 sub edi, eax
// 008ef3fc  3bc1                 cmp eax, ecx
// 008ef3fe  899688010000         mov dword ptr [esi + 0x188], edx
// 008ef404  898684010000         mov dword ptr [esi + 0x184], eax
// 008ef40a  7d0a                 jge 0x8ef416
// 008ef40c  2bc1                 sub eax, ecx
// 008ef40e  03f8                 add edi, eax
// 008ef410  898e84010000         mov dword ptr [esi + 0x184], ecx
// 008ef416  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 008ef41c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008ef420  8d2c39               lea ebp, [ecx + edi]
// 008ef423  3be8                 cmp ebp, eax
// 008ef425  7e07                 jle 0x8ef42e
// 008ef427  2bc1                 sub eax, ecx
// 008ef429  83e804               sub eax, 4
// 008ef42c  8bf8                 mov edi, eax
// 008ef42e  03d3                 add edx, ebx
// 008ef430  3b542440             cmp edx, dword ptr [esp + 0x40]
// 008ef434  7e0e                 jle 0x8ef444
// 008ef436  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 008ef43c  2bc3                 sub eax, ebx
// 008ef43e  898688010000         mov dword ptr [esi + 0x188], eax
// 008ef444  56                   push esi
// 008ef445  8d4c2468             lea ecx, [esp + 0x68]
// 008ef449  e88852f0ff           call 0x7f46d6
// 008ef44e  8bce                 mov ecx, esi
// 008ef450  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008ef45b  e83051f1ff           call 0x804590
// 008ef460  8b10                 mov edx, dword ptr [eax]
// 008ef462  6a00                 push 0
// 008ef464  8bc8                 mov ecx, eax
// 008ef466  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008ef46c  56                   push esi
// 008ef46d  ffd0                 call eax
// 008ef46f  50                   push eax
// 008ef470  8d4c2468             lea ecx, [esp + 0x68]
// 008ef474  51                   push ecx
// 008ef475  8d4c245c             lea ecx, [esp + 0x5c]
// 008ef479  e8e2c1f5ff           call 0x84b660
// 008ef47e  8b16                 mov edx, dword ptr [esi]
// 008ef480  8b82e4010000         mov eax, dword ptr [edx + 0x1e4]
// 008ef486  8bce                 mov ecx, esi
// 008ef488  c684248000000001     mov byte ptr [esp + 0x80], 1
// 008ef490  ffd0                 call eax
// 008ef492  53                   push ebx
// 008ef493  57                   push edi
// 008ef494  6a00                 push 0
// 008ef496  6a00                 push 0
// 008ef498  8dae7c020000         lea ebp, [esi + 0x27c]
// 008ef49e  55                   push ebp
// 008ef49f  ff1538ca9800         call dword ptr [0x98ca38]
// 008ef4a5  8b8680020000         mov eax, dword ptr [esi + 0x280]
// 008ef4ab  8b4d00               mov ecx, dword ptr [ebp]
// 008ef4ae  8b9674020000         mov edx, dword ptr [esi + 0x274]
// 008ef4b4  83c003               add eax, 3
// 008ef4b7  83c104               add ecx, 4
// 008ef4ba  89442428             mov dword ptr [esp + 0x28], eax
// 008ef4be  894c2424             mov dword ptr [esp + 0x24], ecx
// 008ef4c2  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 008ef4ca  c744243003000000     mov dword ptr [esp + 0x30], 3
// 008ef4d2  8b8a84000000         mov ecx, dword ptr [edx + 0x84]
// 008ef4d8  8b5508               mov edx, dword ptr [ebp + 8]
// 008ef4db  2b5500               sub edx, dword ptr [ebp]
// 008ef4de  8d442424             lea eax, [esp + 0x24]
// 008ef4e2  50                   push eax
// 008ef4e3  6a40                 push 0x40
// 008ef4e5  52                   push edx
// 008ef4e6  8d442470             lea eax, [esp + 0x70]
// 008ef4ea  50                   push eax
// 008ef4eb  e8b0ebffff           call 0x8ee0a0
// 008ef4f0  81c6b4010000         add esi, 0x1b4
// 008ef4f6  56                   push esi
// 008ef4f7  ff159cca9800         call dword ptr [0x98ca9c]
// 008ef4fd  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 008ef504  8d4c2454             lea ecx, [esp + 0x54]
// 008ef508  893e                 mov dword ptr [esi], edi
// 008ef50a  895e04               mov dword ptr [esi + 4], ebx
// 008ef50d  c684248000000000     mov byte ptr [esp + 0x80], 0
// 008ef515  e8c6c1f5ff           call 0x84b6e0
// 008ef51a  8d4c2464             lea ecx, [esp + 0x64]
// 008ef51e  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 008ef529  e8a251f0ff           call 0x7f46d0
// 008ef52e  8bc6                 mov eax, esi
// 008ef530  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008ef534  64890d00000000       mov dword ptr fs:[0], ecx
// 008ef53b  59                   pop ecx
// 008ef53c  5f                   pop edi
// 008ef53d  5e                   pop esi
// 008ef53e  5d                   pop ebp
// 008ef53f  5b                   pop ebx
// 008ef540  83c470               add esp, 0x70
// 008ef543  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonTabPopupToolBar@@UAE?AVCSize@@HK@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp