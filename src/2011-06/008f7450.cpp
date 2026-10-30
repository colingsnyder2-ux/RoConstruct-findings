// roc 2011-06 008f7450  unit: CXTPRibbonGroup  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7450
//
// 008f7450  83ec1c               sub esp, 0x1c
// 008f7453  53                   push ebx
// 008f7454  55                   push ebp
// 008f7455  56                   push esi
// 008f7456  8be9                 mov ebp, ecx
// 008f7458  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 008f745b  57                   push edi
// 008f745c  e8dfeafaff           call 0x8a5f40
// 008f7461  8b9860060000         mov ebx, dword ptr [eax + 0x660]
// 008f7467  8b7d34               mov edi, dword ptr [ebp + 0x34]
// 008f746a  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 008f746d  035d38               add ebx, dword ptr [ebp + 0x38]
// 008f7470  33c9                 xor ecx, ecx
// 008f7472  83c704               add edi, 4
// 008f7475  894c2410             mov dword ptr [esp + 0x10], ecx
// 008f7479  85c0                 test eax, eax
// 008f747b  7f0e                 jg 0x8f748b
// 008f747d  5f                   pop edi
// 008f747e  5e                   pop esi
// 008f747f  5d                   pop ebp
// 008f7480  5b                   pop ebx
// 008f7481  83c41c               add esp, 0x1c
// 008f7484  c20400               ret 4
// 008f7487  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f748b  85c9                 test ecx, ecx
// 008f748d  7c15                 jl 0x8f74a4
// 008f748f  3bc8                 cmp ecx, eax
// 008f7491  7d11                 jge 0x8f74a4
// 008f7493  3b4d4c               cmp ecx, dword ptr [ebp + 0x4c]
// 008f7496  0f8d82000000         jge 0x8f751e
// 008f749c  8b4548               mov eax, dword ptr [ebp + 0x48]
// 008f749f  8b3488               mov esi, dword ptr [eax + ecx*4]
// 008f74a2  eb02                 jmp 0x8f74a6
// 008f74a4  33f6                 xor esi, esi
// 008f74a6  8b16                 mov edx, dword ptr [esi]
// 008f74a8  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008f74ae  6a00                 push 0
// 008f74b0  8bce                 mov ecx, esi
// 008f74b2  ffd0                 call eax
// 008f74b4  85c0                 test eax, eax
// 008f74b6  7448                 je 0x8f7500
// 008f74b8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f74bc  8b16                 mov edx, dword ptr [esi]
// 008f74be  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 008f74c4  50                   push eax
// 008f74c5  8d4c2418             lea ecx, [esp + 0x18]
// 008f74c9  51                   push ecx
// 008f74ca  8bce                 mov ecx, esi
// 008f74cc  ffd2                 call edx
// 008f74ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f74d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f74d6  8d0c38               lea ecx, [eax + edi]
// 008f74d9  83ec10               sub esp, 0x10
// 008f74dc  8bc4                 mov eax, esp
// 008f74de  03d3                 add edx, ebx
// 008f74e0  8938                 mov dword ptr [eax], edi
// 008f74e2  89542438             mov dword ptr [esp + 0x38], edx
// 008f74e6  8b16                 mov edx, dword ptr [esi]
// 008f74e8  8b527c               mov edx, dword ptr [edx + 0x7c]
// 008f74eb  895804               mov dword ptr [eax + 4], ebx
// 008f74ee  894808               mov dword ptr [eax + 8], ecx
// 008f74f1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008f74f5  89480c               mov dword ptr [eax + 0xc], ecx
// 008f74f8  8bce                 mov ecx, esi
// 008f74fa  ffd2                 call edx
// 008f74fc  037c2414             add edi, dword ptr [esp + 0x14]
// 008f7500  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f7504  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 008f7507  41                   inc ecx
// 008f7508  3bc8                 cmp ecx, eax
// 008f750a  894c2410             mov dword ptr [esp + 0x10], ecx
// 008f750e  0f8c73ffffff         jl 0x8f7487
// 008f7514  5f                   pop edi
// 008f7515  5e                   pop esi
// 008f7516  5d                   pop ebp
// 008f7517  5b                   pop ebx
// 008f7518  83c41c               add esp, 0x1c
// 008f751b  c20400               ret 4
// 008f751e  e8e72df1ff           call 0x80a30a
// copied from an identical function in another client (function ?RepositionControls@CXTPRibbonGroup@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp