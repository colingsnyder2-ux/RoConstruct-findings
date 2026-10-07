// roc 2007-08 00542230  unit: RBX::VInstance::?$NonFactoryProduct  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542230
//
// 00542230  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00542234  e967faffff           jmp 0x541ca0
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
