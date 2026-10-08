// roc 2012-06 004afb80  unit: VerbBinderJob  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004afb80
//
// 004afb80  6aff                 push -1
// 004afb82  68b848aa00           push 0xaa48b8
// 004afb87  64a100000000         mov eax, dword ptr fs:[0]
// 004afb8d  50                   push eax
// 004afb8e  64892500000000       mov dword ptr fs:[0], esp
// 004afb95  83ec7c               sub esp, 0x7c
// 004afb98  56                   push esi
// 004afb99  c744240400000000     mov dword ptr [esp + 4], 0
// 004afba1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004afba4  8b5108               mov edx, dword ptr [ecx + 8]
// 004afba7  50                   push eax
// 004afba8  8b4104               mov eax, dword ptr [ecx + 4]
// 004afbab  52                   push edx
// 004afbac  8b11                 mov edx, dword ptr [ecx]
// 004afbae  50                   push eax
// 004afbaf  52                   push edx
// 004afbb0  83ec44               sub esp, 0x44
// 004afbb3  8d4110               lea eax, [ecx + 0x10]
// 004afbb6  8bcc                 mov ecx, esp
// 004afbb8  8964245c             mov dword ptr [esp + 0x5c], esp
// 004afbbc  50                   push eax
// 004afbbd  e84ef9ffff           call 0x4af510
// 004afbc2  8d4c2460             lea ecx, [esp + 0x60]
// 004afbc6  e8e5feffff           call 0x4afab0
// 004afbcb  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 004afbd2  50                   push eax
// 004afbd3  8bce                 mov ecx, esi
// 004afbd5  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 004afbe0  e85bfbffff           call 0x4af740
// 004afbe5  c744240401000000     mov dword ptr [esp + 4], 1
// 004afbed  8d4c2464             lea ecx, [esp + 0x64]
// 004afbf1  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 004afbfc  ff153c26b200         call dword ptr [0xb2263c]
// 004afc02  8d4c2428             lea ecx, [esp + 0x28]
// 004afc06  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 004afc11  ff153c26b200         call dword ptr [0xb2263c]
// 004afc17  8d4c240c             lea ecx, [esp + 0xc]
// 004afc1b  c684248800000000     mov byte ptr [esp + 0x88], 0
// 004afc23  ff153c26b200         call dword ptr [0xb2263c]
// 004afc29  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004afc30  8bc6                 mov eax, esi
// 004afc32  64890d00000000       mov dword ptr fs:[0], ecx
// 004afc39  5e                   pop esi
// 004afc3a  81c488000000         add esp, 0x88
// 004afc40  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
