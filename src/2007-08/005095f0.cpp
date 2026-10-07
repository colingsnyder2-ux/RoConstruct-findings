// roc 2007-08 005095f0  unit: G3D::GCamera  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005095f0
//
// 005095f0  d9442404             fld dword ptr [esp + 4]
// 005095f4  d919                 fstp dword ptr [ecx]
// 005095f6  d9442408             fld dword ptr [esp + 8]
// 005095fa  d95904               fstp dword ptr [ecx + 4]
// 005095fd  d944240c             fld dword ptr [esp + 0xc]
// 00509601  d95908               fstp dword ptr [ecx + 8]
// 00509604  d9442410             fld dword ptr [esp + 0x10]
// 00509608  d9590c               fstp dword ptr [ecx + 0xc]
// 0050960b  d9442414             fld dword ptr [esp + 0x14]
// 0050960f  d95910               fstp dword ptr [ecx + 0x10]
// 00509612  d9442418             fld dword ptr [esp + 0x18]
// 00509616  d95914               fstp dword ptr [ecx + 0x14]
// 00509619  d944241c             fld dword ptr [esp + 0x1c]
// 0050961d  d95918               fstp dword ptr [ecx + 0x18]
// 00509620  d9442420             fld dword ptr [esp + 0x20]
// 00509624  d9591c               fstp dword ptr [ecx + 0x1c]
// 00509627  d9442424             fld dword ptr [esp + 0x24]
// 0050962b  d95920               fstp dword ptr [ecx + 0x20]
// 0050962e  c22400               ret 0x24
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?set@Matrix3@G3D@@QAEXMMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
