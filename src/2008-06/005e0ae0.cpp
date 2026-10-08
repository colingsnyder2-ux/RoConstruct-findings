// roc 2008-06 005e0ae0  unit: RBX::VLighting::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0ae0
//
// 005e0ae0  6aff                 push -1
// 005e0ae2  6818637d00           push 0x7d6318
// 005e0ae7  64a100000000         mov eax, dword ptr fs:[0]
// 005e0aed  50                   push eax
// 005e0aee  64892500000000       mov dword ptr fs:[0], esp
// 005e0af5  83ec7c               sub esp, 0x7c
// 005e0af8  56                   push esi
// 005e0af9  c744240400000000     mov dword ptr [esp + 4], 0
// 005e0b01  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005e0b04  8b5108               mov edx, dword ptr [ecx + 8]
// 005e0b07  50                   push eax
// 005e0b08  52                   push edx
// 005e0b09  50                   push eax
// 005e0b0a  52                   push edx
// 005e0b0b  83ec44               sub esp, 0x44
// 005e0b0e  8d4110               lea eax, [ecx + 0x10]
// 005e0b11  8bcc                 mov ecx, esp
// 005e0b13  8964245c             mov dword ptr [esp + 0x5c], esp
// 005e0b17  50                   push eax
// 005e0b18  e8b3ebffff           call 0x5df6d0
// 005e0b1d  8d4c2460             lea ecx, [esp + 0x60]
// 005e0b21  e83afaffff           call 0x5e0560
// 005e0b26  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 005e0b2d  50                   push eax
// 005e0b2e  8bce                 mov ecx, esi
// 005e0b30  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 005e0b3b  e830edffff           call 0x5df870
// 005e0b40  c744240401000000     mov dword ptr [esp + 4], 1
// 005e0b48  8d4c2464             lea ecx, [esp + 0x64]
// 005e0b4c  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 005e0b57  ff1568248000         call dword ptr [0x802468]
// 005e0b5d  8d4c2428             lea ecx, [esp + 0x28]
// 005e0b61  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 005e0b6c  ff1568248000         call dword ptr [0x802468]
// 005e0b72  8d4c240c             lea ecx, [esp + 0xc]
// 005e0b76  c684248800000000     mov byte ptr [esp + 0x88], 0
// 005e0b7e  ff1568248000         call dword ptr [0x802468]
// 005e0b84  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005e0b8b  8bc6                 mov eax, esi
// 005e0b8d  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0b94  5e                   pop esi
// 005e0b95  81c488000000         add esp, 0x88
// 005e0b9b  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
