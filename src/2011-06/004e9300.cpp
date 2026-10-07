// roc 2011-06 004e9300  unit: RBX::Network::PhysicsSender::Job  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e9300
//
// 004e9300  8bc1                 mov eax, ecx
// 004e9302  33c9                 xor ecx, ecx
// 004e9304  c70074a8a700         mov dword ptr [eax], 0xa7a874
// 004e930a  894804               mov dword ptr [eax + 4], ecx
// 004e930d  894808               mov dword ptr [eax + 8], ecx
// 004e9310  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0ReferenceCountedObject@G3D@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
