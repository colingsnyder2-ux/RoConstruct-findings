// from server: 100% by auto
// roc 2009-06 004825e0  unit: Ogre::RbxSpatialHashedSceneNode::?1??_findVisibleObjects::NodeVisiter  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004825e0
//
// 004825e0  d9ee                 fldz 
// 004825e2  8bc1                 mov eax, ecx
// 004825e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004825e8  d910                 fst dword ptr [eax]
// 004825ea  d95004               fst dword ptr [eax + 4]
// 004825ed  d95008               fst dword ptr [eax + 8]
// 004825f0  d9500c               fst dword ptr [eax + 0xc]
// 004825f3  d95010               fst dword ptr [eax + 0x10]
// 004825f6  d95814               fstp dword ptr [eax + 0x14]
// 004825f9  d901                 fld dword ptr [ecx]
// 004825fb  d918                 fstp dword ptr [eax]
// 004825fd  d94104               fld dword ptr [ecx + 4]
// 00482600  d95804               fstp dword ptr [eax + 4]
// 00482603  d94108               fld dword ptr [ecx + 8]
// 00482606  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048260a  d95808               fstp dword ptr [eax + 8]
// 0048260d  d901                 fld dword ptr [ecx]
// 0048260f  d9580c               fstp dword ptr [eax + 0xc]
// 00482612  d94104               fld dword ptr [ecx + 4]
// 00482615  d95810               fstp dword ptr [eax + 0x10]
// 00482618  d94108               fld dword ptr [ecx + 8]
// 0048261b  d95814               fstp dword ptr [eax + 0x14]
// 0048261e  c20800               ret 8
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0AABox@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
