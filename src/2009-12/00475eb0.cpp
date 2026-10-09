// roc 2009-12 00475eb0  unit: DxUserInput  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475eb0
//
// 00475eb0  6aff                 push -1
// 00475eb2  6878dd9200           push 0x92dd78
// 00475eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00475ebd  50                   push eax
// 00475ebe  64892500000000       mov dword ptr fs:[0], esp
// 00475ec5  83ec7c               sub esp, 0x7c
// 00475ec8  56                   push esi
// 00475ec9  c744240400000000     mov dword ptr [esp + 4], 0
// 00475ed1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00475ed4  8b5108               mov edx, dword ptr [ecx + 8]
// 00475ed7  50                   push eax
// 00475ed8  52                   push edx
// 00475ed9  50                   push eax
// 00475eda  52                   push edx
// 00475edb  83ec44               sub esp, 0x44
// 00475ede  8d4110               lea eax, [ecx + 0x10]
// 00475ee1  8bcc                 mov ecx, esp
// 00475ee3  8964245c             mov dword ptr [esp + 0x5c], esp
// 00475ee7  50                   push eax
// 00475ee8  e823f5ffff           call 0x475410
// 00475eed  8d4c2460             lea ecx, [esp + 0x60]
// 00475ef1  e83afeffff           call 0x475d30
// 00475ef6  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00475efd  50                   push eax
// 00475efe  8bce                 mov ecx, esi
// 00475f00  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 00475f0b  e810f7ffff           call 0x475620
// 00475f10  c744240401000000     mov dword ptr [esp + 4], 1
// 00475f18  8d4c2464             lea ecx, [esp + 0x64]
// 00475f1c  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 00475f27  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475f2d  8d4c2428             lea ecx, [esp + 0x28]
// 00475f31  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 00475f3c  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475f42  8d4c240c             lea ecx, [esp + 0xc]
// 00475f46  c684248800000000     mov byte ptr [esp + 0x88], 0
// 00475f4e  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475f54  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00475f5b  8bc6                 mov eax, esi
// 00475f5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00475f64  5e                   pop esi
// 00475f65  81c488000000         add esp, 0x88
// 00475f6b  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
