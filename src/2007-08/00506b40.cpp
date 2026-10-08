// from server: 100% by auto
// roc 2007-08 00506b40  unit: G3D::Ray  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506b40
//
// 00506b40  d9442404             fld dword ptr [esp + 4]
// 00506b44  56                   push esi
// 00506b45  8bf1                 mov esi, ecx
// 00506b47  d95604               fst dword ptr [esi + 4]
// 00506b4a  dc0d485b7900         fmul qword ptr [0x795b48]
// 00506b50  d95c2408             fstp dword ptr [esp + 8]
// 00506b54  d9442408             fld dword ptr [esp + 8]
// 00506b58  e8d1a51200           call 0x63112e
// 00506b5d  d95c2408             fstp dword ptr [esp + 8]
// 00506b61  d9442408             fld dword ptr [esp + 8]
// 00506b65  dcc0                 fadd st(0), st(0)
// 00506b67  d9e8                 fld1 
// 00506b69  def1                 fdivrp st(1)
// 00506b6b  d95e08               fstp dword ptr [esi + 8]
// 00506b6e  5e                   pop esi
// 00506b6f  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?setFieldOfView@GCamera@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
