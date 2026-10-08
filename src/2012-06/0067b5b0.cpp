// from server: 100% by auto
// roc 2012-06 0067b5b0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067b5b0
//
// 0067b5b0  64a100000000         mov eax, dword ptr fs:[0]
// 0067b5b6  6aff                 push -1
// 0067b5b8  68de5dab00           push 0xab5dde
// 0067b5bd  50                   push eax
// 0067b5be  b801000000           mov eax, 1
// 0067b5c3  64892500000000       mov dword ptr fs:[0], esp
// 0067b5ca  84055c8de200         test byte ptr [0xe28d5c], al
// 0067b5d0  7525                 jne 0x67b5f7
// 0067b5d2  09055c8de200         or dword ptr [0xe28d5c], eax
// 0067b5d8  b9b08ce200           mov ecx, 0xe28cb0
// 0067b5dd  c744240800000000     mov dword ptr [esp + 8], 0
// 0067b5e5  e8a6d50c00           call 0x748b90
// 0067b5ea  68f055b100           push 0xb155f0
// 0067b5ef  e8017c3000           call 0x9831f5
// 0067b5f4  83c404               add esp, 4
// 0067b5f7  8b0c24               mov ecx, dword ptr [esp]
// 0067b5fa  b8b08ce200           mov eax, 0xe28cb0
// 0067b5ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0067b606  83c40c               add esp, 0xc
// 0067b609  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
