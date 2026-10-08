// from server: 100% by auto
// roc 2009-06 0056b770  unit: G3D::Shader  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056b770
//
// 0056b770  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056b774  dd01                 fld qword ptr [ecx]
// 0056b776  8b542404             mov edx, dword ptr [esp + 4]
// 0056b77a  dc1a                 fcomp qword ptr [edx]
// 0056b77c  dfe0                 fnstsw ax
// 0056b77e  f6c441               test ah, 0x41
// 0056b781  8bc1                 mov eax, ecx
// 0056b783  7402                 je 0x56b787
// 0056b785  8bc2                 mov eax, edx
// 0056b787  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??$max@N@std@@YAABNABN0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
