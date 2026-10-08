// from server: 100% by auto
// roc 2008-06 005ed5c0  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed5c0
//
// 005ed5c0  64a100000000         mov eax, dword ptr fs:[0]
// 005ed5c6  6aff                 push -1
// 005ed5c8  68ce707d00           push 0x7d70ce
// 005ed5cd  50                   push eax
// 005ed5ce  b801000000           mov eax, 1
// 005ed5d3  64892500000000       mov dword ptr fs:[0], esp
// 005ed5da  840528b09700         test byte ptr [0x97b028], al
// 005ed5e0  7525                 jne 0x5ed607
// 005ed5e2  090528b09700         or dword ptr [0x97b028], eax
// 005ed5e8  b940af9700           mov ecx, 0x97af40
// 005ed5ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005ed5f5  e856010600           call 0x64d750
// 005ed5fa  6800ff7f00           push 0x7fff00
// 005ed5ff  e8ab410b00           call 0x6a17af
// 005ed604  83c404               add esp, 4
// 005ed607  8b0c24               mov ecx, dword ptr [esp]
// 005ed60a  b840af9700           mov eax, 0x97af40
// 005ed60f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed616  83c40c               add esp, 0xc
// 005ed619  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
