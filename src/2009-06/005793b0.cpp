// from server: 100% by auto
// roc 2009-06 005793b0  unit: G3D::LineSegment  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005793b0
//
// 005793b0  d9ee                 fldz 
// 005793b2  56                   push esi
// 005793b3  8bf1                 mov esi, ecx
// 005793b5  d95610               fst dword ptr [esi + 0x10]
// 005793b8  d95614               fst dword ptr [esi + 0x14]
// 005793bb  d95618               fst dword ptr [esi + 0x18]
// 005793be  d916                 fst dword ptr [esi]
// 005793c0  d95604               fst dword ptr [esi + 4]
// 005793c3  d95608               fst dword ptr [esi + 8]
// 005793c6  d95e0c               fstp dword ptr [esi + 0xc]
// 005793c9  e8b2d1ffff           call 0x576580
// 005793ce  d900                 fld dword ptr [eax]
// 005793d0  d95e40               fstp dword ptr [esi + 0x40]
// 005793d3  d94004               fld dword ptr [eax + 4]
// 005793d6  d95e44               fstp dword ptr [esi + 0x44]
// 005793d9  d94008               fld dword ptr [eax + 8]
// 005793dc  d95e48               fstp dword ptr [esi + 0x48]
// 005793df  b001                 mov al, 1
// 005793e1  d9ee                 fldz 
// 005793e3  d95610               fst dword ptr [esi + 0x10]
// 005793e6  d95e14               fstp dword ptr [esi + 0x14]
// 005793e9  d90594758b00         fld dword ptr [0x8b7594]
// 005793ef  d95e18               fstp dword ptr [esi + 0x18]
// 005793f2  dd0560ba8c00         fld qword ptr [0x8cba60]
// 005793f8  dd5e20               fstp qword ptr [esi + 0x20]
// 005793fb  88464d               mov byte ptr [esi + 0x4d], al
// 005793fe  d9e8                 fld1 
// 00579400  88464e               mov byte ptr [esi + 0x4e], al
// 00579403  c6464c00             mov byte ptr [esi + 0x4c], 0
// 00579407  dd5e28               fstp qword ptr [esi + 0x28]
// 0057940a  8bc6                 mov eax, esi
// 0057940c  d9ee                 fldz 
// 0057940e  dd5630               fst qword ptr [esi + 0x30]
// 00579411  dd5e38               fstp qword ptr [esi + 0x38]
// 00579414  5e                   pop esi
// 00579415  c3                   ret 
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
