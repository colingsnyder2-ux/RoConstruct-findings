// from server: 100% by auto
// roc 2010-06 005916e0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005916e0
//
// 005916e0  64a100000000         mov eax, dword ptr fs:[0]
// 005916e6  6aff                 push -1
// 005916e8  68de199900           push 0x9919de
// 005916ed  50                   push eax
// 005916ee  b801000000           mov eax, 1
// 005916f3  64892500000000       mov dword ptr fs:[0], esp
// 005916fa  84058ca4c000         test byte ptr [0xc0a48c], al
// 00591700  7525                 jne 0x591727
// 00591702  09058ca4c000         or dword ptr [0xc0a48c], eax
// 00591708  b9a0a3c000           mov ecx, 0xc0a3a0
// 0059170d  c744240800000000     mov dword ptr [esp + 8], 0
// 00591715  e876930900           call 0x62aa90
// 0059171a  6810e99d00           push 0x9de910
// 0059171f  e83f732100           call 0x7a8a63
// 00591724  83c404               add esp, 4
// 00591727  8b0c24               mov ecx, dword ptr [esp]
// 0059172a  b8a0a3c000           mov eax, 0xc0a3a0
// 0059172f  64890d00000000       mov dword ptr fs:[0], ecx
// 00591736  83c40c               add esp, 0xc
// 00591739  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
