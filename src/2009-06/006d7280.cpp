// roc 2009-06 006d7280  unit: RBX::RotateVJoint  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d7280
//
// 006d7280  8b442404             mov eax, dword ptr [esp + 4]
// 006d7284  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d7288  3bc1                 cmp eax, ecx
// 006d728a  7422                 je 0x6d72ae
// 006d728c  d900                 fld dword ptr [eax]
// 006d728e  d94004               fld dword ptr [eax + 4]
// 006d7291  d94008               fld dword ptr [eax + 8]
// 006d7294  d901                 fld dword ptr [ecx]
// 006d7296  d918                 fstp dword ptr [eax]
// 006d7298  d94104               fld dword ptr [ecx + 4]
// 006d729b  d95804               fstp dword ptr [eax + 4]
// 006d729e  d94108               fld dword ptr [ecx + 8]
// 006d72a1  d95808               fstp dword ptr [eax + 8]
// 006d72a4  d9ca                 fxch st(2)
// 006d72a6  d919                 fstp dword ptr [ecx]
// 006d72a8  d95904               fstp dword ptr [ecx + 4]
// 006d72ab  d95908               fstp dword ptr [ecx + 8]
// 006d72ae  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlg.cpp (function ??$swap@VVector3@G3D@@@std@@YAXAAVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlg.cpp
