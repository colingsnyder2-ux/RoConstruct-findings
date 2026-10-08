// from server: 100% by auto
// roc 2012-06 0052a630  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0052a630
//
// 0052a630  64a100000000         mov eax, dword ptr fs:[0]
// 0052a636  6aff                 push -1
// 0052a638  68deb5aa00           push 0xaab5de
// 0052a63d  50                   push eax
// 0052a63e  b801000000           mov eax, 1
// 0052a643  64892500000000       mov dword ptr fs:[0], esp
// 0052a64a  840574e3e100         test byte ptr [0xe1e374], al
// 0052a650  7525                 jne 0x52a677
// 0052a652  090574e3e100         or dword ptr [0xe1e374], eax
// 0052a658  b9c8e2e100           mov ecx, 0xe1e2c8
// 0052a65d  c744240800000000     mov dword ptr [esp + 8], 0
// 0052a665  e856fdffff           call 0x52a3c0
// 0052a66a  68e031b100           push 0xb131e0
// 0052a66f  e8818b4500           call 0x9831f5
// 0052a674  83c404               add esp, 4
// 0052a677  8b0c24               mov ecx, dword ptr [esp]
// 0052a67a  b8c8e2e100           mov eax, 0xe1e2c8
// 0052a67f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052a686  83c40c               add esp, 0xc
// 0052a689  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
