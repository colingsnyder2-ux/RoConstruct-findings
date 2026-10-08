// roc 2007-03 00500140  unit: seg_00500000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500140
//
// 00500140  d9ee                 fldz 
// 00500142  56                   push esi
// 00500143  8bf1                 mov esi, ecx
// 00500145  d95610               fst dword ptr [esi + 0x10]
// 00500148  d95614               fst dword ptr [esi + 0x14]
// 0050014b  d95618               fst dword ptr [esi + 0x18]
// 0050014e  d916                 fst dword ptr [esi]
// 00500150  d95604               fst dword ptr [esi + 4]
// 00500153  d95608               fst dword ptr [esi + 8]
// 00500156  d95e0c               fstp dword ptr [esi + 0xc]
// 00500159  e8c2070000           call 0x500920
// 0050015e  d900                 fld dword ptr [eax]
// 00500160  d95e40               fstp dword ptr [esi + 0x40]
// 00500163  d94004               fld dword ptr [eax + 4]
// 00500166  d95e44               fstp dword ptr [esi + 0x44]
// 00500169  d94008               fld dword ptr [eax + 8]
// 0050016c  d95e48               fstp dword ptr [esi + 0x48]
// 0050016f  b001                 mov al, 1
// 00500171  d9ee                 fldz 
// 00500173  d95610               fst dword ptr [esi + 0x10]
// 00500176  d95e14               fstp dword ptr [esi + 0x14]
// 00500179  d90578587900         fld dword ptr [0x795878]
// 0050017f  d95e18               fstp dword ptr [esi + 0x18]
// 00500182  dd0528fd7900         fld qword ptr [0x79fd28]
// 00500188  dd5e20               fstp qword ptr [esi + 0x20]
// 0050018b  88464d               mov byte ptr [esi + 0x4d], al
// 0050018e  d9e8                 fld1 
// 00500190  88464e               mov byte ptr [esi + 0x4e], al
// 00500193  c6464c00             mov byte ptr [esi + 0x4c], 0
// 00500197  dd5e28               fstp qword ptr [esi + 0x28]
// 0050019a  8bc6                 mov eax, esi
// 0050019c  d9ee                 fldz 
// 0050019e  dd5630               fst qword ptr [esi + 0x30]
// 005001a1  dd5e38               fstp qword ptr [esi + 0x38]
// 005001a4  5e                   pop esi
// 005001a5  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GLight.cpp (function ??0GLight@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GLight.cpp
