// roc 2008-06 004aa710  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa710
//
// 004aa710  64a100000000         mov eax, dword ptr fs:[0]
// 004aa716  6aff                 push -1
// 004aa718  687e807c00           push 0x7c807e
// 004aa71d  50                   push eax
// 004aa71e  b801000000           mov eax, 1
// 004aa723  64892500000000       mov dword ptr fs:[0], esp
// 004aa72a  840500129700         test byte ptr [0x971200], al
// 004aa730  7525                 jne 0x4aa757
// 004aa732  090500129700         or dword ptr [0x971200], eax
// 004aa738  b918119700           mov ecx, 0x971118
// 004aa73d  c744240800000000     mov dword ptr [esp + 8], 0
// 004aa745  e876fbffff           call 0x4aa2c0
// 004aa74a  6890bf7f00           push 0x7fbf90
// 004aa74f  e85b701f00           call 0x6a17af
// 004aa754  83c404               add esp, 4
// 004aa757  8b0c24               mov ecx, dword ptr [esp]
// 004aa75a  b818119700           mov eax, 0x971118
// 004aa75f  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa766  83c40c               add esp, 0xc
// 004aa769  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
