// roc 2008-06 005bbe40  unit: RBX::Soundscape::SoundService  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbe40
//
// 005bbe40  64a100000000         mov eax, dword ptr fs:[0]
// 005bbe46  6aff                 push -1
// 005bbe48  688e3c7d00           push 0x7d3c8e
// 005bbe4d  50                   push eax
// 005bbe4e  b801000000           mov eax, 1
// 005bbe53  64892500000000       mov dword ptr fs:[0], esp
// 005bbe5a  840510769700         test byte ptr [0x977610], al
// 005bbe60  7525                 jne 0x5bbe87
// 005bbe62  090510769700         or dword ptr [0x977610], eax
// 005bbe68  b928759700           mov ecx, 0x977528
// 005bbe6d  c744240800000000     mov dword ptr [esp + 8], 0
// 005bbe75  e8b6f4ffff           call 0x5bb330
// 005bbe7a  68a0e47f00           push 0x7fe4a0
// 005bbe7f  e82b590e00           call 0x6a17af
// 005bbe84  83c404               add esp, 4
// 005bbe87  8b0c24               mov ecx, dword ptr [esp]
// 005bbe8a  b828759700           mov eax, 0x977528
// 005bbe8f  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbe96  83c40c               add esp, 0xc
// 005bbe99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
