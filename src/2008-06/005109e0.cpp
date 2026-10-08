// from server: 100% by auto
// roc 2008-06 005109e0  unit: G3D::Ray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005109e0
//
// 005109e0  d9ee                 fldz 
// 005109e2  8bc1                 mov eax, ecx
// 005109e4  b901000000           mov ecx, 1
// 005109e9  c700bc828200         mov dword ptr [eax], 0x8282bc
// 005109ef  840da4289700         test byte ptr [0x9728a4], cl
// 005109f5  751a                 jne 0x510a11
// 005109f7  090da4289700         or dword ptr [0x9728a4], ecx
// 005109fd  d91598289700         fst dword ptr [0x972898]
// 00510a03  d9e8                 fld1 
// 00510a05  d91d9c289700         fstp dword ptr [0x97289c]
// 00510a0b  d915a0289700         fst dword ptr [0x9728a0]
// 00510a11  d90598289700         fld dword ptr [0x972898]
// 00510a17  d95804               fstp dword ptr [eax + 4]
// 00510a1a  d9059c289700         fld dword ptr [0x97289c]
// 00510a20  d95808               fstp dword ptr [eax + 8]
// 00510a23  d905a0289700         fld dword ptr [0x9728a0]
// 00510a29  d9580c               fstp dword ptr [eax + 0xc]
// 00510a2c  d95810               fstp dword ptr [eax + 0x10]
// 00510a2f  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Plane@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
