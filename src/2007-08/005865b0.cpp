// from server: 100% by auto
// roc 2007-08 005865b0  unit: RBX::VHat::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005865b0
//
// 005865b0  64a100000000         mov eax, dword ptr fs:[0]
// 005865b6  6aff                 push -1
// 005865b8  68de5e7500           push 0x755ede
// 005865bd  50                   push eax
// 005865be  b801000000           mov eax, 1
// 005865c3  64892500000000       mov dword ptr fs:[0], esp
// 005865ca  840510338c00         test byte ptr [0x8c3310], al
// 005865d0  7525                 jne 0x5865f7
// 005865d2  090510338c00         or dword ptr [0x8c3310], eax
// 005865d8  b9c0328c00           mov ecx, 0x8c32c0
// 005865dd  c744240800000000     mov dword ptr [esp + 8], 0
// 005865e5  e8c6e9ffff           call 0x584fb0
// 005865ea  6830a67700           push 0x77a630
// 005865ef  e82fa70a00           call 0x630d23
// 005865f4  83c404               add esp, 4
// 005865f7  8b0c24               mov ecx, dword ptr [esp]
// 005865fa  b8c0328c00           mov eax, 0x8c32c0
// 005865ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00586606  83c40c               add esp, 0xc
// 00586609  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
