// roc 2009-12 00475de0  unit: DxUserInput  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475de0
//
// 00475de0  6aff                 push -1
// 00475de2  6878dd9200           push 0x92dd78
// 00475de7  64a100000000         mov eax, dword ptr fs:[0]
// 00475ded  50                   push eax
// 00475dee  64892500000000       mov dword ptr fs:[0], esp
// 00475df5  83ec7c               sub esp, 0x7c
// 00475df8  56                   push esi
// 00475df9  c744240400000000     mov dword ptr [esp + 4], 0
// 00475e01  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00475e04  8b5108               mov edx, dword ptr [ecx + 8]
// 00475e07  50                   push eax
// 00475e08  8b4104               mov eax, dword ptr [ecx + 4]
// 00475e0b  52                   push edx
// 00475e0c  8b11                 mov edx, dword ptr [ecx]
// 00475e0e  50                   push eax
// 00475e0f  52                   push edx
// 00475e10  83ec44               sub esp, 0x44
// 00475e13  8d4110               lea eax, [ecx + 0x10]
// 00475e16  8bcc                 mov ecx, esp
// 00475e18  8964245c             mov dword ptr [esp + 0x5c], esp
// 00475e1c  50                   push eax
// 00475e1d  e8eef5ffff           call 0x475410
// 00475e22  8d4c2460             lea ecx, [esp + 0x60]
// 00475e26  e805ffffff           call 0x475d30
// 00475e2b  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00475e32  50                   push eax
// 00475e33  8bce                 mov ecx, esi
// 00475e35  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 00475e40  e8dbf7ffff           call 0x475620
// 00475e45  c744240401000000     mov dword ptr [esp + 4], 1
// 00475e4d  8d4c2464             lea ecx, [esp + 0x64]
// 00475e51  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 00475e5c  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475e62  8d4c2428             lea ecx, [esp + 0x28]
// 00475e66  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 00475e71  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475e77  8d4c240c             lea ecx, [esp + 0xc]
// 00475e7b  c684248800000000     mov byte ptr [esp + 0x88], 0
// 00475e83  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475e89  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00475e90  8bc6                 mov eax, esi
// 00475e92  64890d00000000       mov dword ptr fs:[0], ecx
// 00475e99  5e                   pop esi
// 00475e9a  81c488000000         add esp, 0x88
// 00475ea0  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
