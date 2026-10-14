// roc 2009-06 0052c160  unit: RBX::VCylinderMesh::?$FactoryProduct::Creator  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0052c160
//
// 0052c160  d94108               fld dword ptr [ecx + 8]
// 0052c163  8b442404             mov eax, dword ptr [esp + 4]
// 0052c167  d94104               fld dword ptr [ecx + 4]
// 0052c16a  d901                 fld dword ptr [ecx]
// 0052c16c  dcc8                 fmul st(0), st(0)
// 0052c16e  d9c1                 fld st(1)
// 0052c170  deca                 fmulp st(2)
// 0052c172  dec1                 faddp st(1)
// 0052c174  d9c1                 fld st(1)
// 0052c176  deca                 fmulp st(2)
// 0052c178  dec1                 faddp st(1)
// 0052c17a  d9fa                 fsqrt 
// 0052c17c  d9e8                 fld1 
// 0052c17e  def1                 fdivrp st(1)
// 0052c180  d901                 fld dword ptr [ecx]
// 0052c182  d8c9                 fmul st(1)
// 0052c184  d918                 fstp dword ptr [eax]
// 0052c186  d9c0                 fld st(0)
// 0052c188  d84904               fmul dword ptr [ecx + 4]
// 0052c18b  d95804               fstp dword ptr [eax + 4]
// 0052c18e  d84908               fmul dword ptr [ecx + 8]
// 0052c191  d95808               fstp dword ptr [eax + 8]
// 0052c194  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ?direction@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
