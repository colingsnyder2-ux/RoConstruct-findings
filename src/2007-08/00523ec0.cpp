// roc 2007-08 00523ec0  unit: G3D::LineSegment  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523ec0
//
// 00523ec0  d9ee                 fldz 
// 00523ec2  8b442404             mov eax, dword ptr [esp + 4]
// 00523ec6  83ec0c               sub esp, 0xc
// 00523ec9  56                   push esi
// 00523eca  8bf1                 mov esi, ecx
// 00523ecc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00523ed0  d95604               fst dword ptr [esi + 4]
// 00523ed3  d95608               fst dword ptr [esi + 8]
// 00523ed6  c70684447a00         mov dword ptr [esi], 0x7a4484
// 00523edc  d9560c               fst dword ptr [esi + 0xc]
// 00523edf  d95610               fst dword ptr [esi + 0x10]
// 00523ee2  d95614               fst dword ptr [esi + 0x14]
// 00523ee5  d95e18               fstp dword ptr [esi + 0x18]
// 00523ee8  d900                 fld dword ptr [eax]
// 00523eea  d95e04               fstp dword ptr [esi + 4]
// 00523eed  d94004               fld dword ptr [eax + 4]
// 00523ef0  d95e08               fstp dword ptr [esi + 8]
// 00523ef3  d94008               fld dword ptr [eax + 8]
// 00523ef6  8d442404             lea eax, [esp + 4]
// 00523efa  50                   push eax
// 00523efb  d95e0c               fstp dword ptr [esi + 0xc]
// 00523efe  e8ed3efcff           call 0x4e7df0
// 00523f03  d900                 fld dword ptr [eax]
// 00523f05  d95e10               fstp dword ptr [esi + 0x10]
// 00523f08  d94004               fld dword ptr [eax + 4]
// 00523f0b  d95e14               fstp dword ptr [esi + 0x14]
// 00523f0e  d94008               fld dword ptr [eax + 8]
// 00523f11  8bc6                 mov eax, esi
// 00523f13  d95e18               fstp dword ptr [esi + 0x18]
// 00523f16  5e                   pop esi
// 00523f17  83c40c               add esp, 0xc
// 00523f1a  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Line@G3D@@IAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
