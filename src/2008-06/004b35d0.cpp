// roc 2008-06 004b35d0  unit: RBX::Network::VMarker::?$SignalDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b35d0
//
// 004b35d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b35d4  e9f7e6ffff           jmp 0x4b1cd0
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
