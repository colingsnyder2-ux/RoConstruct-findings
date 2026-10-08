// from server: 100% by auto
// roc 2009-06 005731e0  unit: G3D::Ray  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005731e0
//
// 005731e0  d9ee                 fldz 
// 005731e2  8bc1                 mov eax, ecx
// 005731e4  b901000000           mov ecx, 1
// 005731e9  c7001cb78c00         mov dword ptr [eax], 0x8cb71c
// 005731ef  840df8c6a300         test byte ptr [0xa3c6f8], cl
// 005731f5  7518                 jne 0x57320f
// 005731f7  090df8c6a300         or dword ptr [0xa3c6f8], ecx
// 005731fd  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 00573203  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 00573209  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 0057320f  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 00573215  d95804               fstp dword ptr [eax + 4]
// 00573218  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 0057321e  d95808               fstp dword ptr [eax + 8]
// 00573221  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 00573227  d9580c               fstp dword ptr [eax + 0xc]
// 0057322a  840df8c6a300         test byte ptr [0xa3c6f8], cl
// 00573230  751a                 jne 0x57324c
// 00573232  090df8c6a300         or dword ptr [0xa3c6f8], ecx
// 00573238  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 0057323e  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 00573244  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 0057324a  eb02                 jmp 0x57324e
// 0057324c  ddd8                 fstp st(0)
// 0057324e  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 00573254  d95810               fstp dword ptr [eax + 0x10]
// 00573257  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 0057325d  d95814               fstp dword ptr [eax + 0x14]
// 00573260  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 00573266  d95818               fstp dword ptr [eax + 0x18]
// 00573269  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Ray@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
