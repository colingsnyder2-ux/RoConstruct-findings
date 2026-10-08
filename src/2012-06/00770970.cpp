// from server: 100% by auto
// roc 2012-06 00770970  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770970
//
// 00770970  64a100000000         mov eax, dword ptr fs:[0]
// 00770976  6aff                 push -1
// 00770978  683e3bac00           push 0xac3b3e
// 0077097d  50                   push eax
// 0077097e  b801000000           mov eax, 1
// 00770983  64892500000000       mov dword ptr fs:[0], esp
// 0077098a  84056c89e300         test byte ptr [0xe3896c], al
// 00770990  7525                 jne 0x7709b7
// 00770992  09056c89e300         or dword ptr [0xe3896c], eax
// 00770998  b9c088e300           mov ecx, 0xe388c0
// 0077099d  c744240800000000     mov dword ptr [esp + 8], 0
// 007709a5  e806640200           call 0x796db0
// 007709aa  68b0aab100           push 0xb1aab0
// 007709af  e841282100           call 0x9831f5
// 007709b4  83c404               add esp, 4
// 007709b7  8b0c24               mov ecx, dword ptr [esp]
// 007709ba  b8c088e300           mov eax, 0xe388c0
// 007709bf  64890d00000000       mov dword ptr fs:[0], ecx
// 007709c6  83c40c               add esp, 0xc
// 007709c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
