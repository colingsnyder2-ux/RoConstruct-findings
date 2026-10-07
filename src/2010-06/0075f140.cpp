// roc 2010-06 0075f140  unit: RBX::SleepStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075f140
//
// 0075f140  8bc1                 mov eax, ecx
// 0075f142  33c9                 xor ecx, ecx
// 0075f144  894804               mov dword ptr [eax + 4], ecx
// 0075f147  894808               mov dword ptr [eax + 8], ecx
// 0075f14a  8908                 mov dword ptr [eax], ecx
// 0075f14c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0?$Array@PBX@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
