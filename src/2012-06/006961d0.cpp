// from server: 100% by auto
// roc 2012-06 006961d0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006961d0
//
// 006961d0  64a100000000         mov eax, dword ptr fs:[0]
// 006961d6  6aff                 push -1
// 006961d8  68ae6cab00           push 0xab6cae
// 006961dd  50                   push eax
// 006961de  b801000000           mov eax, 1
// 006961e3  64892500000000       mov dword ptr fs:[0], esp
// 006961ea  840534c9e200         test byte ptr [0xe2c934], al
// 006961f0  7525                 jne 0x696217
// 006961f2  090534c9e200         or dword ptr [0xe2c934], eax
// 006961f8  b988c8e200           mov ecx, 0xe2c888
// 006961fd  c744240800000000     mov dword ptr [esp + 8], 0
// 00696205  e836faffff           call 0x695c40
// 0069620a  68805fb100           push 0xb15f80
// 0069620f  e8e1cf2e00           call 0x9831f5
// 00696214  83c404               add esp, 4
// 00696217  8b0c24               mov ecx, dword ptr [esp]
// 0069621a  b888c8e200           mov eax, 0xe2c888
// 0069621f  64890d00000000       mov dword ptr fs:[0], ecx
// 00696226  83c40c               add esp, 0xc
// 00696229  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
