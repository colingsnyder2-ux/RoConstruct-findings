// roc 2009-12 004753c0  unit: DxUserInput  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004753c0
//
// 004753c0  6aff                 push -1
// 004753c2  68d8dc9200           push 0x92dcd8
// 004753c7  64a100000000         mov eax, dword ptr fs:[0]
// 004753cd  50                   push eax
// 004753ce  64892500000000       mov dword ptr fs:[0], esp
// 004753d5  51                   push ecx
// 004753d6  56                   push esi
// 004753d7  8bf1                 mov esi, ecx
// 004753d9  89742404             mov dword ptr [esp + 4], esi
// 004753dd  8d4e58               lea ecx, [esi + 0x58]
// 004753e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004753e8  ff15e4b69800         call dword ptr [0x98b6e4]
// 004753ee  8bce                 mov ecx, esi
// 004753f0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004753f8  e873e2f9ff           call 0x413670
// 004753fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00475401  5e                   pop esi
// 00475402  64890d00000000       mov dword ptr fs:[0], ecx
// 00475409  83c410               add esp, 0x10
// 0047540c  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
