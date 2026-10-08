// from server: 100% by auto
// roc 2010-06 0044ac70  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ac70
//
// 0044ac70  64a100000000         mov eax, dword ptr fs:[0]
// 0044ac76  6aff                 push -1
// 0044ac78  68be169800           push 0x9816be
// 0044ac7d  50                   push eax
// 0044ac7e  b801000000           mov eax, 1
// 0044ac83  64892500000000       mov dword ptr fs:[0], esp
// 0044ac8a  8405dc12c000         test byte ptr [0xc012dc], al
// 0044ac90  7525                 jne 0x44acb7
// 0044ac92  0905dc12c000         or dword ptr [0xc012dc], eax
// 0044ac98  b9f011c000           mov ecx, 0xc011f0
// 0044ac9d  c744240800000000     mov dword ptr [esp + 8], 0
// 0044aca5  e836f6ffff           call 0x44a2e0
// 0044acaa  68d0b79d00           push 0x9db7d0
// 0044acaf  e8afdd3500           call 0x7a8a63
// 0044acb4  83c404               add esp, 4
// 0044acb7  8b0c24               mov ecx, dword ptr [esp]
// 0044acba  b8f011c000           mov eax, 0xc011f0
// 0044acbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0044acc6  83c40c               add esp, 0xc
// 0044acc9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
