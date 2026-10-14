// roc 2009-06 00576700  unit: G3D::BinaryInput  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576700
//
// 00576700  8bc1                 mov eax, ecx
// 00576702  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00576706  0fb611               movzx edx, byte ptr [ecx]
// 00576709  89542404             mov dword ptr [esp + 4], edx
// 0057670d  db442404             fild dword ptr [esp + 4]
// 00576711  d9056c3b8b00         fld dword ptr [0x8b3b6c]
// 00576717  dcc9                 fmul st(1), st(0)
// 00576719  d9c9                 fxch st(1)
// 0057671b  d918                 fstp dword ptr [eax]
// 0057671d  0fb65101             movzx edx, byte ptr [ecx + 1]
// 00576721  89542404             mov dword ptr [esp + 4], edx
// 00576725  db442404             fild dword ptr [esp + 4]
// 00576729  d8c9                 fmul st(1)
// 0057672b  d95804               fstp dword ptr [eax + 4]
// 0057672e  0fb64902             movzx ecx, byte ptr [ecx + 2]
// 00576732  894c2404             mov dword ptr [esp + 4], ecx
// 00576736  da4c2404             fimul dword ptr [esp + 4]
// 0057673a  d95808               fstp dword ptr [eax + 8]
// 0057673d  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Color3.cpp (function ??0Color3@G3D@@QAE@ABVColor3uint8@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Color3.cpp
