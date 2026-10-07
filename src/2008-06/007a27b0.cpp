// roc 2008-06 007a27b0  unit: CXTCaptionButtonTheme  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a27b0
//
// 007a27b0  83ec14               sub esp, 0x14
// 007a27b3  8b01                 mov eax, dword ptr [ecx]
// 007a27b5  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a27b8  57                   push edi
// 007a27b9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007a27bd  57                   push edi
// 007a27be  894c2408             mov dword ptr [esp + 8], ecx
// 007a27c2  ffd2                 call edx
// 007a27c4  85c0                 test eax, eax
// 007a27c6  0f841a010000         je 0x7a28e6
// 007a27cc  53                   push ebx
// 007a27cd  55                   push ebp
// 007a27ce  56                   push esi
// 007a27cf  8b742428             mov esi, dword ptr [esp + 0x28]
// 007a27d3  8b4618               mov eax, dword ptr [esi + 0x18]
// 007a27d6  50                   push eax
// 007a27d7  e84c980100           call 0x7bc028
// 007a27dc  8d4e1c               lea ecx, [esi + 0x1c]
// 007a27df  51                   push ecx
// 007a27e0  8d542418             lea edx, [esp + 0x18]
// 007a27e4  52                   push edx
// 007a27e5  8be8                 mov ebp, eax
// 007a27e7  ff15702d8000         call dword ptr [0x802d70]
// 007a27ed  8b4610               mov eax, dword ptr [esi + 0x10]
// 007a27f0  8ad8                 mov bl, al
// 007a27f2  c1e802               shr eax, 2
// 007a27f5  2401                 and al, 1
// 007a27f7  8bcf                 mov ecx, edi
// 007a27f9  80e301               and bl, 1
// 007a27fc  8844242c             mov byte ptr [esp + 0x2c], al
// 007a2800  be01000000           mov esi, 1
// 007a2805  e836fbfeff           call 0x792340
// 007a280a  3c01                 cmp al, 1
// 007a280c  7505                 jne 0x7a2813
// 007a280e  be05000000           mov esi, 5
// 007a2813  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 007a281a  750b                 jne 0x7a2827
// 007a281c  ff15ac2d8000         call dword ptr [0x802dac]
// 007a2822  3b4720               cmp eax, dword ptr [edi + 0x20]
// 007a2825  7505                 jne 0x7a282c
// 007a2827  be02000000           mov esi, 2
// 007a282c  84db                 test bl, bl
// 007a282e  7506                 jne 0x7a2836
// 007a2830  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 007a2834  7405                 je 0x7a283b
// 007a2836  be03000000           mov esi, 3
// 007a283b  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 007a2840  7405                 je 0x7a2847
// 007a2842  be04000000           mov esi, 4
// 007a2847  8b7f20               mov edi, dword ptr [edi + 0x20]
// 007a284a  85ed                 test ebp, ebp
// 007a284c  7504                 jne 0x7a2852
// 007a284e  33db                 xor ebx, ebx
// 007a2850  eb03                 jmp 0x7a2855
// 007a2852  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007a2855  57                   push edi
// 007a2856  ff15f82d8000         call dword ptr [0x802df8]
// 007a285c  50                   push eax
// 007a285d  e87ce3efff           call 0x6a0bde
// 007a2862  8b4020               mov eax, dword ptr [eax + 0x20]
// 007a2865  57                   push edi
// 007a2866  53                   push ebx
// 007a2867  6835010000           push 0x135
// 007a286c  50                   push eax
// 007a286d  ff15142e8000         call dword ptr [0x802e14]
// 007a2873  85c0                 test eax, eax
// 007a2875  7427                 je 0x7a289e
// 007a2877  85ed                 test ebp, ebp
// 007a2879  7511                 jne 0x7a288c
// 007a287b  50                   push eax
// 007a287c  8d542418             lea edx, [esp + 0x18]
// 007a2880  33c9                 xor ecx, ecx
// 007a2882  52                   push edx
// 007a2883  51                   push ecx
// 007a2884  ff15e02b8000         call dword ptr [0x802be0]
// 007a288a  eb2d                 jmp 0x7a28b9
// 007a288c  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007a288f  50                   push eax
// 007a2890  8d542418             lea edx, [esp + 0x18]
// 007a2894  52                   push edx
// 007a2895  51                   push ecx
// 007a2896  ff15e02b8000         call dword ptr [0x802be0]
// 007a289c  eb1b                 jmp 0x7a28b9
// 007a289e  e89dd4f3ff           call 0x6dfd40
// 007a28a3  6a0f                 push 0xf
// 007a28a5  8bc8                 mov ecx, eax
// 007a28a7  e874ccf3ff           call 0x6df520
// 007a28ac  50                   push eax
// 007a28ad  8d442418             lea eax, [esp + 0x18]
// 007a28b1  50                   push eax
// 007a28b2  8bcd                 mov ecx, ebp
// 007a28b4  e8a5eaefff           call 0x6a135e
// 007a28b9  85ed                 test ebp, ebp
// 007a28bb  7403                 je 0x7a28c0
// 007a28bd  8b6d04               mov ebp, dword ptr [ebp + 4]
// 007a28c0  6a00                 push 0
// 007a28c2  8d4c2418             lea ecx, [esp + 0x18]
// 007a28c6  51                   push ecx
// 007a28c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a28cb  56                   push esi
// 007a28cc  6a01                 push 1
// 007a28ce  55                   push ebp
// 007a28cf  83c174               add ecx, 0x74
// 007a28d2  e8d957f7ff           call 0x7180b0
// 007a28d7  5e                   pop esi
// 007a28d8  f7d8                 neg eax
// 007a28da  5d                   pop ebp
// 007a28db  1bc0                 sbb eax, eax
// 007a28dd  5b                   pop ebx
// 007a28de  40                   inc eax
// 007a28df  5f                   pop edi
// 007a28e0  83c414               add esp, 0x14
// 007a28e3  c20800               ret 8
// 007a28e6  33c0                 xor eax, eax
// 007a28e8  5f                   pop edi
// 007a28e9  83c414               add esp, 0x14
// 007a28ec  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawWinThemeBackground@CXTButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
