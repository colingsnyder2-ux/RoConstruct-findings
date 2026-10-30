// roc 2012-06 00a7a3b0  unit: CXTButtonTheme  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a3b0
//
// 00a7a3b0  6aff                 push -1
// 00a7a3b2  682193ae00           push 0xae9321
// 00a7a3b7  64a100000000         mov eax, dword ptr fs:[0]
// 00a7a3bd  50                   push eax
// 00a7a3be  83ec2c               sub esp, 0x2c
// 00a7a3c1  53                   push ebx
// 00a7a3c2  55                   push ebp
// 00a7a3c3  56                   push esi
// 00a7a3c4  57                   push edi
// 00a7a3c5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a7a3ca  33c4                 xor eax, esp
// 00a7a3cc  50                   push eax
// 00a7a3cd  8d442440             lea eax, [esp + 0x40]
// 00a7a3d1  64a300000000         mov dword ptr fs:[0], eax
// 00a7a3d7  8bf1                 mov esi, ecx
// 00a7a3d9  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a3dd  ff158447b200         call dword ptr [0xb24784]
// 00a7a3e3  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00a7a3e7  8d442414             lea eax, [esp + 0x14]
// 00a7a3eb  50                   push eax
// 00a7a3ec  8bcd                 mov ecx, ebp
// 00a7a3ee  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00a7a3f6  e8fb82f0ff           call 0x9826f6
// 00a7a3fb  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a3ff  ff156046b200         call dword ptr [0xb24660]
// 00a7a405  84c0                 test al, al
// 00a7a407  0f8525010000         jne 0xa7a532
// 00a7a40d  e87ecdf5ff           call 0x9d7190
// 00a7a412  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a416  51                   push ecx
// 00a7a417  e8a49df5ff           call 0x9d41c0
// 00a7a41c  8b16                 mov edx, dword ptr [esi]
// 00a7a41e  8b4220               mov eax, dword ptr [edx + 0x20]
// 00a7a421  83c404               add esp, 4
// 00a7a424  55                   push ebp
// 00a7a425  8bce                 mov ecx, esi
// 00a7a427  ffd0                 call eax
// 00a7a429  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00a7a42d  50                   push eax
// 00a7a42e  57                   push edi
// 00a7a42f  8d4c2438             lea ecx, [esp + 0x38]
// 00a7a433  e8f8b0f5ff           call 0x9d5530
// 00a7a438  8d4c2428             lea ecx, [esp + 0x28]
// 00a7a43c  51                   push ecx
// 00a7a43d  8d4c2418             lea ecx, [esp + 0x18]
// 00a7a441  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00a7a446  ff155846b200         call dword ptr [0xb24658]
// 00a7a44c  50                   push eax
// 00a7a44d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a7a451  ff159847b200         call dword ptr [0xb24798]
// 00a7a457  8b5708               mov edx, dword ptr [edi + 8]
// 00a7a45a  50                   push eax
// 00a7a45b  52                   push edx
// 00a7a45c  ff154021b200         call dword ptr [0xb22140]
// 00a7a462  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a7a466  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a7a46a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a7a46e  8b16                 mov edx, dword ptr [esi]
// 00a7a470  8b5244               mov edx, dword ptr [edx + 0x44]
// 00a7a473  55                   push ebp
// 00a7a474  89442424             mov dword ptr [esp + 0x24], eax
// 00a7a478  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a7a47c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a7a480  8d442424             lea eax, [esp + 0x24]
// 00a7a484  50                   push eax
// 00a7a485  51                   push ecx
// 00a7a486  53                   push ebx
// 00a7a487  8d442428             lea eax, [esp + 0x28]
// 00a7a48b  50                   push eax
// 00a7a48c  8bce                 mov ecx, esi
// 00a7a48e  ffd2                 call edx
// 00a7a490  837d7c00             cmp dword ptr [ebp + 0x7c], 0
// 00a7a494  7505                 jne 0xa7a49b
// 00a7a496  f6c301               test bl, 1
// 00a7a499  7413                 je 0xa7a4ae
// 00a7a49b  837e1800             cmp dword ptr [esi + 0x18], 0
// 00a7a49f  740d                 je 0xa7a4ae
// 00a7a4a1  b801000000           mov eax, 1
// 00a7a4a6  01442418             add dword ptr [esp + 0x18], eax
// 00a7a4aa  0144241c             add dword ptr [esp + 0x1c], eax
// 00a7a4ae  8b07                 mov eax, dword ptr [edi]
// 00a7a4b0  8b16                 mov edx, dword ptr [esi]
// 00a7a4b2  55                   push ebp
// 00a7a4b3  89442460             mov dword ptr [esp + 0x60], eax
// 00a7a4b7  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a7a4ba  53                   push ebx
// 00a7a4bb  8bce                 mov ecx, esi
// 00a7a4bd  ffd0                 call eax
// 00a7a4bf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a7a4c3  50                   push eax
// 00a7a4c4  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a7a4c7  8bcf                 mov ecx, edi
// 00a7a4c9  ffd0                 call eax
// 00a7a4cb  f7c300010000         test ebx, 0x100
// 00a7a4d1  750c                 jne 0xa7a4df
// 00a7a4d3  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a4d7  51                   push ecx
// 00a7a4d8  8bcd                 mov ecx, ebp
// 00a7a4da  e81782f0ff           call 0x9826f6
// 00a7a4df  6a00                 push 0
// 00a7a4e1  8bcf                 mov ecx, edi
// 00a7a4e3  e8208bf0ff           call 0x983008
// 00a7a4e8  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a4ec  ff155846b200         call dword ptr [0xb24658]
// 00a7a4f2  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a4f6  8bf0                 mov esi, eax
// 00a7a4f8  ff159847b200         call dword ptr [0xb24798]
// 00a7a4fe  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a7a502  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a7a506  8b7f04               mov edi, dword ptr [edi + 4]
// 00a7a509  6a02                 push 2
// 00a7a50b  52                   push edx
// 00a7a50c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a7a510  51                   push ecx
// 00a7a511  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a7a515  52                   push edx
// 00a7a516  51                   push ecx
// 00a7a517  56                   push esi
// 00a7a518  50                   push eax
// 00a7a519  6a00                 push 0
// 00a7a51b  6a00                 push 0
// 00a7a51d  57                   push edi
// 00a7a51e  ff15183db200         call dword ptr [0xb23d18]
// 00a7a524  8d4c2430             lea ecx, [esp + 0x30]
// 00a7a528  c644244800           mov byte ptr [esp + 0x48], 0
// 00a7a52d  e87eb0f5ff           call 0x9d55b0
// 00a7a532  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a536  ff15d047b200         call dword ptr [0xb247d0]
// 00a7a53c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a7a540  64890d00000000       mov dword ptr fs:[0], ecx
// 00a7a547  59                   pop ecx
// 00a7a548  5f                   pop edi
// 00a7a549  5e                   pop esi
// 00a7a54a  5d                   pop ebp
// 00a7a54b  5b                   pop ebx
// 00a7a54c  83c438               add esp, 0x38
// 00a7a54f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawButtonText@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp