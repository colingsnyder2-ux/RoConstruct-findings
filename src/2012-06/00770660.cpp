// from server: 100% by auto
// roc 2012-06 00770660  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770660
//
// 00770660  64a100000000         mov eax, dword ptr fs:[0]
// 00770666  6aff                 push -1
// 00770668  685e3aac00           push 0xac3a5e
// 0077066d  50                   push eax
// 0077066e  b801000000           mov eax, 1
// 00770673  64892500000000       mov dword ptr fs:[0], esp
// 0077067a  84059c84e300         test byte ptr [0xe3849c], al
// 00770680  7525                 jne 0x7706a7
// 00770682  09059c84e300         or dword ptr [0xe3849c], eax
// 00770688  b9f083e300           mov ecx, 0xe383f0
// 0077068d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770695  e836921200           call 0x8998d0
// 0077069a  6820abb100           push 0xb1ab20
// 0077069f  e8512b2100           call 0x9831f5
// 007706a4  83c404               add esp, 4
// 007706a7  8b0c24               mov ecx, dword ptr [esp]
// 007706aa  b8f083e300           mov eax, 0xe383f0
// 007706af  64890d00000000       mov dword ptr fs:[0], ecx
// 007706b6  83c40c               add esp, 0xc
// 007706b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
