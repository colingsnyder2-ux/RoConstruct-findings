// roc 2009-12 006b1a00  unit: RBX::DropperTool  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b1a00
//
// 006b1a00  6aff                 push -1
// 006b1a02  680c849400           push 0x94840c
// 006b1a07  64a100000000         mov eax, dword ptr fs:[0]
// 006b1a0d  50                   push eax
// 006b1a0e  64892500000000       mov dword ptr fs:[0], esp
// 006b1a15  83ec20               sub esp, 0x20
// 006b1a18  53                   push ebx
// 006b1a19  56                   push esi
// 006b1a1a  57                   push edi
// 006b1a1b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 006b1a1f  33db                 xor ebx, ebx
// 006b1a21  895c240c             mov dword ptr [esp + 0xc], ebx
// 006b1a25  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006b1a29  57                   push edi
// 006b1a2a  56                   push esi
// 006b1a2b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 006b1a2f  e86ca80000           call 0x6bc2a0
// 006b1a34  83c408               add esp, 8
// 006b1a37  6860619a00           push 0x9a6160
// 006b1a3c  8bce                 mov ecx, esi
// 006b1a3e  895c2438             mov dword ptr [esp + 0x38], ebx
// 006b1a42  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006b1a4a  ff1504b79800         call dword ptr [0x98b704]
// 006b1a50  8d4704               lea eax, [edi + 4]
// 006b1a53  50                   push eax
// 006b1a54  8d4c2414             lea ecx, [esp + 0x14]
// 006b1a58  51                   push ecx
// 006b1a59  e842a80000           call 0x6bc2a0
// 006b1a5e  83c408               add esp, 8
// 006b1a61  50                   push eax
// 006b1a62  8bce                 mov ecx, esi
// 006b1a64  c744243801000000     mov dword ptr [esp + 0x38], 1
// 006b1a6c  ff15fcb69800         call dword ptr [0x98b6fc]
// 006b1a72  8d4c2410             lea ecx, [esp + 0x10]
// 006b1a76  885c2434             mov byte ptr [esp + 0x34], bl
// 006b1a7a  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b1a80  6860619a00           push 0x9a6160
// 006b1a85  8bce                 mov ecx, esi
// 006b1a87  ff1504b79800         call dword ptr [0x98b704]
// 006b1a8d  83c708               add edi, 8
// 006b1a90  8d542410             lea edx, [esp + 0x10]
// 006b1a94  57                   push edi
// 006b1a95  52                   push edx
// 006b1a96  e805a80000           call 0x6bc2a0
// 006b1a9b  83c408               add esp, 8
// 006b1a9e  50                   push eax
// 006b1a9f  8bce                 mov ecx, esi
// 006b1aa1  c744243802000000     mov dword ptr [esp + 0x38], 2
// 006b1aa9  ff15fcb69800         call dword ptr [0x98b6fc]
// 006b1aaf  8d4c2410             lea ecx, [esp + 0x10]
// 006b1ab3  885c2434             mov byte ptr [esp + 0x34], bl
// 006b1ab7  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b1abd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b1ac1  5f                   pop edi
// 006b1ac2  8bc6                 mov eax, esi
// 006b1ac4  5e                   pop esi
// 006b1ac5  5b                   pop ebx
// 006b1ac6  64890d00000000       mov dword ptr fs:[0], ecx
// 006b1acd  83c42c               add esp, 0x2c
// 006b1ad0  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
