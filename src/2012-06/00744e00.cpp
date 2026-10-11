// roc 2012-06 00744e00  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00744e00
//
// 00744e00  6aff                 push -1
// 00744e02  687c15ac00           push 0xac157c
// 00744e07  64a100000000         mov eax, dword ptr fs:[0]
// 00744e0d  50                   push eax
// 00744e0e  64892500000000       mov dword ptr fs:[0], esp
// 00744e15  83ec20               sub esp, 0x20
// 00744e18  53                   push ebx
// 00744e19  56                   push esi
// 00744e1a  57                   push edi
// 00744e1b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00744e1f  33db                 xor ebx, ebx
// 00744e21  895c240c             mov dword ptr [esp + 0xc], ebx
// 00744e25  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00744e29  57                   push edi
// 00744e2a  56                   push esi
// 00744e2b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00744e2f  e8ecf3ffff           call 0x744220
// 00744e34  83c408               add esp, 8
// 00744e37  68402fb500           push 0xb52f40
// 00744e3c  8bce                 mov ecx, esi
// 00744e3e  895c2438             mov dword ptr [esp + 0x38], ebx
// 00744e42  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00744e4a  ff155c26b200         call dword ptr [0xb2265c]
// 00744e50  8d4704               lea eax, [edi + 4]
// 00744e53  50                   push eax
// 00744e54  8d4c2414             lea ecx, [esp + 0x14]
// 00744e58  51                   push ecx
// 00744e59  e8c2f3ffff           call 0x744220
// 00744e5e  83c408               add esp, 8
// 00744e61  50                   push eax
// 00744e62  8bce                 mov ecx, esi
// 00744e64  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00744e6c  ff15e026b200         call dword ptr [0xb226e0]
// 00744e72  8d4c2410             lea ecx, [esp + 0x10]
// 00744e76  885c2434             mov byte ptr [esp + 0x34], bl
// 00744e7a  ff153c26b200         call dword ptr [0xb2263c]
// 00744e80  68402fb500           push 0xb52f40
// 00744e85  8bce                 mov ecx, esi
// 00744e87  ff155c26b200         call dword ptr [0xb2265c]
// 00744e8d  83c708               add edi, 8
// 00744e90  8d542410             lea edx, [esp + 0x10]
// 00744e94  57                   push edi
// 00744e95  52                   push edx
// 00744e96  e885f3ffff           call 0x744220
// 00744e9b  83c408               add esp, 8
// 00744e9e  50                   push eax
// 00744e9f  8bce                 mov ecx, esi
// 00744ea1  c744243802000000     mov dword ptr [esp + 0x38], 2
// 00744ea9  ff15e026b200         call dword ptr [0xb226e0]
// 00744eaf  8d4c2410             lea ecx, [esp + 0x10]
// 00744eb3  885c2434             mov byte ptr [esp + 0x34], bl
// 00744eb7  ff153c26b200         call dword ptr [0xb2263c]
// 00744ebd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00744ec1  5f                   pop edi
// 00744ec2  8bc6                 mov eax, esi
// 00744ec4  5e                   pop esi
// 00744ec5  5b                   pop ebx
// 00744ec6  64890d00000000       mov dword ptr fs:[0], ecx
// 00744ecd  83c42c               add esp, 0x2c
// 00744ed0  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
