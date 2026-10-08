// from server: 100% by auto
// roc 2008-06 00501d10  unit: boost::bad_lexical_cast  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501d10
//
// 00501d10  d9ee                 fldz 
// 00501d12  8bc1                 mov eax, ecx
// 00501d14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00501d18  c70004748200         mov dword ptr [eax], 0x827404
// 00501d1e  d95004               fst dword ptr [eax + 4]
// 00501d21  d95008               fst dword ptr [eax + 8]
// 00501d24  d9580c               fstp dword ptr [eax + 0xc]
// 00501d27  d901                 fld dword ptr [ecx]
// 00501d29  d95804               fstp dword ptr [eax + 4]
// 00501d2c  d94104               fld dword ptr [ecx + 4]
// 00501d2f  d95808               fstp dword ptr [eax + 8]
// 00501d32  d94108               fld dword ptr [ecx + 8]
// 00501d35  d9580c               fstp dword ptr [eax + 0xc]
// 00501d38  d9442408             fld dword ptr [esp + 8]
// 00501d3c  d95810               fstp dword ptr [eax + 0x10]
// 00501d3f  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Sphere@G3D@@QAE@ABVVector3@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
