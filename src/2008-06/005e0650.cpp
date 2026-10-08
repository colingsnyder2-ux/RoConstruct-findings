// roc 2008-06 005e0650  unit: RBX::P8Lighting::?$GetSetImpl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0650
//
// 005e0650  56                   push esi
// 005e0651  8bf1                 mov esi, ecx
// 005e0653  e868feffff           call 0x5e04c0
// 005e0658  85c0                 test eax, eax
// 005e065a  7418                 je 0x5e0674
// 005e065c  8d642400             lea esp, [esp]
// 005e0660  6a00                 push 0
// 005e0662  8bc8                 mov ecx, eax
// 005e0664  e887a2f7ff           call 0x55a8f0
// 005e0669  8bce                 mov ecx, esi
// 005e066b  e850feffff           call 0x5e04c0
// 005e0670  85c0                 test eax, eax
// 005e0672  75ec                 jne 0x5e0660
// 005e0674  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e0678  56                   push esi
// 005e0679  e872a2f7ff           call 0x55a8f0
// 005e067e  5e                   pop esi
// 005e067f  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?replaceSky@Lighting@RBX@@QAEXPAVSky@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
