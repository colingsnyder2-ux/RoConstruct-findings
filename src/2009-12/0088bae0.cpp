// roc 2009-12 0088bae0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088bae0
//
// 0088bae0  6aff                 push -1
// 0088bae2  68f38e9500           push 0x958ef3
// 0088bae7  64a100000000         mov eax, dword ptr fs:[0]
// 0088baed  50                   push eax
// 0088baee  83ec0c               sub esp, 0xc
// 0088baf1  53                   push ebx
// 0088baf2  56                   push esi
// 0088baf3  a10052b600           mov eax, dword ptr [0xb65200]
// 0088baf8  33c4                 xor eax, esp
// 0088bafa  50                   push eax
// 0088bafb  8d442418             lea eax, [esp + 0x18]
// 0088baff  64a300000000         mov dword ptr fs:[0], eax
// 0088bb05  8bf1                 mov esi, ecx
// 0088bb07  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0088bb0f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088bb13  83f802               cmp eax, 2
// 0088bb16  7519                 jne 0x88bb31
// 0088bb18  e853fcffff           call 0x88b770
// 0088bb1d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088bb21  64890d00000000       mov dword ptr fs:[0], ecx
// 0088bb28  59                   pop ecx
// 0088bb29  5e                   pop esi
// 0088bb2a  5b                   pop ebx
// 0088bb2b  83c418               add esp, 0x18
// 0088bb2e  c20400               ret 4
// 0088bb31  85c0                 test eax, eax
// 0088bb33  755d                 jne 0x88bb92
// 0088bb35  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088bb3b  85c0                 test eax, eax
// 0088bb3d  0f84fc000000         je 0x88bc3f
// 0088bb43  83782000             cmp dword ptr [eax + 0x20], 0
// 0088bb47  0f84f2000000         je 0x88bc3f
// 0088bb4d  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0088bb53  83f8ff               cmp eax, -1
// 0088bb56  750f                 jne 0x88bb67
// 0088bb58  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0088bb5e  85c9                 test ecx, ecx
// 0088bb60  7405                 je 0x88bb67
// 0088bb62  e849aaf6ff           call 0x7f65b0
// 0088bb67  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088bb6d  50                   push eax
// 0088bb6e  e86b83f6ff           call 0x7f3ede
// 0088bb73  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088bb79  e842f8ffff           call 0x88b3c0
// 0088bb7e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088bb82  64890d00000000       mov dword ptr fs:[0], ecx
// 0088bb89  59                   pop ecx
// 0088bb8a  5e                   pop esi
// 0088bb8b  5b                   pop ebx
// 0088bb8c  83c418               add esp, 0x18
// 0088bb8f  c20400               ret 4
// 0088bb92  83f804               cmp eax, 4
// 0088bb95  0f85a4000000         jne 0x88bc3f
// 0088bb9b  8d442414             lea eax, [esp + 0x14]
// 0088bb9f  50                   push eax
// 0088bba0  e87bf9ffff           call 0x88b520
// 0088bba5  bb01000000           mov ebx, 1
// 0088bbaa  8bc8                 mov ecx, eax
// 0088bbac  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0088bbb4  895c240c             mov dword ptr [esp + 0xc], ebx
// 0088bbb8  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088bbbe  84c0                 test al, al
// 0088bbc0  7422                 je 0x88bbe4
// 0088bbc2  8d4c2410             lea ecx, [esp + 0x10]
// 0088bbc6  51                   push ecx
// 0088bbc7  8bce                 mov ecx, esi
// 0088bbc9  e872f6ffff           call 0x88b240
// 0088bbce  8bc8                 mov ecx, eax
// 0088bbd0  bb03000000           mov ebx, 3
// 0088bbd5  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088bbdb  c644242801           mov byte ptr [esp + 0x28], 1
// 0088bbe0  84c0                 test al, al
// 0088bbe2  7405                 je 0x88bbe9
// 0088bbe4  c644242800           mov byte ptr [esp + 0x28], 0
// 0088bbe9  f6c302               test bl, 2
// 0088bbec  740d                 je 0x88bbfb
// 0088bbee  8d4c2410             lea ecx, [esp + 0x10]
// 0088bbf2  83e3fd               and ebx, 0xfffffffd
// 0088bbf5  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bbfb  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0088bc03  f6c301               test bl, 1
// 0088bc06  740a                 je 0x88bc12
// 0088bc08  8d4c2414             lea ecx, [esp + 0x14]
// 0088bc0c  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bc12  807c242800           cmp byte ptr [esp + 0x28], 0
// 0088bc17  7426                 je 0x88bc3f
// 0088bc19  8d542428             lea edx, [esp + 0x28]
// 0088bc1d  52                   push edx
// 0088bc1e  8bce                 mov ecx, esi
// 0088bc20  e81bf6ffff           call 0x88b240
// 0088bc25  50                   push eax
// 0088bc26  8bce                 mov ecx, esi
// 0088bc28  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0088bc30  e84bf9ffff           call 0x88b580
// 0088bc35  8d4c2428             lea ecx, [esp + 0x28]
// 0088bc39  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bc3f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088bc43  64890d00000000       mov dword ptr fs:[0], ecx
// 0088bc4a  59                   pop ecx
// 0088bc4b  5e                   pop esi
// 0088bc4c  5b                   pop ebx
// 0088bc4d  83c418               add esp, 0x18
// 0088bc50  c20400               ret 4
// copied from an identical function in another client (function ?OnActionChanged@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp