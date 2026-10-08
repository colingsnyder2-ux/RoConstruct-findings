// roc 2011-06 0049a970  unit: VerbBinderJob  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049a970
//
// 0049a970  6aff                 push -1
// 0049a972  68c86c9d00           push 0x9d6cc8
// 0049a977  64a100000000         mov eax, dword ptr fs:[0]
// 0049a97d  50                   push eax
// 0049a97e  64892500000000       mov dword ptr fs:[0], esp
// 0049a985  83ec7c               sub esp, 0x7c
// 0049a988  56                   push esi
// 0049a989  c744240400000000     mov dword ptr [esp + 4], 0
// 0049a991  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0049a994  8b5108               mov edx, dword ptr [ecx + 8]
// 0049a997  50                   push eax
// 0049a998  8b4104               mov eax, dword ptr [ecx + 4]
// 0049a99b  52                   push edx
// 0049a99c  8b11                 mov edx, dword ptr [ecx]
// 0049a99e  50                   push eax
// 0049a99f  52                   push edx
// 0049a9a0  83ec44               sub esp, 0x44
// 0049a9a3  8d4110               lea eax, [ecx + 0x10]
// 0049a9a6  8bcc                 mov ecx, esp
// 0049a9a8  8964245c             mov dword ptr [esp + 0x5c], esp
// 0049a9ac  50                   push eax
// 0049a9ad  e86ef9ffff           call 0x49a320
// 0049a9b2  8d4c2460             lea ecx, [esp + 0x60]
// 0049a9b6  e8e5feffff           call 0x49a8a0
// 0049a9bb  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0049a9c2  50                   push eax
// 0049a9c3  8bce                 mov ecx, esi
// 0049a9c5  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 0049a9d0  e85bfbffff           call 0x49a530
// 0049a9d5  c744240401000000     mov dword ptr [esp + 4], 1
// 0049a9dd  8d4c2464             lea ecx, [esp + 0x64]
// 0049a9e1  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0049a9ec  ff15d004a400         call dword ptr [0xa404d0]
// 0049a9f2  8d4c2428             lea ecx, [esp + 0x28]
// 0049a9f6  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0049aa01  ff15d004a400         call dword ptr [0xa404d0]
// 0049aa07  8d4c240c             lea ecx, [esp + 0xc]
// 0049aa0b  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0049aa13  ff15d004a400         call dword ptr [0xa404d0]
// 0049aa19  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0049aa20  8bc6                 mov eax, esi
// 0049aa22  64890d00000000       mov dword ptr fs:[0], ecx
// 0049aa29  5e                   pop esi
// 0049aa2a  81c488000000         add esp, 0x88
// 0049aa30  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
