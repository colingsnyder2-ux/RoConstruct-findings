// roc 2007-08 00506d40  unit: G3D::Ray  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506d40
//
// 00506d40  d9ee                 fldz 
// 00506d42  8bc1                 mov eax, ecx
// 00506d44  b901000000           mov ecx, 1
// 00506d49  c70004067a00         mov dword ptr [eax], 0x7a0604
// 00506d4f  840d38d18b00         test byte ptr [0x8bd138], cl
// 00506d55  7518                 jne 0x506d6f
// 00506d57  090d38d18b00         or dword ptr [0x8bd138], ecx
// 00506d5d  d9152cd18b00         fst dword ptr [0x8bd12c]
// 00506d63  d91530d18b00         fst dword ptr [0x8bd130]
// 00506d69  d91534d18b00         fst dword ptr [0x8bd134]
// 00506d6f  d9052cd18b00         fld dword ptr [0x8bd12c]
// 00506d75  d95804               fstp dword ptr [eax + 4]
// 00506d78  d90530d18b00         fld dword ptr [0x8bd130]
// 00506d7e  d95808               fstp dword ptr [eax + 8]
// 00506d81  d90534d18b00         fld dword ptr [0x8bd134]
// 00506d87  d9580c               fstp dword ptr [eax + 0xc]
// 00506d8a  840d38d18b00         test byte ptr [0x8bd138], cl
// 00506d90  751a                 jne 0x506dac
// 00506d92  090d38d18b00         or dword ptr [0x8bd138], ecx
// 00506d98  d9152cd18b00         fst dword ptr [0x8bd12c]
// 00506d9e  d91530d18b00         fst dword ptr [0x8bd130]
// 00506da4  d91d34d18b00         fstp dword ptr [0x8bd134]
// 00506daa  eb02                 jmp 0x506dae
// 00506dac  ddd8                 fstp st(0)
// 00506dae  d9052cd18b00         fld dword ptr [0x8bd12c]
// 00506db4  d95810               fstp dword ptr [eax + 0x10]
// 00506db7  d90530d18b00         fld dword ptr [0x8bd130]
// 00506dbd  d95814               fstp dword ptr [eax + 0x14]
// 00506dc0  d90534d18b00         fld dword ptr [0x8bd134]
// 00506dc6  d95818               fstp dword ptr [eax + 0x18]
// 00506dc9  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Ray@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
