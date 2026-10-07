// roc 2012-06 0050c940  unit: Ogre::RbxSpatialHashedSceneNode::?3??_findVisibleObjects::NodeVisiter  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050c940
//
// 0050c940  0f57c0               xorps xmm0, xmm0
// 0050c943  8bc1                 mov eax, ecx
// 0050c945  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050c949  f30f1100             movss dword ptr [eax], xmm0
// 0050c94d  f30f114004           movss dword ptr [eax + 4], xmm0
// 0050c952  f30f114008           movss dword ptr [eax + 8], xmm0
// 0050c957  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0050c95c  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0050c961  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 0050c966  d901                 fld dword ptr [ecx]
// 0050c968  d918                 fstp dword ptr [eax]
// 0050c96a  d94104               fld dword ptr [ecx + 4]
// 0050c96d  d95804               fstp dword ptr [eax + 4]
// 0050c970  d94108               fld dword ptr [ecx + 8]
// 0050c973  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050c977  d95808               fstp dword ptr [eax + 8]
// 0050c97a  d901                 fld dword ptr [ecx]
// 0050c97c  d9580c               fstp dword ptr [eax + 0xc]
// 0050c97f  d94104               fld dword ptr [ecx + 4]
// 0050c982  d95810               fstp dword ptr [eax + 0x10]
// 0050c985  d94108               fld dword ptr [ecx + 8]
// 0050c988  d95814               fstp dword ptr [eax + 0x14]
// 0050c98b  c20800               ret 8
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0AABox@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
