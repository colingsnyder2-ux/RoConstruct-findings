// roc 2009-12 00719e90  unit: RBX::VPhysicsService::?$EventDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00719e90
//
// 00719e90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00719e94  e9d77ffeff           jmp 0x701e70
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
