// roc 2010-06 00693ab0  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00693ab0
//
// 00693ab0  56                   push esi
// 00693ab1  8bf1                 mov esi, ecx
// 00693ab3  e818fbffff           call 0x6935d0
// 00693ab8  85c0                 test eax, eax
// 00693aba  7418                 je 0x693ad4
// 00693abc  8d642400             lea esp, [esp]
// 00693ac0  6a00                 push 0
// 00693ac2  8bc8                 mov ecx, eax
// 00693ac4  e8c752f0ff           call 0x598d90
// 00693ac9  8bce                 mov ecx, esi
// 00693acb  e800fbffff           call 0x6935d0
// 00693ad0  85c0                 test eax, eax
// 00693ad2  75ec                 jne 0x693ac0
// 00693ad4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00693ad8  56                   push esi
// 00693ad9  e8b252f0ff           call 0x598d90
// 00693ade  5e                   pop esi
// 00693adf  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?replaceSky@Lighting@RBX@@QAEXPAVSky@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
