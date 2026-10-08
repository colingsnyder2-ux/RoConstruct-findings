// from server: 100% by auto
// roc 2007-08 004734d0  unit: G3D::VARArea  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004734d0
//
// 004734d0  8bc1                 mov eax, ecx
// 004734d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004734d6  d901                 fld dword ptr [ecx]
// 004734d8  d918                 fstp dword ptr [eax]
// 004734da  d94104               fld dword ptr [ecx + 4]
// 004734dd  d95804               fstp dword ptr [eax + 4]
// 004734e0  d94108               fld dword ptr [ecx + 8]
// 004734e3  d95808               fstp dword ptr [eax + 8]
// 004734e6  d9410c               fld dword ptr [ecx + 0xc]
// 004734e9  d9580c               fstp dword ptr [eax + 0xc]
// 004734ec  d94110               fld dword ptr [ecx + 0x10]
// 004734ef  d95810               fstp dword ptr [eax + 0x10]
// 004734f2  d94114               fld dword ptr [ecx + 0x14]
// 004734f5  d95814               fstp dword ptr [eax + 0x14]
// 004734f8  d94118               fld dword ptr [ecx + 0x18]
// 004734fb  d95818               fstp dword ptr [eax + 0x18]
// 004734fe  dd4120               fld qword ptr [ecx + 0x20]
// 00473501  dd5820               fstp qword ptr [eax + 0x20]
// 00473504  dd4128               fld qword ptr [ecx + 0x28]
// 00473507  dd5828               fstp qword ptr [eax + 0x28]
// 0047350a  dd4130               fld qword ptr [ecx + 0x30]
// 0047350d  dd5830               fstp qword ptr [eax + 0x30]
// 00473510  dd4138               fld qword ptr [ecx + 0x38]
// 00473513  dd5838               fstp qword ptr [eax + 0x38]
// 00473516  d94140               fld dword ptr [ecx + 0x40]
// 00473519  d95840               fstp dword ptr [eax + 0x40]
// 0047351c  d94144               fld dword ptr [ecx + 0x44]
// 0047351f  d95844               fstp dword ptr [eax + 0x44]
// 00473522  d94148               fld dword ptr [ecx + 0x48]
// 00473525  d95848               fstp dword ptr [eax + 0x48]
// 00473528  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 0047352c  88504c               mov byte ptr [eax + 0x4c], dl
// 0047352f  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 00473533  88504d               mov byte ptr [eax + 0x4d], dl
// 00473536  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 00473539  88484e               mov byte ptr [eax + 0x4e], cl
// 0047353c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4GLight@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
