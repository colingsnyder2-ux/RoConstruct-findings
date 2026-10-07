// roc 2008-06 006dfd40  unit: CXTPColorManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dfd40
//
// 006dfd40  6aff                 push -1
// 006dfd42  689e237e00           push 0x7e239e
// 006dfd47  64a100000000         mov eax, dword ptr fs:[0]
// 006dfd4d  50                   push eax
// 006dfd4e  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006dfd53  33c4                 xor eax, esp
// 006dfd55  50                   push eax
// 006dfd56  8d442404             lea eax, [esp + 4]
// 006dfd5a  64a300000000         mov dword ptr fs:[0], eax
// 006dfd60  b801000000           mov eax, 1
// 006dfd65  840514e69700         test byte ptr [0x97e614], al
// 006dfd6b  7525                 jne 0x6dfd92
// 006dfd6d  090514e69700         or dword ptr [0x97e614], eax
// 006dfd73  b9a8e19700           mov ecx, 0x97e1a8
// 006dfd78  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006dfd80  e84bf5ffff           call 0x6df2d0
// 006dfd85  68f0178000           push 0x8017f0
// 006dfd8a  e8201afcff           call 0x6a17af
// 006dfd8f  83c404               add esp, 4
// 006dfd92  b8a8e19700           mov eax, 0x97e1a8
// 006dfd97  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006dfd9b  64890d00000000       mov dword ptr fs:[0], ecx
// 006dfda2  59                   pop ecx
// 006dfda3  83c40c               add esp, 0xc
// 006dfda6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
