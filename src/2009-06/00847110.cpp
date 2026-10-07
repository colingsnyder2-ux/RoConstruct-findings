// roc 2009-06 00847110  unit: G3D::Sky  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847110
//
// 00847110  d9ee                 fldz 
// 00847112  56                   push esi
// 00847113  8bf1                 mov esi, ecx
// 00847115  d9563c               fst dword ptr [esi + 0x3c]
// 00847118  d95640               fst dword ptr [esi + 0x40]
// 0084711b  8d8e88000000         lea ecx, [esi + 0x88]
// 00847121  d95644               fst dword ptr [esi + 0x44]
// 00847124  d95650               fst dword ptr [esi + 0x50]
// 00847127  d95654               fst dword ptr [esi + 0x54]
// 0084712a  d95658               fst dword ptr [esi + 0x58]
// 0084712d  d9565c               fst dword ptr [esi + 0x5c]
// 00847130  d95660               fst dword ptr [esi + 0x60]
// 00847133  d95664               fst dword ptr [esi + 0x64]
// 00847136  d95668               fst dword ptr [esi + 0x68]
// 00847139  d9566c               fst dword ptr [esi + 0x6c]
// 0084713c  d95670               fst dword ptr [esi + 0x70]
// 0084713f  d95674               fst dword ptr [esi + 0x74]
// 00847142  d95678               fst dword ptr [esi + 0x78]
// 00847145  d95e7c               fstp dword ptr [esi + 0x7c]
// 00847148  e86387c5ff           call 0x49f8b0
// 0084714d  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00847153  e85887c5ff           call 0x49f8b0
// 00847158  d9ee                 fldz 
// 0084715a  d996e8000000         fst dword ptr [esi + 0xe8]
// 00847160  83ec08               sub esp, 8
// 00847163  d996ec000000         fst dword ptr [esi + 0xec]
// 00847169  8bce                 mov ecx, esi
// 0084716b  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 00847171  d905f84a9200         fld dword ptr [0x924af8]
// 00847177  c6464c01             mov byte ptr [esi + 0x4c], 1
// 0084717b  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 00847181  d9ee                 fldz 
// 00847183  dd1c24               fstp qword ptr [esp]
// 00847186  e8d5f0ffff           call 0x846260
// 0084718b  8bc6                 mov eax, esi
// 0084718d  5e                   pop esi
// 0084718e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\LightingParameters.cpp (function ??0LightingParameters@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/LightingParameters.cpp
