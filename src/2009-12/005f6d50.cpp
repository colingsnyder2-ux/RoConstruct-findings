// roc 2009-12 005f6d50  unit: G3D::BinaryInput  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6d50
//
// 005f6d50  8b442404             mov eax, dword ptr [esp + 4]
// 005f6d54  d901                 fld dword ptr [ecx]
// 005f6d56  d918                 fstp dword ptr [eax]
// 005f6d58  d94104               fld dword ptr [ecx + 4]
// 005f6d5b  d95804               fstp dword ptr [eax + 4]
// 005f6d5e  d94108               fld dword ptr [ecx + 8]
// 005f6d61  d95808               fstp dword ptr [eax + 8]
// 005f6d64  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?getPoint1@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
