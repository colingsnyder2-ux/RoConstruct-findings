// from server: 100% by auto
// roc 2012-06 006e0800  unit: RBX::DataModel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006e0800
//
// 006e0800  64a100000000         mov eax, dword ptr fs:[0]
// 006e0806  6aff                 push -1
// 006e0808  686eb5ab00           push 0xabb56e
// 006e080d  50                   push eax
// 006e080e  b801000000           mov eax, 1
// 006e0813  64892500000000       mov dword ptr fs:[0], esp
// 006e081a  840594fbe200         test byte ptr [0xe2fb94], al
// 006e0820  7525                 jne 0x6e0847
// 006e0822  090594fbe200         or dword ptr [0xe2fb94], eax
// 006e0828  b9e8fae200           mov ecx, 0xe2fae8
// 006e082d  c744240800000000     mov dword ptr [esp + 8], 0
// 006e0835  e896f2ffff           call 0x6dfad0
// 006e083a  68a06cb100           push 0xb16ca0
// 006e083f  e8b1292a00           call 0x9831f5
// 006e0844  83c404               add esp, 4
// 006e0847  8b0c24               mov ecx, dword ptr [esp]
// 006e084a  b8e8fae200           mov eax, 0xe2fae8
// 006e084f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e0856  83c40c               add esp, 0xc
// 006e0859  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
