// from server: 100% by auto
// roc 2009-06 004fcda0  unit: RBX::Network::NetworkOwnerJob  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fcda0
//
// 004fcda0  8bc1                 mov eax, ecx
// 004fcda2  c700f05e9f00         mov dword ptr [eax], 0x9f5ef0
// 004fcda8  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
