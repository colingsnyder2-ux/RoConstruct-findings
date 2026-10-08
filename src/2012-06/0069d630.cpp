// from server: 100% by auto
// roc 2012-06 0069d630  unit: RBX::FriendService::W4FriendEventType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069d630
//
// 0069d630  64a100000000         mov eax, dword ptr fs:[0]
// 0069d636  6aff                 push -1
// 0069d638  68de71ab00           push 0xab71de
// 0069d63d  50                   push eax
// 0069d63e  b801000000           mov eax, 1
// 0069d643  64892500000000       mov dword ptr fs:[0], esp
// 0069d64a  84055cd3e200         test byte ptr [0xe2d35c], al
// 0069d650  7525                 jne 0x69d677
// 0069d652  09055cd3e200         or dword ptr [0xe2d35c], eax
// 0069d658  b9b0d2e200           mov ecx, 0xe2d2b0
// 0069d65d  c744240800000000     mov dword ptr [esp + 8], 0
// 0069d665  e876faffff           call 0x69d0e0
// 0069d66a  688061b100           push 0xb16180
// 0069d66f  e8815b2e00           call 0x9831f5
// 0069d674  83c404               add esp, 4
// 0069d677  8b0c24               mov ecx, dword ptr [esp]
// 0069d67a  b8b0d2e200           mov eax, 0xe2d2b0
// 0069d67f  64890d00000000       mov dword ptr fs:[0], ecx
// 0069d686  83c40c               add esp, 0xc
// 0069d689  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
