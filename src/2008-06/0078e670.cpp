// roc 2008-06 0078e670  unit: CXTPOffice2007Image  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078e670
//
// 0078e670  6aff                 push -1
// 0078e672  689ec17e00           push 0x7ec19e
// 0078e677  64a100000000         mov eax, dword ptr fs:[0]
// 0078e67d  50                   push eax
// 0078e67e  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0078e683  33c4                 xor eax, esp
// 0078e685  50                   push eax
// 0078e686  8d442404             lea eax, [esp + 4]
// 0078e68a  64a300000000         mov dword ptr fs:[0], eax
// 0078e690  b801000000           mov eax, 1
// 0078e695  840520f29700         test byte ptr [0x97f220], al
// 0078e69b  7525                 jne 0x78e6c2
// 0078e69d  090520f29700         or dword ptr [0x97f220], eax
// 0078e6a3  b9d8f19700           mov ecx, 0x97f1d8
// 0078e6a8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0078e6b0  e89bf7ffff           call 0x78de50
// 0078e6b5  6810198000           push 0x801910
// 0078e6ba  e8f030f1ff           call 0x6a17af
// 0078e6bf  83c404               add esp, 4
// 0078e6c2  b8d8f19700           mov eax, 0x97f1d8
// 0078e6c7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078e6cb  64890d00000000       mov dword ptr fs:[0], ecx
// 0078e6d2  59                   pop ecx
// 0078e6d3  83c40c               add esp, 0xc
// 0078e6d6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
