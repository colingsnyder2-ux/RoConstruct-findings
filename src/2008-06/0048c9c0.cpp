// from server: 100% by auto
// roc 2008-06 0048c9c0  unit: RBX::Reflection::Z::$$A6AXM::?$TSignalDesc::TSignalInstance  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c9c0
//
// 0048c9c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048c9c4  e9f7f7ffff           jmp 0x48c1c0
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
