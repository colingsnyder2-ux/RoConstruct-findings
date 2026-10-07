// roc 2012-06 005ba530  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba530
//
// 005ba530  8bc1                 mov eax, ecx
// 005ba532  33c9                 xor ecx, ecx
// 005ba534  c700f402b800         mov dword ptr [eax], 0xb802f4
// 005ba53a  894804               mov dword ptr [eax + 4], ecx
// 005ba53d  894808               mov dword ptr [eax + 8], ecx
// 005ba540  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0ReferenceCountedObject@G3D@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
