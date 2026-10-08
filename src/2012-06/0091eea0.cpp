// from server: 100% by auto
// roc 2012-06 0091eea0  unit: RBX::MergedFilter  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091eea0
//
// 0091eea0  8bc1                 mov eax, ecx
// 0091eea2  c7000466bf00         mov dword ptr [eax], 0xbf6604
// 0091eea8  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
