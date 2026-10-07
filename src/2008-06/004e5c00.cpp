// roc 2008-06 004e5c00  unit: RBX::Block  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5c00
//
// 004e5c00  8bc1                 mov eax, ecx
// 004e5c02  c700946e8200         mov dword ptr [eax], 0x826e94
// 004e5c08  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
