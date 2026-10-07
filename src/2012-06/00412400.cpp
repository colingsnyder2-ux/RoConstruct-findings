// roc 2012-06 00412400  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00412400
//
// 00412400  64a100000000         mov eax, dword ptr fs:[0]
// 00412406  6aff                 push -1
// 00412408  687ea9a900           push 0xa9a97e
// 0041240d  50                   push eax
// 0041240e  b801000000           mov eax, 1
// 00412413  64892500000000       mov dword ptr fs:[0], esp
// 0041241a  8405bc67e100         test byte ptr [0xe167bc], al
// 00412420  7525                 jne 0x412447
// 00412422  0905bc67e100         or dword ptr [0xe167bc], eax
// 00412428  b9d865e100           mov ecx, 0xe165d8
// 0041242d  c744240800000000     mov dword ptr [esp + 8], 0
// 00412435  e8b6852b00           call 0x6ca9f0
// 0041243a  685016b100           push 0xb11650
// 0041243f  e8b10d5700           call 0x9831f5
// 00412444  83c404               add esp, 4
// 00412447  8b0c24               mov ecx, dword ptr [esp]
// 0041244a  b8d865e100           mov eax, 0xe165d8
// 0041244f  64890d00000000       mov dword ptr fs:[0], ecx
// 00412456  83c40c               add esp, 0xc
// 00412459  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
