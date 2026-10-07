// roc 2010-06 00529970  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00529970
//
// 00529970  64a100000000         mov eax, dword ptr fs:[0]
// 00529976  6aff                 push -1
// 00529978  688ee79800           push 0x98e78e
// 0052997d  50                   push eax
// 0052997e  b801000000           mov eax, 1
// 00529983  64892500000000       mov dword ptr fs:[0], esp
// 0052998a  8405948bc000         test byte ptr [0xc08b94], al
// 00529990  7525                 jne 0x5299b7
// 00529992  0905948bc000         or dword ptr [0xc08b94], eax
// 00529998  b9308bc000           mov ecx, 0xc08b30
// 0052999d  c744240800000000     mov dword ptr [esp + 8], 0
// 005299a5  e866fcffff           call 0x529610
// 005299aa  6800de9d00           push 0x9dde00
// 005299af  e8aff02700           call 0x7a8a63
// 005299b4  83c404               add esp, 4
// 005299b7  8b0c24               mov ecx, dword ptr [esp]
// 005299ba  b8308bc000           mov eax, 0xc08b30
// 005299bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005299c6  83c40c               add esp, 0xc
// 005299c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
