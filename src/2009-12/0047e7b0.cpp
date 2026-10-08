// roc 2009-12 0047e7b0  unit: Ogre::VResource::?$SharedPtr  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047e7b0
//
// 0047e7b0  56                   push esi
// 0047e7b1  8bf1                 mov esi, ecx
// 0047e7b3  e8f8611700           call 0x5f49b0
// 0047e7b8  50                   push eax
// 0047e7b9  8bce                 mov ecx, esi
// 0047e7bb  e840511700           call 0x5f3900
// 0047e7c0  b801000000           mov eax, 1
// 0047e7c5  84052cccb700         test byte ptr [0xb7cc2c], al
// 0047e7cb  7521                 jne 0x47e7ee
// 0047e7cd  0f57c0               xorps xmm0, xmm0
// 0047e7d0  09052cccb700         or dword ptr [0xb7cc2c], eax
// 0047e7d6  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 0047e7de  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 0047e7e6  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 0047e7ee  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 0047e7f6  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 0047e7fb  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 0047e803  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 0047e808  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 0047e810  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 0047e815  8bc6                 mov eax, esi
// 0047e817  5e                   pop esi
// 0047e818  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
