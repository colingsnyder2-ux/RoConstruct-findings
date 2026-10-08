// roc 2007-03 00594510  unit: seg_00590000  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00594510
//
// 00594510  6aff                 push -1
// 00594512  68f87e7500           push 0x757ef8
// 00594517  64a100000000         mov eax, dword ptr fs:[0]
// 0059451d  50                   push eax
// 0059451e  64892500000000       mov dword ptr fs:[0], esp
// 00594525  83ec7c               sub esp, 0x7c
// 00594528  56                   push esi
// 00594529  c744240400000000     mov dword ptr [esp + 4], 0
// 00594531  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594534  8b5108               mov edx, dword ptr [ecx + 8]
// 00594537  50                   push eax
// 00594538  52                   push edx
// 00594539  50                   push eax
// 0059453a  52                   push edx
// 0059453b  83ec44               sub esp, 0x44
// 0059453e  8d4110               lea eax, [ecx + 0x10]
// 00594541  8bcc                 mov ecx, esp
// 00594543  8964245c             mov dword ptr [esp + 0x5c], esp
// 00594547  50                   push eax
// 00594548  e883d2ffff           call 0x5917d0
// 0059454d  8d4c2460             lea ecx, [esp + 0x60]
// 00594551  e81af4ffff           call 0x593970
// 00594556  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0059455d  50                   push eax
// 0059455e  8bce                 mov ecx, esi
// 00594560  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 0059456b  e820e0ffff           call 0x592590
// 00594570  c744240401000000     mov dword ptr [esp + 4], 1
// 00594578  8d4c2464             lea ecx, [esp + 0x64]
// 0059457c  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 00594587  ff158ce77700         call dword ptr [0x77e78c]
// 0059458d  8d4c2428             lea ecx, [esp + 0x28]
// 00594591  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0059459c  ff158ce77700         call dword ptr [0x77e78c]
// 005945a2  8d4c240c             lea ecx, [esp + 0xc]
// 005945a6  c684248800000000     mov byte ptr [esp + 0x88], 0
// 005945ae  ff158ce77700         call dword ptr [0x77e78c]
// 005945b4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005945bb  8bc6                 mov eax, esi
// 005945bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005945c4  5e                   pop esi
// 005945c5  81c488000000         add esp, 0x88
// 005945cb  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
