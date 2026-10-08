// from server: 100% by auto
// roc 2012-06 0069d5c0  unit: RBX::FriendService::W4FriendEventType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069d5c0
//
// 0069d5c0  64a100000000         mov eax, dword ptr fs:[0]
// 0069d5c6  6aff                 push -1
// 0069d5c8  68be71ab00           push 0xab71be
// 0069d5cd  50                   push eax
// 0069d5ce  b801000000           mov eax, 1
// 0069d5d3  64892500000000       mov dword ptr fs:[0], esp
// 0069d5da  8405acd2e200         test byte ptr [0xe2d2ac], al
// 0069d5e0  7525                 jne 0x69d607
// 0069d5e2  0905acd2e200         or dword ptr [0xe2d2ac], eax
// 0069d5e8  b900d2e200           mov ecx, 0xe2d200
// 0069d5ed  c744240800000000     mov dword ptr [esp + 8], 0
// 0069d5f5  e8a6f9ffff           call 0x69cfa0
// 0069d5fa  689061b100           push 0xb16190
// 0069d5ff  e8f15b2e00           call 0x9831f5
// 0069d604  83c404               add esp, 4
// 0069d607  8b0c24               mov ecx, dword ptr [esp]
// 0069d60a  b800d2e200           mov eax, 0xe2d200
// 0069d60f  64890d00000000       mov dword ptr fs:[0], ecx
// 0069d616  83c40c               add esp, 0xc
// 0069d619  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
