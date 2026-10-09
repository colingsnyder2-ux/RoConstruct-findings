// roc 2009-12 0048ba50  unit: G3D::Shader  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048ba50
//
// 0048ba50  8bc1                 mov eax, ecx
// 0048ba52  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048ba56  d901                 fld dword ptr [ecx]
// 0048ba58  d918                 fstp dword ptr [eax]
// 0048ba5a  d94104               fld dword ptr [ecx + 4]
// 0048ba5d  d95804               fstp dword ptr [eax + 4]
// 0048ba60  d94108               fld dword ptr [ecx + 8]
// 0048ba63  d95808               fstp dword ptr [eax + 8]
// 0048ba66  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0048ba69  89500c               mov dword ptr [eax + 0xc], edx
// 0048ba6c  d94110               fld dword ptr [ecx + 0x10]
// 0048ba6f  d95810               fstp dword ptr [eax + 0x10]
// 0048ba72  d94114               fld dword ptr [ecx + 0x14]
// 0048ba75  d95814               fstp dword ptr [eax + 0x14]
// 0048ba78  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0TextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
