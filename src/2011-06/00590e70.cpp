// from server: 100% by auto
// roc 2011-06 00590e70  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00590e70
//
// 00590e70  64a100000000         mov eax, dword ptr fs:[0]
// 00590e76  6aff                 push -1
// 00590e78  68ee059e00           push 0x9e05ee
// 00590e7d  50                   push eax
// 00590e7e  b801000000           mov eax, 1
// 00590e83  64892500000000       mov dword ptr fs:[0], esp
// 00590e8a  8405ecb0cb00         test byte ptr [0xcbb0ec], al
// 00590e90  7525                 jne 0x590eb7
// 00590e92  0905ecb0cb00         or dword ptr [0xcbb0ec], eax
// 00590e98  b948b0cb00           mov ecx, 0xcbb048
// 00590e9d  c744240800000000     mov dword ptr [esp + 8], 0
// 00590ea5  e816faffff           call 0x5908c0
// 00590eaa  68804ca300           push 0xa34c80
// 00590eaf  e8a9a22700           call 0x80b15d
// 00590eb4  83c404               add esp, 4
// 00590eb7  8b0c24               mov ecx, dword ptr [esp]
// 00590eba  b848b0cb00           mov eax, 0xcbb048
// 00590ebf  64890d00000000       mov dword ptr fs:[0], ecx
// 00590ec6  83c40c               add esp, 0xc
// 00590ec9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
