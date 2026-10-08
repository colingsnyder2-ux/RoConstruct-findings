// from server: 100% by auto
// roc 2011-06 004d3500  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d3500
//
// 004d3500  64a100000000         mov eax, dword ptr fs:[0]
// 004d3506  6aff                 push -1
// 004d3508  68dea19d00           push 0x9da1de
// 004d350d  50                   push eax
// 004d350e  b801000000           mov eax, 1
// 004d3513  64892500000000       mov dword ptr fs:[0], esp
// 004d351a  8405fc66cb00         test byte ptr [0xcb66fc], al
// 004d3520  7525                 jne 0x4d3547
// 004d3522  0905fc66cb00         or dword ptr [0xcb66fc], eax
// 004d3528  b95866cb00           mov ecx, 0xcb6658
// 004d352d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d3535  e8e6ebffff           call 0x4d2120
// 004d353a  68d02ea300           push 0xa32ed0
// 004d353f  e8197c3300           call 0x80b15d
// 004d3544  83c404               add esp, 4
// 004d3547  8b0c24               mov ecx, dword ptr [esp]
// 004d354a  b85866cb00           mov eax, 0xcb6658
// 004d354f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3556  83c40c               add esp, 0xc
// 004d3559  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
