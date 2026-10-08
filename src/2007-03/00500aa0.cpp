// roc 2007-03 00500aa0  unit: seg_00500000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500aa0
//
// 00500aa0  8bc1                 mov eax, ecx
// 00500aa2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00500aa6  0fb611               movzx edx, byte ptr [ecx]
// 00500aa9  89542404             mov dword ptr [esp + 4], edx
// 00500aad  db442404             fild dword ptr [esp + 4]
// 00500ab1  dd0510c47800         fld qword ptr [0x78c410]
// 00500ab7  dcf9                 fdiv st(1), st(0)
// 00500ab9  d9c9                 fxch st(1)
// 00500abb  d918                 fstp dword ptr [eax]
// 00500abd  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00500ac1  89542404             mov dword ptr [esp + 4], edx
// 00500ac5  db442404             fild dword ptr [esp + 4]
// 00500ac9  d8f1                 fdiv st(1)
// 00500acb  d95804               fstp dword ptr [eax + 4]
// 00500ace  0fb64902             movzx ecx, byte ptr [ecx + 2]
// 00500ad2  894c2404             mov dword ptr [esp + 4], ecx
// 00500ad6  db442404             fild dword ptr [esp + 4]
// 00500ada  def1                 fdivrp st(1)
// 00500adc  d95808               fstp dword ptr [eax + 8]
// 00500adf  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ??0Color3@G3D@@QAE@ABVColor3uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
