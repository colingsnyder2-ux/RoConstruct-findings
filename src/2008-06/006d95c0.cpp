// from server: 100% by auto
// roc 2008-06 006d95c0  unit: CXTPReportRecordItemVariant  size: 613 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d95c0
//
// 006d95c0  55                   push ebp
// 006d95c1  8bec                 mov ebp, esp
// 006d95c3  6aff                 push -1
// 006d95c5  68ec1f7e00           push 0x7e1fec
// 006d95ca  64a100000000         mov eax, dword ptr fs:[0]
// 006d95d0  50                   push eax
// 006d95d1  83ec40               sub esp, 0x40
// 006d95d4  53                   push ebx
// 006d95d5  56                   push esi
// 006d95d6  57                   push edi
// 006d95d7  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006d95dc  33c5                 xor eax, ebp
// 006d95de  50                   push eax
// 006d95df  8d45f4               lea eax, [ebp - 0xc]
// 006d95e2  64a300000000         mov dword ptr fs:[0], eax
// 006d95e8  8965f0               mov dword ptr [ebp - 0x10], esp
// 006d95eb  8bf1                 mov esi, ecx
// 006d95ed  8975e0               mov dword ptr [ebp - 0x20], esi
// 006d95f0  8d7e60               lea edi, [esi + 0x60]
// 006d95f3  33db                 xor ebx, ebx
// 006d95f5  8bcf                 mov ecx, edi
// 006d95f7  895dec               mov dword ptr [ebp - 0x14], ebx
// 006d95fa  ff15d82f8000         call dword ptr [0x802fd8]
// 006d9600  84c0                 test al, al
// 006d9602  7511                 jne 0x6d9615
// 006d9604  8b7508               mov esi, dword ptr [ebp + 8]
// 006d9607  57                   push edi
// 006d9608  8bce                 mov ecx, esi
// 006d960a  ff15d43e8000         call dword ptr [0x803ed4]
// 006d9610  e9fa010000           jmp 0x6d980f
// 006d9615  8d467c               lea eax, [esi + 0x7c]
// 006d9618  50                   push eax
// 006d9619  8d4db4               lea ecx, [ebp - 0x4c]
// 006d961c  e8ad2c0e00           call 0x7bc2ce
// 006d9621  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006d9624  51                   push ecx
// 006d9625  8bce                 mov ecx, esi
// 006d9627  895dfc               mov dword ptr [ebp - 4], ebx
// 006d962a  e8d1e9feff           call 0x6c8000
// 006d962f  8b5824               mov ebx, dword ptr [eax + 0x24]
// 006d9632  8d4dd0               lea ecx, [ebp - 0x30]
// 006d9635  8945dc               mov dword ptr [ebp - 0x24], eax
// 006d9638  895d0c               mov dword ptr [ebp + 0xc], ebx
// 006d963b  e8d22a0e00           call 0x7bc112
// 006d9640  66837db407           cmp word ptr [ebp - 0x4c], 7
// 006d9645  c645fc02             mov byte ptr [ebp - 4], 2
// 006d9649  755d                 jne 0x6d96a8
// 006d964b  85db                 test ebx, ebx
// 006d964d  7579                 jne 0x6d96c8
// 006d964f  8d7e40               lea edi, [esi + 0x40]
// 006d9652  68ac038100           push 0x8103ac
// 006d9657  8bcf                 mov ecx, edi
// 006d9659  ff15f02f8000         call dword ptr [0x802ff0]
// 006d965f  85c0                 test eax, eax
// 006d9661  7445                 je 0x6d96a8
// 006d9663  d9ee                 fldz 
// 006d9665  8d55b4               lea edx, [ebp - 0x4c]
// 006d9668  52                   push edx
// 006d9669  dd5dc4               fstp qword ptr [ebp - 0x3c]
// 006d966c  8d4dc4               lea ecx, [ebp - 0x3c]
// 006d966f  895dcc               mov dword ptr [ebp - 0x34], ebx
// 006d9672  e869f3ffff           call 0x6d89e0
// 006d9677  8bcf                 mov ecx, edi
// 006d9679  ff15e03e8000         call dword ptr [0x803ee0]
// 006d967f  8b7508               mov esi, dword ptr [ebp + 8]
// 006d9682  50                   push eax
// 006d9683  8d45c4               lea eax, [ebp - 0x3c]
// 006d9686  50                   push eax
// 006d9687  56                   push esi
// 006d9688  e8b3adffff           call 0x6d4440
// 006d968d  83c40c               add esp, 0xc
// 006d9690  c745ec01000000       mov dword ptr [ebp - 0x14], 1
// 006d9697  885dfc               mov byte ptr [ebp - 4], bl
// 006d969a  e8612a0e00           call 0x7bc100
// 006d969f  8d4db4               lea ecx, [ebp - 0x4c]
// 006d96a2  51                   push ecx
// 006d96a3  e961010000           jmp 0x6d9809
// 006d96a8  66837db401           cmp word ptr [ebp - 0x4c], 1
// 006d96ad  7519                 jne 0x6d96c8
// 006d96af  ba03000000           mov edx, 3
// 006d96b4  668955b4             mov word ptr [ebp - 0x4c], dx
// 006d96b8  c745bc00000000       mov dword ptr [ebp - 0x44], 0
// 006d96bf  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d96c6  eb3d                 jmp 0x6d9705
// 006d96c8  8bc3                 mov eax, ebx
// 006d96ca  f7d8                 neg eax
// 006d96cc  1bc0                 sbb eax, eax
// 006d96ce  83e0fb               and eax, 0xfffffffb
// 006d96d1  6a01                 push 1
// 006d96d3  83c008               add eax, 8
// 006d96d6  50                   push eax
// 006d96d7  8d4db4               lea ecx, [ebp - 0x4c]
// 006d96da  51                   push ecx
// 006d96db  e860f7feff           call 0x6c8e40
// 006d96e0  83c40c               add esp, 0xc
// 006d96e3  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d96ea  eb19                 jmp 0x6d9705
// 006d96ec  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 006d96ef  8955d4               mov dword ptr [ebp - 0x2c], edx
// 006d96f2  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006d96f9  b8ff966d00           mov eax, 0x6d96ff
// 006d96fe  c3                   ret 
// 006d96ff  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 006d9702  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 006d9705  c645fc00             mov byte ptr [ebp - 4], 0
// 006d9709  e8f2290e00           call 0x7bc100
// 006d970e  85db                 test ebx, ebx
// 006d9710  7453                 je 0x6d9765
// 006d9712  8b45bc               mov eax, dword ptr [ebp - 0x44]
// 006d9715  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 006d9718  50                   push eax
// 006d9719  e892dbfeff           call 0x6c72b0
// 006d971e  85c0                 test eax, eax
// 006d9720  7405                 je 0x6d9727
// 006d9722  83c020               add eax, 0x20
// 006d9725  eb16                 jmp 0x6d973d
// 006d9727  6816b78000           push 0x80b716
// 006d972c  8d4d0c               lea ecx, [ebp + 0xc]
// 006d972f  ff15103f8000         call dword ptr [0x803f10]
// 006d9735  834dec02             or dword ptr [ebp - 0x14], 2
// 006d9739  c645fc04             mov byte ptr [ebp - 4], 4
// 006d973d  8b7508               mov esi, dword ptr [ebp + 8]
// 006d9740  50                   push eax
// 006d9741  8bce                 mov ecx, esi
// 006d9743  ff15d43e8000         call dword ptr [0x803ed4]
// 006d9749  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 006d974c  83c801               or eax, 1
// 006d974f  a802                 test al, 2
// 006d9751  7409                 je 0x6d975c
// 006d9753  8d4d0c               lea ecx, [ebp + 0xc]
// 006d9756  ff15143f8000         call dword ptr [0x803f14]
// 006d975c  8d4db4               lea ecx, [ebp - 0x4c]
// 006d975f  51                   push ecx
// 006d9760  e9a4000000           jmp 0x6d9809
// 006d9765  66837db408           cmp word ptr [ebp - 0x4c], 8
// 006d976a  7415                 je 0x6d9781
// 006d976c  8b7508               mov esi, dword ptr [ebp + 8]
// 006d976f  6816b78000           push 0x80b716
// 006d9774  8bce                 mov ecx, esi
// 006d9776  ff15103f8000         call dword ptr [0x803f10]
// 006d977c  e984000000           jmp 0x6d9805
// 006d9781  8b45bc               mov eax, dword ptr [ebp - 0x44]
// 006d9784  50                   push eax
// 006d9785  8d4de8               lea ecx, [ebp - 0x18]
// 006d9788  ff15d83e8000         call dword ptr [0x803ed8]
// 006d978e  83c640               add esi, 0x40
// 006d9791  68ac038100           push 0x8103ac
// 006d9796  8bce                 mov ecx, esi
// 006d9798  c645fc05             mov byte ptr [ebp - 4], 5
// 006d979c  ff15f02f8000         call dword ptr [0x802ff0]
// 006d97a2  85c0                 test eax, eax
// 006d97a4  7511                 jne 0x6d97b7
// 006d97a6  8b7508               mov esi, dword ptr [ebp + 8]
// 006d97a9  8d4de8               lea ecx, [ebp - 0x18]
// 006d97ac  51                   push ecx
// 006d97ad  8bce                 mov ecx, esi
// 006d97af  ff15d43e8000         call dword ptr [0x803ed4]
// 006d97b5  eb45                 jmp 0x6d97fc
// 006d97b7  8d4de4               lea ecx, [ebp - 0x1c]
// 006d97ba  ff15043f8000         call dword ptr [0x803f04]
// 006d97c0  8d4de8               lea ecx, [ebp - 0x18]
// 006d97c3  c645fc06             mov byte ptr [ebp - 4], 6
// 006d97c7  ff15e03e8000         call dword ptr [0x803ee0]
// 006d97cd  50                   push eax
// 006d97ce  8bce                 mov ecx, esi
// 006d97d0  ff15e03e8000         call dword ptr [0x803ee0]
// 006d97d6  50                   push eax
// 006d97d7  8d45e4               lea eax, [ebp - 0x1c]
// 006d97da  50                   push eax
// 006d97db  ff15dc3e8000         call dword ptr [0x803edc]
// 006d97e1  8b7508               mov esi, dword ptr [ebp + 8]
// 006d97e4  83c40c               add esp, 0xc
// 006d97e7  8d4de4               lea ecx, [ebp - 0x1c]
// 006d97ea  51                   push ecx
// 006d97eb  8bce                 mov ecx, esi
// 006d97ed  ff15d43e8000         call dword ptr [0x803ed4]
// 006d97f3  8d4de4               lea ecx, [ebp - 0x1c]
// 006d97f6  ff15143f8000         call dword ptr [0x803f14]
// 006d97fc  8d4de8               lea ecx, [ebp - 0x18]
// 006d97ff  ff15143f8000         call dword ptr [0x803f14]
// 006d9805  8d55b4               lea edx, [ebp - 0x4c]
// 006d9808  52                   push edx
// 006d9809  ff151c298000         call dword ptr [0x80291c]
// 006d980f  8bc6                 mov eax, esi
// 006d9811  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006d9814  64890d00000000       mov dword ptr fs:[0], ecx
// 006d981b  59                   pop ecx
// 006d981c  5f                   pop edi
// 006d981d  5e                   pop esi
// 006d981e  5b                   pop ebx
// 006d981f  8be5                 mov esp, ebp
// 006d9821  5d                   pop ebp
// 006d9822  c20800               ret 8

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecordItemText.cpp
