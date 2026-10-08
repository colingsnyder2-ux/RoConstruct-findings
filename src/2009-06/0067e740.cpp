// from server: 100% by auto
// roc 2009-06 0067e740  unit: RBX::Mechanism  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e740
//
// 0067e740  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067e744  e9f783ffff           jmp 0x676b40
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
