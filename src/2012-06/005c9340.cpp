// roc 2012-06 005c9340  unit: RBX::AdornRbxGfx  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9340
//
// 005c9340  8bc1                 mov eax, ecx
// 005c9342  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 005c9348  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
