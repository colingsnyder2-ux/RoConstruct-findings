// from server: 100% by auto
// roc 2007-08 0050ac60  unit: G3D::GCamera  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ac60
//
// 0050ac60  d9442404             fld dword ptr [esp + 4]
// 0050ac64  8bc1                 mov eax, ecx
// 0050ac66  d918                 fstp dword ptr [eax]
// 0050ac68  d9442408             fld dword ptr [esp + 8]
// 0050ac6c  d95804               fstp dword ptr [eax + 4]
// 0050ac6f  d944240c             fld dword ptr [esp + 0xc]
// 0050ac73  d95808               fstp dword ptr [eax + 8]
// 0050ac76  d9442410             fld dword ptr [esp + 0x10]
// 0050ac7a  d9580c               fstp dword ptr [eax + 0xc]
// 0050ac7d  d9442414             fld dword ptr [esp + 0x14]
// 0050ac81  d95810               fstp dword ptr [eax + 0x10]
// 0050ac84  d9442418             fld dword ptr [esp + 0x18]
// 0050ac88  d95814               fstp dword ptr [eax + 0x14]
// 0050ac8b  d944241c             fld dword ptr [esp + 0x1c]
// 0050ac8f  d95818               fstp dword ptr [eax + 0x18]
// 0050ac92  d9442420             fld dword ptr [esp + 0x20]
// 0050ac96  d9581c               fstp dword ptr [eax + 0x1c]
// 0050ac99  d9442424             fld dword ptr [esp + 0x24]
// 0050ac9d  d95820               fstp dword ptr [eax + 0x20]
// 0050aca0  d9442428             fld dword ptr [esp + 0x28]
// 0050aca4  d95824               fstp dword ptr [eax + 0x24]
// 0050aca7  d944242c             fld dword ptr [esp + 0x2c]
// 0050acab  d95828               fstp dword ptr [eax + 0x28]
// 0050acae  d9442430             fld dword ptr [esp + 0x30]
// 0050acb2  d9582c               fstp dword ptr [eax + 0x2c]
// 0050acb5  d9442434             fld dword ptr [esp + 0x34]
// 0050acb9  d95830               fstp dword ptr [eax + 0x30]
// 0050acbc  d9442438             fld dword ptr [esp + 0x38]
// 0050acc0  d95834               fstp dword ptr [eax + 0x34]
// 0050acc3  d944243c             fld dword ptr [esp + 0x3c]
// 0050acc7  d95838               fstp dword ptr [eax + 0x38]
// 0050acca  d9442440             fld dword ptr [esp + 0x40]
// 0050acce  d9583c               fstp dword ptr [eax + 0x3c]
// 0050acd1  c24000               ret 0x40
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@MMMMMMMMMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
