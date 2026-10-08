// roc 2007-08 005ae050  unit: RBX::VLighting::?$FactoryProduct  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ae050
//
// 005ae050  6aff                 push -1
// 005ae052  6828897500           push 0x758928
// 005ae057  64a100000000         mov eax, dword ptr fs:[0]
// 005ae05d  50                   push eax
// 005ae05e  64892500000000       mov dword ptr fs:[0], esp
// 005ae065  83ec7c               sub esp, 0x7c
// 005ae068  56                   push esi
// 005ae069  c744240400000000     mov dword ptr [esp + 4], 0
// 005ae071  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005ae074  8b5108               mov edx, dword ptr [ecx + 8]
// 005ae077  50                   push eax
// 005ae078  8b4104               mov eax, dword ptr [ecx + 4]
// 005ae07b  52                   push edx
// 005ae07c  8b11                 mov edx, dword ptr [ecx]
// 005ae07e  50                   push eax
// 005ae07f  52                   push edx
// 005ae080  83ec44               sub esp, 0x44
// 005ae083  8d4110               lea eax, [ecx + 0x10]
// 005ae086  8bcc                 mov ecx, esp
// 005ae088  8964245c             mov dword ptr [esp + 0x5c], esp
// 005ae08c  50                   push eax
// 005ae08d  e80eecffff           call 0x5acca0
// 005ae092  8d4c2460             lea ecx, [esp + 0x60]
// 005ae096  e875fbffff           call 0x5adc10
// 005ae09b  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 005ae0a2  50                   push eax
// 005ae0a3  8bce                 mov ecx, esi
// 005ae0a5  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 005ae0b0  e87bedffff           call 0x5ace30
// 005ae0b5  c744240401000000     mov dword ptr [esp + 4], 1
// 005ae0bd  8d4c2464             lea ecx, [esp + 0x64]
// 005ae0c1  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 005ae0cc  ff15ace67700         call dword ptr [0x77e6ac]
// 005ae0d2  8d4c2428             lea ecx, [esp + 0x28]
// 005ae0d6  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 005ae0e1  ff15ace67700         call dword ptr [0x77e6ac]
// 005ae0e7  8d4c240c             lea ecx, [esp + 0xc]
// 005ae0eb  c684248800000000     mov byte ptr [esp + 0x88], 0
// 005ae0f3  ff15ace67700         call dword ptr [0x77e6ac]
// 005ae0f9  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005ae100  8bc6                 mov eax, esi
// 005ae102  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae109  5e                   pop esi
// 005ae10a  81c488000000         add esp, 0x88
// 005ae110  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
