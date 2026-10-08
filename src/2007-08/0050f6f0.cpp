// from server: 100% by auto
// roc 2007-08 0050f6f0  unit: G3D::TextInput::WrongSymbol  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f6f0
//
// 0050f6f0  83ec0c               sub esp, 0xc
// 0050f6f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050f6f7  d900                 fld dword ptr [eax]
// 0050f6f9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0050f6fd  d91c24               fstp dword ptr [esp]
// 0050f700  d94004               fld dword ptr [eax + 4]
// 0050f703  d95c2404             fstp dword ptr [esp + 4]
// 0050f707  d94008               fld dword ptr [eax + 8]
// 0050f70a  d95c2408             fstp dword ptr [esp + 8]
// 0050f70e  d901                 fld dword ptr [ecx]
// 0050f710  d918                 fstp dword ptr [eax]
// 0050f712  d94104               fld dword ptr [ecx + 4]
// 0050f715  d95804               fstp dword ptr [eax + 4]
// 0050f718  d94108               fld dword ptr [ecx + 8]
// 0050f71b  d95808               fstp dword ptr [eax + 8]
// 0050f71e  d90424               fld dword ptr [esp]
// 0050f721  d919                 fstp dword ptr [ecx]
// 0050f723  d9442404             fld dword ptr [esp + 4]
// 0050f727  d95904               fstp dword ptr [ecx + 4]
// 0050f72a  d9442408             fld dword ptr [esp + 8]
// 0050f72e  d95908               fstp dword ptr [ecx + 8]
// 0050f731  83c40c               add esp, 0xc
// 0050f734  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??$swap@VVector3@G3D@@@std@@YAXAAVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
