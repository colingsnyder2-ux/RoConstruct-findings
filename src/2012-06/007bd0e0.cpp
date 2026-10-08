// from server: 100% by auto
// roc 2012-06 007bd0e0  unit: RBX::Geometry  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bd0e0
//
// 007bd0e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007bd0e4  e9b7ffe6ff           jmp 0x62d0a0
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
