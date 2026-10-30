// roc 2009-12 008c4b50  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4b50
//
// 008c4b50  6aff                 push -1
// 008c4b52  6879439600           push 0x964379
// 008c4b57  64a100000000         mov eax, dword ptr fs:[0]
// 008c4b5d  50                   push eax
// 008c4b5e  83ec10               sub esp, 0x10
// 008c4b61  53                   push ebx
// 008c4b62  55                   push ebp
// 008c4b63  56                   push esi
// 008c4b64  57                   push edi
// 008c4b65  a10052b600           mov eax, dword ptr [0xb65200]
// 008c4b6a  33c4                 xor eax, esp
// 008c4b6c  50                   push eax
// 008c4b6d  8d442424             lea eax, [esp + 0x24]
// 008c4b71  64a300000000         mov dword ptr fs:[0], eax
// 008c4b77  8bd9                 mov ebx, ecx
// 008c4b79  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008c4b7d  8b4718               mov eax, dword ptr [edi + 0x18]
// 008c4b80  50                   push eax
// 008c4b81  e8aa180600           call 0x926430
// 008c4b86  8bf0                 mov esi, eax
// 008c4b88  8b4708               mov eax, dword ptr [edi + 8]
// 008c4b8b  85c0                 test eax, eax
// 008c4b8d  0f8c56010000         jl 0x8c4ce9
// 008c4b93  f6470c03             test byte ptr [edi + 0xc], 3
// 008c4b97  0f844c010000         je 0x8c4ce9
// 008c4b9d  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008c4ba0  6a00                 push 0
// 008c4ba2  50                   push eax
// 008c4ba3  68a1010000           push 0x1a1
// 008c4ba8  51                   push ecx
// 008c4ba9  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c4baf  8bcb                 mov ecx, ebx
// 008c4bb1  89442418             mov dword ptr [esp + 0x18], eax
// 008c4bb5  e8ec1a0600           call 0x9266a6
// 008c4bba  8b2dd8ca9800         mov ebp, dword ptr [0x98cad8]
// 008c4bc0  85c0                 test eax, eax
// 008c4bc2  0f844b010000         je 0x8c4d13
// 008c4bc8  8b5708               mov edx, dword ptr [edi + 8]
// 008c4bcb  52                   push edx
// 008c4bcc  8bcb                 mov ecx, ebx
// 008c4bce  e8ab210600           call 0x926d7e
// 008c4bd3  85c0                 test eax, eax
// 008c4bd5  0f8438010000         je 0x8c4d13
// 008c4bdb  6a08                 push 8
// 008c4bdd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008c4be5  ffd5                 call ebp
// 008c4be7  8b16                 mov edx, dword ptr [esi]
// 008c4be9  50                   push eax
// 008c4bea  8b4238               mov eax, dword ptr [edx + 0x38]
// 008c4bed  8bce                 mov ecx, esi
// 008c4bef  ffd0                 call eax
// 008c4bf1  6a05                 push 5
// 008c4bf3  89442420             mov dword ptr [esp + 0x20], eax
// 008c4bf7  ffd5                 call ebp
// 008c4bf9  8b16                 mov edx, dword ptr [esi]
// 008c4bfb  50                   push eax
// 008c4bfc  8b4234               mov eax, dword ptr [edx + 0x34]
// 008c4bff  8bce                 mov ecx, esi
// 008c4c01  ffd0                 call eax
// 008c4c03  837c241400           cmp dword ptr [esp + 0x14], 0
// 008c4c08  89442420             mov dword ptr [esp + 0x20], eax
// 008c4c0c  7532                 jne 0x8c4c40
// 008c4c0e  f6471001             test byte ptr [edi + 0x10], 1
// 008c4c12  742c                 je 0x8c4c40
// 008c4c14  8b0e                 mov ecx, dword ptr [esi]
// 008c4c16  6a0e                 push 0xe
// 008c4c18  894c2418             mov dword ptr [esp + 0x18], ecx
// 008c4c1c  ffd5                 call ebp
// 008c4c1e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c4c22  50                   push eax
// 008c4c23  8b4238               mov eax, dword ptr [edx + 0x38]
// 008c4c26  8bce                 mov ecx, esi
// 008c4c28  ffd0                 call eax
// 008c4c2a  8b0e                 mov ecx, dword ptr [esi]
// 008c4c2c  6a0d                 push 0xd
// 008c4c2e  894c2418             mov dword ptr [esp + 0x18], ecx
// 008c4c32  ffd5                 call ebp
// 008c4c34  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c4c38  50                   push eax
// 008c4c39  8b4234               mov eax, dword ptr [edx + 0x34]
// 008c4c3c  8bce                 mov ecx, esi
// 008c4c3e  ffd0                 call eax
// 008c4c40  837b5400             cmp dword ptr [ebx + 0x54], 0
// 008c4c44  7507                 jne 0x8c4c4d
// 008c4c46  8bcb                 mov ecx, ebx
// 008c4c48  e82b210600           call 0x926d78
// 008c4c4d  8d4c2434             lea ecx, [esp + 0x34]
// 008c4c51  ff1574de9800         call dword ptr [0x98de74]
// 008c4c57  8b5708               mov edx, dword ptr [edi + 8]
// 008c4c5a  8d4c2434             lea ecx, [esp + 0x34]
// 008c4c5e  51                   push ecx
// 008c4c5f  52                   push edx
// 008c4c60  8bcb                 mov ecx, ebx
// 008c4c62  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008c4c6a  e8fd170600           call 0x92646c
// 008c4c6f  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c4c73  2b4354               sub eax, dword ptr [ebx + 0x54]
// 008c4c76  b900000000           mov ecx, 0
// 008c4c7b  99                   cdq 
// 008c4c7c  2bc2                 sub eax, edx
// 008c4c7e  8b16                 mov edx, dword ptr [esi]
// 008c4c80  d1f8                 sar eax, 1
// 008c4c82  0f98c1               sets cl
// 008c4c85  6a00                 push 0
// 008c4c87  8954241c             mov dword ptr [esp + 0x1c], edx
// 008c4c8b  8d5f1c               lea ebx, [edi + 0x1c]
// 008c4c8e  49                   dec ecx
// 008c4c8f  23c8                 and ecx, eax
// 008c4c91  8be9                 mov ebp, ecx
// 008c4c93  8d4c2438             lea ecx, [esp + 0x38]
// 008c4c97  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c4c9d  50                   push eax
// 008c4c9e  8d4c243c             lea ecx, [esp + 0x3c]
// 008c4ca2  ff1580de9800         call dword ptr [0x98de80]
// 008c4ca8  8b0b                 mov ecx, dword ptr [ebx]
// 008c4caa  8b542420             mov edx, dword ptr [esp + 0x20]
// 008c4cae  50                   push eax
// 008c4caf  8b4720               mov eax, dword ptr [edi + 0x20]
// 008c4cb2  53                   push ebx
// 008c4cb3  6a02                 push 2
// 008c4cb5  03c5                 add eax, ebp
// 008c4cb7  50                   push eax
// 008c4cb8  8b4268               mov eax, dword ptr [edx + 0x68]
// 008c4cbb  83c102               add ecx, 2
// 008c4cbe  51                   push ecx
// 008c4cbf  8bce                 mov ecx, esi
// 008c4cc1  ffd0                 call eax
// 008c4cc3  8b16                 mov edx, dword ptr [esi]
// 008c4cc5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c4cc9  8b5238               mov edx, dword ptr [edx + 0x38]
// 008c4ccc  50                   push eax
// 008c4ccd  8bce                 mov ecx, esi
// 008c4ccf  ffd2                 call edx
// 008c4cd1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c4cd5  8b06                 mov eax, dword ptr [esi]
// 008c4cd7  8b5034               mov edx, dword ptr [eax + 0x34]
// 008c4cda  51                   push ecx
// 008c4cdb  8bce                 mov ecx, esi
// 008c4cdd  ffd2                 call edx
// 008c4cdf  8d4c2434             lea ecx, [esp + 0x34]
// 008c4ce3  ff15c0de9800         call dword ptr [0x98dec0]
// 008c4ce9  f6470c04             test byte ptr [edi + 0xc], 4
// 008c4ced  740e                 je 0x8c4cfd
// 008c4cef  8b4604               mov eax, dword ptr [esi + 4]
// 008c4cf2  83c71c               add edi, 0x1c
// 008c4cf5  57                   push edi
// 008c4cf6  50                   push eax
// 008c4cf7  ff15d4ca9800         call dword ptr [0x98cad4]
// 008c4cfd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c4d01  64890d00000000       mov dword ptr fs:[0], ecx
// 008c4d08  59                   pop ecx
// 008c4d09  5f                   pop edi
// 008c4d0a  5e                   pop esi
// 008c4d0b  5d                   pop ebp
// 008c4d0c  5b                   pop ebx
// 008c4d0d  83c41c               add esp, 0x1c
// 008c4d10  c20400               ret 4
// 008c4d13  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008c4d1b  b880808000           mov eax, 0x808080
// 008c4d20  e9c2feffff           jmp 0x8c4be7
// copied from an identical function in another client (function ?DrawItem@CXTPCustomizeToolbarsPageCheckListBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeToolbarsPage.cpp