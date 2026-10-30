// roc 2009-06 00811840  unit: CXTPRibbonGroup  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00811840
//
// 00811840  83ec14               sub esp, 0x14
// 00811843  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00811849  8b4804               mov ecx, dword ptr [eax + 4]
// 0081184c  8b00                 mov eax, dword ptr [eax]
// 0081184e  56                   push esi
// 0081184f  33d2                 xor edx, edx
// 00811851  57                   push edi
// 00811852  33ff                 xor edi, edi
// 00811854  33f6                 xor esi, esi
// 00811856  3bca                 cmp ecx, edx
// 00811858  897c2410             mov dword ptr [esp + 0x10], edi
// 0081185c  89542414             mov dword ptr [esp + 0x14], edx
// 00811860  89542408             mov dword ptr [esp + 8], edx
// 00811864  894c2418             mov dword ptr [esp + 0x18], ecx
// 00811868  8954240c             mov dword ptr [esp + 0xc], edx
// 0081186c  0f8e88000000         jle 0x8118fa
// 00811872  53                   push ebx
// 00811873  55                   push ebp
// 00811874  8d782c               lea edi, [eax + 0x2c]
// 00811877  eb0b                 jmp 0x811884
// 00811879  8da42400000000       lea esp, [esp]
// 00811880  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00811884  833f00               cmp dword ptr [edi], 0
// 00811887  8b6ff4               mov ebp, dword ptr [edi - 0xc]
// 0081188a  8b5ff8               mov ebx, dword ptr [edi - 8]
// 0081188d  740c                 je 0x81189b
// 0081188f  33f6                 xor esi, esi
// 00811891  03542410             add edx, dword ptr [esp + 0x10]
// 00811895  8954241c             mov dword ptr [esp + 0x1c], edx
// 00811899  eb10                 jmp 0x8118ab
// 0081189b  837f0400             cmp dword ptr [edi + 4], 0
// 0081189f  740a                 je 0x8118ab
// 008118a1  837c241400           cmp dword ptr [esp + 0x14], 0
// 008118a6  7e03                 jle 0x8118ab
// 008118a8  83c603               add esi, 3
// 008118ab  8d0413               lea eax, [ebx + edx]
// 008118ae  50                   push eax
// 008118af  8d4c2e02             lea ecx, [esi + ebp + 2]
// 008118b3  51                   push ecx
// 008118b4  52                   push edx
// 008118b5  8d5602               lea edx, [esi + 2]
// 008118b8  52                   push edx
// 008118b9  8d47d4               lea eax, [edi - 0x2c]
// 008118bc  50                   push eax
// 008118bd  ff15a4ed8900         call dword ptr [0x89eda4]
// 008118c3  03f5                 add esi, ebp
// 008118c5  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008118c9  7f04                 jg 0x8118cf
// 008118cb  895c2410             mov dword ptr [esp + 0x10], ebx
// 008118cf  39742418             cmp dword ptr [esp + 0x18], esi
// 008118d3  7f04                 jg 0x8118d9
// 008118d5  89742418             mov dword ptr [esp + 0x18], esi
// 008118d9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008118dd  40                   inc eax
// 008118de  83c744               add edi, 0x44
// 008118e1  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008118e5  89442414             mov dword ptr [esp + 0x14], eax
// 008118e9  7c95                 jl 0x811880
// 008118eb  8b442418             mov eax, dword ptr [esp + 0x18]
// 008118ef  5d                   pop ebp
// 008118f0  5b                   pop ebx
// 008118f1  5f                   pop edi
// 008118f2  83c004               add eax, 4
// 008118f5  5e                   pop esi
// 008118f6  83c414               add esp, 0x14
// 008118f9  c3                   ret 
// 008118fa  8d4704               lea eax, [edi + 4]
// 008118fd  5f                   pop edi
// 008118fe  5e                   pop esi
// 008118ff  83c414               add esp, 0x14
// 00811902  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_GetSizeSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
