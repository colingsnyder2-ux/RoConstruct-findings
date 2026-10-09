// roc 2010-06 008d1d40  unit: Ogre::VisualEngine  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d1d40
//
// 008d1d40  8bc1                 mov eax, ecx
// 008d1d42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d1d46  d901                 fld dword ptr [ecx]
// 008d1d48  d918                 fstp dword ptr [eax]
// 008d1d4a  d94104               fld dword ptr [ecx + 4]
// 008d1d4d  d95804               fstp dword ptr [eax + 4]
// 008d1d50  d94108               fld dword ptr [ecx + 8]
// 008d1d53  d95808               fstp dword ptr [eax + 8]
// 008d1d56  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008d1d59  89500c               mov dword ptr [eax + 0xc], edx
// 008d1d5c  d94110               fld dword ptr [ecx + 0x10]
// 008d1d5f  d95810               fstp dword ptr [eax + 0x10]
// 008d1d62  d94114               fld dword ptr [ecx + 0x14]
// 008d1d65  d95814               fstp dword ptr [eax + 0x14]
// 008d1d68  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0TextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
