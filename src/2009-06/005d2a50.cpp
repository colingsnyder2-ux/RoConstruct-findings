// from server: 100% by auto
// roc 2009-06 005d2a50  unit: VAuthoringSettings::?$FactoryProduct  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d2a50
//
// 005d2a50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d2a54  e987f8ffff           jmp 0x5d22e0
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
