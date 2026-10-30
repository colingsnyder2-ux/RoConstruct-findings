// roc 2011-06 008fa1b0  unit: CXTPRibbonGroup  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fa1b0
//
// 008fa1b0  83ec14               sub esp, 0x14
// 008fa1b3  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008fa1b9  8b4804               mov ecx, dword ptr [eax + 4]
// 008fa1bc  8b00                 mov eax, dword ptr [eax]
// 008fa1be  56                   push esi
// 008fa1bf  33d2                 xor edx, edx
// 008fa1c1  57                   push edi
// 008fa1c2  33ff                 xor edi, edi
// 008fa1c4  33f6                 xor esi, esi
// 008fa1c6  3bca                 cmp ecx, edx
// 008fa1c8  897c2410             mov dword ptr [esp + 0x10], edi
// 008fa1cc  89542414             mov dword ptr [esp + 0x14], edx
// 008fa1d0  89542408             mov dword ptr [esp + 8], edx
// 008fa1d4  894c2418             mov dword ptr [esp + 0x18], ecx
// 008fa1d8  8954240c             mov dword ptr [esp + 0xc], edx
// 008fa1dc  0f8e88000000         jle 0x8fa26a
// 008fa1e2  53                   push ebx
// 008fa1e3  55                   push ebp
// 008fa1e4  8d782c               lea edi, [eax + 0x2c]
// 008fa1e7  eb0b                 jmp 0x8fa1f4
// 008fa1e9  8da42400000000       lea esp, [esp]
// 008fa1f0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008fa1f4  833f00               cmp dword ptr [edi], 0
// 008fa1f7  8b6ff4               mov ebp, dword ptr [edi - 0xc]
// 008fa1fa  8b5ff8               mov ebx, dword ptr [edi - 8]
// 008fa1fd  740c                 je 0x8fa20b
// 008fa1ff  33f6                 xor esi, esi
// 008fa201  03542410             add edx, dword ptr [esp + 0x10]
// 008fa205  8954241c             mov dword ptr [esp + 0x1c], edx
// 008fa209  eb10                 jmp 0x8fa21b
// 008fa20b  837f0400             cmp dword ptr [edi + 4], 0
// 008fa20f  740a                 je 0x8fa21b
// 008fa211  837c241400           cmp dword ptr [esp + 0x14], 0
// 008fa216  7e03                 jle 0x8fa21b
// 008fa218  83c603               add esi, 3
// 008fa21b  8d0413               lea eax, [ebx + edx]
// 008fa21e  50                   push eax
// 008fa21f  8d4c2e02             lea ecx, [esi + ebp + 2]
// 008fa223  51                   push ecx
// 008fa224  52                   push edx
// 008fa225  8d5602               lea edx, [esi + 2]
// 008fa228  52                   push edx
// 008fa229  8d47d4               lea eax, [edi - 0x2c]
// 008fa22c  50                   push eax
// 008fa22d  ff15c81ba400         call dword ptr [0xa41bc8]
// 008fa233  03f5                 add esi, ebp
// 008fa235  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008fa239  7f04                 jg 0x8fa23f
// 008fa23b  895c2410             mov dword ptr [esp + 0x10], ebx
// 008fa23f  39742418             cmp dword ptr [esp + 0x18], esi
// 008fa243  7f04                 jg 0x8fa249
// 008fa245  89742418             mov dword ptr [esp + 0x18], esi
// 008fa249  8b442414             mov eax, dword ptr [esp + 0x14]
// 008fa24d  40                   inc eax
// 008fa24e  83c744               add edi, 0x44
// 008fa251  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008fa255  89442414             mov dword ptr [esp + 0x14], eax
// 008fa259  7c95                 jl 0x8fa1f0
// 008fa25b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008fa25f  5d                   pop ebp
// 008fa260  5b                   pop ebx
// 008fa261  5f                   pop edi
// 008fa262  83c004               add eax, 4
// 008fa265  5e                   pop esi
// 008fa266  83c414               add esp, 0x14
// 008fa269  c3                   ret 
// 008fa26a  8d4704               lea eax, [edi + 4]
// 008fa26d  5f                   pop edi
// 008fa26e  5e                   pop esi
// 008fa26f  83c414               add esp, 0x14
// 008fa272  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_GetSizeSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
