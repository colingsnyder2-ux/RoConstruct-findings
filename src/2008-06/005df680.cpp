// roc 2008-06 005df680  unit: RBX::Lighting  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df680
//
// 005df680  6aff                 push -1
// 005df682  6858627d00           push 0x7d6258
// 005df687  64a100000000         mov eax, dword ptr fs:[0]
// 005df68d  50                   push eax
// 005df68e  64892500000000       mov dword ptr fs:[0], esp
// 005df695  51                   push ecx
// 005df696  56                   push esi
// 005df697  8bf1                 mov esi, ecx
// 005df699  89742404             mov dword ptr [esp + 4], esi
// 005df69d  8d4e58               lea ecx, [esi + 0x58]
// 005df6a0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005df6a8  ff1568248000         call dword ptr [0x802468]
// 005df6ae  8bce                 mov ecx, esi
// 005df6b0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005df6b8  e863ffffff           call 0x5df620
// 005df6bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005df6c1  5e                   pop esi
// 005df6c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005df6c9  83c410               add esp, 0x10
// 005df6cc  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
