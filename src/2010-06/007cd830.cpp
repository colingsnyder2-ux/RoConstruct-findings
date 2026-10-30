// roc 2010-06 007cd830  unit: CRobloxReportView  size: 785 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cd830
//
// 007cd830  6aff                 push -1
// 007cd832  68ec069b00           push 0x9b06ec
// 007cd837  64a100000000         mov eax, dword ptr fs:[0]
// 007cd83d  50                   push eax
// 007cd83e  81ec9c000000         sub esp, 0x9c
// 007cd844  53                   push ebx
// 007cd845  55                   push ebp
// 007cd846  56                   push esi
// 007cd847  57                   push edi
// 007cd848  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007cd84d  33c4                 xor eax, esp
// 007cd84f  50                   push eax
// 007cd850  8d8424b0000000       lea eax, [esp + 0xb0]
// 007cd857  64a300000000         mov dword ptr fs:[0], eax
// 007cd85d  8bd9                 mov ebx, ecx
// 007cd85f  33ff                 xor edi, edi
// 007cd861  53                   push ebx
// 007cd862  8d4c2440             lea ecx, [esp + 0x40]
// 007cd866  897c241c             mov dword ptr [esp + 0x1c], edi
// 007cd86a  e871400300           call 0x8018e0
// 007cd86f  8d4c241c             lea ecx, [esp + 0x1c]
// 007cd873  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 007cd87a  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007cd880  8bcb                 mov ecx, ebx
// 007cd882  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 007cd88a  e8ffa3fdff           call 0x7a7c8e
// 007cd88f  85c0                 test eax, eax
// 007cd891  7413                 je 0x7cd8a6
// 007cd893  8d44241c             lea eax, [esp + 0x1c]
// 007cd897  50                   push eax
// 007cd898  8bcb                 mov ecx, ebx
// 007cd89a  e8efa3fdff           call 0x7a7c8e
// 007cd89f  8bc8                 mov ecx, eax
// 007cd8a1  e8e2a6fdff           call 0x7a7f88
// 007cd8a6  685089a500           push 0xa58950
// 007cd8ab  8d4c2440             lea ecx, [esp + 0x40]
// 007cd8af  e8a0a4fdff           call 0x7a7d54
// 007cd8b4  8d4c241c             lea ecx, [esp + 0x1c]
// 007cd8b8  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cd8be  50                   push eax
// 007cd8bf  68c9000000           push 0xc9
// 007cd8c4  8d4c2444             lea ecx, [esp + 0x44]
// 007cd8c8  e8c7f61a00           call 0x97cf94
// 007cd8cd  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 007cd8d4  8d4c2414             lea ecx, [esp + 0x14]
// 007cd8d8  51                   push ecx
// 007cd8d9  8b0e                 mov ecx, dword ptr [esi]
// 007cd8db  e8aef61a00           call 0x97cf8e
// 007cd8e0  8bc8                 mov ecx, eax
// 007cd8e2  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 007cd8ea  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cd8f0  50                   push eax
// 007cd8f1  68ca000000           push 0xca
// 007cd8f6  8d4c2444             lea ecx, [esp + 0x44]
// 007cd8fa  e895f61a00           call 0x97cf94
// 007cd8ff  8d4c2414             lea ecx, [esp + 0x14]
// 007cd903  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 007cd90b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cd911  8b0e                 mov ecx, dword ptr [esi]
// 007cd913  8d542420             lea edx, [esp + 0x20]
// 007cd917  52                   push edx
// 007cd918  e86bf61a00           call 0x97cf88
// 007cd91d  8bc8                 mov ecx, eax
// 007cd91f  c68424b800000003     mov byte ptr [esp + 0xb8], 3
// 007cd927  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cd92d  50                   push eax
// 007cd92e  68cb000000           push 0xcb
// 007cd933  8d4c2444             lea ecx, [esp + 0x44]
// 007cd937  e858f61a00           call 0x97cf94
// 007cd93c  8d4c2420             lea ecx, [esp + 0x20]
// 007cd940  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 007cd948  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cd94e  6a05                 push 5
// 007cd950  8d4c2440             lea ecx, [esp + 0x40]
// 007cd954  e82fa3fdff           call 0x7a7c88
// 007cd959  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007cd95d  50                   push eax
// 007cd95e  ff15d8ba9e00         call dword ptr [0x9ebad8]
// 007cd964  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007cd967  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007cd96a  8b5628               mov edx, dword ptr [esi + 0x28]
// 007cd96d  8d6e24               lea ebp, [esi + 0x24]
// 007cd970  894c2428             mov dword ptr [esp + 0x28], ecx
// 007cd974  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007cd977  89442430             mov dword ptr [esp + 0x30], eax
// 007cd97b  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 007cd981  8954242c             mov dword ptr [esp + 0x2c], edx
// 007cd985  8b5614               mov edx, dword ptr [esi + 0x14]
// 007cd988  894c2434             mov dword ptr [esp + 0x34], ecx
// 007cd98c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 007cd98f  897830               mov dword ptr [eax + 0x30], edi
// 007cd992  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 007cd999  89542414             mov dword ptr [esp + 0x14], edx
// 007cd99d  8b17                 mov edx, dword ptr [edi]
// 007cd99f  8b4224               mov eax, dword ptr [edx + 0x24]
// 007cd9a2  894c2424             mov dword ptr [esp + 0x24], ecx
// 007cd9a6  8bcf                 mov ecx, edi
// 007cd9a8  ffd0                 call eax
// 007cd9aa  6a00                 push 0
// 007cd9ac  6a00                 push 0
// 007cd9ae  6a00                 push 0
// 007cd9b0  6a00                 push 0
// 007cd9b2  8bcf                 mov ecx, edi
// 007cd9b4  e8b7aefdff           call 0x7a8870
// 007cd9b9  8b4368               mov eax, dword ptr [ebx + 0x68]
// 007cd9bc  894614               mov dword ptr [esi + 0x14], eax
// 007cd9bf  3b442414             cmp eax, dword ptr [esp + 0x14]
// 007cd9c3  0f83be000000         jae 0x7cda87
// 007cd9c9  8da42400000000       lea esp, [esp]
// 007cd9d0  8b13                 mov edx, dword ptr [ebx]
// 007cd9d2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 007cd9d8  56                   push esi
// 007cd9d9  57                   push edi
// 007cd9da  8bcb                 mov ecx, ebx
// 007cd9dc  ffd0                 call eax
// 007cd9de  837e1000             cmp dword ptr [esi + 0x10], 0
// 007cd9e2  0f849f000000         je 0x7cda87
// 007cd9e8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007cd9eb  51                   push ecx
// 007cd9ec  8d542420             lea edx, [esp + 0x20]
// 007cd9f0  687476a000           push 0xa07674
// 007cd9f5  52                   push edx
// 007cd9f6  ff15acce9e00         call dword ptr [0x9eceac]
// 007cd9fc  83c40c               add esp, 0xc
// 007cd9ff  8d4c241c             lea ecx, [esp + 0x1c]
// 007cda03  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cda09  50                   push eax
// 007cda0a  68cc000000           push 0xcc
// 007cda0f  8d4c2444             lea ecx, [esp + 0x44]
// 007cda13  e87cf51a00           call 0x97cf94
// 007cda18  8b4708               mov eax, dword ptr [edi + 8]
// 007cda1b  6a0a                 push 0xa
// 007cda1d  50                   push eax
// 007cda1e  ff15b4a09e00         call dword ptr [0x9ea0b4]
// 007cda24  8b4f08               mov ecx, dword ptr [edi + 8]
// 007cda27  6a08                 push 8
// 007cda29  51                   push ecx
// 007cda2a  89442440             mov dword ptr [esp + 0x40], eax
// 007cda2e  ff15b4a09e00         call dword ptr [0x9ea0b4]
// 007cda34  8b542438             mov edx, dword ptr [esp + 0x38]
// 007cda38  52                   push edx
// 007cda39  50                   push eax
// 007cda3a  6a00                 push 0
// 007cda3c  6a00                 push 0
// 007cda3e  55                   push ebp
// 007cda3f  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007cda45  8b4708               mov eax, dword ptr [edi + 8]
// 007cda48  6a02                 push 2
// 007cda4a  55                   push ebp
// 007cda4b  50                   push eax
// 007cda4c  ff151ca19e00         call dword ptr [0x9ea11c]
// 007cda52  8b13                 mov edx, dword ptr [ebx]
// 007cda54  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 007cda5a  56                   push esi
// 007cda5b  57                   push edi
// 007cda5c  8bcb                 mov ecx, ebx
// 007cda5e  ffd0                 call eax
// 007cda60  ff4614               inc dword ptr [esi + 0x14]
// 007cda63  6a00                 push 0
// 007cda65  6a00                 push 0
// 007cda67  e8f43d0300           call 0x801860
// 007cda6c  85c0                 test eax, eax
// 007cda6e  740f                 je 0x7cda7f
// 007cda70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007cda74  394e14               cmp dword ptr [esi + 0x14], ecx
// 007cda77  0f8253ffffff         jb 0x7cd9d0
// 007cda7d  eb08                 jmp 0x7cda87
// 007cda7f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007cda87  8d4c243c             lea ecx, [esp + 0x3c]
// 007cda8b  e88e9ffdff           call 0x7a7a1e
// 007cda90  837c241800           cmp dword ptr [esp + 0x18], 0
// 007cda95  751a                 jne 0x7cdab1
// 007cda97  8b442414             mov eax, dword ptr [esp + 0x14]
// 007cda9b  394614               cmp dword ptr [esi + 0x14], eax
// 007cda9e  7407                 je 0x7cdaa7
// 007cdaa0  3dffff0000           cmp eax, 0xffff
// 007cdaa5  750a                 jne 0x7cdab1
// 007cdaa7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007cdaaf  eb08                 jmp 0x7cdab9
// 007cdab1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007cdab9  8b542418             mov edx, dword ptr [esp + 0x18]
// 007cdabd  895610               mov dword ptr [esi + 0x10], edx
// 007cdac0  8b07                 mov eax, dword ptr [edi]
// 007cdac2  8b5028               mov edx, dword ptr [eax + 0x28]
// 007cdac5  6aff                 push -1
// 007cdac7  8bcf                 mov ecx, edi
// 007cdac9  ffd2                 call edx
// 007cdacb  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 007cdad1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007cdad5  8b542414             mov edx, dword ptr [esp + 0x14]
// 007cdad9  894830               mov dword ptr [eax + 0x30], ecx
// 007cdadc  8b442428             mov eax, dword ptr [esp + 0x28]
// 007cdae0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007cdae4  894500               mov dword ptr [ebp], eax
// 007cdae7  8b442434             mov eax, dword ptr [esp + 0x34]
// 007cdaeb  895614               mov dword ptr [esi + 0x14], edx
// 007cdaee  8b542430             mov edx, dword ptr [esp + 0x30]
// 007cdaf2  894d04               mov dword ptr [ebp + 4], ecx
// 007cdaf5  895508               mov dword ptr [ebp + 8], edx
// 007cdaf8  8d4c241c             lea ecx, [esp + 0x1c]
// 007cdafc  89450c               mov dword ptr [ebp + 0xc], eax
// 007cdaff  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cdb05  8d4c243c             lea ecx, [esp + 0x3c]
// 007cdb09  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 007cdb14  c744243c5c84a500     mov dword ptr [esp + 0x3c], 0xa5845c
// 007cdb1c  e8afa7fdff           call 0x7a82d0
// 007cdb21  8b442418             mov eax, dword ptr [esp + 0x18]
// 007cdb25  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007cdb2c  64890d00000000       mov dword ptr fs:[0], ecx
// 007cdb33  59                   pop ecx
// 007cdb34  5f                   pop edi
// 007cdb35  5e                   pop esi
// 007cdb36  5d                   pop ebp
// 007cdb37  5b                   pop ebx
// 007cdb38  81c4a8000000         add esp, 0xa8
// 007cdb3e  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CXTPReportView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp