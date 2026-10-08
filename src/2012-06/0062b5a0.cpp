// from server: 100% by auto
// roc 2012-06 0062b5a0  unit: G3D::MemoryManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062b5a0
//
// 0062b5a0  64a100000000         mov eax, dword ptr fs:[0]
// 0062b5a6  6aff                 push -1
// 0062b5a8  683e46ab00           push 0xab463e
// 0062b5ad  50                   push eax
// 0062b5ae  b801000000           mov eax, 1
// 0062b5b3  64892500000000       mov dword ptr fs:[0], esp
// 0062b5ba  84054085e200         test byte ptr [0xe28540], al
// 0062b5c0  7525                 jne 0x62b5e7
// 0062b5c2  09054085e200         or dword ptr [0xe28540], eax
// 0062b5c8  b97084e200           mov ecx, 0xe28470
// 0062b5cd  c744240800000000     mov dword ptr [esp + 8], 0
// 0062b5d5  e806fdffff           call 0x62b2e0
// 0062b5da  68e04bb100           push 0xb14be0
// 0062b5df  e8117c3500           call 0x9831f5
// 0062b5e4  83c404               add esp, 4
// 0062b5e7  8b0c24               mov ecx, dword ptr [esp]
// 0062b5ea  b87084e200           mov eax, 0xe28470
// 0062b5ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b5f6  83c40c               add esp, 0xc
// 0062b5f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
