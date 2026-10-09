// roc 2009-12 008ed390  unit: CXTPRibbonGroup  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ed390
//
// 008ed390  83ec14               sub esp, 0x14
// 008ed393  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008ed399  8b4804               mov ecx, dword ptr [eax + 4]
// 008ed39c  8b00                 mov eax, dword ptr [eax]
// 008ed39e  56                   push esi
// 008ed39f  33d2                 xor edx, edx
// 008ed3a1  57                   push edi
// 008ed3a2  33ff                 xor edi, edi
// 008ed3a4  33f6                 xor esi, esi
// 008ed3a6  3bca                 cmp ecx, edx
// 008ed3a8  897c2410             mov dword ptr [esp + 0x10], edi
// 008ed3ac  89542414             mov dword ptr [esp + 0x14], edx
// 008ed3b0  89542408             mov dword ptr [esp + 8], edx
// 008ed3b4  894c2418             mov dword ptr [esp + 0x18], ecx
// 008ed3b8  8954240c             mov dword ptr [esp + 0xc], edx
// 008ed3bc  0f8e88000000         jle 0x8ed44a
// 008ed3c2  53                   push ebx
// 008ed3c3  55                   push ebp
// 008ed3c4  8d782c               lea edi, [eax + 0x2c]
// 008ed3c7  eb0b                 jmp 0x8ed3d4
// 008ed3c9  8da42400000000       lea esp, [esp]
// 008ed3d0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008ed3d4  833f00               cmp dword ptr [edi], 0
// 008ed3d7  8b6ff4               mov ebp, dword ptr [edi - 0xc]
// 008ed3da  8b5ff8               mov ebx, dword ptr [edi - 8]
// 008ed3dd  740c                 je 0x8ed3eb
// 008ed3df  33f6                 xor esi, esi
// 008ed3e1  03542410             add edx, dword ptr [esp + 0x10]
// 008ed3e5  8954241c             mov dword ptr [esp + 0x1c], edx
// 008ed3e9  eb10                 jmp 0x8ed3fb
// 008ed3eb  837f0400             cmp dword ptr [edi + 4], 0
// 008ed3ef  740a                 je 0x8ed3fb
// 008ed3f1  837c241400           cmp dword ptr [esp + 0x14], 0
// 008ed3f6  7e03                 jle 0x8ed3fb
// 008ed3f8  83c603               add esi, 3
// 008ed3fb  8d0413               lea eax, [ebx + edx]
// 008ed3fe  50                   push eax
// 008ed3ff  8d4c2e02             lea ecx, [esi + ebp + 2]
// 008ed403  51                   push ecx
// 008ed404  52                   push edx
// 008ed405  8d5602               lea edx, [esi + 2]
// 008ed408  52                   push edx
// 008ed409  8d47d4               lea eax, [edi - 0x2c]
// 008ed40c  50                   push eax
// 008ed40d  ff1538ca9800         call dword ptr [0x98ca38]
// 008ed413  03f5                 add esi, ebp
// 008ed415  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008ed419  7f04                 jg 0x8ed41f
// 008ed41b  895c2410             mov dword ptr [esp + 0x10], ebx
// 008ed41f  39742418             cmp dword ptr [esp + 0x18], esi
// 008ed423  7f04                 jg 0x8ed429
// 008ed425  89742418             mov dword ptr [esp + 0x18], esi
// 008ed429  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ed42d  40                   inc eax
// 008ed42e  83c744               add edi, 0x44
// 008ed431  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008ed435  89442414             mov dword ptr [esp + 0x14], eax
// 008ed439  7c95                 jl 0x8ed3d0
// 008ed43b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ed43f  5d                   pop ebp
// 008ed440  5b                   pop ebx
// 008ed441  5f                   pop edi
// 008ed442  83c004               add eax, 4
// 008ed445  5e                   pop esi
// 008ed446  83c414               add esp, 0x14
// 008ed449  c3                   ret 
// 008ed44a  8d4704               lea eax, [edi + 4]
// 008ed44d  5f                   pop edi
// 008ed44e  5e                   pop esi
// 008ed44f  83c414               add esp, 0x14
// 008ed452  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_GetSizeSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
