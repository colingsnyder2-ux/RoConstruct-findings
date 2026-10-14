// roc 2009-06 00572f10  unit: G3D::Ray  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572f10
//
// 00572f10  d9442404             fld dword ptr [esp + 4]
// 00572f14  d95104               fst dword ptr [ecx + 4]
// 00572f17  d80d4cad8b00         fmul dword ptr [0x8bad4c]
// 00572f1d  d9f2                 fptan 
// 00572f1f  ddd8                 fstp st(0)
// 00572f21  dcc0                 fadd st(0), st(0)
// 00572f23  d9e8                 fld1 
// 00572f25  def1                 fdivrp st(1)
// 00572f27  d95908               fstp dword ptr [ecx + 8]
// 00572f2a  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?setFieldOfView@GCamera@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
