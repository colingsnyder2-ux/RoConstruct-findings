// roc 2008-06 005e2730  unit: RBX::Lighting  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2730
//
// 005e2730  8b442404             mov eax, dword ptr [esp + 4]
// 005e2734  83ec08               sub esp, 8
// 005e2737  56                   push esi
// 005e2738  8bf1                 mov esi, ecx
// 005e273a  50                   push eax
// 005e273b  8d4c2408             lea ecx, [esp + 8]
// 005e273f  51                   push ecx
// 005e2740  e8dbe4ffff           call 0x5e0c20
// 005e2745  83c408               add esp, 8
// 005e2748  8d542404             lea edx, [esp + 4]
// 005e274c  52                   push edx
// 005e274d  8bce                 mov ecx, esi
// 005e274f  e81cfeffff           call 0x5e2570
// 005e2754  5e                   pop esi
// 005e2755  83c408               add esp, 8
// 005e2758  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?setTimeStr@Lighting@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
