// from server: 100% by auto
// roc 2010-06 004e37f0  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e37f0
//
// 004e37f0  64a100000000         mov eax, dword ptr fs:[0]
// 004e37f6  6aff                 push -1
// 004e37f8  686ebb9800           push 0x98bb6e
// 004e37fd  50                   push eax
// 004e37fe  b801000000           mov eax, 1
// 004e3803  64892500000000       mov dword ptr fs:[0], esp
// 004e380a  8405e865c000         test byte ptr [0xc065e8], al
// 004e3810  7525                 jne 0x4e3837
// 004e3812  0905e865c000         or dword ptr [0xc065e8], eax
// 004e3818  b9d065c000           mov ecx, 0xc065d0
// 004e381d  c744240800000000     mov dword ptr [esp + 8], 0
// 004e3825  e8c6550e00           call 0x5c8df0
// 004e382a  6880d59d00           push 0x9dd580
// 004e382f  e82f522c00           call 0x7a8a63
// 004e3834  83c404               add esp, 4
// 004e3837  8b0c24               mov ecx, dword ptr [esp]
// 004e383a  b8d065c000           mov eax, 0xc065d0
// 004e383f  64890d00000000       mov dword ptr fs:[0], ecx
// 004e3846  83c40c               add esp, 0xc
// 004e3849  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
