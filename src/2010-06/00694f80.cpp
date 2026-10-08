// roc 2010-06 00694f80  unit: RBX::VLighting::?$BoundFuncDesc  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00694f80
//
// 00694f80  8b442404             mov eax, dword ptr [esp + 4]
// 00694f84  83ec08               sub esp, 8
// 00694f87  56                   push esi
// 00694f88  8bf1                 mov esi, ecx
// 00694f8a  50                   push eax
// 00694f8b  8d4c2408             lea ecx, [esp + 8]
// 00694f8f  51                   push ecx
// 00694f90  e8fbecffff           call 0x693c90
// 00694f95  83c408               add esp, 8
// 00694f98  8d542404             lea edx, [esp + 4]
// 00694f9c  52                   push edx
// 00694f9d  8bce                 mov ecx, esi
// 00694f9f  e84cfbffff           call 0x694af0
// 00694fa4  5e                   pop esi
// 00694fa5  83c408               add esp, 8
// 00694fa8  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?setTimeStr@Lighting@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
