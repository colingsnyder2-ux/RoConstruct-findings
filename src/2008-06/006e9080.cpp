// roc 2008-06 006e9080  unit: CXTPAccessible  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9080
//
// 006e9080  6aff                 push -1
// 006e9082  68fe2a7e00           push 0x7e2afe
// 006e9087  64a100000000         mov eax, dword ptr fs:[0]
// 006e908d  50                   push eax
// 006e908e  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006e9093  33c4                 xor eax, esp
// 006e9095  50                   push eax
// 006e9096  8d442404             lea eax, [esp + 4]
// 006e909a  64a300000000         mov dword ptr fs:[0], eax
// 006e90a0  b801000000           mov eax, 1
// 006e90a5  8405f4e69700         test byte ptr [0x97e6f4], al
// 006e90ab  7525                 jne 0x6e90d2
// 006e90ad  0905f4e69700         or dword ptr [0x97e6f4], eax
// 006e90b3  b9bce69700           mov ecx, 0x97e6bc
// 006e90b8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006e90c0  e8dbfdffff           call 0x6e8ea0
// 006e90c5  6800188000           push 0x801800
// 006e90ca  e8e086fbff           call 0x6a17af
// 006e90cf  83c404               add esp, 4
// 006e90d2  b8bce69700           mov eax, 0x97e6bc
// 006e90d7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e90db  64890d00000000       mov dword ptr fs:[0], ecx
// 006e90e2  59                   pop ecx
// 006e90e3  83c40c               add esp, 0xc
// 006e90e6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
