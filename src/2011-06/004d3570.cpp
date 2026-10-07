// roc 2011-06 004d3570  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d3570
//
// 004d3570  64a100000000         mov eax, dword ptr fs:[0]
// 004d3576  6aff                 push -1
// 004d3578  68fea19d00           push 0x9da1fe
// 004d357d  50                   push eax
// 004d357e  b801000000           mov eax, 1
// 004d3583  64892500000000       mov dword ptr fs:[0], esp
// 004d358a  8405a467cb00         test byte ptr [0xcb67a4], al
// 004d3590  7525                 jne 0x4d35b7
// 004d3592  0905a467cb00         or dword ptr [0xcb67a4], eax
// 004d3598  b90067cb00           mov ecx, 0xcb6700
// 004d359d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d35a5  e896ecffff           call 0x4d2240
// 004d35aa  68c02ea300           push 0xa32ec0
// 004d35af  e8a97b3300           call 0x80b15d
// 004d35b4  83c404               add esp, 4
// 004d35b7  8b0c24               mov ecx, dword ptr [esp]
// 004d35ba  b80067cb00           mov eax, 0xcb6700
// 004d35bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004d35c6  83c40c               add esp, 0xc
// 004d35c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
