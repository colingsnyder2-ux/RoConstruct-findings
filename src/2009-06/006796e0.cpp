// roc 2009-06 006796e0  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006796e0
//
// 006796e0  56                   push esi
// 006796e1  8bf1                 mov esi, ecx
// 006796e3  e818fbffff           call 0x679200
// 006796e8  85c0                 test eax, eax
// 006796ea  7418                 je 0x679704
// 006796ec  8d642400             lea esp, [esp]
// 006796f0  6a00                 push 0
// 006796f2  8bc8                 mov ecx, eax
// 006796f4  e85787f5ff           call 0x5d1e50
// 006796f9  8bce                 mov ecx, esi
// 006796fb  e800fbffff           call 0x679200
// 00679700  85c0                 test eax, eax
// 00679702  75ec                 jne 0x6796f0
// 00679704  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00679708  56                   push esi
// 00679709  e84287f5ff           call 0x5d1e50
// 0067970e  5e                   pop esi
// 0067970f  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?replaceSky@Lighting@RBX@@QAEXPAVSky@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
