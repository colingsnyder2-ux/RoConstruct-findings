// roc 2012-06 004afc50  unit: VerbBinderJob  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004afc50
//
// 004afc50  6aff                 push -1
// 004afc52  68b848aa00           push 0xaa48b8
// 004afc57  64a100000000         mov eax, dword ptr fs:[0]
// 004afc5d  50                   push eax
// 004afc5e  64892500000000       mov dword ptr fs:[0], esp
// 004afc65  83ec7c               sub esp, 0x7c
// 004afc68  56                   push esi
// 004afc69  c744240400000000     mov dword ptr [esp + 4], 0
// 004afc71  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004afc74  8b5108               mov edx, dword ptr [ecx + 8]
// 004afc77  50                   push eax
// 004afc78  52                   push edx
// 004afc79  50                   push eax
// 004afc7a  52                   push edx
// 004afc7b  83ec44               sub esp, 0x44
// 004afc7e  8d4110               lea eax, [ecx + 0x10]
// 004afc81  8bcc                 mov ecx, esp
// 004afc83  8964245c             mov dword ptr [esp + 0x5c], esp
// 004afc87  50                   push eax
// 004afc88  e883f8ffff           call 0x4af510
// 004afc8d  8d4c2460             lea ecx, [esp + 0x60]
// 004afc91  e81afeffff           call 0x4afab0
// 004afc96  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 004afc9d  50                   push eax
// 004afc9e  8bce                 mov ecx, esi
// 004afca0  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 004afcab  e890faffff           call 0x4af740
// 004afcb0  c744240401000000     mov dword ptr [esp + 4], 1
// 004afcb8  8d4c2464             lea ecx, [esp + 0x64]
// 004afcbc  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 004afcc7  ff153c26b200         call dword ptr [0xb2263c]
// 004afccd  8d4c2428             lea ecx, [esp + 0x28]
// 004afcd1  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 004afcdc  ff153c26b200         call dword ptr [0xb2263c]
// 004afce2  8d4c240c             lea ecx, [esp + 0xc]
// 004afce6  c684248800000000     mov byte ptr [esp + 0x88], 0
// 004afcee  ff153c26b200         call dword ptr [0xb2263c]
// 004afcf4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004afcfb  8bc6                 mov eax, esi
// 004afcfd  64890d00000000       mov dword ptr fs:[0], ecx
// 004afd04  5e                   pop esi
// 004afd05  81c488000000         add esp, 0x88
// 004afd0b  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
