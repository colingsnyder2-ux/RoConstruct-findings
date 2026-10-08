// roc 2009-12 00532ad0  unit: G3D::Ray  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00532ad0
//
// 00532ad0  0f57c0               xorps xmm0, xmm0
// 00532ad3  8bc1                 mov eax, ecx
// 00532ad5  b901000000           mov ecx, 1
// 00532ada  c700b0cd9b00         mov dword ptr [eax], 0x9bcdb0
// 00532ae0  840d2cccb700         test byte ptr [0xb7cc2c], cl
// 00532ae6  751e                 jne 0x532b06
// 00532ae8  090d2cccb700         or dword ptr [0xb7cc2c], ecx
// 00532aee  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 00532af6  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 00532afe  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 00532b06  f30f100d20ccb700     movss xmm1, dword ptr [0xb7cc20]
// 00532b0e  f30f114804           movss dword ptr [eax + 4], xmm1
// 00532b13  f30f100d24ccb700     movss xmm1, dword ptr [0xb7cc24]
// 00532b1b  f30f114808           movss dword ptr [eax + 8], xmm1
// 00532b20  f30f100d28ccb700     movss xmm1, dword ptr [0xb7cc28]
// 00532b28  f30f11480c           movss dword ptr [eax + 0xc], xmm1
// 00532b2d  840d2cccb700         test byte ptr [0xb7cc2c], cl
// 00532b33  751e                 jne 0x532b53
// 00532b35  090d2cccb700         or dword ptr [0xb7cc2c], ecx
// 00532b3b  f30f110520ccb700     movss dword ptr [0xb7cc20], xmm0
// 00532b43  f30f110524ccb700     movss dword ptr [0xb7cc24], xmm0
// 00532b4b  f30f110528ccb700     movss dword ptr [0xb7cc28], xmm0
// 00532b53  f30f100520ccb700     movss xmm0, dword ptr [0xb7cc20]
// 00532b5b  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 00532b60  f30f100524ccb700     movss xmm0, dword ptr [0xb7cc24]
// 00532b68  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 00532b6d  f30f100528ccb700     movss xmm0, dword ptr [0xb7cc28]
// 00532b75  f30f114018           movss dword ptr [eax + 0x18], xmm0
// 00532b7a  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Ray@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
