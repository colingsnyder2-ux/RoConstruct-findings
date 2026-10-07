// roc 2012-06 0067c460  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067c460
//
// 0067c460  64a100000000         mov eax, dword ptr fs:[0]
// 0067c466  6aff                 push -1
// 0067c468  689e5eab00           push 0xab5e9e
// 0067c46d  50                   push eax
// 0067c46e  b801000000           mov eax, 1
// 0067c473  64892500000000       mov dword ptr fs:[0], esp
// 0067c47a  8405f490e200         test byte ptr [0xe290f4], al
// 0067c480  7525                 jne 0x67c4a7
// 0067c482  0905f490e200         or dword ptr [0xe290f4], eax
// 0067c488  b94890e200           mov ecx, 0xe29048
// 0067c48d  c744240800000000     mov dword ptr [esp + 8], 0
// 0067c495  e8e6faffff           call 0x67bf80
// 0067c49a  68a055b100           push 0xb155a0
// 0067c49f  e8516d3000           call 0x9831f5
// 0067c4a4  83c404               add esp, 4
// 0067c4a7  8b0c24               mov ecx, dword ptr [esp]
// 0067c4aa  b84890e200           mov eax, 0xe29048
// 0067c4af  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c4b6  83c40c               add esp, 0xc
// 0067c4b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
