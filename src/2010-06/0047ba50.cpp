// roc 2010-06 0047ba50  unit: DxUserInput  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047ba50
//
// 0047ba50  6aff                 push -1
// 0047ba52  68684f9800           push 0x984f68
// 0047ba57  64a100000000         mov eax, dword ptr fs:[0]
// 0047ba5d  50                   push eax
// 0047ba5e  64892500000000       mov dword ptr fs:[0], esp
// 0047ba65  83ec7c               sub esp, 0x7c
// 0047ba68  56                   push esi
// 0047ba69  c744240400000000     mov dword ptr [esp + 4], 0
// 0047ba71  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047ba74  8b5108               mov edx, dword ptr [ecx + 8]
// 0047ba77  50                   push eax
// 0047ba78  52                   push edx
// 0047ba79  50                   push eax
// 0047ba7a  52                   push edx
// 0047ba7b  83ec44               sub esp, 0x44
// 0047ba7e  8d4110               lea eax, [ecx + 0x10]
// 0047ba81  8bcc                 mov ecx, esp
// 0047ba83  8964245c             mov dword ptr [esp + 0x5c], esp
// 0047ba87  50                   push eax
// 0047ba88  e823f5ffff           call 0x47afb0
// 0047ba8d  8d4c2460             lea ecx, [esp + 0x60]
// 0047ba91  e83afeffff           call 0x47b8d0
// 0047ba96  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0047ba9d  50                   push eax
// 0047ba9e  8bce                 mov ecx, esi
// 0047baa0  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 0047baab  e810f7ffff           call 0x47b1c0
// 0047bab0  c744240401000000     mov dword ptr [esp + 4], 1
// 0047bab8  8d4c2464             lea ecx, [esp + 0x64]
// 0047babc  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0047bac7  ff1500a49e00         call dword ptr [0x9ea400]
// 0047bacd  8d4c2428             lea ecx, [esp + 0x28]
// 0047bad1  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0047badc  ff1500a49e00         call dword ptr [0x9ea400]
// 0047bae2  8d4c240c             lea ecx, [esp + 0xc]
// 0047bae6  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0047baee  ff1500a49e00         call dword ptr [0x9ea400]
// 0047baf4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0047bafb  8bc6                 mov eax, esi
// 0047bafd  64890d00000000       mov dword ptr fs:[0], ecx
// 0047bb04  5e                   pop esi
// 0047bb05  81c488000000         add esp, 0x88
// 0047bb0b  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
