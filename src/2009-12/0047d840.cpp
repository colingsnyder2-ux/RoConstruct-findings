// roc 2009-12 0047d840  unit: RBX::LDraw2Lua::LuaWriter  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d840
//
// 0047d840  8b442408             mov eax, dword ptr [esp + 8]
// 0047d844  f30f104804           movss xmm1, dword ptr [eax + 4]
// 0047d849  f30f104008           movss xmm0, dword ptr [eax + 8]
// 0047d84e  f30f1010             movss xmm2, dword ptr [eax]
// 0047d852  f30f105904           movss xmm3, dword ptr [ecx + 4]
// 0047d857  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 0047d85c  8b442404             mov eax, dword ptr [esp + 4]
// 0047d860  f30f59d9             mulss xmm3, xmm1
// 0047d864  f30f59e0             mulss xmm4, xmm0
// 0047d868  f30f58dc             addss xmm3, xmm4
// 0047d86c  0f28e2               movaps xmm4, xmm2
// 0047d86f  f30f5921             mulss xmm4, dword ptr [ecx]
// 0047d873  f30f58dc             addss xmm3, xmm4
// 0047d877  f30f585924           addss xmm3, dword ptr [ecx + 0x24]
// 0047d87c  f30f106110           movss xmm4, dword ptr [ecx + 0x10]
// 0047d881  f30f1118             movss dword ptr [eax], xmm3
// 0047d885  f30f10590c           movss xmm3, dword ptr [ecx + 0xc]
// 0047d88a  f30f59da             mulss xmm3, xmm2
// 0047d88e  f30f59e1             mulss xmm4, xmm1
// 0047d892  f30f58dc             addss xmm3, xmm4
// 0047d896  f30f106114           movss xmm4, dword ptr [ecx + 0x14]
// 0047d89b  f30f59e0             mulss xmm4, xmm0
// 0047d89f  f30f58dc             addss xmm3, xmm4
// 0047d8a3  f30f585928           addss xmm3, dword ptr [ecx + 0x28]
// 0047d8a8  f30f115804           movss dword ptr [eax + 4], xmm3
// 0047d8ad  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 0047d8b2  f30f59da             mulss xmm3, xmm2
// 0047d8b6  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 0047d8bb  f30f59d1             mulss xmm2, xmm1
// 0047d8bf  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 0047d8c4  f30f58da             addss xmm3, xmm2
// 0047d8c8  f30f59c8             mulss xmm1, xmm0
// 0047d8cc  f30f58d9             addss xmm3, xmm1
// 0047d8d0  f30f58592c           addss xmm3, dword ptr [ecx + 0x2c]
// 0047d8d5  f30f115808           movss dword ptr [eax + 8], xmm3
// 0047d8da  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?pointToWorldSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
