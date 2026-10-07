// roc 2011-06 005d02f0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d02f0
//
// 005d02f0  64a100000000         mov eax, dword ptr fs:[0]
// 005d02f6  6aff                 push -1
// 005d02f8  68ee4f9e00           push 0x9e4fee
// 005d02fd  50                   push eax
// 005d02fe  b801000000           mov eax, 1
// 005d0303  64892500000000       mov dword ptr fs:[0], esp
// 005d030a  8405cc80cc00         test byte ptr [0xcc80cc], al
// 005d0310  7525                 jne 0x5d0337
// 005d0312  0905cc80cc00         or dword ptr [0xcc80cc], eax
// 005d0318  b92880cc00           mov ecx, 0xcc8028
// 005d031d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0325  e8a6821700           call 0x7485d0
// 005d032a  683080a300           push 0xa38030
// 005d032f  e829ae2300           call 0x80b15d
// 005d0334  83c404               add esp, 4
// 005d0337  8b0c24               mov ecx, dword ptr [esp]
// 005d033a  b82880cc00           mov eax, 0xcc8028
// 005d033f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0346  83c40c               add esp, 0xc
// 005d0349  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
