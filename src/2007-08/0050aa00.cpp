// from server: 100% by auto
// roc 2007-08 0050aa00  unit: G3D::GCamera  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050aa00
//
// 0050aa00  d9ee                 fldz 
// 0050aa02  56                   push esi
// 0050aa03  8bf1                 mov esi, ecx
// 0050aa05  d95610               fst dword ptr [esi + 0x10]
// 0050aa08  d95614               fst dword ptr [esi + 0x14]
// 0050aa0b  d95618               fst dword ptr [esi + 0x18]
// 0050aa0e  d916                 fst dword ptr [esi]
// 0050aa10  d95604               fst dword ptr [esi + 4]
// 0050aa13  d95608               fst dword ptr [esi + 8]
// 0050aa16  d95e0c               fstp dword ptr [esi + 0xc]
// 0050aa19  e8e2070000           call 0x50b200
// 0050aa1e  d900                 fld dword ptr [eax]
// 0050aa20  d95e40               fstp dword ptr [esi + 0x40]
// 0050aa23  d94004               fld dword ptr [eax + 4]
// 0050aa26  d95e44               fstp dword ptr [esi + 0x44]
// 0050aa29  d94008               fld dword ptr [eax + 8]
// 0050aa2c  d95e48               fstp dword ptr [esi + 0x48]
// 0050aa2f  b001                 mov al, 1
// 0050aa31  d9ee                 fldz 
// 0050aa33  d95610               fst dword ptr [esi + 0x10]
// 0050aa36  d95e14               fstp dword ptr [esi + 0x14]
// 0050aa39  d9056c647900         fld dword ptr [0x79646c]
// 0050aa3f  d95e18               fstp dword ptr [esi + 0x18]
// 0050aa42  dd05e8057a00         fld qword ptr [0x7a05e8]
// 0050aa48  dd5e20               fstp qword ptr [esi + 0x20]
// 0050aa4b  88464d               mov byte ptr [esi + 0x4d], al
// 0050aa4e  d9e8                 fld1 
// 0050aa50  88464e               mov byte ptr [esi + 0x4e], al
// 0050aa53  c6464c00             mov byte ptr [esi + 0x4c], 0
// 0050aa57  dd5e28               fstp qword ptr [esi + 0x28]
// 0050aa5a  8bc6                 mov eax, esi
// 0050aa5c  d9ee                 fldz 
// 0050aa5e  dd5630               fst qword ptr [esi + 0x30]
// 0050aa61  dd5e38               fstp qword ptr [esi + 0x38]
// 0050aa64  5e                   pop esi
// 0050aa65  c3                   ret 
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
