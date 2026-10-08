// roc 2009-12 005f3cd0  unit: seg_005f0000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3cd0
//
// 005f3cd0  8b442404             mov eax, dword ptr [esp + 4]
// 005f3cd4  f30f100510169b00     movss xmm0, dword ptr [0x9b1610]
// 005f3cdc  56                   push esi
// 005f3cdd  8bf1                 mov esi, ecx
// 005f3cdf  57                   push edi
// 005f3ce0  8d5004               lea edx, [eax + 4]
// 005f3ce3  2bf0                 sub esi, eax
// 005f3ce5  bf03000000           mov edi, 3
// 005f3cea  8d9b00000000         lea ebx, [ebx]
// 005f3cf0  f30f1009             movss xmm1, dword ptr [ecx]
// 005f3cf4  0f57c8               xorps xmm1, xmm0
// 005f3cf7  f30f114afc           movss dword ptr [edx - 4], xmm1
// 005f3cfc  f30f100c16           movss xmm1, dword ptr [esi + edx]
// 005f3d01  0f57c8               xorps xmm1, xmm0
// 005f3d04  f30f110a             movss dword ptr [edx], xmm1
// 005f3d08  f30f104908           movss xmm1, dword ptr [ecx + 8]
// 005f3d0d  0f57c8               xorps xmm1, xmm0
// 005f3d10  f30f114a04           movss dword ptr [edx + 4], xmm1
// 005f3d15  83c10c               add ecx, 0xc
// 005f3d18  83c20c               add edx, 0xc
// 005f3d1b  83ef01               sub edi, 1
// 005f3d1e  75d0                 jne 0x5f3cf0
// 005f3d20  5f                   pop edi
// 005f3d21  5e                   pop esi
// 005f3d22  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??GMatrix3@G3D@@QBE?AV01@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
