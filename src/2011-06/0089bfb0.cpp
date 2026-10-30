// roc 2011-06 0089bfb0  unit: CXTPControlEdit  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089bfb0
//
// 0089bfb0  83ec30               sub esp, 0x30
// 0089bfb3  56                   push esi
// 0089bfb4  8bf1                 mov esi, ecx
// 0089bfb6  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0089bfbc  83f8ff               cmp eax, -1
// 0089bfbf  750f                 jne 0x89bfd0
// 0089bfc1  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0089bfc7  85c9                 test ecx, ecx
// 0089bfc9  7405                 je 0x89bfd0
// 0089bfcb  e8900cf7ff           call 0x80cc60
// 0089bfd0  85c0                 test eax, eax
// 0089bfd2  0f8410010000         je 0x89c0e8
// 0089bfd8  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0089bfdf  0f8403010000         je 0x89c0e8
// 0089bfe5  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 0089bfec  0f84f6000000         je 0x89c0e8
// 0089bff2  53                   push ebx
// 0089bff3  57                   push edi
// 0089bff4  8d44240c             lea eax, [esp + 0xc]
// 0089bff8  50                   push eax
// 0089bff9  8bce                 mov ecx, esi
// 0089bffb  e850ffffff           call 0x89bf50
// 0089c000  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089c004  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0089c008  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089c00c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089c010  89442420             mov dword ptr [esp + 0x20], eax
// 0089c014  03c3                 add eax, ebx
// 0089c016  99                   cdq 
// 0089c017  2bc2                 sub eax, edx
// 0089c019  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089c01d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0089c021  d1f8                 sar eax, 1
// 0089c023  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0089c027  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089c02b  51                   push ecx
// 0089c02c  8944242c             mov dword ptr [esp + 0x2c], eax
// 0089c030  89442434             mov dword ptr [esp + 0x34], eax
// 0089c034  52                   push edx
// 0089c035  8d442424             lea eax, [esp + 0x24]
// 0089c039  897c242c             mov dword ptr [esp + 0x2c], edi
// 0089c03d  897c243c             mov dword ptr [esp + 0x3c], edi
// 0089c041  8b3d101ca400         mov edi, dword ptr [0xa41c10]
// 0089c047  50                   push eax
// 0089c048  895c2444             mov dword ptr [esp + 0x44], ebx
// 0089c04c  ffd7                 call edi
// 0089c04e  bb03000000           mov ebx, 3
// 0089c053  85c0                 test eax, eax
// 0089c055  7420                 je 0x89c077
// 0089c057  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 0089c05d  7418                 je 0x89c077
// 0089c05f  6a00                 push 0
// 0089c061  8bce                 mov ecx, esi
// 0089c063  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 0089c069  e8220df7ff           call 0x80cd90
// 0089c06e  5f                   pop edi
// 0089c06f  5b                   pop ebx
// 0089c070  5e                   pop esi
// 0089c071  83c430               add esp, 0x30
// 0089c074  c20800               ret 8
// 0089c077  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089c07b  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089c07f  51                   push ecx
// 0089c080  52                   push edx
// 0089c081  8d442434             lea eax, [esp + 0x34]
// 0089c085  50                   push eax
// 0089c086  ffd7                 call edi
// 0089c088  b904000000           mov ecx, 4
// 0089c08d  85c0                 test eax, eax
// 0089c08f  7420                 je 0x89c0b1
// 0089c091  398ea4000000         cmp dword ptr [esi + 0xa4], ecx
// 0089c097  7418                 je 0x89c0b1
// 0089c099  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 0089c09f  6a00                 push 0
// 0089c0a1  8bce                 mov ecx, esi
// 0089c0a3  e8e80cf7ff           call 0x80cd90
// 0089c0a8  5f                   pop edi
// 0089c0a9  5b                   pop ebx
// 0089c0aa  5e                   pop esi
// 0089c0ab  83c430               add esp, 0x30
// 0089c0ae  c20800               ret 8
// 0089c0b1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0089c0b7  3bc3                 cmp eax, ebx
// 0089c0b9  7404                 je 0x89c0bf
// 0089c0bb  3bc1                 cmp eax, ecx
// 0089c0bd  7527                 jne 0x89c0e6
// 0089c0bf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089c0c3  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089c0c7  51                   push ecx
// 0089c0c8  52                   push edx
// 0089c0c9  8d442414             lea eax, [esp + 0x14]
// 0089c0cd  50                   push eax
// 0089c0ce  ffd7                 call edi
// 0089c0d0  85c0                 test eax, eax
// 0089c0d2  7512                 jne 0x89c0e6
// 0089c0d4  50                   push eax
// 0089c0d5  8bce                 mov ecx, esi
// 0089c0d7  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 0089c0e1  e8aa0cf7ff           call 0x80cd90
// 0089c0e6  5f                   pop edi
// 0089c0e7  5b                   pop ebx
// 0089c0e8  5e                   pop esi
// 0089c0e9  83c430               add esp, 0x30
// 0089c0ec  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseMove@CXTPControlEdit@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
