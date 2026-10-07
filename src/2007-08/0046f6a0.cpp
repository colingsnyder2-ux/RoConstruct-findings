// roc 2007-08 0046f6a0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f6a0
//
// 0046f6a0  d90588797900         fld dword ptr [0x797988]
// 0046f6a6  8bc1                 mov eax, ecx
// 0046f6a8  b901000000           mov ecx, 1
// 0046f6ad  d9580c               fstp dword ptr [eax + 0xc]
// 0046f6b0  c70003000000         mov dword ptr [eax], 3
// 0046f6b6  894804               mov dword ptr [eax + 4], ecx
// 0046f6b9  c7400800000000       mov dword ptr [eax + 8], 0
// 0046f6c0  884810               mov byte ptr [eax + 0x10], cl
// 0046f6c3  c74014e8030000       mov dword ptr [eax + 0x14], 0x3e8
// 0046f6ca  c7401818fcffff       mov dword ptr [eax + 0x18], 0xfffffc18
// 0046f6d1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0Settings@Texture@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
