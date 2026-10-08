// roc 2009-06 0067aba0  unit: RBX::VLighting::?$BoundFuncDesc  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067aba0
//
// 0067aba0  8b442404             mov eax, dword ptr [esp + 4]
// 0067aba4  83ec08               sub esp, 8
// 0067aba7  56                   push esi
// 0067aba8  8bf1                 mov esi, ecx
// 0067abaa  50                   push eax
// 0067abab  8d4c2408             lea ecx, [esp + 8]
// 0067abaf  51                   push ecx
// 0067abb0  e80bedffff           call 0x6798c0
// 0067abb5  83c408               add esp, 8
// 0067abb8  8d542404             lea edx, [esp + 4]
// 0067abbc  52                   push edx
// 0067abbd  8bce                 mov ecx, esi
// 0067abbf  e81cfbffff           call 0x67a6e0
// 0067abc4  5e                   pop esi
// 0067abc5  83c408               add esp, 8
// 0067abc8  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?setTimeStr@Lighting@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
