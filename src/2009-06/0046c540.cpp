// roc 2009-06 0046c540  unit: DxUserInput  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c540
//
// 0046c540  6aff                 push -1
// 0046c542  68e8338500           push 0x8533e8
// 0046c547  64a100000000         mov eax, dword ptr fs:[0]
// 0046c54d  50                   push eax
// 0046c54e  64892500000000       mov dword ptr fs:[0], esp
// 0046c555  51                   push ecx
// 0046c556  56                   push esi
// 0046c557  8bf1                 mov esi, ecx
// 0046c559  89742404             mov dword ptr [esp + 4], esi
// 0046c55d  8d4e58               lea ecx, [esi + 0x58]
// 0046c560  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046c568  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046c56e  8bce                 mov ecx, esi
// 0046c570  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046c578  e88376faff           call 0x413c00
// 0046c57d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046c581  5e                   pop esi
// 0046c582  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c589  83c410               add esp, 0x10
// 0046c58c  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
