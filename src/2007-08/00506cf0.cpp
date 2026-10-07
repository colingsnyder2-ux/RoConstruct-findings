// roc 2007-08 00506cf0  unit: G3D::Ray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506cf0
//
// 00506cf0  d9ee                 fldz 
// 00506cf2  8bc1                 mov eax, ecx
// 00506cf4  b901000000           mov ecx, 1
// 00506cf9  c700fc057a00         mov dword ptr [eax], 0x7a05fc
// 00506cff  840df4fb8b00         test byte ptr [0x8bfbf4], cl
// 00506d05  751a                 jne 0x506d21
// 00506d07  090df4fb8b00         or dword ptr [0x8bfbf4], ecx
// 00506d0d  d915e8fb8b00         fst dword ptr [0x8bfbe8]
// 00506d13  d9e8                 fld1 
// 00506d15  d91decfb8b00         fstp dword ptr [0x8bfbec]
// 00506d1b  d915f0fb8b00         fst dword ptr [0x8bfbf0]
// 00506d21  d905e8fb8b00         fld dword ptr [0x8bfbe8]
// 00506d27  d95804               fstp dword ptr [eax + 4]
// 00506d2a  d905ecfb8b00         fld dword ptr [0x8bfbec]
// 00506d30  d95808               fstp dword ptr [eax + 8]
// 00506d33  d905f0fb8b00         fld dword ptr [0x8bfbf0]
// 00506d39  d9580c               fstp dword ptr [eax + 0xc]
// 00506d3c  d95810               fstp dword ptr [eax + 0x10]
// 00506d3f  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Plane@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
