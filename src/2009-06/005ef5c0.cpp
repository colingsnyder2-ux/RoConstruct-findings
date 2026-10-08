// from server: 100% by auto
// roc 2009-06 005ef5c0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef5c0
//
// 005ef5c0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef5c6  6aff                 push -1
// 005ef5c8  685e598600           push 0x86595e
// 005ef5cd  50                   push eax
// 005ef5ce  b801000000           mov eax, 1
// 005ef5d3  64892500000000       mov dword ptr fs:[0], esp
// 005ef5da  840534a1a400         test byte ptr [0xa4a134], al
// 005ef5e0  7525                 jne 0x5ef607
// 005ef5e2  090534a1a400         or dword ptr [0xa4a134], eax
// 005ef5e8  b948a0a400           mov ecx, 0xa4a048
// 005ef5ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef5f5  e8b6790b00           call 0x6a6fb0
// 005ef5fa  68208a8900           push 0x898a20
// 005ef5ff  e8f7a41200           call 0x719afb
// 005ef604  83c404               add esp, 4
// 005ef607  8b0c24               mov ecx, dword ptr [esp]
// 005ef60a  b848a0a400           mov eax, 0xa4a048
// 005ef60f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef616  83c40c               add esp, 0xc
// 005ef619  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
