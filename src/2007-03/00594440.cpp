// roc 2007-03 00594440  unit: seg_00590000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00594440
//
// 00594440  6aff                 push -1
// 00594442  68f87e7500           push 0x757ef8
// 00594447  64a100000000         mov eax, dword ptr fs:[0]
// 0059444d  50                   push eax
// 0059444e  64892500000000       mov dword ptr fs:[0], esp
// 00594455  83ec7c               sub esp, 0x7c
// 00594458  56                   push esi
// 00594459  c744240400000000     mov dword ptr [esp + 4], 0
// 00594461  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594464  8b5108               mov edx, dword ptr [ecx + 8]
// 00594467  50                   push eax
// 00594468  8b4104               mov eax, dword ptr [ecx + 4]
// 0059446b  52                   push edx
// 0059446c  8b11                 mov edx, dword ptr [ecx]
// 0059446e  50                   push eax
// 0059446f  52                   push edx
// 00594470  83ec44               sub esp, 0x44
// 00594473  8d4110               lea eax, [ecx + 0x10]
// 00594476  8bcc                 mov ecx, esp
// 00594478  8964245c             mov dword ptr [esp + 0x5c], esp
// 0059447c  50                   push eax
// 0059447d  e84ed3ffff           call 0x5917d0
// 00594482  8d4c2460             lea ecx, [esp + 0x60]
// 00594486  e8e5f4ffff           call 0x593970
// 0059448b  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00594492  50                   push eax
// 00594493  8bce                 mov ecx, esi
// 00594495  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 005944a0  e8ebe0ffff           call 0x592590
// 005944a5  c744240401000000     mov dword ptr [esp + 4], 1
// 005944ad  8d4c2464             lea ecx, [esp + 0x64]
// 005944b1  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 005944bc  ff158ce77700         call dword ptr [0x77e78c]
// 005944c2  8d4c2428             lea ecx, [esp + 0x28]
// 005944c6  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 005944d1  ff158ce77700         call dword ptr [0x77e78c]
// 005944d7  8d4c240c             lea ecx, [esp + 0xc]
// 005944db  c684248800000000     mov byte ptr [esp + 0x88], 0
// 005944e3  ff158ce77700         call dword ptr [0x77e78c]
// 005944e9  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005944f0  8bc6                 mov eax, esi
// 005944f2  64890d00000000       mov dword ptr fs:[0], ecx
// 005944f9  5e                   pop esi
// 005944fa  81c488000000         add esp, 0x88
// 00594500  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
