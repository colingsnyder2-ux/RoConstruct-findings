// roc 2007-08 005adbd0  unit: P8CRenderSettings::?$GetSetImpl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005adbd0
//
// 005adbd0  56                   push esi
// 005adbd1  8bf1                 mov esi, ecx
// 005adbd3  e8c8faffff           call 0x5ad6a0
// 005adbd8  85c0                 test eax, eax
// 005adbda  7418                 je 0x5adbf4
// 005adbdc  8d642400             lea esp, [esp]
// 005adbe0  6a00                 push 0
// 005adbe2  8bc8                 mov ecx, eax
// 005adbe4  e8473af9ff           call 0x541630
// 005adbe9  8bce                 mov ecx, esi
// 005adbeb  e8b0faffff           call 0x5ad6a0
// 005adbf0  85c0                 test eax, eax
// 005adbf2  75ec                 jne 0x5adbe0
// 005adbf4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005adbf8  56                   push esi
// 005adbf9  e8323af9ff           call 0x541630
// 005adbfe  5e                   pop esi
// 005adbff  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?replaceSky@Lighting@RBX@@QAEXPAVSky@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
