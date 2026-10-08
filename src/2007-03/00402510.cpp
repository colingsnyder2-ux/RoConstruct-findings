// roc 2007-03 00402510  unit: seg_00400000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402510
//
// 00402510  56                   push esi
// 00402511  8bf1                 mov esi, ecx
// 00402513  8d4e0c               lea ecx, [esi + 0xc]
// 00402516  c706383e7800         mov dword ptr [esi], 0x783e38
// 0040251c  ff158ce77700         call dword ptr [0x77e78c]
// 00402522  8bce                 mov ecx, esi
// 00402524  ff155ce97700         call dword ptr [0x77e95c]
// 0040252a  f644240801           test byte ptr [esp + 8], 1
// 0040252f  7409                 je 0x40253a
// 00402531  56                   push esi
// 00402532  e8b9bb2100           call 0x61e0f0
// 00402537  83c404               add esp, 4
// 0040253a  8bc6                 mov eax, esi
// 0040253c  5e                   pop esi
// 0040253d  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??_Glogic_error@std@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
