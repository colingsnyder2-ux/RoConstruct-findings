// from server: 100% by auto
// roc 2010-06 004d9f70  unit: RBX::Network::PhysicsSender::Job  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d9f70
//
// 004d9f70  8bc1                 mov eax, ecx
// 004d9f72  c700b4a5a100         mov dword ptr [eax], 0xa1a5b4
// 004d9f78  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
