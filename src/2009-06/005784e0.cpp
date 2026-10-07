// roc 2009-06 005784e0  unit: G3D::LineSegment  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005784e0
//
// 005784e0  d9442404             fld dword ptr [esp + 4]
// 005784e4  8bc1                 mov eax, ecx
// 005784e6  d918                 fstp dword ptr [eax]
// 005784e8  d9442408             fld dword ptr [esp + 8]
// 005784ec  d95804               fstp dword ptr [eax + 4]
// 005784ef  d944240c             fld dword ptr [esp + 0xc]
// 005784f3  d95808               fstp dword ptr [eax + 8]
// 005784f6  d9442410             fld dword ptr [esp + 0x10]
// 005784fa  d9580c               fstp dword ptr [eax + 0xc]
// 005784fd  d9442414             fld dword ptr [esp + 0x14]
// 00578501  d95810               fstp dword ptr [eax + 0x10]
// 00578504  d9442418             fld dword ptr [esp + 0x18]
// 00578508  d95814               fstp dword ptr [eax + 0x14]
// 0057850b  d944241c             fld dword ptr [esp + 0x1c]
// 0057850f  d95818               fstp dword ptr [eax + 0x18]
// 00578512  d9442420             fld dword ptr [esp + 0x20]
// 00578516  d9581c               fstp dword ptr [eax + 0x1c]
// 00578519  d9442424             fld dword ptr [esp + 0x24]
// 0057851d  d95820               fstp dword ptr [eax + 0x20]
// 00578520  c22400               ret 0x24
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??0Matrix3@G3D@@QAE@MMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
