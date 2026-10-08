// roc 2009-12 00577900  unit: RBX::ViewRbxGfx  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577900
//
// 00577900  b801000000           mov eax, 1
// 00577905  84057027b800         test byte ptr [0xb82770], al
// 0057790b  7526                 jne 0x577933
// 0057790d  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 00577915  09057027b800         or dword ptr [0xb82770], eax
// 0057791b  f30f11056427b800     movss dword ptr [0xb82764], xmm0
// 00577923  f30f11056827b800     movss dword ptr [0xb82768], xmm0
// 0057792b  f30f11056c27b800     movss dword ptr [0xb8276c], xmm0
// 00577933  b86427b800           mov eax, 0xb82764
// 00577938  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
