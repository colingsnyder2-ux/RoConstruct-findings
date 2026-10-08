// roc 2012-06 007acbf0  unit: RBX::Lighting  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007acbf0
//
// 007acbf0  8b442404             mov eax, dword ptr [esp + 4]
// 007acbf4  83ec08               sub esp, 8
// 007acbf7  56                   push esi
// 007acbf8  8bf1                 mov esi, ecx
// 007acbfa  50                   push eax
// 007acbfb  8d4c2408             lea ecx, [esp + 8]
// 007acbff  51                   push ecx
// 007acc00  e8ebe6ffff           call 0x7ab2f0
// 007acc05  83c408               add esp, 8
// 007acc08  8d542404             lea edx, [esp + 4]
// 007acc0c  52                   push edx
// 007acc0d  8bce                 mov ecx, esi
// 007acc0f  e80cfaffff           call 0x7ac620
// 007acc14  5e                   pop esi
// 007acc15  83c408               add esp, 8
// 007acc18  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?setTimeStr@Lighting@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
