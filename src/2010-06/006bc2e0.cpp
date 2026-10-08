// from server: 100% by auto
// roc 2010-06 006bc2e0  unit: RBX::AdornBillboarder  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bc2e0
//
// 006bc2e0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006bc2e3  8b01                 mov eax, dword ptr [ecx]
// 006bc2e5  8b5070               mov edx, dword ptr [eax + 0x70]
// 006bc2e8  ffe2                 jmp edx
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?numBoundaryEdges@PosedModelWrapper@G3D@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
