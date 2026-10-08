// roc 2010-06 0047b980  unit: DxUserInput  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047b980
//
// 0047b980  6aff                 push -1
// 0047b982  68684f9800           push 0x984f68
// 0047b987  64a100000000         mov eax, dword ptr fs:[0]
// 0047b98d  50                   push eax
// 0047b98e  64892500000000       mov dword ptr fs:[0], esp
// 0047b995  83ec7c               sub esp, 0x7c
// 0047b998  56                   push esi
// 0047b999  c744240400000000     mov dword ptr [esp + 4], 0
// 0047b9a1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047b9a4  8b5108               mov edx, dword ptr [ecx + 8]
// 0047b9a7  50                   push eax
// 0047b9a8  8b4104               mov eax, dword ptr [ecx + 4]
// 0047b9ab  52                   push edx
// 0047b9ac  8b11                 mov edx, dword ptr [ecx]
// 0047b9ae  50                   push eax
// 0047b9af  52                   push edx
// 0047b9b0  83ec44               sub esp, 0x44
// 0047b9b3  8d4110               lea eax, [ecx + 0x10]
// 0047b9b6  8bcc                 mov ecx, esp
// 0047b9b8  8964245c             mov dword ptr [esp + 0x5c], esp
// 0047b9bc  50                   push eax
// 0047b9bd  e8eef5ffff           call 0x47afb0
// 0047b9c2  8d4c2460             lea ecx, [esp + 0x60]
// 0047b9c6  e805ffffff           call 0x47b8d0
// 0047b9cb  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0047b9d2  50                   push eax
// 0047b9d3  8bce                 mov ecx, esi
// 0047b9d5  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 0047b9e0  e8dbf7ffff           call 0x47b1c0
// 0047b9e5  c744240401000000     mov dword ptr [esp + 4], 1
// 0047b9ed  8d4c2464             lea ecx, [esp + 0x64]
// 0047b9f1  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0047b9fc  ff1500a49e00         call dword ptr [0x9ea400]
// 0047ba02  8d4c2428             lea ecx, [esp + 0x28]
// 0047ba06  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0047ba11  ff1500a49e00         call dword ptr [0x9ea400]
// 0047ba17  8d4c240c             lea ecx, [esp + 0xc]
// 0047ba1b  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0047ba23  ff1500a49e00         call dword ptr [0x9ea400]
// 0047ba29  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0047ba30  8bc6                 mov eax, esi
// 0047ba32  64890d00000000       mov dword ptr fs:[0], ecx
// 0047ba39  5e                   pop esi
// 0047ba3a  81c488000000         add esp, 0x88
// 0047ba40  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
