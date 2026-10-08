// from server: 100% by auto
// roc 2009-06 005656d0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005656d0
//
// 005656d0  d9ee                 fldz 
// 005656d2  8bc1                 mov eax, ecx
// 005656d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005656d8  c700c4a98c00         mov dword ptr [eax], 0x8ca9c4
// 005656de  d95004               fst dword ptr [eax + 4]
// 005656e1  d95008               fst dword ptr [eax + 8]
// 005656e4  d9580c               fstp dword ptr [eax + 0xc]
// 005656e7  d901                 fld dword ptr [ecx]
// 005656e9  d95804               fstp dword ptr [eax + 4]
// 005656ec  d94104               fld dword ptr [ecx + 4]
// 005656ef  d95808               fstp dword ptr [eax + 8]
// 005656f2  d94108               fld dword ptr [ecx + 8]
// 005656f5  d9580c               fstp dword ptr [eax + 0xc]
// 005656f8  d9442408             fld dword ptr [esp + 8]
// 005656fc  d95810               fstp dword ptr [eax + 0x10]
// 005656ff  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Sphere@G3D@@QAE@ABVVector3@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
