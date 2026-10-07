// roc 2008-06 007b6860  unit: G3D::Sky  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b6860
//
// 007b6860  d9ee                 fldz 
// 007b6862  56                   push esi
// 007b6863  8bf1                 mov esi, ecx
// 007b6865  d9563c               fst dword ptr [esi + 0x3c]
// 007b6868  d95640               fst dword ptr [esi + 0x40]
// 007b686b  8d8e88000000         lea ecx, [esi + 0x88]
// 007b6871  d95644               fst dword ptr [esi + 0x44]
// 007b6874  d95650               fst dword ptr [esi + 0x50]
// 007b6877  d95654               fst dword ptr [esi + 0x54]
// 007b687a  d95658               fst dword ptr [esi + 0x58]
// 007b687d  d9565c               fst dword ptr [esi + 0x5c]
// 007b6880  d95660               fst dword ptr [esi + 0x60]
// 007b6883  d95664               fst dword ptr [esi + 0x64]
// 007b6886  d95668               fst dword ptr [esi + 0x68]
// 007b6889  d9566c               fst dword ptr [esi + 0x6c]
// 007b688c  d95670               fst dword ptr [esi + 0x70]
// 007b688f  d95674               fst dword ptr [esi + 0x74]
// 007b6892  d95678               fst dword ptr [esi + 0x78]
// 007b6895  d95e7c               fstp dword ptr [esi + 0x7c]
// 007b6898  e8331accff           call 0x4782d0
// 007b689d  8d8eb8000000         lea ecx, [esi + 0xb8]
// 007b68a3  e8281accff           call 0x4782d0
// 007b68a8  d9ee                 fldz 
// 007b68aa  d996e8000000         fst dword ptr [esi + 0xe8]
// 007b68b0  83ec08               sub esp, 8
// 007b68b3  d996ec000000         fst dword ptr [esi + 0xec]
// 007b68b9  8bce                 mov ecx, esi
// 007b68bb  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 007b68c1  d905a05b8700         fld dword ptr [0x875ba0]
// 007b68c7  c6464c01             mov byte ptr [esi + 0x4c], 1
// 007b68cb  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 007b68d1  d9ee                 fldz 
// 007b68d3  dd1c24               fstp qword ptr [esp]
// 007b68d6  e8d5f0ffff           call 0x7b59b0
// 007b68db  8bc6                 mov eax, esi
// 007b68dd  5e                   pop esi
// 007b68de  c3                   ret 
// library g3d-6.09/GLG3Dcpp\LightingParameters.cpp (function ??0LightingParameters@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/LightingParameters.cpp
