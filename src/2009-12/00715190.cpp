// roc 2009-12 00715190  unit: RBX::VLighting::?$BoundFuncDesc  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00715190
//
// 00715190  8b442404             mov eax, dword ptr [esp + 4]
// 00715194  83ec08               sub esp, 8
// 00715197  56                   push esi
// 00715198  8bf1                 mov esi, ecx
// 0071519a  50                   push eax
// 0071519b  8d4c2408             lea ecx, [esp + 8]
// 0071519f  51                   push ecx
// 007151a0  e8fbecffff           call 0x713ea0
// 007151a5  83c408               add esp, 8
// 007151a8  8d542404             lea edx, [esp + 4]
// 007151ac  52                   push edx
// 007151ad  8bce                 mov ecx, esi
// 007151af  e84cfbffff           call 0x714d00
// 007151b4  5e                   pop esi
// 007151b5  83c408               add esp, 8
// 007151b8  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?setTimeStr@Lighting@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
