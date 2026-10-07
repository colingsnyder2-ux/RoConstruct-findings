// roc 2011-06 0079a6c0  unit: RBX::AsyncHttpQueue  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079a6c0
//
// 0079a6c0  8bc1                 mov eax, ecx
// 0079a6c2  c70070c4ab00         mov dword ptr [eax], 0xabc470
// 0079a6c8  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
