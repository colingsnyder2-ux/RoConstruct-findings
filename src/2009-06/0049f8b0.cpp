// roc 2009-06 0049f8b0  unit: G3D::VARArea  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f8b0
//
// 0049f8b0  56                   push esi
// 0049f8b1  8bf1                 mov esi, ecx
// 0049f8b3  e8d88e0d00           call 0x578790
// 0049f8b8  50                   push eax
// 0049f8b9  8bce                 mov ecx, esi
// 0049f8bb  e8c0a6ffff           call 0x499f80
// 0049f8c0  b801000000           mov eax, 1
// 0049f8c5  8405f8c6a300         test byte ptr [0xa3c6f8], al
// 0049f8cb  751a                 jne 0x49f8e7
// 0049f8cd  d9ee                 fldz 
// 0049f8cf  0905f8c6a300         or dword ptr [0xa3c6f8], eax
// 0049f8d5  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 0049f8db  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 0049f8e1  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 0049f8e7  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 0049f8ed  8bc6                 mov eax, esi
// 0049f8ef  d95e24               fstp dword ptr [esi + 0x24]
// 0049f8f2  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 0049f8f8  d95e28               fstp dword ptr [esi + 0x28]
// 0049f8fb  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 0049f901  d95e2c               fstp dword ptr [esi + 0x2c]
// 0049f904  5e                   pop esi
// 0049f905  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
