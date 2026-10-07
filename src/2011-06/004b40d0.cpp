// roc 2011-06 004b40d0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b40d0
//
// 004b40d0  64a100000000         mov eax, dword ptr fs:[0]
// 004b40d6  6aff                 push -1
// 004b40d8  687e869d00           push 0x9d867e
// 004b40dd  50                   push eax
// 004b40de  b801000000           mov eax, 1
// 004b40e3  64892500000000       mov dword ptr fs:[0], esp
// 004b40ea  8405ac58cb00         test byte ptr [0xcb58ac], al
// 004b40f0  7525                 jne 0x4b4117
// 004b40f2  0905ac58cb00         or dword ptr [0xcb58ac], eax
// 004b40f8  b90858cb00           mov ecx, 0xcb5808
// 004b40fd  c744240800000000     mov dword ptr [esp + 8], 0
// 004b4105  e8d6e6ffff           call 0x4b27e0
// 004b410a  68b024a300           push 0xa324b0
// 004b410f  e849703500           call 0x80b15d
// 004b4114  83c404               add esp, 4
// 004b4117  8b0c24               mov ecx, dword ptr [esp]
// 004b411a  b80858cb00           mov eax, 0xcb5808
// 004b411f  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4126  83c40c               add esp, 0xc
// 004b4129  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
