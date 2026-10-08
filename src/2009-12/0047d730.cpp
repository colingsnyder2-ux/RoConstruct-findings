// roc 2009-12 0047d730  unit: RBX::LDraw2Lua::LuaWriter  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d730
//
// 0047d730  8b542408             mov edx, dword ptr [esp + 8]
// 0047d734  f30f106908           movss xmm5, dword ptr [ecx + 8]
// 0047d739  f30f105904           movss xmm3, dword ptr [ecx + 4]
// 0047d73e  f30f105208           movss xmm2, dword ptr [edx + 8]
// 0047d743  f30f106204           movss xmm4, dword ptr [edx + 4]
// 0047d748  8b442404             mov eax, dword ptr [esp + 4]
// 0047d74c  0f28cd               movaps xmm1, xmm5
// 0047d74f  f30f59cc             mulss xmm1, xmm4
// 0047d753  0f28c3               movaps xmm0, xmm3
// 0047d756  f30f59c2             mulss xmm0, xmm2
// 0047d75a  f30f5cc1             subss xmm0, xmm1
// 0047d75e  f30f100a             movss xmm1, dword ptr [edx]
// 0047d762  f30f1100             movss dword ptr [eax], xmm0
// 0047d766  f30f1001             movss xmm0, dword ptr [ecx]
// 0047d76a  0f28f1               movaps xmm6, xmm1
// 0047d76d  f30f59f5             mulss xmm6, xmm5
// 0047d771  0f28e8               movaps xmm5, xmm0
// 0047d774  f30f59ea             mulss xmm5, xmm2
// 0047d778  f30f59c4             mulss xmm0, xmm4
// 0047d77c  f30f59cb             mulss xmm1, xmm3
// 0047d780  f30f5cf5             subss xmm6, xmm5
// 0047d784  f30f5cc1             subss xmm0, xmm1
// 0047d788  f30f117004           movss dword ptr [eax + 4], xmm6
// 0047d78d  f30f114008           movss dword ptr [eax + 8], xmm0
// 0047d792  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?cross@Vector3@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
