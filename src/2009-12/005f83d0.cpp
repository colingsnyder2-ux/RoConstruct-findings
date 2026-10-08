// roc 2009-12 005f83d0  unit: G3D::LineSegment  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f83d0
//
// 005f83d0  83ec0c               sub esp, 0xc
// 005f83d3  6a02                 push 2
// 005f83d5  8d442404             lea eax, [esp + 4]
// 005f83d9  50                   push eax
// 005f83da  e8b1b5ffff           call 0x5f3990
// 005f83df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f83e3  f30f100588279c00     movss xmm0, dword ptr [0x9c2788]
// 005f83eb  f30f1008             movss xmm1, dword ptr [eax]
// 005f83ef  f30f59c8             mulss xmm1, xmm0
// 005f83f3  f30f1109             movss dword ptr [ecx], xmm1
// 005f83f7  f30f104804           movss xmm1, dword ptr [eax + 4]
// 005f83fc  f30f59c8             mulss xmm1, xmm0
// 005f8400  f30f114904           movss dword ptr [ecx + 4], xmm1
// 005f8405  f30f104808           movss xmm1, dword ptr [eax + 8]
// 005f840a  f30f59c8             mulss xmm1, xmm0
// 005f840e  f30f114908           movss dword ptr [ecx + 8], xmm1
// 005f8413  8bc1                 mov eax, ecx
// 005f8415  83c40c               add esp, 0xc
// 005f8418  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookVector@CoordinateFrame@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
