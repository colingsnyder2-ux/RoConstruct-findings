// roc 2011-06 007e1bd0  unit: RBX::ArrowToolBase  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e1bd0
//
// 007e1bd0  8b01                 mov eax, dword ptr [ecx]
// 007e1bd2  8b4008               mov eax, dword ptr [eax + 8]
// 007e1bd5  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?is@?$ctype@_W@std@@QBE_NF_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
