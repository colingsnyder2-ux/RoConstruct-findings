// roc 2011-06 00590cb0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00590cb0
//
// 00590cb0  64a100000000         mov eax, dword ptr fs:[0]
// 00590cb6  6aff                 push -1
// 00590cb8  686e059e00           push 0x9e056e
// 00590cbd  50                   push eax
// 00590cbe  b801000000           mov eax, 1
// 00590cc3  64892500000000       mov dword ptr fs:[0], esp
// 00590cca  84054caecb00         test byte ptr [0xcbae4c], al
// 00590cd0  7525                 jne 0x590cf7
// 00590cd2  09054caecb00         or dword ptr [0xcbae4c], eax
// 00590cd8  b9a8adcb00           mov ecx, 0xcbada8
// 00590cdd  c744240800000000     mov dword ptr [esp + 8], 0
// 00590ce5  e8c6f1ffff           call 0x58feb0
// 00590cea  68c04ca300           push 0xa34cc0
// 00590cef  e869a42700           call 0x80b15d
// 00590cf4  83c404               add esp, 4
// 00590cf7  8b0c24               mov ecx, dword ptr [esp]
// 00590cfa  b8a8adcb00           mov eax, 0xcbada8
// 00590cff  64890d00000000       mov dword ptr fs:[0], ecx
// 00590d06  83c40c               add esp, 0xc
// 00590d09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
