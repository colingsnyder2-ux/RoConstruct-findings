// from server: 100% by auto
// roc 2010-06 00699b30  unit: RBX::PolyContact  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699b30
//
// 00699b30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00699b34  e9e7d4fdff           jmp 0x677020
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
