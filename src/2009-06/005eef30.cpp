// roc 2009-06 005eef30  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eef30
//
// 005eef30  64a100000000         mov eax, dword ptr fs:[0]
// 005eef36  6aff                 push -1
// 005eef38  687e578600           push 0x86577e
// 005eef3d  50                   push eax
// 005eef3e  b801000000           mov eax, 1
// 005eef43  64892500000000       mov dword ptr fs:[0], esp
// 005eef4a  84052493a400         test byte ptr [0xa49324], al
// 005eef50  7525                 jne 0x5eef77
// 005eef52  09052493a400         or dword ptr [0xa49324], eax
// 005eef58  b93892a400           mov ecx, 0xa49238
// 005eef5d  c744240800000000     mov dword ptr [esp + 8], 0
// 005eef65  e8f698ffff           call 0x5e8860
// 005eef6a  68108b8900           push 0x898b10
// 005eef6f  e887ab1200           call 0x719afb
// 005eef74  83c404               add esp, 4
// 005eef77  8b0c24               mov ecx, dword ptr [esp]
// 005eef7a  b83892a400           mov eax, 0xa49238
// 005eef7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005eef86  83c40c               add esp, 0xc
// 005eef89  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
