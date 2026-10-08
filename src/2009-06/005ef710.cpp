// from server: 100% by auto
// roc 2009-06 005ef710  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef710
//
// 005ef710  64a100000000         mov eax, dword ptr fs:[0]
// 005ef716  6aff                 push -1
// 005ef718  68be598600           push 0x8659be
// 005ef71d  50                   push eax
// 005ef71e  b801000000           mov eax, 1
// 005ef723  64892500000000       mov dword ptr fs:[0], esp
// 005ef72a  840504a4a400         test byte ptr [0xa4a404], al
// 005ef730  7525                 jne 0x5ef757
// 005ef732  090504a4a400         or dword ptr [0xa4a404], eax
// 005ef738  b918a3a400           mov ecx, 0xa4a318
// 005ef73d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef745  e846f80600           call 0x65ef90
// 005ef74a  68f0898900           push 0x8989f0
// 005ef74f  e8a7a31200           call 0x719afb
// 005ef754  83c404               add esp, 4
// 005ef757  8b0c24               mov ecx, dword ptr [esp]
// 005ef75a  b818a3a400           mov eax, 0xa4a318
// 005ef75f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef766  83c40c               add esp, 0xc
// 005ef769  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
