// roc 2009-12 008d4b10  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d4b10
//
// 008d4b10  83ec10               sub esp, 0x10
// 008d4b13  53                   push ebx
// 008d4b14  55                   push ebp
// 008d4b15  56                   push esi
// 008d4b16  57                   push edi
// 008d4b17  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008d4b1b  8b07                 mov eax, dword ptr [edi]
// 008d4b1d  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d4b20  8bd9                 mov ebx, ecx
// 008d4b22  8bcf                 mov ecx, edi
// 008d4b24  ffd2                 call edx
// 008d4b26  8b742428             mov esi, dword ptr [esp + 0x28]
// 008d4b2a  50                   push eax
// 008d4b2b  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008d4b2e  8b5050               mov edx, dword ptr [eax + 0x50]
// 008d4b31  83c050               add eax, 0x50
// 008d4b34  83ec10               sub esp, 0x10
// 008d4b37  8bcc                 mov ecx, esp
// 008d4b39  8911                 mov dword ptr [ecx], edx
// 008d4b3b  8b5004               mov edx, dword ptr [eax + 4]
// 008d4b3e  895104               mov dword ptr [ecx + 4], edx
// 008d4b41  8b5008               mov edx, dword ptr [eax + 8]
// 008d4b44  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d4b47  895108               mov dword ptr [ecx + 8], edx
// 008d4b4a  56                   push esi
// 008d4b4b  89410c               mov dword ptr [ecx + 0xc], eax
// 008d4b4e  e82dfcffff           call 0x8d4780
// 008d4b53  8b0e                 mov ecx, dword ptr [esi]
// 008d4b55  8b13                 mov edx, dword ptr [ebx]
// 008d4b57  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d4b5a  83c418               add esp, 0x18
// 008d4b5d  57                   push edi
// 008d4b5e  83ec10               sub esp, 0x10
// 008d4b61  8bc4                 mov eax, esp
// 008d4b63  8908                 mov dword ptr [eax], ecx
// 008d4b65  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d4b68  894804               mov dword ptr [eax + 4], ecx
// 008d4b6b  8b4e08               mov ecx, dword ptr [esi + 8]
// 008d4b6e  894808               mov dword ptr [eax + 8], ecx
// 008d4b71  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d4b74  89480c               mov dword ptr [eax + 0xc], ecx
// 008d4b77  8d442424             lea eax, [esp + 0x24]
// 008d4b7b  50                   push eax
// 008d4b7c  8bcb                 mov ecx, ebx
// 008d4b7e  ffd2                 call edx
// 008d4b80  8b08                 mov ecx, dword ptr [eax]
// 008d4b82  890e                 mov dword ptr [esi], ecx
// 008d4b84  8b5004               mov edx, dword ptr [eax + 4]
// 008d4b87  895604               mov dword ptr [esi + 4], edx
// 008d4b8a  8b4808               mov ecx, dword ptr [eax + 8]
// 008d4b8d  894e08               mov dword ptr [esi + 8], ecx
// 008d4b90  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d4b93  89560c               mov dword ptr [esi + 0xc], edx
// 008d4b96  8b03                 mov eax, dword ptr [ebx]
// 008d4b98  8b5014               mov edx, dword ptr [eax + 0x14]
// 008d4b9b  8d4c2410             lea ecx, [esp + 0x10]
// 008d4b9f  51                   push ecx
// 008d4ba0  8bcb                 mov ecx, ebx
// 008d4ba2  ffd2                 call edx
// 008d4ba4  8be8                 mov ebp, eax
// 008d4ba6  8b07                 mov eax, dword ptr [edi]
// 008d4ba8  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d4bab  8bcf                 mov ecx, edi
// 008d4bad  ffd2                 call edx
// 008d4baf  8b4d00               mov ecx, dword ptr [ebp]
// 008d4bb2  8b5504               mov edx, dword ptr [ebp + 4]
// 008d4bb5  50                   push eax
// 008d4bb6  83ec10               sub esp, 0x10
// 008d4bb9  8bc4                 mov eax, esp
// 008d4bbb  8908                 mov dword ptr [eax], ecx
// 008d4bbd  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008d4bc0  895004               mov dword ptr [eax + 4], edx
// 008d4bc3  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008d4bc6  894808               mov dword ptr [eax + 8], ecx
// 008d4bc9  56                   push esi
// 008d4bca  89500c               mov dword ptr [eax + 0xc], edx
// 008d4bcd  e8aefbffff           call 0x8d4780
// 008d4bd2  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008d4bd5  83c418               add esp, 0x18
// 008d4bd8  83783800             cmp dword ptr [eax + 0x38], 0
// 008d4bdc  752a                 jne 0x8d4c08
// 008d4bde  8b17                 mov edx, dword ptr [edi]
// 008d4be0  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d4be3  8bcf                 mov ecx, edi
// 008d4be5  bd02000000           mov ebp, 2
// 008d4bea  ffd0                 call eax
// 008d4bec  50                   push eax
// 008d4bed  83ec10               sub esp, 0x10
// 008d4bf0  8bc4                 mov eax, esp
// 008d4bf2  8bcd                 mov ecx, ebp
// 008d4bf4  8928                 mov dword ptr [eax], ebp
// 008d4bf6  894804               mov dword ptr [eax + 4], ecx
// 008d4bf9  894808               mov dword ptr [eax + 8], ecx
// 008d4bfc  56                   push esi
// 008d4bfd  89480c               mov dword ptr [eax + 0xc], ecx
// 008d4c00  e87bfbffff           call 0x8d4780
// 008d4c05  83c418               add esp, 0x18
// 008d4c08  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008d4c0b  83793801             cmp dword ptr [ecx + 0x38], 1
// 008d4c0f  7530                 jne 0x8d4c41
// 008d4c11  8b17                 mov edx, dword ptr [edi]
// 008d4c13  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d4c16  33db                 xor ebx, ebx
// 008d4c18  8bcf                 mov ecx, edi
// 008d4c1a  8d6b02               lea ebp, [ebx + 2]
// 008d4c1d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008d4c21  ffd0                 call eax
// 008d4c23  50                   push eax
// 008d4c24  83ec10               sub esp, 0x10
// 008d4c27  8bc4                 mov eax, esp
// 008d4c29  8918                 mov dword ptr [eax], ebx
// 008d4c2b  33c9                 xor ecx, ecx
// 008d4c2d  896804               mov dword ptr [eax + 4], ebp
// 008d4c30  894808               mov dword ptr [eax + 8], ecx
// 008d4c33  8bcb                 mov ecx, ebx
// 008d4c35  56                   push esi
// 008d4c36  89480c               mov dword ptr [eax + 0xc], ecx
// 008d4c39  e842fbffff           call 0x8d4780
// 008d4c3e  83c418               add esp, 0x18
// 008d4c41  5f                   pop edi
// 008d4c42  5e                   pop esi
// 008d4c43  5d                   pop ebp
// 008d4c44  5b                   pop ebx
// 008d4c45  83c410               add esp, 0x10
// 008d4c48  c20800               ret 8
// copied from an identical function in another client (function ?AdjustClientRect@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp