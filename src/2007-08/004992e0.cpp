// roc 2007-08 004992e0  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004992e0
//
// 004992e0  8bc1                 mov eax, ecx
// 004992e2  c700f8be7900         mov dword ptr [eax], 0x79bef8
// 004992e8  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
