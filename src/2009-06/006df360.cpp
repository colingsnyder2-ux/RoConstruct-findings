// roc 2009-06 006df360  unit: RBX::FilterStairs  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006df360
//
// 006df360  8bc1                 mov eax, ecx
// 006df362  c70024d48e00         mov dword ptr [eax], 0x8ed424
// 006df368  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
