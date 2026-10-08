// from server: 100% by auto
// roc 2008-06 004769a0  unit: G3D::VARArea  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004769a0
//
// 004769a0  8bc1                 mov eax, ecx
// 004769a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004769a6  d901                 fld dword ptr [ecx]
// 004769a8  d918                 fstp dword ptr [eax]
// 004769aa  d94104               fld dword ptr [ecx + 4]
// 004769ad  d95804               fstp dword ptr [eax + 4]
// 004769b0  d94108               fld dword ptr [ecx + 8]
// 004769b3  d95808               fstp dword ptr [eax + 8]
// 004769b6  d9410c               fld dword ptr [ecx + 0xc]
// 004769b9  d9580c               fstp dword ptr [eax + 0xc]
// 004769bc  d94110               fld dword ptr [ecx + 0x10]
// 004769bf  d95810               fstp dword ptr [eax + 0x10]
// 004769c2  d94114               fld dword ptr [ecx + 0x14]
// 004769c5  d95814               fstp dword ptr [eax + 0x14]
// 004769c8  d94118               fld dword ptr [ecx + 0x18]
// 004769cb  d95818               fstp dword ptr [eax + 0x18]
// 004769ce  dd4120               fld qword ptr [ecx + 0x20]
// 004769d1  dd5820               fstp qword ptr [eax + 0x20]
// 004769d4  dd4128               fld qword ptr [ecx + 0x28]
// 004769d7  dd5828               fstp qword ptr [eax + 0x28]
// 004769da  dd4130               fld qword ptr [ecx + 0x30]
// 004769dd  dd5830               fstp qword ptr [eax + 0x30]
// 004769e0  dd4138               fld qword ptr [ecx + 0x38]
// 004769e3  dd5838               fstp qword ptr [eax + 0x38]
// 004769e6  d94140               fld dword ptr [ecx + 0x40]
// 004769e9  d95840               fstp dword ptr [eax + 0x40]
// 004769ec  d94144               fld dword ptr [ecx + 0x44]
// 004769ef  d95844               fstp dword ptr [eax + 0x44]
// 004769f2  d94148               fld dword ptr [ecx + 0x48]
// 004769f5  d95848               fstp dword ptr [eax + 0x48]
// 004769f8  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 004769fc  88504c               mov byte ptr [eax + 0x4c], dl
// 004769ff  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 00476a03  88504d               mov byte ptr [eax + 0x4d], dl
// 00476a06  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 00476a09  88484e               mov byte ptr [eax + 0x4e], cl
// 00476a0c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4GLight@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
