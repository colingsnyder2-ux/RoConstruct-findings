// roc 2009-12 0047e6f0  unit: Ogre::VResource::?$SharedPtr  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047e6f0
//
// 0047e6f0  b801000000           mov eax, 1
// 0047e6f5  84052cccb700         test byte ptr [0xb7cc2c], al
// 0047e6fb  7521                 jne 0x47e71e
// 0047e6fd  0f57c0               xorps xmm0, xmm0
// 0047e700  09052cccb700         or dword ptr [0xb7cc2c], eax
// 0047e706  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 0047e70e  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 0047e716  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 0047e71e  b820ccb700           mov eax, 0xb7cc20
// 0047e723  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
