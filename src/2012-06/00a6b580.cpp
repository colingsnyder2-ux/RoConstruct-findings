// roc 2012-06 00a6b580  unit: CXTCaptionButton  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b580
//
// 00a6b580  6aff                 push -1
// 00a6b582  68c887ae00           push 0xae87c8
// 00a6b587  64a100000000         mov eax, dword ptr fs:[0]
// 00a6b58d  50                   push eax
// 00a6b58e  83ec48               sub esp, 0x48
// 00a6b591  53                   push ebx
// 00a6b592  56                   push esi
// 00a6b593  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6b598  33c4                 xor eax, esp
// 00a6b59a  50                   push eax
// 00a6b59b  8d442454             lea eax, [esp + 0x54]
// 00a6b59f  64a300000000         mov dword ptr fs:[0], eax
// 00a6b5a5  8bf1                 mov esi, ecx
// 00a6b5a7  8d4c2430             lea ecx, [esp + 0x30]
// 00a6b5ab  e800dbf2ff           call 0x9990b0
// 00a6b5b0  33db                 xor ebx, ebx
// 00a6b5b2  8d4c240c             lea ecx, [esp + 0xc]
// 00a6b5b6  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a6b5ba  e8f1daf2ff           call 0x9990b0
// 00a6b5bf  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a6b5c3  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a6b5c7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a6b5cb  6a01                 push 1
// 00a6b5cd  50                   push eax
// 00a6b5ce  51                   push ecx
// 00a6b5cf  52                   push edx
// 00a6b5d0  8d4c2440             lea ecx, [esp + 0x40]
// 00a6b5d4  c644246c01           mov byte ptr [esp + 0x6c], 1
// 00a6b5d9  e8e207f3ff           call 0x99bdc0
// 00a6b5de  8d4c2430             lea ecx, [esp + 0x30]
// 00a6b5e2  e839dbf2ff           call 0x999120
// 00a6b5e7  85c0                 test eax, eax
// 00a6b5e9  7434                 je 0xa6b61f
// 00a6b5eb  8d4c240c             lea ecx, [esp + 0xc]
// 00a6b5ef  885c245c             mov byte ptr [esp + 0x5c], bl
// 00a6b5f3  e868fdf2ff           call 0x99b360
// 00a6b5f8  8d4c2430             lea ecx, [esp + 0x30]
// 00a6b5fc  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00a6b604  e857fdf2ff           call 0x99b360
// 00a6b609  33c0                 xor eax, eax
// 00a6b60b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a6b60f  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b616  59                   pop ecx
// 00a6b617  5e                   pop esi
// 00a6b618  5b                   pop ebx
// 00a6b619  83c454               add esp, 0x54
// 00a6b61c  c21400               ret 0x14
// 00a6b61f  8b442470             mov eax, dword ptr [esp + 0x70]
// 00a6b623  3bc3                 cmp eax, ebx
// 00a6b625  7423                 je 0xa6b64a
// 00a6b627  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a6b62b  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a6b62f  6a01                 push 1
// 00a6b631  51                   push ecx
// 00a6b632  52                   push edx
// 00a6b633  50                   push eax
// 00a6b634  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6b638  e88307f3ff           call 0x99bdc0
// 00a6b63d  8d4c240c             lea ecx, [esp + 0xc]
// 00a6b641  e8dadaf2ff           call 0x999120
// 00a6b646  85c0                 test eax, eax
// 00a6b648  75a1                 jne 0xa6b5eb
// 00a6b64a  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a6b64e  50                   push eax
// 00a6b64f  83ec24               sub esp, 0x24
// 00a6b652  8d542434             lea edx, [esp + 0x34]
// 00a6b656  8bcc                 mov ecx, esp
// 00a6b658  89a42494000000       mov dword ptr [esp + 0x94], esp
// 00a6b65f  52                   push edx
// 00a6b660  e85bdaf2ff           call 0x9990c0
// 00a6b665  83ec24               sub esp, 0x24
// 00a6b668  8d44247c             lea eax, [esp + 0x7c]
// 00a6b66c  8bcc                 mov ecx, esp
// 00a6b66e  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 00a6b675  50                   push eax
// 00a6b676  c68424ac00000002     mov byte ptr [esp + 0xac], 2
// 00a6b67e  e83ddaf2ff           call 0x9990c0
// 00a6b683  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a6b68a  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00a6b691  51                   push ecx
// 00a6b692  52                   push edx
// 00a6b693  8bce                 mov ecx, esi
// 00a6b695  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 00a6b69d  e84efaffff           call 0xa6b0f0
// 00a6b6a2  8d4c240c             lea ecx, [esp + 0xc]
// 00a6b6a6  8bf0                 mov esi, eax
// 00a6b6a8  885c245c             mov byte ptr [esp + 0x5c], bl
// 00a6b6ac  e8affcf2ff           call 0x99b360
// 00a6b6b1  8d4c2430             lea ecx, [esp + 0x30]
// 00a6b6b5  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00a6b6bd  e89efcf2ff           call 0x99b360
// 00a6b6c2  8bc6                 mov eax, esi
// 00a6b6c4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a6b6c8  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b6cf  59                   pop ecx
// 00a6b6d0  5e                   pop esi
// 00a6b6d1  5b                   pop ebx
// 00a6b6d2  83c454               add esp, 0x54
// 00a6b6d5  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp