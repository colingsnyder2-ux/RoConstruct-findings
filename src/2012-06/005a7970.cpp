// from server: 100% by auto
// roc 2012-06 005a7970  unit: RBX::Image  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a7970
//
// 005a7970  8bc1                 mov eax, ecx
// 005a7972  c700b804d900         mov dword ptr [eax], 0xd904b8
// 005a7978  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
