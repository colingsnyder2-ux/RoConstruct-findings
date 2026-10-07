// roc 2010-06 0044ace0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ace0
//
// 0044ace0  64a100000000         mov eax, dword ptr fs:[0]
// 0044ace6  6aff                 push -1
// 0044ace8  68de169800           push 0x9816de
// 0044aced  50                   push eax
// 0044acee  b801000000           mov eax, 1
// 0044acf3  64892500000000       mov dword ptr fs:[0], esp
// 0044acfa  8405cc13c000         test byte ptr [0xc013cc], al
// 0044ad00  7525                 jne 0x44ad27
// 0044ad02  0905cc13c000         or dword ptr [0xc013cc], eax
// 0044ad08  b9e012c000           mov ecx, 0xc012e0
// 0044ad0d  c744240800000000     mov dword ptr [esp + 8], 0
// 0044ad15  e856f7ffff           call 0x44a470
// 0044ad1a  68c0b79d00           push 0x9db7c0
// 0044ad1f  e83fdd3500           call 0x7a8a63
// 0044ad24  83c404               add esp, 4
// 0044ad27  8b0c24               mov ecx, dword ptr [esp]
// 0044ad2a  b8e012c000           mov eax, 0xc012e0
// 0044ad2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ad36  83c40c               add esp, 0xc
// 0044ad39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
