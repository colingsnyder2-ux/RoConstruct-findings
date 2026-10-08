// roc 2009-12 00657c60  unit: RBX::PartInstance  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657c60
//
// 00657c60  b801000000           mov eax, 1
// 00657c65  840568fcb800         test byte ptr [0xb8fc68], al
// 00657c6b  7526                 jne 0x657c93
// 00657c6d  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 00657c75  090568fcb800         or dword ptr [0xb8fc68], eax
// 00657c7b  f30f11055cfcb800     movss dword ptr [0xb8fc5c], xmm0
// 00657c83  f30f110560fcb800     movss dword ptr [0xb8fc60], xmm0
// 00657c8b  f30f110564fcb800     movss dword ptr [0xb8fc64], xmm0
// 00657c93  b85cfcb800           mov eax, 0xb8fc5c
// 00657c98  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
