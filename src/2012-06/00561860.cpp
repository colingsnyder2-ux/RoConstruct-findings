// from server: 100% by auto
// roc 2012-06 00561860  unit: RBX::VHint::?$FactoryProduct::Creator  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561860
//
// 00561860  0fb74102             movzx eax, word ptr [ecx + 2]
// 00561864  50                   push eax
// 00561865  ff150c3eb200         call dword ptr [0xb23e0c]
// 0056186b  c3                   ret 
// library g3d-6.09/G3Dcpp\NetAddress.cpp (function ?port@NetAddress@G3D@@QBEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/NetAddress.cpp
