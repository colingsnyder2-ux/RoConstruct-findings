// roc 2009-12 0049e3e0  unit: Ogre::RbxMeshPartAdapter  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049e3e0
//
// 0049e3e0  8b542408             mov edx, dword ptr [esp + 8]
// 0049e3e4  f30f104a04           movss xmm1, dword ptr [edx + 4]
// 0049e3e9  f30f104208           movss xmm0, dword ptr [edx + 8]
// 0049e3ee  f30f1012             movss xmm2, dword ptr [edx]
// 0049e3f2  f30f105904           movss xmm3, dword ptr [ecx + 4]
// 0049e3f7  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 0049e3fc  8b442404             mov eax, dword ptr [esp + 4]
// 0049e400  f30f59d9             mulss xmm3, xmm1
// 0049e404  f30f59e0             mulss xmm4, xmm0
// 0049e408  f30f58dc             addss xmm3, xmm4
// 0049e40c  0f28e2               movaps xmm4, xmm2
// 0049e40f  f30f5921             mulss xmm4, dword ptr [ecx]
// 0049e413  f30f58dc             addss xmm3, xmm4
// 0049e417  f30f106110           movss xmm4, dword ptr [ecx + 0x10]
// 0049e41c  f30f1118             movss dword ptr [eax], xmm3
// 0049e420  f30f10590c           movss xmm3, dword ptr [ecx + 0xc]
// 0049e425  f30f59da             mulss xmm3, xmm2
// 0049e429  f30f59e1             mulss xmm4, xmm1
// 0049e42d  f30f58dc             addss xmm3, xmm4
// 0049e431  f30f106114           movss xmm4, dword ptr [ecx + 0x14]
// 0049e436  f30f59e0             mulss xmm4, xmm0
// 0049e43a  f30f58dc             addss xmm3, xmm4
// 0049e43e  f30f115804           movss dword ptr [eax + 4], xmm3
// 0049e443  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 0049e448  f30f59da             mulss xmm3, xmm2
// 0049e44c  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 0049e451  f30f59d1             mulss xmm2, xmm1
// 0049e455  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 0049e45a  f30f58da             addss xmm3, xmm2
// 0049e45e  f30f59c8             mulss xmm1, xmm0
// 0049e462  f30f58d9             addss xmm3, xmm1
// 0049e466  f30f115808           movss dword ptr [eax + 8], xmm3
// 0049e46b  c20800               ret 8
// library g3d-6.09/G3Dcpp\Box.cpp (function ??DMatrix3@G3D@@QBE?AVVector3@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
