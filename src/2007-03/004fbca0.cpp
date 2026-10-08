// roc 2007-03 004fbca0  unit: seg_004f0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbca0
//
// 004fbca0  d9ee                 fldz 
// 004fbca2  8bc1                 mov eax, ecx
// 004fbca4  b901000000           mov ecx, 1
// 004fbca9  c7003cfd7900         mov dword ptr [eax], 0x79fd3c
// 004fbcaf  840dc4a08b00         test byte ptr [0x8ba0c4], cl
// 004fbcb5  751a                 jne 0x4fbcd1
// 004fbcb7  090dc4a08b00         or dword ptr [0x8ba0c4], ecx
// 004fbcbd  d915b8a08b00         fst dword ptr [0x8ba0b8]
// 004fbcc3  d9e8                 fld1 
// 004fbcc5  d91dbca08b00         fstp dword ptr [0x8ba0bc]
// 004fbccb  d915c0a08b00         fst dword ptr [0x8ba0c0]
// 004fbcd1  d905b8a08b00         fld dword ptr [0x8ba0b8]
// 004fbcd7  d95804               fstp dword ptr [eax + 4]
// 004fbcda  d905bca08b00         fld dword ptr [0x8ba0bc]
// 004fbce0  d95808               fstp dword ptr [eax + 8]
// 004fbce3  d905c0a08b00         fld dword ptr [0x8ba0c0]
// 004fbce9  d9580c               fstp dword ptr [eax + 0xc]
// 004fbcec  d95810               fstp dword ptr [eax + 0x10]
// 004fbcef  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ??0Plane@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
