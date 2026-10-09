// roc 2009-12 00713cc0  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713cc0
//
// 00713cc0  56                   push esi
// 00713cc1  8bf1                 mov esi, ecx
// 00713cc3  e818fbffff           call 0x7137e0
// 00713cc8  85c0                 test eax, eax
// 00713cca  7418                 je 0x713ce4
// 00713ccc  8d642400             lea esp, [esp]
// 00713cd0  6a00                 push 0
// 00713cd2  8bc8                 mov ecx, eax
// 00713cd4  e8a730f2ff           call 0x636d80
// 00713cd9  8bce                 mov ecx, esi
// 00713cdb  e800fbffff           call 0x7137e0
// 00713ce0  85c0                 test eax, eax
// 00713ce2  75ec                 jne 0x713cd0
// 00713ce4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00713ce8  56                   push esi
// 00713ce9  e89230f2ff           call 0x636d80
// 00713cee  5e                   pop esi
// 00713cef  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?replaceSky@Lighting@RBX@@QAEXPAVSky@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
