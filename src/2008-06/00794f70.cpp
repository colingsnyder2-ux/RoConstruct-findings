// roc 2008-06 00794f70  unit: CXTPRibbonGroup  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794f70
//
// 00794f70  83ec14               sub esp, 0x14
// 00794f73  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00794f79  8b4804               mov ecx, dword ptr [eax + 4]
// 00794f7c  8b00                 mov eax, dword ptr [eax]
// 00794f7e  56                   push esi
// 00794f7f  33d2                 xor edx, edx
// 00794f81  57                   push edi
// 00794f82  33ff                 xor edi, edi
// 00794f84  33f6                 xor esi, esi
// 00794f86  3bca                 cmp ecx, edx
// 00794f88  897c2410             mov dword ptr [esp + 0x10], edi
// 00794f8c  89542414             mov dword ptr [esp + 0x14], edx
// 00794f90  89542408             mov dword ptr [esp + 8], edx
// 00794f94  894c2418             mov dword ptr [esp + 0x18], ecx
// 00794f98  8954240c             mov dword ptr [esp + 0xc], edx
// 00794f9c  0f8e88000000         jle 0x79502a
// 00794fa2  53                   push ebx
// 00794fa3  55                   push ebp
// 00794fa4  8d782c               lea edi, [eax + 0x2c]
// 00794fa7  eb0b                 jmp 0x794fb4
// 00794fa9  8da42400000000       lea esp, [esp]
// 00794fb0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00794fb4  833f00               cmp dword ptr [edi], 0
// 00794fb7  8b6ff4               mov ebp, dword ptr [edi - 0xc]
// 00794fba  8b5ff8               mov ebx, dword ptr [edi - 8]
// 00794fbd  740c                 je 0x794fcb
// 00794fbf  33f6                 xor esi, esi
// 00794fc1  03542410             add edx, dword ptr [esp + 0x10]
// 00794fc5  8954241c             mov dword ptr [esp + 0x1c], edx
// 00794fc9  eb10                 jmp 0x794fdb
// 00794fcb  837f0400             cmp dword ptr [edi + 4], 0
// 00794fcf  740a                 je 0x794fdb
// 00794fd1  837c241400           cmp dword ptr [esp + 0x14], 0
// 00794fd6  7e03                 jle 0x794fdb
// 00794fd8  83c603               add esi, 3
// 00794fdb  8d0413               lea eax, [ebx + edx]
// 00794fde  50                   push eax
// 00794fdf  8d4c2e02             lea ecx, [esi + ebp + 2]
// 00794fe3  51                   push ecx
// 00794fe4  52                   push edx
// 00794fe5  8d5602               lea edx, [esi + 2]
// 00794fe8  52                   push edx
// 00794fe9  8d47d4               lea eax, [edi - 0x2c]
// 00794fec  50                   push eax
// 00794fed  ff15102d8000         call dword ptr [0x802d10]
// 00794ff3  03f5                 add esi, ebp
// 00794ff5  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00794ff9  7f04                 jg 0x794fff
// 00794ffb  895c2410             mov dword ptr [esp + 0x10], ebx
// 00794fff  39742418             cmp dword ptr [esp + 0x18], esi
// 00795003  7f04                 jg 0x795009
// 00795005  89742418             mov dword ptr [esp + 0x18], esi
// 00795009  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079500d  40                   inc eax
// 0079500e  83c744               add edi, 0x44
// 00795011  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00795015  89442414             mov dword ptr [esp + 0x14], eax
// 00795019  7c95                 jl 0x794fb0
// 0079501b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079501f  5d                   pop ebp
// 00795020  5b                   pop ebx
// 00795021  5f                   pop edi
// 00795022  83c004               add eax, 4
// 00795025  5e                   pop esi
// 00795026  83c414               add esp, 0x14
// 00795029  c3                   ret 
// 0079502a  8d4704               lea eax, [edi + 4]
// 0079502d  5f                   pop edi
// 0079502e  5e                   pop esi
// 0079502f  83c414               add esp, 0x14
// 00795032  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_GetSizeSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
