// roc 2008-06 005e0a10  unit: RBX::VLighting::?$FactoryProduct  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0a10
//
// 005e0a10  6aff                 push -1
// 005e0a12  6818637d00           push 0x7d6318
// 005e0a17  64a100000000         mov eax, dword ptr fs:[0]
// 005e0a1d  50                   push eax
// 005e0a1e  64892500000000       mov dword ptr fs:[0], esp
// 005e0a25  83ec7c               sub esp, 0x7c
// 005e0a28  56                   push esi
// 005e0a29  c744240400000000     mov dword ptr [esp + 4], 0
// 005e0a31  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005e0a34  8b5108               mov edx, dword ptr [ecx + 8]
// 005e0a37  50                   push eax
// 005e0a38  8b4104               mov eax, dword ptr [ecx + 4]
// 005e0a3b  52                   push edx
// 005e0a3c  8b11                 mov edx, dword ptr [ecx]
// 005e0a3e  50                   push eax
// 005e0a3f  52                   push edx
// 005e0a40  83ec44               sub esp, 0x44
// 005e0a43  8d4110               lea eax, [ecx + 0x10]
// 005e0a46  8bcc                 mov ecx, esp
// 005e0a48  8964245c             mov dword ptr [esp + 0x5c], esp
// 005e0a4c  50                   push eax
// 005e0a4d  e87eecffff           call 0x5df6d0
// 005e0a52  8d4c2460             lea ecx, [esp + 0x60]
// 005e0a56  e805fbffff           call 0x5e0560
// 005e0a5b  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 005e0a62  50                   push eax
// 005e0a63  8bce                 mov ecx, esi
// 005e0a65  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 005e0a70  e8fbedffff           call 0x5df870
// 005e0a75  c744240401000000     mov dword ptr [esp + 4], 1
// 005e0a7d  8d4c2464             lea ecx, [esp + 0x64]
// 005e0a81  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 005e0a8c  ff1568248000         call dword ptr [0x802468]
// 005e0a92  8d4c2428             lea ecx, [esp + 0x28]
// 005e0a96  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 005e0aa1  ff1568248000         call dword ptr [0x802468]
// 005e0aa7  8d4c240c             lea ecx, [esp + 0xc]
// 005e0aab  c684248800000000     mov byte ptr [esp + 0x88], 0
// 005e0ab3  ff1568248000         call dword ptr [0x802468]
// 005e0ab9  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005e0ac0  8bc6                 mov eax, esi
// 005e0ac2  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0ac9  5e                   pop esi
// 005e0aca  81c488000000         add esp, 0x88
// 005e0ad0  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
