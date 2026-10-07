// roc 2010-06 004921d0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004921d0
//
// 004921d0  8bc1                 mov eax, ecx
// 004921d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004921d6  d901                 fld dword ptr [ecx]
// 004921d8  d918                 fstp dword ptr [eax]
// 004921da  d94104               fld dword ptr [ecx + 4]
// 004921dd  d95804               fstp dword ptr [eax + 4]
// 004921e0  d94108               fld dword ptr [ecx + 8]
// 004921e3  d95808               fstp dword ptr [eax + 8]
// 004921e6  d9410c               fld dword ptr [ecx + 0xc]
// 004921e9  d9580c               fstp dword ptr [eax + 0xc]
// 004921ec  d94110               fld dword ptr [ecx + 0x10]
// 004921ef  d95810               fstp dword ptr [eax + 0x10]
// 004921f2  d94114               fld dword ptr [ecx + 0x14]
// 004921f5  d95814               fstp dword ptr [eax + 0x14]
// 004921f8  d94118               fld dword ptr [ecx + 0x18]
// 004921fb  d95818               fstp dword ptr [eax + 0x18]
// 004921fe  dd4120               fld qword ptr [ecx + 0x20]
// 00492201  dd5820               fstp qword ptr [eax + 0x20]
// 00492204  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00492207  895028               mov dword ptr [eax + 0x28], edx
// 0049220a  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0049220d  89502c               mov dword ptr [eax + 0x2c], edx
// 00492210  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00492213  895030               mov dword ptr [eax + 0x30], edx
// 00492216  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00492219  895034               mov dword ptr [eax + 0x34], edx
// 0049221c  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0049221f  895038               mov dword ptr [eax + 0x38], edx
// 00492222  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00492225  89503c               mov dword ptr [eax + 0x3c], edx
// 00492228  d94140               fld dword ptr [ecx + 0x40]
// 0049222b  d95840               fstp dword ptr [eax + 0x40]
// 0049222e  d94144               fld dword ptr [ecx + 0x44]
// 00492231  d95844               fstp dword ptr [eax + 0x44]
// 00492234  d94148               fld dword ptr [ecx + 0x48]
// 00492237  d95848               fstp dword ptr [eax + 0x48]
// 0049223a  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 0049223e  88504c               mov byte ptr [eax + 0x4c], dl
// 00492241  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 00492245  88504d               mov byte ptr [eax + 0x4d], dl
// 00492248  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 0049224b  88484e               mov byte ptr [eax + 0x4e], cl
// 0049224e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
