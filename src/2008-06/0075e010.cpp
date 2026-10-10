// roc 2008-06 0075e010  unit: CXTPDockingPaneTabbedContainer  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075e010
//
// 0075e010  83ec10               sub esp, 0x10
// 0075e013  53                   push ebx
// 0075e014  56                   push esi
// 0075e015  8bf1                 mov esi, ecx
// 0075e017  57                   push edi
// 0075e018  8d7eac               lea edi, [esi - 0x54]
// 0075e01b  85ff                 test edi, edi
// 0075e01d  0f8408010000         je 0x75e12b
// 0075e023  837f2000             cmp dword ptr [edi + 0x20], 0
// 0075e027  0f84fe000000         je 0x75e12b
// 0075e02d  837e1000             cmp dword ptr [esi + 0x10], 0
// 0075e031  0f84f4000000         je 0x75e12b
// 0075e037  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0075e03e  0f85e7000000         jne 0x75e12b
// 0075e044  8b07                 mov eax, dword ptr [edi]
// 0075e046  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 0075e04c  8bcf                 mov ecx, edi
// 0075e04e  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 0075e058  ffd2                 call edx
// 0075e05a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0075e05d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075e060  8b5624               mov edx, dword ptr [esi + 0x24]
// 0075e063  ff8e48010000         dec dword ptr [esi + 0x148]
// 0075e069  8944240c             mov dword ptr [esp + 0xc], eax
// 0075e06d  8b4628               mov eax, dword ptr [esi + 0x28]
// 0075e070  894c2410             mov dword ptr [esp + 0x10], ecx
// 0075e074  8bce                 mov ecx, esi
// 0075e076  89542414             mov dword ptr [esp + 0x14], edx
// 0075e07a  89442418             mov dword ptr [esp + 0x18], eax
// 0075e07e  e82df4ffff           call 0x75d4b0
// 0075e083  8b10                 mov edx, dword ptr [eax]
// 0075e085  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0075e088  6a01                 push 1
// 0075e08a  8d4c2410             lea ecx, [esp + 0x10]
// 0075e08e  51                   push ecx
// 0075e08f  57                   push edi
// 0075e090  8bc8                 mov ecx, eax
// 0075e092  ffd2                 call edx
// 0075e094  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0075e098  85db                 test ebx, ebx
// 0075e09a  7476                 je 0x75e112
// 0075e09c  8bce                 mov ecx, esi
// 0075e09e  e8cd260400           call 0x7a0770
// 0075e0a3  89442420             mov dword ptr [esp + 0x20], eax
// 0075e0a7  85c0                 test eax, eax
// 0075e0a9  7467                 je 0x75e112
// 0075e0ab  eb03                 jmp 0x75e0b0
// 0075e0ad  8d4900               lea ecx, [ecx]
// 0075e0b0  8d442420             lea eax, [esp + 0x20]
// 0075e0b4  50                   push eax
// 0075e0b5  8bce                 mov ecx, esi
// 0075e0b7  e8c4260400           call 0x7a0780
// 0075e0bc  85c0                 test eax, eax
// 0075e0be  7405                 je 0x75e0c5
// 0075e0c0  8d78e0               lea edi, [eax - 0x20]
// 0075e0c3  eb02                 jmp 0x75e0c7
// 0075e0c5  33ff                 xor edi, edi
// 0075e0c7  33c9                 xor ecx, ecx
// 0075e0c9  39be50010000         cmp dword ptr [esi + 0x150], edi
// 0075e0cf  0f94c1               sete cl
// 0075e0d2  51                   push ecx
// 0075e0d3  8bcf                 mov ecx, edi
// 0075e0d5  e85691faff           call 0x707230
// 0075e0da  8b5720               mov edx, dword ptr [edi + 0x20]
// 0075e0dd  8b5224               mov edx, dword ptr [edx + 0x24]
// 0075e0e0  8d4f20               lea ecx, [edi + 0x20]
// 0075e0e3  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075e0e7  6a00                 push 0
// 0075e0e9  83ec10               sub esp, 0x10
// 0075e0ec  8bc4                 mov eax, esp
// 0075e0ee  8938                 mov dword ptr [eax], edi
// 0075e0f0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0075e0f4  897804               mov dword ptr [eax + 4], edi
// 0075e0f7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0075e0fb  897808               mov dword ptr [eax + 8], edi
// 0075e0fe  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0075e102  89780c               mov dword ptr [eax + 0xc], edi
// 0075e105  8b4614               mov eax, dword ptr [esi + 0x14]
// 0075e108  50                   push eax
// 0075e109  ffd2                 call edx
// 0075e10b  837c242000           cmp dword ptr [esp + 0x20], 0
// 0075e110  759e                 jne 0x75e0b0
// 0075e112  8b46cc               mov eax, dword ptr [esi - 0x34]
// 0075e115  6a00                 push 0
// 0075e117  6a00                 push 0
// 0075e119  50                   push eax
// 0075e11a  ff15182e8000         call dword ptr [0x802e18]
// 0075e120  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0075e123  8b11                 mov edx, dword ptr [ecx]
// 0075e125  8b4238               mov eax, dword ptr [edx + 0x38]
// 0075e128  53                   push ebx
// 0075e129  ffd0                 call eax
// 0075e12b  5f                   pop edi
// 0075e12c  5e                   pop esi
// 0075e12d  5b                   pop ebx
// 0075e12e  83c410               add esp, 0x10
// 0075e131  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?InvalidatePane@CXTPDockingPaneTabbedContainer@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
