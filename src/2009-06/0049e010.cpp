// from server: 100% by auto
// roc 2009-06 0049e010  unit: G3D::VARArea  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e010
//
// 0049e010  8bc1                 mov eax, ecx
// 0049e012  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049e016  d901                 fld dword ptr [ecx]
// 0049e018  d918                 fstp dword ptr [eax]
// 0049e01a  d94104               fld dword ptr [ecx + 4]
// 0049e01d  d95804               fstp dword ptr [eax + 4]
// 0049e020  d94108               fld dword ptr [ecx + 8]
// 0049e023  d95808               fstp dword ptr [eax + 8]
// 0049e026  d9410c               fld dword ptr [ecx + 0xc]
// 0049e029  d9580c               fstp dword ptr [eax + 0xc]
// 0049e02c  d94110               fld dword ptr [ecx + 0x10]
// 0049e02f  d95810               fstp dword ptr [eax + 0x10]
// 0049e032  d94114               fld dword ptr [ecx + 0x14]
// 0049e035  d95814               fstp dword ptr [eax + 0x14]
// 0049e038  d94118               fld dword ptr [ecx + 0x18]
// 0049e03b  d95818               fstp dword ptr [eax + 0x18]
// 0049e03e  dd4120               fld qword ptr [ecx + 0x20]
// 0049e041  dd5820               fstp qword ptr [eax + 0x20]
// 0049e044  dd4128               fld qword ptr [ecx + 0x28]
// 0049e047  dd5828               fstp qword ptr [eax + 0x28]
// 0049e04a  dd4130               fld qword ptr [ecx + 0x30]
// 0049e04d  dd5830               fstp qword ptr [eax + 0x30]
// 0049e050  dd4138               fld qword ptr [ecx + 0x38]
// 0049e053  dd5838               fstp qword ptr [eax + 0x38]
// 0049e056  d94140               fld dword ptr [ecx + 0x40]
// 0049e059  d95840               fstp dword ptr [eax + 0x40]
// 0049e05c  d94144               fld dword ptr [ecx + 0x44]
// 0049e05f  d95844               fstp dword ptr [eax + 0x44]
// 0049e062  d94148               fld dword ptr [ecx + 0x48]
// 0049e065  d95848               fstp dword ptr [eax + 0x48]
// 0049e068  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 0049e06c  88504c               mov byte ptr [eax + 0x4c], dl
// 0049e06f  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 0049e073  88504d               mov byte ptr [eax + 0x4d], dl
// 0049e076  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 0049e079  88484e               mov byte ptr [eax + 0x4e], cl
// 0049e07c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4GLight@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
