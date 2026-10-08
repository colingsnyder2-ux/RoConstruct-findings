// from server: 100% by auto
// roc 2012-06 006857b0  unit: VAuthoringSettings::?$FactoryProduct  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006857b0
//
// 006857b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006857b4  e967f1ffff           jmp 0x684920
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
