// from server: 100% by auto
// roc 2010-06 00490eb0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490eb0
//
// 00490eb0  8bc1                 mov eax, ecx
// 00490eb2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00490eb6  d901                 fld dword ptr [ecx]
// 00490eb8  d918                 fstp dword ptr [eax]
// 00490eba  d94104               fld dword ptr [ecx + 4]
// 00490ebd  d95804               fstp dword ptr [eax + 4]
// 00490ec0  d94108               fld dword ptr [ecx + 8]
// 00490ec3  d95808               fstp dword ptr [eax + 8]
// 00490ec6  d9410c               fld dword ptr [ecx + 0xc]
// 00490ec9  d9580c               fstp dword ptr [eax + 0xc]
// 00490ecc  d94110               fld dword ptr [ecx + 0x10]
// 00490ecf  d95810               fstp dword ptr [eax + 0x10]
// 00490ed2  d94114               fld dword ptr [ecx + 0x14]
// 00490ed5  d95814               fstp dword ptr [eax + 0x14]
// 00490ed8  d94118               fld dword ptr [ecx + 0x18]
// 00490edb  d95818               fstp dword ptr [eax + 0x18]
// 00490ede  dd4120               fld qword ptr [ecx + 0x20]
// 00490ee1  dd5820               fstp qword ptr [eax + 0x20]
// 00490ee4  dd4128               fld qword ptr [ecx + 0x28]
// 00490ee7  dd5828               fstp qword ptr [eax + 0x28]
// 00490eea  dd4130               fld qword ptr [ecx + 0x30]
// 00490eed  dd5830               fstp qword ptr [eax + 0x30]
// 00490ef0  dd4138               fld qword ptr [ecx + 0x38]
// 00490ef3  dd5838               fstp qword ptr [eax + 0x38]
// 00490ef6  d94140               fld dword ptr [ecx + 0x40]
// 00490ef9  d95840               fstp dword ptr [eax + 0x40]
// 00490efc  d94144               fld dword ptr [ecx + 0x44]
// 00490eff  d95844               fstp dword ptr [eax + 0x44]
// 00490f02  d94148               fld dword ptr [ecx + 0x48]
// 00490f05  d95848               fstp dword ptr [eax + 0x48]
// 00490f08  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 00490f0c  88504c               mov byte ptr [eax + 0x4c], dl
// 00490f0f  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 00490f13  88504d               mov byte ptr [eax + 0x4d], dl
// 00490f16  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 00490f19  88484e               mov byte ptr [eax + 0x4e], cl
// 00490f1c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4GLight@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
