// roc 2009-06 0049f2c0  unit: G3D::VARArea  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f2c0
//
// 0049f2c0  8bc1                 mov eax, ecx
// 0049f2c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049f2c6  d901                 fld dword ptr [ecx]
// 0049f2c8  d918                 fstp dword ptr [eax]
// 0049f2ca  d94104               fld dword ptr [ecx + 4]
// 0049f2cd  d95804               fstp dword ptr [eax + 4]
// 0049f2d0  d94108               fld dword ptr [ecx + 8]
// 0049f2d3  d95808               fstp dword ptr [eax + 8]
// 0049f2d6  d9410c               fld dword ptr [ecx + 0xc]
// 0049f2d9  d9580c               fstp dword ptr [eax + 0xc]
// 0049f2dc  d94110               fld dword ptr [ecx + 0x10]
// 0049f2df  d95810               fstp dword ptr [eax + 0x10]
// 0049f2e2  d94114               fld dword ptr [ecx + 0x14]
// 0049f2e5  d95814               fstp dword ptr [eax + 0x14]
// 0049f2e8  d94118               fld dword ptr [ecx + 0x18]
// 0049f2eb  d95818               fstp dword ptr [eax + 0x18]
// 0049f2ee  dd4120               fld qword ptr [ecx + 0x20]
// 0049f2f1  dd5820               fstp qword ptr [eax + 0x20]
// 0049f2f4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0049f2f7  895028               mov dword ptr [eax + 0x28], edx
// 0049f2fa  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0049f2fd  89502c               mov dword ptr [eax + 0x2c], edx
// 0049f300  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0049f303  895030               mov dword ptr [eax + 0x30], edx
// 0049f306  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0049f309  895034               mov dword ptr [eax + 0x34], edx
// 0049f30c  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0049f30f  895038               mov dword ptr [eax + 0x38], edx
// 0049f312  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 0049f315  89503c               mov dword ptr [eax + 0x3c], edx
// 0049f318  d94140               fld dword ptr [ecx + 0x40]
// 0049f31b  d95840               fstp dword ptr [eax + 0x40]
// 0049f31e  d94144               fld dword ptr [ecx + 0x44]
// 0049f321  d95844               fstp dword ptr [eax + 0x44]
// 0049f324  d94148               fld dword ptr [ecx + 0x48]
// 0049f327  d95848               fstp dword ptr [eax + 0x48]
// 0049f32a  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 0049f32e  88504c               mov byte ptr [eax + 0x4c], dl
// 0049f331  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 0049f335  88504d               mov byte ptr [eax + 0x4d], dl
// 0049f338  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 0049f33b  88484e               mov byte ptr [eax + 0x4e], cl
// 0049f33e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
