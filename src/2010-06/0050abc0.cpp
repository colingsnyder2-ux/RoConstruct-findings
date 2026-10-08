// from server: 100% by auto
// roc 2010-06 0050abc0  unit: RBX::Network::NetworkOwnerJob  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050abc0
//
// 0050abc0  8bc1                 mov eax, ecx
// 0050abc2  c700904fb900         mov dword ptr [eax], 0xb94f90
// 0050abc8  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
