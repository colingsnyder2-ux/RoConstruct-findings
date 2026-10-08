// from server: 100% by auto
// roc 2008-06 00513b70  unit: G3D::GCamera  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513b70
//
// 00513b70  d9442404             fld dword ptr [esp + 4]
// 00513b74  8bc1                 mov eax, ecx
// 00513b76  d918                 fstp dword ptr [eax]
// 00513b78  d9442408             fld dword ptr [esp + 8]
// 00513b7c  d95804               fstp dword ptr [eax + 4]
// 00513b7f  d944240c             fld dword ptr [esp + 0xc]
// 00513b83  d95808               fstp dword ptr [eax + 8]
// 00513b86  d9442410             fld dword ptr [esp + 0x10]
// 00513b8a  d9580c               fstp dword ptr [eax + 0xc]
// 00513b8d  d9442414             fld dword ptr [esp + 0x14]
// 00513b91  d95810               fstp dword ptr [eax + 0x10]
// 00513b94  d9442418             fld dword ptr [esp + 0x18]
// 00513b98  d95814               fstp dword ptr [eax + 0x14]
// 00513b9b  d944241c             fld dword ptr [esp + 0x1c]
// 00513b9f  d95818               fstp dword ptr [eax + 0x18]
// 00513ba2  d9442420             fld dword ptr [esp + 0x20]
// 00513ba6  d9581c               fstp dword ptr [eax + 0x1c]
// 00513ba9  d9442424             fld dword ptr [esp + 0x24]
// 00513bad  d95820               fstp dword ptr [eax + 0x20]
// 00513bb0  c22400               ret 0x24
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??0Matrix3@G3D@@QAE@MMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
