// roc 2011-06 006d2c80  unit: RBX::VLighting::?$EventDesc  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d2c80
//
// 006d2c80  8b442404             mov eax, dword ptr [esp + 4]
// 006d2c84  83ec08               sub esp, 8
// 006d2c87  56                   push esi
// 006d2c88  8bf1                 mov esi, ecx
// 006d2c8a  50                   push eax
// 006d2c8b  8d4c2408             lea ecx, [esp + 8]
// 006d2c8f  51                   push ecx
// 006d2c90  e80be9ffff           call 0x6d15a0
// 006d2c95  83c408               add esp, 8
// 006d2c98  8d542404             lea edx, [esp + 4]
// 006d2c9c  52                   push edx
// 006d2c9d  8bce                 mov ecx, esi
// 006d2c9f  e85cfdffff           call 0x6d2a00
// 006d2ca4  5e                   pop esi
// 006d2ca5  83c408               add esp, 8
// 006d2ca8  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?setTimeStr@Lighting@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
