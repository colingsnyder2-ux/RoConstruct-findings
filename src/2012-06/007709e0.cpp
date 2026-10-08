// from server: 100% by auto
// roc 2012-06 007709e0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007709e0
//
// 007709e0  64a100000000         mov eax, dword ptr fs:[0]
// 007709e6  6aff                 push -1
// 007709e8  685e3bac00           push 0xac3b5e
// 007709ed  50                   push eax
// 007709ee  b801000000           mov eax, 1
// 007709f3  64892500000000       mov dword ptr fs:[0], esp
// 007709fa  84051c8ae300         test byte ptr [0xe38a1c], al
// 00770a00  7525                 jne 0x770a27
// 00770a02  09051c8ae300         or dword ptr [0xe38a1c], eax
// 00770a08  b97089e300           mov ecx, 0xe38970
// 00770a0d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770a15  e876620200           call 0x796c90
// 00770a1a  68a0aab100           push 0xb1aaa0
// 00770a1f  e8d1272100           call 0x9831f5
// 00770a24  83c404               add esp, 4
// 00770a27  8b0c24               mov ecx, dword ptr [esp]
// 00770a2a  b87089e300           mov eax, 0xe38970
// 00770a2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770a36  83c40c               add esp, 0xc
// 00770a39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
