// roc 2008-06 005ed630  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed630
//
// 005ed630  64a100000000         mov eax, dword ptr fs:[0]
// 005ed636  6aff                 push -1
// 005ed638  68ee707d00           push 0x7d70ee
// 005ed63d  50                   push eax
// 005ed63e  b801000000           mov eax, 1
// 005ed643  64892500000000       mov dword ptr fs:[0], esp
// 005ed64a  840518b19700         test byte ptr [0x97b118], al
// 005ed650  7525                 jne 0x5ed677
// 005ed652  090518b19700         or dword ptr [0x97b118], eax
// 005ed658  b930b09700           mov ecx, 0x97b030
// 005ed65d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ed665  e8067a0200           call 0x615070
// 005ed66a  68f0fe7f00           push 0x7ffef0
// 005ed66f  e83b410b00           call 0x6a17af
// 005ed674  83c404               add esp, 4
// 005ed677  8b0c24               mov ecx, dword ptr [esp]
// 005ed67a  b830b09700           mov eax, 0x97b030
// 005ed67f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed686  83c40c               add esp, 0xc
// 005ed689  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
