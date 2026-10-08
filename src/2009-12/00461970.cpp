// roc 2009-12 00461970  unit: G3D::Hashable  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00461970
//
// 00461970  8b542408             mov edx, dword ptr [esp + 8]
// 00461974  8b442404             mov eax, dword ptr [esp + 4]
// 00461978  f30f1001             movss xmm0, dword ptr [ecx]
// 0046197c  f30f5c02             subss xmm0, dword ptr [edx]
// 00461980  f30f1100             movss dword ptr [eax], xmm0
// 00461984  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 00461989  f30f5c4204           subss xmm0, dword ptr [edx + 4]
// 0046198e  f30f114004           movss dword ptr [eax + 4], xmm0
// 00461993  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 00461998  f30f5c4208           subss xmm0, dword ptr [edx + 8]
// 0046199d  f30f114008           movss dword ptr [eax + 8], xmm0
// 004619a2  c20800               ret 8
// library g3d-6.09/G3Dcpp\AABox.cpp (function ??GVector3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
