// from server: 100% by auto
// roc 2008-06 00514390  unit: G3D::GCamera  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514390
//
// 00514390  d9ee                 fldz 
// 00514392  56                   push esi
// 00514393  8bf1                 mov esi, ecx
// 00514395  d95610               fst dword ptr [esi + 0x10]
// 00514398  d95614               fst dword ptr [esi + 0x14]
// 0051439b  d95618               fst dword ptr [esi + 0x18]
// 0051439e  d916                 fst dword ptr [esi]
// 005143a0  d95604               fst dword ptr [esi + 4]
// 005143a3  d95608               fst dword ptr [esi + 8]
// 005143a6  d95e0c               fstp dword ptr [esi + 0xc]
// 005143a9  e8b2060000           call 0x514a60
// 005143ae  d900                 fld dword ptr [eax]
// 005143b0  d95e40               fstp dword ptr [esi + 0x40]
// 005143b3  d94004               fld dword ptr [eax + 4]
// 005143b6  d95e44               fstp dword ptr [esi + 0x44]
// 005143b9  d94008               fld dword ptr [eax + 8]
// 005143bc  d95e48               fstp dword ptr [esi + 0x48]
// 005143bf  b001                 mov al, 1
// 005143c1  d9ee                 fldz 
// 005143c3  d95610               fst dword ptr [esi + 0x10]
// 005143c6  d95e14               fstp dword ptr [esi + 0x14]
// 005143c9  d905b8c38100         fld dword ptr [0x81c3b8]
// 005143cf  d95e18               fstp dword ptr [esi + 0x18]
// 005143d2  dd0598888200         fld qword ptr [0x828898]
// 005143d8  dd5e20               fstp qword ptr [esi + 0x20]
// 005143db  88464d               mov byte ptr [esi + 0x4d], al
// 005143de  d9e8                 fld1 
// 005143e0  88464e               mov byte ptr [esi + 0x4e], al
// 005143e3  c6464c00             mov byte ptr [esi + 0x4c], 0
// 005143e7  dd5e28               fstp qword ptr [esi + 0x28]
// 005143ea  8bc6                 mov eax, esi
// 005143ec  d9ee                 fldz 
// 005143ee  dd5630               fst qword ptr [esi + 0x30]
// 005143f1  dd5e38               fstp qword ptr [esi + 0x38]
// 005143f4  5e                   pop esi
// 005143f5  c3                   ret 
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
