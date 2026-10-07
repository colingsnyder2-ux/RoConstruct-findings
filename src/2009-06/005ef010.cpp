// roc 2009-06 005ef010  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef010
//
// 005ef010  64a100000000         mov eax, dword ptr fs:[0]
// 005ef016  6aff                 push -1
// 005ef018  68be578600           push 0x8657be
// 005ef01d  50                   push eax
// 005ef01e  b801000000           mov eax, 1
// 005ef023  64892500000000       mov dword ptr fs:[0], esp
// 005ef02a  84050495a400         test byte ptr [0xa49504], al
// 005ef030  7525                 jne 0x5ef057
// 005ef032  09050495a400         or dword ptr [0xa49504], eax
// 005ef038  b91894a400           mov ecx, 0xa49418
// 005ef03d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef045  e8666b0b00           call 0x6a5bb0
// 005ef04a  68f08a8900           push 0x898af0
// 005ef04f  e8a7aa1200           call 0x719afb
// 005ef054  83c404               add esp, 4
// 005ef057  8b0c24               mov ecx, dword ptr [esp]
// 005ef05a  b81894a400           mov eax, 0xa49418
// 005ef05f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef066  83c40c               add esp, 0xc
// 005ef069  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
