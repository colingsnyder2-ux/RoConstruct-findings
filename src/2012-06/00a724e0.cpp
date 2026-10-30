// roc 2012-06 00a724e0  unit: CXTPRibbonGroup  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a724e0
//
// 00a724e0  83ec14               sub esp, 0x14
// 00a724e3  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00a724e9  8b4804               mov ecx, dword ptr [eax + 4]
// 00a724ec  8b00                 mov eax, dword ptr [eax]
// 00a724ee  56                   push esi
// 00a724ef  33d2                 xor edx, edx
// 00a724f1  57                   push edi
// 00a724f2  33ff                 xor edi, edi
// 00a724f4  33f6                 xor esi, esi
// 00a724f6  3bca                 cmp ecx, edx
// 00a724f8  897c2410             mov dword ptr [esp + 0x10], edi
// 00a724fc  89542414             mov dword ptr [esp + 0x14], edx
// 00a72500  89542408             mov dword ptr [esp + 8], edx
// 00a72504  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a72508  8954240c             mov dword ptr [esp + 0xc], edx
// 00a7250c  0f8e88000000         jle 0xa7259a
// 00a72512  53                   push ebx
// 00a72513  55                   push ebp
// 00a72514  8d782c               lea edi, [eax + 0x2c]
// 00a72517  eb0b                 jmp 0xa72524
// 00a72519  8da42400000000       lea esp, [esp]
// 00a72520  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a72524  833f00               cmp dword ptr [edi], 0
// 00a72527  8b6ff4               mov ebp, dword ptr [edi - 0xc]
// 00a7252a  8b5ff8               mov ebx, dword ptr [edi - 8]
// 00a7252d  740c                 je 0xa7253b
// 00a7252f  33f6                 xor esi, esi
// 00a72531  03542410             add edx, dword ptr [esp + 0x10]
// 00a72535  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a72539  eb10                 jmp 0xa7254b
// 00a7253b  837f0400             cmp dword ptr [edi + 4], 0
// 00a7253f  740a                 je 0xa7254b
// 00a72541  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a72546  7e03                 jle 0xa7254b
// 00a72548  83c603               add esi, 3
// 00a7254b  8d0413               lea eax, [ebx + edx]
// 00a7254e  50                   push eax
// 00a7254f  8d4c2e02             lea ecx, [esi + ebp + 2]
// 00a72553  51                   push ecx
// 00a72554  52                   push edx
// 00a72555  8d5602               lea edx, [esi + 2]
// 00a72558  52                   push edx
// 00a72559  8d47d4               lea eax, [edi - 0x2c]
// 00a7255c  50                   push eax
// 00a7255d  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a72563  03f5                 add esi, ebp
// 00a72565  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00a72569  7f04                 jg 0xa7256f
// 00a7256b  895c2410             mov dword ptr [esp + 0x10], ebx
// 00a7256f  39742418             cmp dword ptr [esp + 0x18], esi
// 00a72573  7f04                 jg 0xa72579
// 00a72575  89742418             mov dword ptr [esp + 0x18], esi
// 00a72579  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a7257d  40                   inc eax
// 00a7257e  83c744               add edi, 0x44
// 00a72581  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00a72585  89442414             mov dword ptr [esp + 0x14], eax
// 00a72589  7c95                 jl 0xa72520
// 00a7258b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a7258f  5d                   pop ebp
// 00a72590  5b                   pop ebx
// 00a72591  5f                   pop edi
// 00a72592  83c004               add eax, 4
// 00a72595  5e                   pop esi
// 00a72596  83c414               add esp, 0x14
// 00a72599  c3                   ret 
// 00a7259a  8d4704               lea eax, [edi + 4]
// 00a7259d  5f                   pop edi
// 00a7259e  5e                   pop esi
// 00a7259f  83c414               add esp, 0x14
// 00a725a2  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_GetSizeSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
