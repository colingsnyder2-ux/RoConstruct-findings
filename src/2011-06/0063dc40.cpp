// from server: 100% by auto
// roc 2011-06 0063dc40  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063dc40
//
// 0063dc40  8b01                 mov eax, dword ptr [ecx]
// 0063dc42  8b5008               mov edx, dword ptr [eax + 8]
// 0063dc45  ffe2                 jmp edx
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?thousands_sep@?$numpunct@D@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
