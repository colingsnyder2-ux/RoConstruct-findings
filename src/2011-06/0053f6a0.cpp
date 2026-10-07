// roc 2011-06 0053f6a0  unit: G3D::MemoryManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053f6a0
//
// 0053f6a0  64a100000000         mov eax, dword ptr fs:[0]
// 0053f6a6  6aff                 push -1
// 0053f6a8  686eec9d00           push 0x9dec6e
// 0053f6ad  50                   push eax
// 0053f6ae  b801000000           mov eax, 1
// 0053f6b3  64892500000000       mov dword ptr fs:[0], esp
// 0053f6ba  840590a1cb00         test byte ptr [0xcba190], al
// 0053f6c0  7525                 jne 0x53f6e7
// 0053f6c2  090590a1cb00         or dword ptr [0xcba190], eax
// 0053f6c8  b9c0a0cb00           mov ecx, 0xcba0c0
// 0053f6cd  c744240800000000     mov dword ptr [esp + 8], 0
// 0053f6d5  e806fdffff           call 0x53f3e0
// 0053f6da  68f042a300           push 0xa342f0
// 0053f6df  e879ba2c00           call 0x80b15d
// 0053f6e4  83c404               add esp, 4
// 0053f6e7  8b0c24               mov ecx, dword ptr [esp]
// 0053f6ea  b8c0a0cb00           mov eax, 0xcba0c0
// 0053f6ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f6f6  83c40c               add esp, 0xc
// 0053f6f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
