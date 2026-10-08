// from server: 100% by auto
// roc 2011-06 006db530  unit: RBX::VPhysicsService::?$EventDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db530
//
// 006db530  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006db534  e94772fcff           jmp 0x6a2780
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
