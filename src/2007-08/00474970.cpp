// from server: 100% by auto
// roc 2007-08 00474970  unit: G3D::VARArea  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474970
//
// 00474970  8bc1                 mov eax, ecx
// 00474972  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00474976  d901                 fld dword ptr [ecx]
// 00474978  d918                 fstp dword ptr [eax]
// 0047497a  d94104               fld dword ptr [ecx + 4]
// 0047497d  d95804               fstp dword ptr [eax + 4]
// 00474980  d94108               fld dword ptr [ecx + 8]
// 00474983  d95808               fstp dword ptr [eax + 8]
// 00474986  d9410c               fld dword ptr [ecx + 0xc]
// 00474989  d9580c               fstp dword ptr [eax + 0xc]
// 0047498c  d94110               fld dword ptr [ecx + 0x10]
// 0047498f  d95810               fstp dword ptr [eax + 0x10]
// 00474992  d94114               fld dword ptr [ecx + 0x14]
// 00474995  d95814               fstp dword ptr [eax + 0x14]
// 00474998  d94118               fld dword ptr [ecx + 0x18]
// 0047499b  d95818               fstp dword ptr [eax + 0x18]
// 0047499e  dd4120               fld qword ptr [ecx + 0x20]
// 004749a1  dd5820               fstp qword ptr [eax + 0x20]
// 004749a4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 004749a7  895028               mov dword ptr [eax + 0x28], edx
// 004749aa  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 004749ad  89502c               mov dword ptr [eax + 0x2c], edx
// 004749b0  8b5130               mov edx, dword ptr [ecx + 0x30]
// 004749b3  895030               mov dword ptr [eax + 0x30], edx
// 004749b6  8b5134               mov edx, dword ptr [ecx + 0x34]
// 004749b9  895034               mov dword ptr [eax + 0x34], edx
// 004749bc  8b5138               mov edx, dword ptr [ecx + 0x38]
// 004749bf  895038               mov dword ptr [eax + 0x38], edx
// 004749c2  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 004749c5  89503c               mov dword ptr [eax + 0x3c], edx
// 004749c8  d94140               fld dword ptr [ecx + 0x40]
// 004749cb  d95840               fstp dword ptr [eax + 0x40]
// 004749ce  d94144               fld dword ptr [ecx + 0x44]
// 004749d1  d95844               fstp dword ptr [eax + 0x44]
// 004749d4  d94148               fld dword ptr [ecx + 0x48]
// 004749d7  d95848               fstp dword ptr [eax + 0x48]
// 004749da  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 004749de  88504c               mov byte ptr [eax + 0x4c], dl
// 004749e1  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 004749e5  88504d               mov byte ptr [eax + 0x4d], dl
// 004749e8  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 004749eb  88484e               mov byte ptr [eax + 0x4e], cl
// 004749ee  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
