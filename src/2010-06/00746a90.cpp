// from server: 100% by auto
// roc 2010-06 00746a90  unit: RBX::AsyncHttpQueue  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00746a90
//
// 00746a90  8bc1                 mov eax, ecx
// 00746a92  c700a411a500         mov dword ptr [eax], 0xa511a4
// 00746a98  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
