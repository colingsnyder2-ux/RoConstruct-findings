// from server: 100% by auto
// roc 2008-06 0055b770  unit: RBX::VInstance::?$SignalDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055b770
//
// 0055b770  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055b774  e9e7f8ffff           jmp 0x55b060
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
