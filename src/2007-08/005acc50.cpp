// roc 2007-08 005acc50  unit: RBX::Lighting  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acc50
//
// 005acc50  6aff                 push -1
// 005acc52  6848887500           push 0x758848
// 005acc57  64a100000000         mov eax, dword ptr fs:[0]
// 005acc5d  50                   push eax
// 005acc5e  64892500000000       mov dword ptr fs:[0], esp
// 005acc65  51                   push ecx
// 005acc66  56                   push esi
// 005acc67  8bf1                 mov esi, ecx
// 005acc69  89742404             mov dword ptr [esp + 4], esi
// 005acc6d  8d4e58               lea ecx, [esi + 0x58]
// 005acc70  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005acc78  ff15ace67700         call dword ptr [0x77e6ac]
// 005acc7e  8bce                 mov ecx, esi
// 005acc80  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005acc88  e863ffffff           call 0x5acbf0
// 005acc8d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005acc91  5e                   pop esi
// 005acc92  64890d00000000       mov dword ptr fs:[0], ecx
// 005acc99  83c410               add esp, 0x10
// 005acc9c  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
