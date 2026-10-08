// roc 2007-03 00474a70  unit: seg_00470000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474a70
//
// 00474a70  8bc1                 mov eax, ecx
// 00474a72  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00474a76  d901                 fld dword ptr [ecx]
// 00474a78  d918                 fstp dword ptr [eax]
// 00474a7a  d94104               fld dword ptr [ecx + 4]
// 00474a7d  d95804               fstp dword ptr [eax + 4]
// 00474a80  d94108               fld dword ptr [ecx + 8]
// 00474a83  d95808               fstp dword ptr [eax + 8]
// 00474a86  d9410c               fld dword ptr [ecx + 0xc]
// 00474a89  d9580c               fstp dword ptr [eax + 0xc]
// 00474a8c  d94110               fld dword ptr [ecx + 0x10]
// 00474a8f  d95810               fstp dword ptr [eax + 0x10]
// 00474a92  d94114               fld dword ptr [ecx + 0x14]
// 00474a95  d95814               fstp dword ptr [eax + 0x14]
// 00474a98  d94118               fld dword ptr [ecx + 0x18]
// 00474a9b  d95818               fstp dword ptr [eax + 0x18]
// 00474a9e  dd4120               fld qword ptr [ecx + 0x20]
// 00474aa1  dd5820               fstp qword ptr [eax + 0x20]
// 00474aa4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00474aa7  895028               mov dword ptr [eax + 0x28], edx
// 00474aaa  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00474aad  89502c               mov dword ptr [eax + 0x2c], edx
// 00474ab0  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00474ab3  895030               mov dword ptr [eax + 0x30], edx
// 00474ab6  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00474ab9  895034               mov dword ptr [eax + 0x34], edx
// 00474abc  8b5138               mov edx, dword ptr [ecx + 0x38]
// 00474abf  895038               mov dword ptr [eax + 0x38], edx
// 00474ac2  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00474ac5  89503c               mov dword ptr [eax + 0x3c], edx
// 00474ac8  d94140               fld dword ptr [ecx + 0x40]
// 00474acb  d95840               fstp dword ptr [eax + 0x40]
// 00474ace  d94144               fld dword ptr [ecx + 0x44]
// 00474ad1  d95844               fstp dword ptr [eax + 0x44]
// 00474ad4  d94148               fld dword ptr [ecx + 0x48]
// 00474ad7  d95848               fstp dword ptr [eax + 0x48]
// 00474ada  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 00474ade  88504c               mov byte ptr [eax + 0x4c], dl
// 00474ae1  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 00474ae5  88504d               mov byte ptr [eax + 0x4d], dl
// 00474ae8  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 00474aeb  88484e               mov byte ptr [eax + 0x4e], cl
// 00474aee  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??0GLight@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
