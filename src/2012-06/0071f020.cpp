// from server: 100% by auto
// roc 2012-06 0071f020  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071f020
//
// 0071f020  8b01                 mov eax, dword ptr [ecx]
// 0071f022  8b5008               mov edx, dword ptr [eax + 8]
// 0071f025  ffe2                 jmp edx
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?thousands_sep@?$numpunct@D@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
