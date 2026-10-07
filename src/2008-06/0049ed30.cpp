// roc 2008-06 0049ed30  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ed30
//
// 0049ed30  8bc1                 mov eax, ecx
// 0049ed32  c700002d8200         mov dword ptr [eax], 0x822d00
// 0049ed38  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
