// roc 2011-06 0049aa40  unit: VerbBinderJob  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049aa40
//
// 0049aa40  6aff                 push -1
// 0049aa42  68c86c9d00           push 0x9d6cc8
// 0049aa47  64a100000000         mov eax, dword ptr fs:[0]
// 0049aa4d  50                   push eax
// 0049aa4e  64892500000000       mov dword ptr fs:[0], esp
// 0049aa55  83ec7c               sub esp, 0x7c
// 0049aa58  56                   push esi
// 0049aa59  c744240400000000     mov dword ptr [esp + 4], 0
// 0049aa61  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0049aa64  8b5108               mov edx, dword ptr [ecx + 8]
// 0049aa67  50                   push eax
// 0049aa68  52                   push edx
// 0049aa69  50                   push eax
// 0049aa6a  52                   push edx
// 0049aa6b  83ec44               sub esp, 0x44
// 0049aa6e  8d4110               lea eax, [ecx + 0x10]
// 0049aa71  8bcc                 mov ecx, esp
// 0049aa73  8964245c             mov dword ptr [esp + 0x5c], esp
// 0049aa77  50                   push eax
// 0049aa78  e8a3f8ffff           call 0x49a320
// 0049aa7d  8d4c2460             lea ecx, [esp + 0x60]
// 0049aa81  e81afeffff           call 0x49a8a0
// 0049aa86  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0049aa8d  50                   push eax
// 0049aa8e  8bce                 mov ecx, esi
// 0049aa90  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 0049aa9b  e890faffff           call 0x49a530
// 0049aaa0  c744240401000000     mov dword ptr [esp + 4], 1
// 0049aaa8  8d4c2464             lea ecx, [esp + 0x64]
// 0049aaac  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0049aab7  ff15d004a400         call dword ptr [0xa404d0]
// 0049aabd  8d4c2428             lea ecx, [esp + 0x28]
// 0049aac1  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0049aacc  ff15d004a400         call dword ptr [0xa404d0]
// 0049aad2  8d4c240c             lea ecx, [esp + 0xc]
// 0049aad6  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0049aade  ff15d004a400         call dword ptr [0xa404d0]
// 0049aae4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0049aaeb  8bc6                 mov eax, esi
// 0049aaed  64890d00000000       mov dword ptr fs:[0], ecx
// 0049aaf4  5e                   pop esi
// 0049aaf5  81c488000000         add esp, 0x88
// 0049aafb  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
