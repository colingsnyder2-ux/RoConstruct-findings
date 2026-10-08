// from server: 100% by auto
// roc 2009-06 0062ae70  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ae70
//
// 0062ae70  8b01                 mov eax, dword ptr [ecx]
// 0062ae72  8b5008               mov edx, dword ptr [eax + 8]
// 0062ae75  ffe2                 jmp edx
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?thousands_sep@?$numpunct@D@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
