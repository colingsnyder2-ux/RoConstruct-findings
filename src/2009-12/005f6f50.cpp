// roc 2009-12 005f6f50  unit: G3D::BinaryInput  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6f50
//
// 005f6f50  b801000000           mov eax, 1
// 005f6f55  84054440b800         test byte ptr [0xb84044], al
// 005f6f5b  7526                 jne 0x5f6f83
// 005f6f5d  f30f1005ac4a9b00     movss xmm0, dword ptr [0x9b4aac]
// 005f6f65  09054440b800         or dword ptr [0xb84044], eax
// 005f6f6b  f30f11053840b800     movss dword ptr [0xb84038], xmm0
// 005f6f73  f30f11053c40b800     movss dword ptr [0xb8403c], xmm0
// 005f6f7b  f30f11054040b800     movss dword ptr [0xb84040], xmm0
// 005f6f83  b83840b800           mov eax, 0xb84038
// 005f6f88  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?gray@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
