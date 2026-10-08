// roc 2009-12 005f6f90  unit: G3D::BinaryInput  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6f90
//
// 005f6f90  b801000000           mov eax, 1
// 005f6f95  84055440b800         test byte ptr [0xb84054], al
// 005f6f9b  7526                 jne 0x5f6fc3
// 005f6f9d  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f6fa5  09055440b800         or dword ptr [0xb84054], eax
// 005f6fab  f30f11054840b800     movss dword ptr [0xb84048], xmm0
// 005f6fb3  f30f11054c40b800     movss dword ptr [0xb8404c], xmm0
// 005f6fbb  f30f11055040b800     movss dword ptr [0xb84050], xmm0
// 005f6fc3  b84840b800           mov eax, 0xb84048
// 005f6fc8  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
