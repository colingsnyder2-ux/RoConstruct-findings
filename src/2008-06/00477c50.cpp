// from server: 100% by auto
// roc 2008-06 00477c50  unit: G3D::VARArea  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477c50
//
// 00477c50  8bc1                 mov eax, ecx
// 00477c52  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00477c56  d901                 fld dword ptr [ecx]
// 00477c58  d918                 fstp dword ptr [eax]
// 00477c5a  d94104               fld dword ptr [ecx + 4]
// 00477c5d  d95804               fstp dword ptr [eax + 4]
// 00477c60  d94108               fld dword ptr [ecx + 8]
// 00477c63  d95808               fstp dword ptr [eax + 8]
// 00477c66  d9410c               fld dword ptr [ecx + 0xc]
// 00477c69  d9580c               fstp dword ptr [eax + 0xc]
// 00477c6c  d94110               fld dword ptr [ecx + 0x10]
// 00477c6f  d95810               fstp dword ptr [eax + 0x10]
// 00477c72  d94114               fld dword ptr [ecx + 0x14]
// 00477c75  d95814               fstp dword ptr [eax + 0x14]
// 00477c78  d94118               fld dword ptr [ecx + 0x18]
// 00477c7b  d95818               fstp dword ptr [eax + 0x18]
// 00477c7e  dd4120               fld qword ptr [ecx + 0x20]
// 00477c81  dd5820               fstp qword ptr [eax + 0x20]
// 00477c84  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00477c87  895028               mov dword ptr [eax + 0x28], edx
// 00477c8a  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00477c8d  89502c               mov dword ptr [eax + 0x2c], edx
// 00477c90  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00477c93  895030               mov dword ptr [eax + 0x30], edx
// 00477c96  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00477c99  895034               mov dword ptr [eax + 0x34], edx
// 00477c9c  8b5138               mov edx, dword ptr [ecx + 0x38]
// 00477c9f  895038               mov dword ptr [eax + 0x38], edx
// 00477ca2  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00477ca5  89503c               mov dword ptr [eax + 0x3c], edx
// 00477ca8  d94140               fld dword ptr [ecx + 0x40]
// 00477cab  d95840               fstp dword ptr [eax + 0x40]
// 00477cae  d94144               fld dword ptr [ecx + 0x44]
// 00477cb1  d95844               fstp dword ptr [eax + 0x44]
// 00477cb4  d94148               fld dword ptr [ecx + 0x48]
// 00477cb7  d95848               fstp dword ptr [eax + 0x48]
// 00477cba  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 00477cbe  88504c               mov byte ptr [eax + 0x4c], dl
// 00477cc1  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 00477cc5  88504d               mov byte ptr [eax + 0x4d], dl
// 00477cc8  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 00477ccb  88484e               mov byte ptr [eax + 0x4e], cl
// 00477cce  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
