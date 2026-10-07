// roc 2010-06 00599a60  unit: RBX::VInstance::?$EventDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00599a60
//
// 00599a60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00599a64  e9d7f7ffff           jmp 0x599240
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
