// roc 2012-06 0068a060  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0068a060
//
// 0068a060  64a100000000         mov eax, dword ptr fs:[0]
// 0068a066  6aff                 push -1
// 0068a068  68ce66ab00           push 0xab66ce
// 0068a06d  50                   push eax
// 0068a06e  b801000000           mov eax, 1
// 0068a073  64892500000000       mov dword ptr fs:[0], esp
// 0068a07a  84052caae200         test byte ptr [0xe2aa2c], al
// 0068a080  7525                 jne 0x68a0a7
// 0068a082  09052caae200         or dword ptr [0xe2aa2c], eax
// 0068a088  b980a9e200           mov ecx, 0xe2a980
// 0068a08d  c744240800000000     mov dword ptr [esp + 8], 0
// 0068a095  e8b6fbffff           call 0x689c50
// 0068a09a  68f05ab100           push 0xb15af0
// 0068a09f  e851912f00           call 0x9831f5
// 0068a0a4  83c404               add esp, 4
// 0068a0a7  8b0c24               mov ecx, dword ptr [esp]
// 0068a0aa  b880a9e200           mov eax, 0xe2a980
// 0068a0af  64890d00000000       mov dword ptr fs:[0], ecx
// 0068a0b6  83c40c               add esp, 0xc
// 0068a0b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
