// roc 2007-03 0059f080  unit: seg_00590000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059f080
//
// 0059f080  56                   push esi
// 0059f081  8d442408             lea eax, [esp + 8]
// 0059f085  8bf1                 mov esi, ecx
// 0059f087  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f08b  50                   push eax
// 0059f08c  51                   push ecx
// 0059f08d  e81eefffff           call 0x59dfb0
// 0059f092  8bc8                 mov ecx, eax
// 0059f094  e8a7e9ffff           call 0x59da40
// 0059f099  84c0                 test al, al
// 0059f09b  750e                 jne 0x59f0ab
// 0059f09d  33c0                 xor eax, eax
// 0059f09f  50                   push eax
// 0059f0a0  8bce                 mov ecx, esi
// 0059f0a2  e849ffffff           call 0x59eff0
// 0059f0a7  5e                   pop esi
// 0059f0a8  c20400               ret 4
// 0059f0ab  8b442408             mov eax, dword ptr [esp + 8]
// 0059f0af  50                   push eax
// 0059f0b0  8bce                 mov ecx, esi
// 0059f0b2  e839ffffff           call 0x59eff0
// 0059f0b7  5e                   pop esi
// 0059f0b8  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?setLegacyCommand@HopperBin@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
