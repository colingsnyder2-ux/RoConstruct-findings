// from server: 100% by auto
// roc 2011-06 00598ae0  unit: RBX::VInstance::?$EventDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00598ae0
//
// 00598ae0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00598ae4  e977f8ffff           jmp 0x598360
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
