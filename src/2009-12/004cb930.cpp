// roc 2009-12 004cb930  unit: G3D::VARArea  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb930
//
// 004cb930  8bc1                 mov eax, ecx
// 004cb932  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cb936  d901                 fld dword ptr [ecx]
// 004cb938  d918                 fstp dword ptr [eax]
// 004cb93a  d94104               fld dword ptr [ecx + 4]
// 004cb93d  d95804               fstp dword ptr [eax + 4]
// 004cb940  d94108               fld dword ptr [ecx + 8]
// 004cb943  d95808               fstp dword ptr [eax + 8]
// 004cb946  d9410c               fld dword ptr [ecx + 0xc]
// 004cb949  d9580c               fstp dword ptr [eax + 0xc]
// 004cb94c  d94110               fld dword ptr [ecx + 0x10]
// 004cb94f  d95810               fstp dword ptr [eax + 0x10]
// 004cb952  d94114               fld dword ptr [ecx + 0x14]
// 004cb955  d95814               fstp dword ptr [eax + 0x14]
// 004cb958  d94118               fld dword ptr [ecx + 0x18]
// 004cb95b  d95818               fstp dword ptr [eax + 0x18]
// 004cb95e  dd4120               fld qword ptr [ecx + 0x20]
// 004cb961  dd5820               fstp qword ptr [eax + 0x20]
// 004cb964  8b5128               mov edx, dword ptr [ecx + 0x28]
// 004cb967  895028               mov dword ptr [eax + 0x28], edx
// 004cb96a  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 004cb96d  89502c               mov dword ptr [eax + 0x2c], edx
// 004cb970  8b5130               mov edx, dword ptr [ecx + 0x30]
// 004cb973  895030               mov dword ptr [eax + 0x30], edx
// 004cb976  8b5134               mov edx, dword ptr [ecx + 0x34]
// 004cb979  895034               mov dword ptr [eax + 0x34], edx
// 004cb97c  8b5138               mov edx, dword ptr [ecx + 0x38]
// 004cb97f  895038               mov dword ptr [eax + 0x38], edx
// 004cb982  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 004cb985  89503c               mov dword ptr [eax + 0x3c], edx
// 004cb988  d94140               fld dword ptr [ecx + 0x40]
// 004cb98b  d95840               fstp dword ptr [eax + 0x40]
// 004cb98e  d94144               fld dword ptr [ecx + 0x44]
// 004cb991  d95844               fstp dword ptr [eax + 0x44]
// 004cb994  d94148               fld dword ptr [ecx + 0x48]
// 004cb997  d95848               fstp dword ptr [eax + 0x48]
// 004cb99a  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 004cb99e  88504c               mov byte ptr [eax + 0x4c], dl
// 004cb9a1  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 004cb9a5  88504d               mov byte ptr [eax + 0x4d], dl
// 004cb9a8  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 004cb9ab  88484e               mov byte ptr [eax + 0x4e], cl
// 004cb9ae  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
