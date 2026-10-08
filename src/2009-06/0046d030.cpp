// roc 2009-06 0046d030  unit: DxUserInput  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046d030
//
// 0046d030  6aff                 push -1
// 0046d032  6888348500           push 0x853488
// 0046d037  64a100000000         mov eax, dword ptr fs:[0]
// 0046d03d  50                   push eax
// 0046d03e  64892500000000       mov dword ptr fs:[0], esp
// 0046d045  83ec7c               sub esp, 0x7c
// 0046d048  56                   push esi
// 0046d049  c744240400000000     mov dword ptr [esp + 4], 0
// 0046d051  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0046d054  8b5108               mov edx, dword ptr [ecx + 8]
// 0046d057  50                   push eax
// 0046d058  52                   push edx
// 0046d059  50                   push eax
// 0046d05a  52                   push edx
// 0046d05b  83ec44               sub esp, 0x44
// 0046d05e  8d4110               lea eax, [ecx + 0x10]
// 0046d061  8bcc                 mov ecx, esp
// 0046d063  8964245c             mov dword ptr [esp + 0x5c], esp
// 0046d067  50                   push eax
// 0046d068  e823f5ffff           call 0x46c590
// 0046d06d  8d4c2460             lea ecx, [esp + 0x60]
// 0046d071  e83afeffff           call 0x46ceb0
// 0046d076  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0046d07d  50                   push eax
// 0046d07e  8bce                 mov ecx, esi
// 0046d080  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 0046d08b  e810f7ffff           call 0x46c7a0
// 0046d090  c744240401000000     mov dword ptr [esp + 4], 1
// 0046d098  8d4c2464             lea ecx, [esp + 0x64]
// 0046d09c  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0046d0a7  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046d0ad  8d4c2428             lea ecx, [esp + 0x28]
// 0046d0b1  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0046d0bc  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046d0c2  8d4c240c             lea ecx, [esp + 0xc]
// 0046d0c6  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0046d0ce  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046d0d4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0046d0db  8bc6                 mov eax, esi
// 0046d0dd  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d0e4  5e                   pop esi
// 0046d0e5  81c488000000         add esp, 0x88
// 0046d0eb  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
