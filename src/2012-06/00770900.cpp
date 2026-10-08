// from server: 100% by auto
// roc 2012-06 00770900  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770900
//
// 00770900  64a100000000         mov eax, dword ptr fs:[0]
// 00770906  6aff                 push -1
// 00770908  681e3bac00           push 0xac3b1e
// 0077090d  50                   push eax
// 0077090e  b801000000           mov eax, 1
// 00770913  64892500000000       mov dword ptr fs:[0], esp
// 0077091a  8405bc88e300         test byte ptr [0xe388bc], al
// 00770920  7525                 jne 0x770947
// 00770922  0905bc88e300         or dword ptr [0xe388bc], eax
// 00770928  b91088e300           mov ecx, 0xe38810
// 0077092d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770935  e8e666fdff           call 0x747020
// 0077093a  68c0aab100           push 0xb1aac0
// 0077093f  e8b1282100           call 0x9831f5
// 00770944  83c404               add esp, 4
// 00770947  8b0c24               mov ecx, dword ptr [esp]
// 0077094a  b81088e300           mov eax, 0xe38810
// 0077094f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770956  83c40c               add esp, 0xc
// 00770959  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
