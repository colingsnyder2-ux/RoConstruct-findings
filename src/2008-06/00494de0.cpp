// roc 2008-06 00494de0  unit: RBX::VRunService::?$SignalDesc  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494de0
//
// 00494de0  6aff                 push -1
// 00494de2  6870687c00           push 0x7c6870
// 00494de7  64a100000000         mov eax, dword ptr fs:[0]
// 00494ded  50                   push eax
// 00494dee  64892500000000       mov dword ptr fs:[0], esp
// 00494df5  83ec0c               sub esp, 0xc
// 00494df8  56                   push esi
// 00494df9  8bf1                 mov esi, ecx
// 00494dfb  89742404             mov dword ptr [esp + 4], esi
// 00494dff  6a04                 push 4
// 00494e01  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00494e09  e812bb2000           call 0x6a0920
// 00494e0e  83c404               add esp, 4
// 00494e11  85c0                 test eax, eax
// 00494e13  7404                 je 0x494e19
// 00494e15  8930                 mov dword ptr [eax], esi
// 00494e17  eb02                 jmp 0x494e1b
// 00494e19  33c0                 xor eax, eax
// 00494e1b  8906                 mov dword ptr [esi], eax
// 00494e1d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00494e21  50                   push eax
// 00494e22  83ec50               sub esp, 0x50
// 00494e25  8d9424c4000000       lea edx, [esp + 0xc4]
// 00494e2c  8964245c             mov dword ptr [esp + 0x5c], esp
// 00494e30  8bcc                 mov ecx, esp
// 00494e32  52                   push edx
// 00494e33  c644247002           mov byte ptr [esp + 0x70], 2
// 00494e38  e8f379ffff           call 0x48c830
// 00494e3d  83ec50               sub esp, 0x50
// 00494e40  8d8424c4000000       lea eax, [esp + 0xc4]
// 00494e47  89a424b0000000       mov dword ptr [esp + 0xb0], esp
// 00494e4e  8bcc                 mov ecx, esp
// 00494e50  50                   push eax
// 00494e51  c68424c000000003     mov byte ptr [esp + 0xc0], 3
// 00494e59  e8d279ffff           call 0x48c830
// 00494e5e  8bce                 mov ecx, esi
// 00494e60  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 00494e68  e813fdffff           call 0x494b80
// 00494e6d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00494e71  c644241800           mov byte ptr [esp + 0x18], 0
// 00494e76  85c0                 test eax, eax
// 00494e78  741d                 je 0x494e97
// 00494e7a  8b00                 mov eax, dword ptr [eax]
// 00494e7c  85c0                 test eax, eax
// 00494e7e  740f                 je 0x494e8f
// 00494e80  8d4c2428             lea ecx, [esp + 0x28]
// 00494e84  6a01                 push 1
// 00494e86  51                   push ecx
// 00494e87  8bd1                 mov edx, ecx
// 00494e89  52                   push edx
// 00494e8a  ffd0                 call eax
// 00494e8c  83c40c               add esp, 0xc
// 00494e8f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00494e97  8b442470             mov eax, dword ptr [esp + 0x70]
// 00494e9b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00494ea3  85c0                 test eax, eax
// 00494ea5  7415                 je 0x494ebc
// 00494ea7  8b00                 mov eax, dword ptr [eax]
// 00494ea9  85c0                 test eax, eax
// 00494eab  740f                 je 0x494ebc
// 00494ead  8d4c2478             lea ecx, [esp + 0x78]
// 00494eb1  6a01                 push 1
// 00494eb3  51                   push ecx
// 00494eb4  8bd1                 mov edx, ecx
// 00494eb6  52                   push edx
// 00494eb7  ffd0                 call eax
// 00494eb9  83c40c               add esp, 0xc
// 00494ebc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00494ec0  8bc6                 mov eax, esi
// 00494ec2  64890d00000000       mov dword ptr fs:[0], ecx
// 00494ec9  5e                   pop esi
// 00494eca  83c418               add esp, 0x18
// 00494ecd  c2a000               ret 0xa0
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$?0V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
