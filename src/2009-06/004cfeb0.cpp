// roc 2009-06 004cfeb0  unit: W4PacketReliability::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cfeb0
//
// 004cfeb0  64a100000000         mov eax, dword ptr fs:[0]
// 004cfeb6  6aff                 push -1
// 004cfeb8  687eac8500           push 0x85ac7e
// 004cfebd  50                   push eax
// 004cfebe  b801000000           mov eax, 1
// 004cfec3  64892500000000       mov dword ptr fs:[0], esp
// 004cfeca  84052ce9a300         test byte ptr [0xa3e92c], al
// 004cfed0  7525                 jne 0x4cfef7
// 004cfed2  09052ce9a300         or dword ptr [0xa3e92c], eax
// 004cfed8  b940e8a300           mov ecx, 0xa3e840
// 004cfedd  c744240800000000     mov dword ptr [esp + 8], 0
// 004cfee5  e896570000           call 0x4d5680
// 004cfeea  68b0598900           push 0x8959b0
// 004cfeef  e8079c2400           call 0x719afb
// 004cfef4  83c404               add esp, 4
// 004cfef7  8b0c24               mov ecx, dword ptr [esp]
// 004cfefa  b840e8a300           mov eax, 0xa3e840
// 004cfeff  64890d00000000       mov dword ptr fs:[0], ecx
// 004cff06  83c40c               add esp, 0xc
// 004cff09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
