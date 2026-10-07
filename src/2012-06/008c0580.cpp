// roc 2012-06 008c0580  unit: RBX::Clump  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c0580
//
// 008c0580  8bc1                 mov eax, ecx
// 008c0582  c700a85bbe00         mov dword ptr [eax], 0xbe5ba8
// 008c0588  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
