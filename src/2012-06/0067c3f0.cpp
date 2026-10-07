// roc 2012-06 0067c3f0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067c3f0
//
// 0067c3f0  64a100000000         mov eax, dword ptr fs:[0]
// 0067c3f6  6aff                 push -1
// 0067c3f8  687e5eab00           push 0xab5e7e
// 0067c3fd  50                   push eax
// 0067c3fe  b801000000           mov eax, 1
// 0067c403  64892500000000       mov dword ptr fs:[0], esp
// 0067c40a  84054490e200         test byte ptr [0xe29044], al
// 0067c410  7525                 jne 0x67c437
// 0067c412  09054490e200         or dword ptr [0xe29044], eax
// 0067c418  b9988fe200           mov ecx, 0xe28f98
// 0067c41d  c744240800000000     mov dword ptr [esp + 8], 0
// 0067c425  e8d6f5ffff           call 0x67ba00
// 0067c42a  68b055b100           push 0xb155b0
// 0067c42f  e8c16d3000           call 0x9831f5
// 0067c434  83c404               add esp, 4
// 0067c437  8b0c24               mov ecx, dword ptr [esp]
// 0067c43a  b8988fe200           mov eax, 0xe28f98
// 0067c43f  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c446  83c40c               add esp, 0xc
// 0067c449  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
