// roc 2008-06 005bea10  unit: RBX::Soundscape::SoundService  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bea10
//
// 005bea10  6aff                 push -1
// 005bea12  688c3f7d00           push 0x7d3f8c
// 005bea17  64a100000000         mov eax, dword ptr fs:[0]
// 005bea1d  50                   push eax
// 005bea1e  64892500000000       mov dword ptr fs:[0], esp
// 005bea25  83ec20               sub esp, 0x20
// 005bea28  53                   push ebx
// 005bea29  56                   push esi
// 005bea2a  57                   push edi
// 005bea2b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005bea2f  33db                 xor ebx, ebx
// 005bea31  895c240c             mov dword ptr [esp + 0xc], ebx
// 005bea35  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005bea39  57                   push edi
// 005bea3a  56                   push esi
// 005bea3b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 005bea3f  e8fcf5ffff           call 0x5be040
// 005bea44  83c408               add esp, 8
// 005bea47  68502e8100           push 0x812e50
// 005bea4c  8bce                 mov ecx, esi
// 005bea4e  895c2438             mov dword ptr [esp + 0x38], ebx
// 005bea52  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005bea5a  ff1548248000         call dword ptr [0x802448]
// 005bea60  8d4704               lea eax, [edi + 4]
// 005bea63  50                   push eax
// 005bea64  8d4c2414             lea ecx, [esp + 0x14]
// 005bea68  51                   push ecx
// 005bea69  e8d2f5ffff           call 0x5be040
// 005bea6e  83c408               add esp, 8
// 005bea71  50                   push eax
// 005bea72  8bce                 mov ecx, esi
// 005bea74  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005bea7c  ff1550248000         call dword ptr [0x802450]
// 005bea82  8d4c2410             lea ecx, [esp + 0x10]
// 005bea86  885c2434             mov byte ptr [esp + 0x34], bl
// 005bea8a  ff1568248000         call dword ptr [0x802468]
// 005bea90  68502e8100           push 0x812e50
// 005bea95  8bce                 mov ecx, esi
// 005bea97  ff1548248000         call dword ptr [0x802448]
// 005bea9d  83c708               add edi, 8
// 005beaa0  8d542410             lea edx, [esp + 0x10]
// 005beaa4  57                   push edi
// 005beaa5  52                   push edx
// 005beaa6  e895f5ffff           call 0x5be040
// 005beaab  83c408               add esp, 8
// 005beaae  50                   push eax
// 005beaaf  8bce                 mov ecx, esi
// 005beab1  c744243802000000     mov dword ptr [esp + 0x38], 2
// 005beab9  ff1550248000         call dword ptr [0x802450]
// 005beabf  8d4c2410             lea ecx, [esp + 0x10]
// 005beac3  885c2434             mov byte ptr [esp + 0x34], bl
// 005beac7  ff1568248000         call dword ptr [0x802468]
// 005beacd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bead1  5f                   pop edi
// 005bead2  8bc6                 mov eax, esi
// 005bead4  5e                   pop esi
// 005bead5  5b                   pop ebx
// 005bead6  64890d00000000       mov dword ptr fs:[0], ecx
// 005beadd  83c42c               add esp, 0x2c
// 005beae0  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
