// from server: 100% by auto
// roc 2007-08 0050b3a0  unit: seg_00500000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b3a0
//
// 0050b3a0  8bc1                 mov eax, ecx
// 0050b3a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050b3a6  0fb611               movzx edx, byte ptr [ecx]
// 0050b3a9  89542404             mov dword ptr [esp + 4], edx
// 0050b3ad  db442404             fild dword ptr [esp + 4]
// 0050b3b1  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0050b3b7  dcf9                 fdiv st(1), st(0)
// 0050b3b9  d9c9                 fxch st(1)
// 0050b3bb  d918                 fstp dword ptr [eax]
// 0050b3bd  0fb65101             movzx edx, byte ptr [ecx + 1]
// 0050b3c1  89542404             mov dword ptr [esp + 4], edx
// 0050b3c5  db442404             fild dword ptr [esp + 4]
// 0050b3c9  d8f1                 fdiv st(1)
// 0050b3cb  d95804               fstp dword ptr [eax + 4]
// 0050b3ce  0fb64902             movzx ecx, byte ptr [ecx + 2]
// 0050b3d2  894c2404             mov dword ptr [esp + 4], ecx
// 0050b3d6  db442404             fild dword ptr [esp + 4]
// 0050b3da  def1                 fdivrp st(1)
// 0050b3dc  d95808               fstp dword ptr [eax + 8]
// 0050b3df  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color3.cpp (function ??0Color3@G3D@@QAE@ABVColor3uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
