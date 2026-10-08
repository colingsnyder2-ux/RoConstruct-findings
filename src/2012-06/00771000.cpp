// from server: 100% by auto
// roc 2012-06 00771000  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00771000
//
// 00771000  64a100000000         mov eax, dword ptr fs:[0]
// 00771006  6aff                 push -1
// 00771008  681e3dac00           push 0xac3d1e
// 0077100d  50                   push eax
// 0077100e  b801000000           mov eax, 1
// 00771013  64892500000000       mov dword ptr fs:[0], esp
// 0077101a  8405bc93e300         test byte ptr [0xe393bc], al
// 00771020  7525                 jne 0x771047
// 00771022  0905bc93e300         or dword ptr [0xe393bc], eax
// 00771028  b91093e300           mov ecx, 0xe39310
// 0077102d  c744240800000000     mov dword ptr [esp + 8], 0
// 00771035  e8569f1000           call 0x87af90
// 0077103a  68c0a9b100           push 0xb1a9c0
// 0077103f  e8b1212100           call 0x9831f5
// 00771044  83c404               add esp, 4
// 00771047  8b0c24               mov ecx, dword ptr [esp]
// 0077104a  b81093e300           mov eax, 0xe39310
// 0077104f  64890d00000000       mov dword ptr fs:[0], ecx
// 00771056  83c40c               add esp, 0xc
// 00771059  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
