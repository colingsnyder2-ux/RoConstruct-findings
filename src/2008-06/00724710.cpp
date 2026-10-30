// from server: 100% by auto
// roc 2008-06 00724710  unit: CXTPRibbonBar  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00724710
//
// 00724710  53                   push ebx
// 00724711  56                   push esi
// 00724712  57                   push edi
// 00724713  8bf1                 mov esi, ecx
// 00724715  e8f606f9ff           call 0x6b4e10
// 0072471a  8bc8                 mov ecx, eax
// 0072471c  e8bffef7ff           call 0x6a45e0
// 00724721  8bf8                 mov edi, eax
// 00724723  837f0400             cmp dword ptr [edi + 4], 0
// 00724727  7f53                 jg 0x72477c
// 00724729  8b4620               mov eax, dword ptr [esi + 0x20]
// 0072472c  50                   push eax
// 0072472d  e85e87ffff           call 0x71ce90
// 00724732  83c404               add esp, 4
// 00724735  85c0                 test eax, eax
// 00724737  7443                 je 0x72477c
// 00724739  56                   push esi
// 0072473a  8bcf                 mov ecx, edi
// 0072473c  e8cf88ffff           call 0x71d010
// 00724741  85c0                 test eax, eax
// 00724743  7537                 jne 0x72477c
// 00724745  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 0072474c  752e                 jne 0x72477c
// 0072474e  8bce                 mov ecx, esi
// 00724750  33db                 xor ebx, ebx
// 00724752  e869d9ffff           call 0x7220c0
// 00724757  39984c060000         cmp dword ptr [eax + 0x64c], ebx
// 0072475d  7422                 je 0x724781
// 0072475f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00724763  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 00724769  8b5208               mov edx, dword ptr [edx + 8]
// 0072476c  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00724772  50                   push eax
// 00724773  8b442418             mov eax, dword ptr [esp + 0x18]
// 00724777  50                   push eax
// 00724778  ffd2                 call edx
// 0072477a  eb07                 jmp 0x724783
// 0072477c  bb01000000           mov ebx, 1
// 00724781  33c0                 xor eax, eax
// 00724783  3b86d8010000         cmp eax, dword ptr [esi + 0x1d8]
// 00724789  7420                 je 0x7247ab
// 0072478b  50                   push eax
// 0072478c  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00724792  e8d92a0700           call 0x797270
// 00724797  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0072479e  740b                 je 0x7247ab
// 007247a0  8b4620               mov eax, dword ptr [esi + 0x20]
// 007247a3  50                   push eax
// 007247a4  8bcf                 mov ecx, edi
// 007247a6  e81588ffff           call 0x71cfc0
// 007247ab  85db                 test ebx, ebx
// 007247ad  7523                 jne 0x7247d2
// 007247af  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 007247b5  85c0                 test eax, eax
// 007247b7  7419                 je 0x7247d2
// 007247b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007247bd  8b542414             mov edx, dword ptr [esp + 0x14]
// 007247c1  51                   push ecx
// 007247c2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007247c5  52                   push edx
// 007247c6  51                   push ecx
// 007247c7  8d8884010000         lea ecx, [eax + 0x184]
// 007247cd  e8fe7f0500           call 0x77c7d0
// 007247d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007247d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 007247da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007247de  52                   push edx
// 007247df  50                   push eax
// 007247e0  51                   push ecx
// 007247e1  8bce                 mov ecx, esi
// 007247e3  e8380ff9ff           call 0x6b5720
// 007247e8  5f                   pop edi
// 007247e9  5e                   pop esi
// 007247ea  5b                   pop ebx
// 007247eb  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseMove@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
